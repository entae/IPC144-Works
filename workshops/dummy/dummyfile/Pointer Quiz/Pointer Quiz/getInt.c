//
//  getInt.c
//  Pointer Quiz
//
//  Created by Intae Chung on 2023-03-23.
//

#include "getInt.h"
/*
Function 1:
Write a "getInt" function that returns true or false and receives two arguments;
1- pointer to an integer to be used to get a number from the console
2- an integer to specify the "minimum valid entry" value.

This function reads an integer from the console. If the read value is greater than or equal to the "minimum valid entry" value, the function will set the target of the pointer argument to the read value and returns true. Otherwise, it should only return false.
*/
int getInt(int* nos, int min) {
    int n = 0;
    int done = 0;
    if ((scanf("%d", &n) == 1) && getchar() == '\n') {
        if (n >= min) {
            *nos = n;
            done = 1;
        }
        else {
            printf("Please print only an Integer");
        }
    }
    return done;
}
