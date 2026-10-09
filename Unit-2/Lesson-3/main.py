#!/usr/bin/env python3
"""
Created by: Elliott Roach
Created on: Sept 2025
This calculats the circumference of a circle from a a users radius
"""

import math
import constants


def main() -> None:
    # input
    radius_of_circle = int(input("Enter radius of the circle (mm): "))

    # process
    circumference = constants.TAU * radius_of_circle

    # output
    print(f"Circumference is {(circumference):.3f} mm")

    print("\nDone.")


if __name__ == "__main__":
    main()
