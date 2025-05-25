# 8.6 – Directory Listing  
## SDLC Documentation and Process

### 1. **Requirement:**
Write a program that opens a directory and lists all its contents (file and directory names). The program should accept a directory path as an optional command-line argument; if none is provided, it defaults to the current directory (`"."`).

### 2. **Design:**
- Use `opendir()` to open the specified directory.
- Check if the directory was opened successfully.
- Use `readdir()` in a loop to read each directory entry.
- Print each entry’s name.
- Close the directory stream using `closedir()`.

### 3. **Implementation:**
- **Sprint 1:** Accept directory path from command-line argument or default to `"."`.
- **Sprint 2:** Open the directory using `opendir()`.
- **Sprint 3:** Iterate through entries with `readdir()` and print names.
- **Sprint 4:** Close directory and handle errors appropriately.

### 4. **Testing:**
- Test without arguments to list current directory.
- Test with a valid directory path argument.
- Test with an invalid directory path to ensure proper error handling.
- Verify output matches directory contents.

### 5. **Deployment:**
- gcc .\8.6ListDir.c -o .\8.6ListDir.exe
- .\8.6ListDir.exe

### 6. **Maintenance:**
- Add option to filter files by extension.
- Format output to include file types or sizes.
- Implement recursive directory listing.