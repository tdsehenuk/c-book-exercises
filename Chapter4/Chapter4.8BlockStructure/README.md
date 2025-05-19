# 4.8 – Block Structure
## SDLC Documentation and Process

### 1. **Requirement:**
   Demonstrate how variable scope is limited within blocks using `{}`.

### 2. **Design:**
   - Declare `int x = 10;` inside a block in `main()`.
   - Try accessing `x` outside the block to trigger a scope error.

### 3. **Implementation:**
   - **Sprint 1**: Create `4.8Block.c`.
   - **Sprint 2**: Add a scoped block with `int x = 10;` and print it.
   - **Sprint 3**: Attempt to print `x` outside the block.

### 4. **Testing:**
   - Confirm it compiles when `x` is used inside the block.
   - Confirm it fails (or is inaccessible) when used outside.

### 5. **Deployment:**
   Compile with:

   
### 6. **Maintenance:**
- Helps reinforce scope rules and prevent naming conflicts in larger programs.