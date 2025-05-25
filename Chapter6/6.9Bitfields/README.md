# 6.9 – Bit-field Struct for Device Status  
## SDLC Documentation and Process

### 1. **Requirement:**
As a C programmer, I want to implement a bit-field struct to efficiently represent device status flags and small numeric fields using limited memory.

### 2. **Design:**
- Define a `struct Status` with bit-fields:
  - `powerOn` (1 bit)
  - `error` (1 bit)
  - `mode` (3 bits)
  - `temperature` (7 bits)
  - `reserved` (4 bits)
- Initialize the struct and set individual fields.
- Print the field values before and after updates.
- Display the size of the struct to demonstrate memory savings.

### 3. **Implementation:**
- **Sprint 1:** Define the bit-field struct with specified bit widths.
- **Sprint 2:** Initialize a `Status` instance with default values.
- **Sprint 3:** Update fields and print initial and updated values.
- **Sprint 4:** Print the size of the struct and add comments.

### 4. **Testing:**
- Confirm printed values match expected initial and updated values.
- Verify size of struct is minimized compared to normal structs.
- Ensure no overflow or unexpected behavior in bit-fields.

### 5. **Deployment:**
   - gcc .\6.9bitfields.c -o .\6.9bitfields.exe
   - .\6.9bitfields.exe

### 6. **Maintenance:**
- Add more device status flags using bit-fields.
- Use bit-fields in embedded systems for memory efficiency.
- Implement functions to serialize and deserialize status.