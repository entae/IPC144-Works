//
//  utils.h
//  diy
//
//  Created by Intae Chung on 2023-02-20.
//

#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H
// don't inlclude header files in header file UNLESS you have to
// #include <stdio.h>

int getInt(void);
void flushKey(void);
int yes(void);
char getSingleChar(void);
void line(char fill, int len);
int getMMInt(int min, int max, const char valueName[]);

#endif /* SDDS_UTILS_H */
