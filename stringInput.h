//
// Created by zhou on 2022/3/28.
//

#ifndef C22_STRINGINPUT_H
#define C22_STRINGINPUT_H

#endif //C22_STRINGINPUT_H
#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            * find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}
