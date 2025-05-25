# 6.6 – Day of Week Lookup Table  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to implement a lookup table that maps integer values (0–6) to the corresponding day of the week names to demonstrate use of arrays of string literals and basic input validation.

### 2. **Design:**
- Use a global constant array of strings `daysOfWeek` containing names of the seven days.
- Implement `getDayLookup(int day)` to:
  - Validate input is between 0 and 6.
  - Return the corresponding day name from the array.
  - Print an error message for invalid inputs.
- Use a simple loop in `main()` to demonstrate the lookup.

### 3. **Implementation:**
- **Sprint 1:** Define the constant array `daysOfWeek` with the seven day names.
- **Sprint 2:** Implement `getDayLookup()` function with boundary checks and string return.
- **Sprint 3:** Implement `main()` to loop through all days, calling `getDayLookup()` and printing results.
- **Sprint 4:** Add basic error handling and finalize code comments.

### 4. **Testing:**
- Verify output correctly prints all days from 0 to 6.
- Test invalid inputs (e.g., -1, 7) to ensure error message is printed.
- Confirm program runs without memory errors or crashes.

### 5. **Deployment:**
   - gcc .\6.6table_lookup.c -o .\6.6table_lookup.exe
   - .\6.6table_lookup.exe
   
   ### 6. **Maintenance:**
   - Extend to accept user input for day number.
   - Modify to handle localized or customized day names.
   - Convert to use enum types for better readability.
