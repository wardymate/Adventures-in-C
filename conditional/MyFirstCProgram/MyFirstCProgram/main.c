//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int main()
{

    int a = 11;
    int b = 13;
    int minimum;
    char min_value;
    
    if (a < b){
        minimum = a;
        min_value = 'a';
    } else {
        minimum = b;
        min_value = 'b';
    }
    printf("%c is minimum %d\n", min_value, minimum);
    return 0;
}

