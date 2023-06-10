#include "head.h"

int main()
{
    char* z = int2Roman(999);
    printf("%s\n", z);
    free(z);
    return 0;
}
