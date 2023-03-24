//
//  getNumberOfStudents.c
//  Pointer Quiz
//
//  Created by Intae Chung on 2023-03-23.
//

#include "getNumberOfStudents.h"
#include "getInt.h"
/*
Function 2:
Use the "getInt" function above to:
Write a "getNumberOfStudents" function that receives two arguments and returns true or false.

The first argument is an integer pointer to pass back the number of students received from the console.
The second argument is the number of times the user can try to enter the correct value.

The function should keep asking the user for a valid value up to the second argument's value.

The acceptable number of students is an integer more than 5.
*/
void flushKey(void) {
    char ch = 'x';
    while (ch != '\n'){
        ch = getchar();
    }
}
int getNoOfStudents(int* pntr, int attempt) {
    int done = 0;
    printf("No of Students: ");
    while (attempt > 0) {
        attempt--;
        if (getInt( pntr, 5) == 1) {
            done = 1;
        }
        else if (attempt > 1) {
            flushKey();
            printf("You have %d more chances to correct your entry: ", attempt);
        }
        else if (attempt == 1) {
            flushKey();
            printf("you have 1 more chance to correct your entry: ");
        }
    }
    return done;
}
