//
//  main.c
//  Pointer Quiz
//
//  Created by Intae Chung on 2023-03-23.
//

#include <stdio.h>
#include "getInt.h"
#include "getNumberOfStudents.h"
/*
Write 2 functions to perform a fool-proof, entry (but with a limited  number of tries)

The total number of lines to code the two functions is around 25 and you have 25 minutes to complete the quiz.

Here is a main sample for the above two functions and two execution samples:
 
Note that (as shown in second execution sample) the variable "nos" will not change if too many tries are attempted.
*/

int main() {
   int nos = -1;  // number of students to read
   if(getNoOfStudents(&nos, 3)) {
      printf("There are %d students in class!\n", nos);
   }
   else {
      printf("Too many tries, sorry!\n");
   }
   printf("nos variable value at the end is %d\n", nos);
}

/*
//Execution sample 1:
No of Students: 2
You have 2 more chances to correct your entry: 3
You have 1 more chance to correct your entry: 10
There are 10 students in class!
nos variable value at the end is 10
*/

/*
//Execution sample 2:
No of Students: 4
You have 2 more Chances to correct your entry: 2
You have 1 more Chance to correct your entry: 3
Too many tries, sorry!
nos variable value at the end: -1
*/
