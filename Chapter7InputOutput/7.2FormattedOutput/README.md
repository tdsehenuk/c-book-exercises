# 7.2 – Word, Line, and Character Counter  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to read input character-by-character from `stdin` using only `getchar()`, and count the number of lines, words, and characters.

### 2. **Design:**
- Use `getchar()` in a loop until EOF.
- Maintain counters for lines (`lc`), words (`wc`), and characters (`cc`).
- Track whether currently inside a word using a flag `inword`.
- Increment counters appropriately based on whitespace and newlines.

### 3. **Implementation:**
- **Sprint 1:** Initialize counters and set up input loop with `getchar()`.
- **Sprint 2:** Increment character counter on every input.
- **Sprint 3:** Detect line breaks (`\n`) and increment line counter.
- **Sprint 4:** Use `inword` flag to detect transitions from whitespace to word and increment word counter.

### 4. **Testing:**
- Test with input containing multiple lines, spaces, tabs.
- Verify counts match expected line, word, and character totals.
- Test empty input and single word inputs.

### 5. **Deployment:**
- gcc .\7.2wordcounter.c -o .\7.2wordcounter.exe
- .\7.2wordcounter.exe

### 6. **Maintenance:**
- Add support for punctuation detection.
- Optimize to handle large files efficiently.
- Extend to count sentences or paragraphs.