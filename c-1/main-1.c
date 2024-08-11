#include <stdio.h>
void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

void func(int arr[])
{

    for (int i = 0; i < 10; i++)
    {
        printf("ARR=%d\n", arr[i]);
    };
};

int main()
{

    // 指針作為函數參數
    int num1 = 9;
    int num2 = 10;

    int *P1 = &num1;
    int *P2 = &num2;

    exchange(P1, P2);

    printf("NUM1=%d,NUM2=%d\n", num1, num2);

    // 数组名作为函数参数

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *arrA = arr;

    func(arr);

    func(arrA);

    return 0;
}