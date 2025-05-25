# 7.6 – File Copy with Error Handling  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to copy a file character-by-character while handling errors. I need to detect and report if EOF was reached naturally or if any I/O errors occurred during reading or writing.

### 2. **Design:**
- Open `"input.txt"` for reading and `"output.txt"` for writing.
- Check if files opened successfully, report errors using `perror()` if not.
- Copy characters from input to output using `getc()` and `putc()`.
- Check for write errors during copying.
- After copying, use `feof()` to confirm natural EOF.
- Use `ferror()` to detect errors during reading.
- Close both files properly.

### 3. **Implementation:**
- **Sprint 1:** Open files and handle open errors.
- **Sprint 2:** Loop copying characters with `getc()` and `putc()`.
- **Sprint 3:** Handle write errors inside the loop with `perror()`.
- **Sprint 4:** After copying, check for EOF or read errors.
- **Sprint 5:** Print appropriate success or error messages and close files.

### 4. **Testing:**
- Test with a valid input file and verify output is copied correctly.
- Test with missing `"input.txt"` to trigger open error.
- Simulate write errors (e.g., disk full) if possible.
- Confirm messages are printed correctly for each scenario.

### 5. **Deployment:**
- gcc .\7.6errorHandling.c -o .\7.6errorHandling.exe
- .\7.6errorHandling.exe

### 6. **Maintenance:**
- Improve error handling by retrying writes on failure.
- Add command-line arguments for file names.
- Log errors to a file for audit purposes.

