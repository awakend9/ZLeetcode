#include "head.h"

const char* table[] = {"\0", "\0", "abc", "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

char** letterCombinations(char* digits, int* returnSize)
{
    char** result;
    // 把输入的字符串读取为int数组
    int* data_digits = malloc(*returnSize * sizeof(int));
    for(int i = 0;i < *returnSize;i++)
    {
        data_digits[i] = digits[i] - '0';
    }
    // 计算到底有多少种情况
    int situations = 1;
    for(int i = 0;i < *returnSize;i++)
    {
        situations *= strlen(table[data_digits[i]]);
    }
    printf("Total situations: %d\n", situations);
    // 根据情况数确定数组长度
    result = malloc(situations * sizeof(char*));
    for(int i = 0;i < situations;i++)
    {
        result[i] = malloc(*returnSize * sizeof(char));
    }

    // 以下真到算法咯
    for(int i = 0;i < situations;i++)
    {
        for(int j = 0;j < *returnSize;j++)
        {
            result[i][j] = table[data_digits[j]][i % strlen(table[data_digits[j]])];
        }
    }

    return result;
}
