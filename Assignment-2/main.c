// Copyright (c) 2025 St. Mother Teresa HS All rights reserved.
//
// Created by: Elliott Roach
// Created on: Sep 2025
// This calculates the primater of a triangle


#include <stdio.h>
#include <math.h>
#include <cs50.h>


int main() {
   // calculate the primater of a triangle

   // this is the variables
   float lengthOfTriangle;
   float heightOfTriangle;
   float hypotenuseOfTriangle;
   float perimeterOfTriangle;

   // input
   lengthOfTriangle = get_int("Enter the length of the triangle (m): ");
   heightOfTriangle = get_int("Enter the length of the triangle (m): ");
   hypotenuseOfTriangle = get_int("Enter the length of the triangle (m): ");

   // process
perimeterOfTriangle = lengthOfTriangle + heightOfTriangle + hypotenuseOfTriangle

   // output
   printf("\nThe perimeter is %.2f m\n", perimeterOfTriangle);

   printf("\nDone.\n");
   return 0;
}
