# 6.7 – Simple Struct Usage: Point  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to define a simple `Point` structure with `x` and `y` coordinates and print its values to understand basic struct usage and passing structs to functions.

### 2. **Design:**
- Define a `Point` struct with two integer members: `x` and `y`.
- Implement a function `printPoint(Point p)` to display the coordinates in `(x, y)` format.
- In `main()`, create and initialize a `Point` variable, then call `printPoint()`.

### 3. **Implementation:**
- **Sprint 1:** Define the `Point` struct.
- **Sprint 2:** Implement `printPoint()` to print coordinates.
- **Sprint 3:** Initialize a `Point` instance in `main()` and call the print function.
- **Sprint 4:** Finalize formatting and add comments.

### 4. **Testing:**
- Confirm output matches expected `(5, 10)` format.
- Test with different point values (optional).
- Verify no compilation or runtime errors.

### 5. **Deployment:**
   - gcc .\6.typedef_usage.c -o .\6.7typedef_usage.exe
   - .\6.7typedef_usage.exe

### 6. **Maintenance:**
   - Extend `Point` to include more dimensions (e.g., `z`).
   - Add functions to perform operations on points (distance, midpoint).
   - Allow user input to dynamically set point coordinates.