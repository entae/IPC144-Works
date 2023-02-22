//
//  utils.h
//  diy
//
//  Created by Intae Chung on 2023-02-20.
//

#ifndef utils_h
#define utils_h

#include <stdio.h>

int getInt(void);
void flushKey(void);
int yes(void);
char getSingleChar(void);
void line(char fill, int len);
int getMMInt(int min, int max, const char valueName[]);

#endif /* utils_h */
