//
//  main.c
//  main.c
//
//  Created by Intae Chung on 2023-01-26.
//
#include "stdio.h"

void line(char fill, int length);
void shoppingStats(int noOfItems);

int main(void) {
    int noOfItems;
    //to track the number of items purchased
    printf("Money Spending Calculator\n");
    line('=',25);
    printf("How many items were bought?\n");
    printf("> ");
    scanf("%d", &noOfItems);
    shoppingStats(noOfItems);
    
    return 0;
}
