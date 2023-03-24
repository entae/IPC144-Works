//
//  main.c
//  Struct Challenge
//
//  Created by Intae Chung on 2023-03-20.
//

#include <stdio.h>

struct Name {
    char first[51];
    char last[101];
};

struct Student {
    struct Name name;
    long stno;
    char email[256];
};

struct Subject {
    char name[256];
    char pre[4];
    int code;
    char section[4];
    int numberOfStudents; //obviously should not be more than 40
    struct Student student[40];
};

//challenge write a function that returns a subject
struct Subject getSubject();
void printSubject(struct Subject S);
int main() {
    struct Subject S;
    S = getSubject();
    printSubject(S);
    return 0;
}
//write getName
//then write get student
//then write a get subject
/* Output:
 -intro to Programming using C
 -IPC144NAA
 -list of all the students that are entered
 -user should enter the # of students
 */
