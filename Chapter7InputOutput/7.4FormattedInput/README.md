# 7.4 – Formatted Character Input and Counting  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to read input character-by-character using `getchar()`, count the number of lowercase letters, uppercase letters, and non-alphabetic characters.

### 2. **Design:**
- Use `getchar()` in a loop until EOF.
- Use `islower()` and `isupper()` from `<ctype.h>` to identify character types.
- Maintain counters for lowercase letters, uppercase letters, and non-alphabetic characters.
- Print the counts after EOF is reached.

### 3. **Implementation:**
- **Sprint 1:** Initialize counters and set up input loop.
- **Sprint 2:** Increment `lowerc` for lowercase characters.
- **Sprint 3:** Increment `upperc` for uppercase characters.
- **Sprint 4:** Increment `notalpha` for all other characters.
- **Sprint 5:** Print final counts.

### 4. **Testing:**
- Test input with a mix of lowercase, uppercase, digits, punctuation, and whitespace.
- Verify counters accurately reflect input character composition.
- Test with empty input and all-lowercase/all-uppercase inputs.

### 5. **Deployment:**
- gcc .\7.4FormattedInput.c -o .\7.4FormattedInput.exe
- .\7.4FormattedInput.exe

### 6. **Maintenance:**
- Add support for counting digits separately.
- Extend to handle Unicode characters.
- Modify to read from files or command-line arguments.