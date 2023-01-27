//
//  shopping.c
//  main.c
//
//  Created by Intae Chung on 2023-01-26.
//

#include "stdio.h"
void line(char fill, int length);

void title(void) {
    printf("Money Spending Calculator\n");
}

void shoppingStats(void) {

    int noOfItems;
    //the number of items
    int itm;
    //counter for listing number of items
    float price;
    //float value for item prices
    float total;
    //float for total price of items
    float avg;
    //float for average price of items
    
    printf("How many items were bought?\n");
    printf("> ");
    scanf("%d", &noOfItems);
    printf("Please enter the price of the %d items bought...\n",noOfItems);
    itm = 0;
    total =0;
    while (itm != noOfItems) {
        printf("%d> ", itm+1);
        scanf("%f", &price);
        itm++;
        total += price;
        }
    line('-',50);
    printf("Total price for all the items purchased: %.2f\n", total);
    avg = total / noOfItems;
    printf("Average price of the items: %.2f\n",avg);
}

void line(char fill, int length) {
    int l;
    char c = fill;
    for (l = 0; l < length; l++) {
        printf("%c", c);
        }
        putchar('\n');
    }
