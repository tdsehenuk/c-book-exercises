# 7.7 – Line Numbering Tool  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to open a file `"input.txt"`, read it line-by-line, and print each line to stdout prefixed with its line number. Additionally, I want to write the numbered lines to an `"output.txt"` file.

### 2. **Design:**
- Open `"input.txt"` for reading.
- Open `"output.txt"` for writing.
- Use `fgets()` to read each line from input.
- Print each line to stdout with line number prefix.
- Write each line to output file with line number prefix.
- Close both files.

### 3. **Implementation:**
- **Sprint 1:** Open input and output files with error checking.
- **Sprint 2:** Read lines using `fgets()` in a loop.
- **Sprint 3:** Print each line to stdout with line number.
- **Sprint 4:** Write each line with line number to output file.
- **Sprint 5:** Close files cleanly.

### 4. **Testing:**
- Prepare an `"input.txt"` with multiple lines.
- Verify output on screen has correct line numbers.
- Check `"output.txt"` contents for correct line numbering.
- Test with empty and large files.
- Test file open failure scenarios.

### 5. **Deployment:**
- gcc .\7.7lineNumberingTool.c -o .\7.7lineNumberingTool.exe
- .\7.7lineNumberingTool.exe

### 6. **Maintenance:**
- Add command-line support for filenames.
- Handle lines longer than buffer size with dynamic allocation.
- Add option to write output only to file or only to stdout.