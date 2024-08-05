#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // int num;
    // unsigned int mask;

    // printf("input an integer number: ");
    // scanf("%d", &num);

    // num = num >> 8;     // 将 num 右移 8 位
    // mask = ~(~0U << 4); // 使用无符号整数来创建掩码，最低 4 位是 1，其余位是 0

    // printf("RESULT=0x%x\n", num & mask); // 输出 num 与掩码相与后的结果，结果以 16 进制格式显示

    // 字符输出函数
    // char n1 = 'N', n2 = 'E', n3 = 'W';
    // putchar(n2);

    // 字符串输出函数
    // putchar(getchar()); // 读取输入的字符并输出

    // 格式化输出函数ƒ
    // char c = 123;
    // printf("num=%x\n", c);
    // printf("num=%5d\n", c);
    // printf("num=%-5d\n", c);
    // printf("num=%2d", 3);

    // 格式化输入函数
    // int num1, num2;
    // scanf("%2d%*2d%3d", &num1, &num2);
    // printf("num1=%d, num2=%d\n", num1, num2);

    // char name[50];  // 将name改为字符数组
    // char sex;
    // float score;

    // printf("Enter name\n");
    // scanf("%s", name);  // 使用 %s 读取字符串

    // printf("Enter sex\n");
    // getchar();  // 读取并丢弃换行符
    // scanf("%c", &sex);  // 使用 %c 读取字符

    // printf("Enter score\n");
    // scanf("%f", &score);  // 使用 %f 读取浮点数

    // printf("Name: %s, Sex: %c, Score: %.2f\n", name, sex, score);  // 使用 %s 输出字符串，%c 输出字符，%.2f 输出浮点数

    // goto loop; // 无限循环，直到 n 超过 100 时跳出
    //     int n = 1, sum = 0;

    // loop:
    //     sum += n;
    //     n++;

    //     if (n <= 100)
    //         goto loop;

    //     printf("sum=%d", sum); // 输出 sum 的值

    // int n = 1, num = 100000;

    // while (n <= num)
    // {
    //     num -= 1;
    //     printf("n=%d ", num);
    // }

    // 球Fibonacci 数列前40个数

    // int a = 1, b = 1, c;
    // for (int i = 0; i < 20; i++)
    // {

    //     printf("i=%d\n", i);

    //     printf("a=%d---b=%d\n", a, b);

    //     a += b;
    //     b += a;
    // }

    // 计算1！+ 2！ +n!

    // int n = 0, i = 0, j = 0, res = 0 ;

    // scanf("%d", &n);

    // for (i = 1; i <= n; i++)
    // {

    //     int num = 1;

    //     for (j = i; j > 0; j--)
    //     {
    //         num = num * j;
    //         res += num;
    //         printf("res2=%d\n", res);
    //     }
    // }

    // 数组
    // int arr[10];

    // scanf("%d", &arr[1]);

    // int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }

    // 冒泡排序
    // int len, tem, arr[200];

    // scanf("%d", &len);

    // for (int i = 0; i < len; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    // for (int i = 0; i < len - 1; i++)
    // {

    //     for (int j = len - 1; j >= i; j--)
    //     {

    //         if (arr[j] < arr[j - 1])
    //         {

    //             tem = arr[j - 1];
    //             arr[j - 1] = arr[j];
    //             arr[j] = tem;
    //         }
    //     }
    // }

    // for (int i = 0; i < len; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // 从键盘输入一串字符，将该字符原样输出并统计个数
    // int i, j = 0;

    // char str[80];

    // for (int i = 0; i < 80; i++)
    // {
    //     str[i] = getchar();

    //     if (str[i] == '\n')
    //     {
    //         break;
    //     };
    //     j++;
    // }

    // printf("%d\n", j);

    // 字符串输出函数puts()

    // char str[] = "abc123";
    // puts(str);

    // 输入函数
    // char str[3][4];

    // fgets(str[0], sizeof(str[0]), stdin);

    // printf("str=%s\n", str[0]);

    // 字符串链接
    // char str[100] = "inter";
    // char str1[] = "net";

    // strcat(str, str1);

    // puts(str);
    // puts(str1);

    // // 长度
    // int len = strlen(str);

    // printf("%d\n", len);

    // 大写
    // char str1[] = "13.11";
    // char str2[] = "13.8";
    // double num1 = atof(str1);
    // double num2 = atof(str2);

    // if (num1> num2)
    // {
    //     printf("%d\n", 1);
    // }
    // else
    // {
    //     printf("%d\n", 2);
    // }
 const char *str = "5"; // 字符串，而不是字符
    double value = atof(str); // 将字符串转换为浮点数
    printf("atof: %f\n", value); // 使用 %f 来打印浮点数


    return 0;
}