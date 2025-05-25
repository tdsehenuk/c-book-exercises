# 6.1 – Structure Definitions

### 1. **Requirement**
As a learner, I want to define a structure that represents a book, including its title, author, publication year, and price, so that I can understand how to group related data types together using C `struct`.

### 2. **Design**
- Define a `struct Book` that includes:
  - `char title[100]`
  - `char author[100]`
  - `int publicationYear`
  - `float price`
- Create one `Book` variable and initialize it with sample data.
- Print each field clearly using `printf`.

### 3. **Sprints**
- **Sprint 1**: Create `6.1` folder and `structure_definitions.c` file with a basic `main()`.
- **Sprint 2**: Define the `Book` structure with required fields.
- **Sprint 3**: Declare and initialize a `Book` instance with hardcoded values.
- **Sprint 4**: Print all the details of the book using `printf`.

### 4. **Testing**
- Use a sample book like:
  - Title: "The C Programming Language"
  - Author: "Kernighan & Ritchie"
  - Year: 1978
  - Price: 39.99
- Confirm output is readable and all data is displayed correctly.

### 5. **Deployment**
   - gcc 6.1structure_definitions.c -o 6.1structure_definitions.exe
   - ./6.1structure_definitions.exe

### 6. **Maintenance**
   - Accept user input to populate the book fields.
   - Create an array of Book structures to store a book list.
   - Add functions to print or search for books by author or year.