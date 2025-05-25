# 8.2 – File Copy with read() and write()  
## SDLC Documentation and Process

### 1. **Requirement:**
Create a C program that copies a source file to a destination file using low-level I/O system calls (`read()` and `write()`). The program must accept two command-line arguments: input file and output file, and handle errors gracefully.

### 2. **Design:**
- Parse command-line arguments for source and destination file names.
- Use `open()` to open source file for reading.
- Use `open()` with flags `O_WRONLY | O_CREAT | O_TRUNC` to open/create destination file.
- Allocate a 512-byte buffer.
- Use a loop to `read()` from source and `write()` to destination.
- Check return values for errors during open, read, and write.
- Close both files before exit.
- Print usage error if arguments missing.

### 3. **Implementation:**
- **Sprint 1:** Parse arguments and check count.
- **Sprint 2:** Open input and output files with proper flags and permissions.
- **Sprint 3:** Implement loop to read and write using 512-byte buffer.
- **Sprint 4:** Handle and report errors on open/read/write.
- **Sprint 5:** Close files and exit gracefully.

### 4. **Testing:**
- Copy a large file and verify the destination matches exactly.
- Test with non-existent input file and confirm error message.
- Test with permission denied on output file.
- Test with missing command-line arguments.

### 5. **Deployment:**
- gcc .\8.2readWrite.c -o .\8.2readWrite.exe
- .\8.2readWrite.exe input.txt output.txt

### 6. **Maintenance:**
- Add support for copying binary files safely.
- Improve buffer size handling via command-line parameter.
- Add verbose mode to show progress.
