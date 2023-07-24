#include "header.h"

// Define the function parameters//
/**
*
*
*
*
*/

void _getint(int n)

int a;
//check if value is equal to zero or not// 
    if (num == 0)
        return;
//set "a" variable so that it will hold the base number after division by 10//
    a = num / 10;
use recursion to get the value of a and append to the remainder//
    _getint(a);
//Remember our _putchar and use it to give the output
    _putchar((n % 10) + '0');

    return;
}
