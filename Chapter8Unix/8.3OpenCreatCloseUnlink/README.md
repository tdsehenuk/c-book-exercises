# 8.3 – Counting Tabs and Newlines Using read()  
## SDLC Documentation and Process

### 1. **Requirement:**
Write a program that reads a file using only `read()` and counts how many tab (`'\t'`) and newline (`'\n'`) characters it contains. The program should then print these counts.

### 2. **Design:**
- Open the input file specified as a command-line argument with `open()`.
- Allocate a 512-byte buffer.
- Use a loop to `read()` bytes from the file into the buffer.
- Iterate over the buffer contents to count tabs and newlines.
- Handle errors during file opening and reading.
- Close the file and print the counts at the end.

### 3. **Implementation:**
- **Sprint 1:** Parse command-line argument and open file.
- **Sprint 2:** Read file contents in chunks using `read()`.
- **Sprint 3:** Count tabs and newlines while reading.
- **Sprint 4:** Handle and report any I/O errors.
- **Sprint 5:** Close the file and print final counts.

### 4. **Testing:**
- Test with a file containing various numbers of tabs and newlines.
- Verify output against expected counts.
- Test error handling with a missing or unrea

### 5. **Deployment:**
- gcc .\8.3countingUsingRead.c -o .\8.3countingUsingRead.exe
- .\8.3countingUsingRead.exe input.txt

### 6. **Maintenance:**
- Extend to count other whitespace characters.
- Add option to display counts for multiple files.
- Improve user interface with help and usage info.