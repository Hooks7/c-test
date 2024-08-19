#include <stdio.h>
#include "add.h"

// 有参宏
#define MAX(a, b) (a > b ? a : b)

int main(void)
{

    int a = 3;
    int b = 3;

    printf("%d\n", add(a, b));

    return 0;
}