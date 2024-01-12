#!/usr/bin/python3
"""
A function that finds the largest palindrome made
from the product of two 3-digit numbers.
"""


def isPalindrome(number):
    return str(number) == str(number)[::-1]


maxPalindrome = 0

for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if isPalindrome(product) and product > maxPalindrome:
            maxPalindrome = product

file = open("102-result", "w")
file.write(str(maxPalindrome))
file.close()
