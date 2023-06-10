#include "head.h"

const int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
const char* symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

char* int2Roman(int num)
{
    char* result = malloc(sizeof(char) * 16);
    result[0] = '\0';
    for(int i = 0;i < 13;i++)
    {
        while(num >= values[i])
        {
            num -= values[i];
            strcpy(result + strlen(result), symbols[i]);
        }
        if(num == 0){
            break;
        }
    }
    return result;
}
