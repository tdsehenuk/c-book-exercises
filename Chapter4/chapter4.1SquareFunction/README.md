# Exercise 4-1: Square of a Number

## 1. Problem / Requirement

Write a function that returns the square of a number.

## 2. Design

- Function: `int square(int n)`
- Takes one integer input and returns the result of `n * n`
- Use a `main()` function to prompt the user for input and display the result

## 3. Development (Sprints)

- **Sprint 1**: Set up file and `main()` function with welcome message
- **Sprint 2**: Add `square()` function and test it with a input
- **Sprint 3**: Add `scanf()` to take input from the user and test different values

---

## 4. Testing

Input  Expected Output 
3  9             
-5 25             
0  0              

---

## 5. (Simulated) Deployment

This project is for learning purposes and runs locally on terminal using `gcc`.
gcc 4.1square.c -o 4.1square
.\4.1square.exe

---

## 6. Maintenance Ideas

- Expand to support `float` or `double`
- Add more input validation
- Refactor to be used in a larger calculator program

---

## Run Instructions

```bash
gcc main.c -o square
./square
