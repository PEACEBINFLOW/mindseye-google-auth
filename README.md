# MindsEye Google Auth

`mindseye-google-auth` is the authentication and identity authority for the MindsEye Google Fabric.

This repository is **security**, not execution.

It issues authenticated principals and scoped tokens used by:
- `mindseye-google-gateway`
- `mindscript-google-executor`
- any Google-facing Fabric component

---

## Purpose

Google APIs require identity.
MindsEye requires **explicit authority**.

This repo provides:
- OAuth2 user flows
- Service Account flows
- Deterministic token caching
- Explicit scope enforcement
- Stable principal identity mapping

No silent permissions.
No implicit trust.

---

## What lives here

- OAuth2 and Service Account token handling
- Token cache (memory / file / pluggable)
- Principal identity model
- Scope policy enforcement
- Auth errors and failure modes

---

## What does NOT live here

- Protocol schemas (`mindseye-protocol`)
- MindScript execution
- Google API calls
- Gateway routing
- UI / Apps Script

If it performs an action, it does **not** belong here.

---

## Architectural Position

Google OAuth / IAM
│
▼
┌──────────────────────────────┐
│ mindseye-google-auth │ ← THIS REPO
│ (identity + scope authority) │
└───────────────┬──────────────┘
│
┌───────▼────────┐
│ gateway / exec │
└────────────────┘

yaml
Copy code

---

## Principal Model

All identities resolve to **explicit principals**:

- `orch:<name>`   → human operator
- `agent:<name>`  → AI agent
- `svc:<name>`    → service account

Tokens never float without a principal.

---

## Scope Policy

Scopes are:
- declared
- validated
- enforced

If a scope is not allowed, the token is rejected.
No automatic expansion.

---

## License

Apache License 2.0
