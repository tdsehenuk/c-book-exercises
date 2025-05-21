# 5.7 – Pointer to Pointer (int **)
## SDLC Documentation and Process

---

### 1. **Requirement:**
As a student learning pointers, I want to understand how double pointers (`int **`) work so I can build knowledge for dynamic memory allocation and advanced pointer use.

---

### 2. **Design:**
- Declare an `int` variable `num` and assign it a value (e.g. 10).
- Create a pointer `p` that points to `num`.
- Create another pointer `pp` that points to `p`.
- Print the value of `num` using:
  - the variable itself,
  - the first pointer `*p`,
  - and the second pointer `**pp`.
- Modify the value of `num` through `**pp` and print it again to show the change.

---

### 3. **Implementation (Sprints):**
- **Sprint 1**: Create `5.7DoublePointer.c` with a basic C program skeleton.
- **Sprint 2**: Declare `int num = 10;` and `int *p = &num;`
- **Sprint 3**: Declare `int **pp = &p;`
- **Sprint 4**: Use `**pp` to print and modify `num`.

---

### 4. **Testing:**
- Check value output with:
  - `num`
  - `*p`
  - `**pp`
- Change the value using `**pp = 99` and verify all three reflect the change.
- Edge test: Set `p = NULL` and ensure `**pp` is handled safely (optional).

---

### 5. **Deployment:**
To compile and run locally:
```bash
gcc 5.7DoublePointer.c -o 5.7DoublePointer.exe
./5.7DoublePointer.exe

### 6. **Maintenance: **
- Extend this to work with dynamically allocated memory.
- Use int ** to allocate a 2D array dynamically.