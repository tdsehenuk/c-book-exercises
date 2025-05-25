# 6.5 – Singly Linked List  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to implement a singly linked list with basic operations such as adding nodes, deleting nodes by value, searching, counting, reversing, and freeing the list to understand dynamic data structures and memory management.

### 2. **Design:**
- Define a `Node` struct with `int data` and `Node* next`.
- Use dynamic memory allocation (`malloc`) for new nodes.
- Implement functions:
  - `addNodeAtFront()`
  - `addNodeAtEnd()`
  - `deleteNodeByValue()`
  - `searchList()`
  - `countNodes()`
  - `reverseList()`
  - `freeList()`
- Manage the list via a pointer to the head node.
- Include error handling for memory allocation failures.

### 3. **Implementation:**
- **Sprint 1:** Define the `Node` struct and implement `addNodeAtFront()` and `printNodeList()` to build and display the list.
- **Sprint 2:** Implement `addNodeAtEnd()`, `deleteNodeByValue()`, and `searchList()` to support insertion, deletion, and search.
- **Sprint 3:** Implement utility functions: `countNodes()`, `reverseList()`, and `freeList()` for additional list management and cleanup.
- **Sprint 4:** Test all functions interactively in `main()`, add comments, and finalize code formatting.

### 4. **Testing:**
   - Test insertion at front and end with multiple nodes.
   - Verify search returns correct node pointer or NULL.
   - Test deletion from head, middle, and tail.
   - Confirm list reversal produces expected order.
   - Use memory checking tools to confirm no leaks after `freeList()`.

### 5. **Deployment:**
   - gcc .\6.5self_referential_structures.c -o .\6.5self_referential_structures.exe
   - .\6.5self_referential_structures.exe

### 6. **Maintenance:**
   - Add support for doubly linked lists.
   - Create unit tests for each function.
   - Extend to allow user-driven input for dynamic list manipulation.
   - Modularize by splitting declarations into `.h` and `.c` files.