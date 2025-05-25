# 8.5 – Log File Creation and Truncation  
## SDLC Documentation and Process

### 1. **Requirement:**
Write a program that opens a file named `log.txt`. If it exists, truncate (empty) it; if it doesn’t exist, create it. Then write `"Log started.\n"` to the file using only low-level system calls (`open()`, `write()`, etc.).

### 2. **Design:**
- Use `open()` with flags `O_WRONLY | O_CREAT | O_TRUNC` and appropriate permissions.
- Check if the file descriptor is valid.
- Use `write()` to write the message `"Log started.\n"`.
- Handle errors for open and write operations.
- Close the file descriptor before exiting.

### 3. **Implementation:**
- **Sprint 1:** Open the file with correct flags and permissions.
- **Sprint 2:** Write the log start message.
- **Sprint 3:** Handle error checking and file closing.
- **Sprint 4:** Add user feedback via `printf()`.

### 4. **Testing:**
- Run the program when `log.txt` exists — verify it gets truncated.
- Run the program when `log.txt` does not exist — verify it is created.
- Verify the content of `log.txt` after the program runs.
- Test error handling by restricting permissions or locking the file.

### 5. **Deployment:**
- gcc .\8.5logwiper.c -o .\8.5logwiper.exe
- .\8.5logwiper.exe

### 6. **Maintenance:**
- Extend to append to the log instead of truncating.
- Add timestamps to log entries.
- Allow log filename to be specified as a command-line argument.