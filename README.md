﻿# Fibonacci Number Checking

The C++ program checks whether a given number is a Fibonacci number without using any separate function by relying on a well-known mathematical property: a number `n` is a Fibonacci number if and only if either `5*n*n + 4` or `5*n*n - 4` is a perfect square. The program first takes an integer input from the user, then calculates both expressions. It uses the `sqrt()` function from the `<cmath>` library to find the square root of these values and checks whether squaring the integer part of the square root gives back the original number (i.e., confirming it's a perfect square). If either of the two results is a perfect square, the input is a Fibonacci number; otherwise, it is not. This method provides an efficient and direct way to verify Fibonacci membership without generating the sequence or using functions....



✅ Key Logic:
A number n is a Fibonacci number if and only if one of these is a perfect square:

5*n*n + 4

5*n*n - 4

This is a mathematical property of Fibonacci numbers.
