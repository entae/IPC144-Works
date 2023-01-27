//
//  main.c
//  main.c
//
//  Created by Intae Chung on 2023-01-26.
//

#include <stdio.h>

void title(void);
void line(char fill, int length);
void shoppingStats(void);

int main(void) {
    title();
    line('=',25);
    shoppingStats();
    line('=',50);
     
    return 0;
}
