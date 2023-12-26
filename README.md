# Integers
**Objective:** integer arithmetic, functions, and menus

Write	a	C++	program	that	displays	the	following	menu	of	choices.

`1. Find the number of digits in an integer.`

`2. Find the nth digit in an integer.`

`3. Find the sum of all digits of an integer.`

`4. Is the integer a palindrome?`

`5. Quit`

`Enter a choice:`

For each of the choices (1, 3, 4), read a **positive** integer number and call a **function** that processes the menu choice (descriptions below). For option 2 read two **positive** integers. If the **n** value is invalid, print an error message and display the menu again. Your program should continuously display the menu until the user enters 5 to quit. Any other choice should be ignored, and the menu should be displayed again.

**Required Functions (use the provided prototype and function names):**

- Option 1, `int getNumDigits(int number)`: return the number of digits in number
- Option 2, `int getNthDigit(int number, int n)`: return the digit number specified by n (right most digit is digit one)
- Option 3, `int getSumDigits(int number)`: return the total value of all the digits
- Option 4, `bool isPalindrome(int number)`: return true if the number is a palindrome (1, 121, 1221, 134431, etc.) & false otherwise
- A function (`int getInteger()`) that returns a positive integer. This function should loop until the user enters a positive integer.

All of the above functions must only manipulate integers.

Do not use string types or arrays in any part of this project.
