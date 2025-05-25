# Exercise 4-1: Square of a Number

## 1. Problem / Requirement
   - Write a function that returns the square of a number.

## 2. Design
   - Function: `int square(int n)`
   - Takes one integer input and returns the result of `n * n`
   - Use a `main()` function to prompt the user for input and display the result

## 3. Development (Sprints)
   - **Sprint 1**: Set up file and `main()` function with welcome message
   - **Sprint 2**: Add `square()` function and test it with a input
   - **Sprint 3**: Add `scanf()` to take input from the user and test different values

## 4. Testing
Input  Output 
   -  3        9                 
   - -5       25             
   - 0         0              

## 5. (Simulated) Deployment
   - gcc 4.1Square.c -o 4.1Square.exe
   - .\4.1Square.exe

## 6. Maintenance Ideas
   - Expand to support `float` or `double`
   - Add more input validation
   - Refactor to be used in a larger calculator program
   - Create while loop to keep asking if user wants to enter `n` again