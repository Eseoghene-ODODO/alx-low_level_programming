#!/usr/bin/python3
"""
A function that finds the largest palindrome made
from the product of two 3-digit numbers.
"""


def isPalindrome(number):
    return str(number) == str(number)[::-1]

maxPalindrome = 0

for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        product = i * j
        if product <= maxPalindrome:
            break
        if isPalindrome(product) and product > maxPalindrome:
            maxPalindrome = product

with open("102-result", "w") as file:
    file.write(str(maxPalindrome))

