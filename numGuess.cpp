// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on: March 29 2022
// This program makes a random number game

#include <iostream>
#include <stdlib.h>
#include <time.h>  
using std::cout;
using std::cin;


int main() {  
    int biggestNum, usersNum, randomNum;   
    srand (time(NULL));
    randomNum = rand() % biggestNum + 1;
   
    while (true){
        cout << "Enter the largest number to be generated: ";
        cin >> biggestNum;
        cout << "Guess a number between 1 and " << biggestNum << ": ";
        cin >> usersNum;
        
        if (randomNum<usersNum) puts ("The secret number is lower");
        else if (randomNum>usersNum) puts ("The secret number is higher");
        // else{
        //     cout << "congrajulations"
        // }
    } 
}

