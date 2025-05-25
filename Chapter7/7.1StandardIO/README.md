# 7.1 – Character Echo with Transformation  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to read characters from input one by one, echo them to the output, but replace spaces `' '` with underscores `'_'` and convert lowercase letters to uppercase.

### 2. **Design:**
- Use `getchar()` in a loop to read input until EOF.
- For each character:
  - If it is a space `' '`, output an underscore `'_'`.
  - Otherwise, convert to uppercase using `toupper()` and output it.
- Use `putchar()` to print characters to standard output.

### 3. **Implementation:**
- **Sprint 1:** Set up the `while` loop to read input with `getchar()`.
- **Sprint 2:** Implement conditional check to replace space with underscore.
- **Sprint 3:** Use `toupper()` to convert other characters to uppercase.
- **Sprint 4:** Output characters with `putchar()` and finalize code.

### 4. **Testing:**
- Input text with spaces and lowercase letters and verify output converts spaces to underscores and letters to uppercase.
- Test with various inputs including uppercase letters, digits, and special characters.
- Confirm program ends correctly on EOF input.

### 5. **Deployment:**
- gcc .\7.1stdio.c -o .\7.1stdio.exe
- .\7.1stdio.exe

### 6. **Maintenance:**
- Extend to handle tabs or other whitespace characters.
- Add support for command line options to toggle transformations.
- Modify to process input line-by-line instead of character-by-character.