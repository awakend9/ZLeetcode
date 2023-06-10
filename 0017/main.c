#include "head.h"

int main()
{
    char* digits = "23";
    int returnSize = strlen(digits);
    char** test = letterCombinations(digits, &returnSize);
    for(int i = 0;i < 9;i++)
    {
        printf("第%d种情况为：%s\n", i + 1, test[i]);
    }
    free(test);
    return 0;
}
