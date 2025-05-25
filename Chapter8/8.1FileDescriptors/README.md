# 8.1 – File Descriptor I/O  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to use low-level file descriptor functions (`open()`, `read()`, `write()`, `close()`) to read the first 100 bytes from `"input.txt"` and write them to `"output.txt"`.

### 2. **Design:**
- Use `open()` to open `"input.txt"` in read-only mode.
- Use `open()` to create and open `"output.txt"` in write mode.
- Use `read()` to read up to 100 bytes from input file.
- Use `write()` to write those bytes to output file.
- Handle errors at each step with `perror()`.
- Close both file descriptors with `close()`.

### 3. **Implementation:**
- **Sprint 1:** Open `"input.txt"` for reading, handle errors.
- **Sprint 2:** Open `"output.txt"` for writing (create/truncate), handle errors.
- **Sprint 3:** Read up to 100 bytes from `"input.txt"`.
- **Sprint 4:** Write the read bytes to `"output.txt"`.
- **Sprint 5:** Close both file descriptors.

### 4. **Testing:**
- Prepare an `"input.txt"` file larger than 100 bytes.
- Verify `"output.txt"` contains exactly first 100 bytes.
- Test with missing `"input.txt"` to trigger open error.
- Test permission errors when opening `"output.txt"`.

### 5. **Deployment:**
- gcc .\8.1fileDescriptors.c -o .\8.1fileDescriptors.exe
- .\8.1fileDescriptors.exe

### 6. **Maintenance:**
- Extend to read/write arbitrary byte ranges.
- Add command-line arguments for file names and byte counts.
- Improve error recovery and partial read/write handling.