#!/usr/bin/env python3
"""
Created by: Elliott Roach
Created on: Sept 2025
This calculates the primater of a triangle
"""


import math


def main() -> None:
   # input
   length_of_triangle = float(input("Enter length of the triangle (m): "))
   height_of_triangle = float(input("Enter height of the triangle (m): "))
   hypotenuse_of_triangle = float(input("Enter hypotenuse of the triangle (m): "))

   # process
   perimeter_of_triangle = length_of_triangle + height_of_triangle + hypotenuse_of_triangle

   # output
   print(f"\nThe perimeter is {(perimeter_of_triangle):.2f} m")

   print("\nDone.")



if __name__ == "__main__":
   main()
