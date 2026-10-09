// Copyright (c) 2025 St. Mother Teresa HS All rights reserved.
//
// Created by: Elliott Roach
// Created on: Sep 2025
// This has the user enter a word then it asks them to slice it and
// then prints it an amount of times

#include <stdio.h>
#include <cs50.h>


int main() {
    // ThisThis has the user enter a word then it asks them to slice it and
    // then prints it an amount of times

    // this is the variables
    string userWord = "whatever";
    int letterToStart = 0;
    int letterToStop = 0;
    int timesToPrint = 0;
    int oneLetter = 0;

    // input
    userWord = get_string("Enter a word: ");
    letterToStart = get_int("Where to start slice: ");
    letterToStop = get_int("Where to stop slice: ");
    timesToPrint = get_int("How many time do you want it said: ");

    // process/output
    printf("\n");
    while (timesToPrint > 0) {
        timesToPrint = timesToPrint - 1;
        for (oneLetter = letterToStart; oneLetter < letterToStop; oneLetter++) {
            printf("%c", userWord[oneLetter]);
        }
    }

    printf("\n\nDone.\n");
    return 0;
}
