# 4.9 – Initialization
## SDLC Documentation and Process

### 1. **Requirement:**
   Understand how static and automatic variables are initialized and retain values across loops.

### 2. **Design:**
   - Declare `static int num = 5;` and `int temp = 5;`
   - Modify both in a loop and print their values before and after.

### 3. **Implementation:**
   - **Sprint 1**: Create `main.c`.
   - **Sprint 2**: Add both variables and a loop that runs 3 times.
   - **Sprint 3**: Modify and print variables within and after the loop.

### 4. **Testing:**
   - Verify `temp` resets each time.
   - Confirm `static num` retains its value.

### 5. **Deployment:**
   Compile with:

   ### 6. **Maintenance:**
- Useful for designing functions that need persistent state.
- Can evolve into patterns like static counters, caches, etc.