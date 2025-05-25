# 7.5 – File Copy Character-by-Character  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to open a file for reading and another for writing, then copy the contents of the first file to the second file character-by-character, finally closing both files properly.

### 2. **Design:**
- Use `fopen()` to open the input file `"input.txt"` for reading.
- Use `fopen()` to open the output file `"output.txt"` for writing.
- Use `getc()` to read characters from the input file.
- Use `putc()` to write characters to the output file.
- Loop until EOF is reached.
- Close both files using `fclose()`.

### 3. **Implementation:**
- **Sprint 1:** Open both files with appropriate modes and check for errors.
- **Sprint 2:** Read from the input file character-by-character using `getc()`.
- **Sprint 3:** Write each character to the output file using `putc()`.
- **Sprint 4:** Close both files.
- **Sprint 5:** Print confirmation message.

### 4. **Testing:**
- Prepare an `"input.txt"` with sample content.
- Run the program and verify `"output.txt"` matches the input file exactly.
- Test with empty and large files.
- Confirm files are properly closed after operation.

### 5. **Deployment:**
- gcc .\7.5fileaccess.c -o .\7.5fileaccess.exe
- .\7.5fileaccess.exe

### 6. **Maintenance:**
- Add error handling if files cannot be opened.
- Extend to copy binary files safely.
- Allow filenames to be passed as command line arguments.