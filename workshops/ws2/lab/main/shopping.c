//
//  shopping.c
//  main.c
//
//  Created by Intae Chung on 2023-01-26.
//

#include "stdio.h"
void line(char fill, int length);

void shoppingStats(int noOfItems) {
// noOfItem: the number of items purchased
    int loop;
    //integer for number of loops
    double price;
    //float value for item prices
    double sum;
    //float for total price of items
    double avg;
    //float for average price of items
    printf("Please enter the price of the %d items bought...\n",noOfItems);
    loop = 0;
    sum = 0;
    while (loop < noOfItems) {
        printf("%d> ", loop+1);
        scanf("%lf", &price);
        loop++;
        sum += price;
        }
    line('-',50);
    printf("Total price for all the items purchased: %.2lf\n", sum);
    avg = sum / noOfItems;
    printf("Average price of the items: %.2lf\n",avg);
    line('=',50);
}

void line(char fill, int length) {
    int l;
    char c = fill;
    for (l = 0; l < length; l++) {
        printf("%c", c);
        }
        putchar('\n');
    }
