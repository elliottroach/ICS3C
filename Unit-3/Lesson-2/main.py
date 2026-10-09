#!/usr/bin/env python3
"""
Created by: Elliott Roach
Created on: oct 2025
This asks for a number the checks if it's correct
"""

import math
import constants

def main() -> None:
   # input
   # this asks for a number the checks if it's correct
   guess_number = int(input("Enter the number bettwen 0 - 9: "))

   # process/output
   if guess_number == constants.correct_number:
      print("You guessed correct!")
   
   if guess_number != constants.correct_number:
      print("You guessed wrong!")

   print("\nDone.")

if __name__ == "__main__":
   main()
