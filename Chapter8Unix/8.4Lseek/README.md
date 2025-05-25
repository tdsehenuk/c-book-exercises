# 8.4 – File Positioning Using lseek()  
## SDLC Documentation and Process

### 1. **Requirement:**
Write a program that opens a file, seeks to the 10th byte using `lseek()`, reads the next 20 bytes, and prints the read content.

### 2. **Design:**
- Parse the filename from command-line arguments.
- Open the file in read-only mode with `open()`.
- Use `lseek()` to set the file position to offset 10.
- Read 20 bytes from the new position into a buffer.
- Null-terminate and print the buffer content.
- Handle errors for file open, lseek, and read.
- Close the file descriptor before exiting.

### 3. **Implementation:**
- **Sprint 1:** Handle command-line input and file opening.
- **Sprint 2:** Use `lseek()` to reposition the file pointer.
- **Sprint 3:** Read the data starting at the new offset.
- **Sprint 4:** Print the data and close the file.
- **Sprint 5:** Add robust error checking at every step.

### 4. **Testing:**
- Test with files larger than 30 bytes to confirm correct read.
- Test with files smaller than 30 bytes to check boundary behavior.
- Verify error messages on missing files or invalid permissions.
- Confirm that `lseek()` failure is properly handled.

### 5. **Deployment:**
- gcc .\8.4lseek.c -o .\8.4lseek.exe
- .\8.4lseek.exe 

### 6. **Maintenance:**
- Extend to accept offset and read length as arguments.
- Add support for other seek options (`SEEK_CUR`, `SEEK_END`).
- Implement reading from multiple offsets sequentially.