// Copyright (c) 2025 St. Mother Teresa HS All rights reserved.
//
// Created by: Elliott Roach
// Created on: Sep 2025
// This asks for a number the checks if it's correct


#include <stdio.h>

int main() {
   // This asks for a number the checks if it's correct
   // This is the variables
   const int correctNumber = 7;
   int guessNumber;
 
   // input
   printf("Enter the number between 0 - 9: ");
   if (scanf("%d", &guessNumber) != 1) {
   }

   // process/output
   if (guessNumber == correctNumber){
     printf("You guessed correct\n");
   }

   if (guessNumber != correctNumber){
     printf("You guessed wrong\n");
   }

   printf("\nDone.\n");
   return 0;
}
