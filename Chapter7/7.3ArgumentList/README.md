# 7.3 – Character Type Counter  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to read input character-by-character using `getchar()` and count how many digits, whitespace characters, and other characters occur until EOF.

### 2. **Design:**
- Use `getchar()` in a loop until EOF.
- Maintain counters for digits (`digits`), whitespaces (`whitespaces`), and other characters (`otherchars`).
- Classify each input character accordingly and update counters.
- Print the counts at the end.

### 3. **Implementation:**
- **Sprint 1:** Initialize counters and set up input loop with `getchar()`.
- **Sprint 2:** Check if character is digit and increment `digits`.
- **Sprint 3:** Check if character is whitespace and increment `whitespaces`.
- **Sprint 4:** Otherwise increment `otherchars`.
- **Sprint 5:** Print the final counts.

### 4. **Testing:**
- Test with input containing digits, spaces, tabs, newlines, punctuation, and letters.
- Verify that counters correctly reflect the input composition.
- Confirm correct program termination at EOF.

### 5. **Deployment:**
- gcc .\7.3charactercounter.c -o .\7.3charactercounter.exe
- .\7.3charactercounter.exe


### 6. **Maintenance:**
- Extend to count uppercase and lowercase letters separately.
- Add support for counting punctuation specifically.
- Handle Unicode or extended ASCII if needed.