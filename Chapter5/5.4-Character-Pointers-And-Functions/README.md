# Chapter 5.4 – Address Arithmetic

## Author: Thomas Sehenuk  
## Date: 5/20/25  
## Estimated Time: 10 min  
## Notes: Simple pointer math using arrays  

---

### 1. **Requirement**

Understand how to use address arithmetic in C by working with arrays and pointers.  
Goal: Learn how pointer values move and point to elements in an array using `ptr + i` and `*(ptr + i)`.

---

### 2. **Design**

We’ll:
- Create an integer array of 5 values.
- Create a pointer to the first element.
- Print values using both array indexing (`arr[i]`) and pointer arithmetic (`*(ptr + i)`).
- Use the address operator to show how memory addresses change with pointer movement.

---

### 3. **Implementation Plan**

Steps:
- **Sprint 1:** Create `main.c` and `Makefile` with basic skeleton code.
- **Sprint 2:** Initialize array and pointer: `int arr[] = {10,20,30,40,50}; int *ptr = arr;`
- **Sprint 3:** Loop through array using indexing and print values + addresses.
- **Sprint 4:** Loop through using pointer arithmetic (`*(ptr + i)`), print values + addresses.

---

### 4. **Testing**

- Make sure all elements print the same value using both access styles.
- Print memory addresses to confirm they increase by `sizeof(int)` (usually 4 bytes).
- Try with different types (`float`, `char`) to observe address steps.

---

### 5. **Deployment**

To run locally:

```bash
gcc main.c -o addrApp
./addrApp

### 6. Maintenance and Extensions
Try pointer arithmetic in reverse: from end to start.
