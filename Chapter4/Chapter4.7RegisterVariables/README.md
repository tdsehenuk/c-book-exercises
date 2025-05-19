# 4.7 – Register Variables (Optional)
## SDLC Documentation and Process

### 1. **Requirement:**
   Understand the use of `register` keyword and how it differs (or doesn’t) from normal variables in modern C.

### 2. **Design:**
   - Create a loop with `register int i;`
   - Print the values to confirm there is no difference in output.

### 3. **Implementation:**
   - **Sprint 1**: Create `4.7Register.c`.
   - **Sprint 2**: Write a loop using `register int i` and compare with `int i`.

### 4. **Testing:**
   - Run both versions and compare output.
   - Observe any difference in behavior or performance (likely none).

### 5. **Deployment:**
   Compile:

   ### 6. **Maintenance:**
- Note that modern compilers ignore `register` — future use is discourage