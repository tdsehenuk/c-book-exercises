# Problem 6.2 – Define and Initialize Structures

## SDLC Documentation and Process

### 1. **Requirement:**
   As a user, I want to define a structure named `Book` that contains details such as title, author, publication year, and price. The program should initialize two instances of the `Book` structure and print their details.

### 2. **Design:**
   The program will:
   - Define a `Book` structure with the required fields.
   - Initialize two `Book` structures with example data.
   - Write a function that prints the details of the `Book` structure.
   - Print the details of both books in a readable format.

### 3. **Implementation:**
   - **Sprint 1:** Define the structure `Book` and initialize two instances with sample values.
   - **Sprint 2:** Create a function `printBookDetails()` to print the details of a `Book` structure.
   - **Sprint 3:** Call `printBookDetails()` for both `Book` instances in the `main()` function.
   - **Sprint 4:** Ensure that the function prints the book details correctly in the format: title, author, publication year, and price.

### 4. **Testing:**
   - Use sample books with known values, like:
     - `"The Great Gatsby"`, `"F. Scott Fitzgerald"`, `1925`, and `10.99`.
     - `"1984"`, `"George Orwell"`, `1949`, and `8.99`.
   - Verify that the printed details match the values of the initialized books.

### 5. **Deployment:**
   This is a simple program that does not require external deployment. To run it locally, compile the C program:
   - `gcc accessing_structures_members.c -o accessing_structures_members.exe`
   - Run the executable: `./accessing_structures_members.exe`

### 6. **Maintenance:**
   - Ensure that the program handles different book details correctly.
   - If needed, extend the structure to include more information like genre, ISBN, etc.
   - Update the `printBookDetails()` function to handle additional fields if the structure is expanded.
