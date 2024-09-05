#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 写文件
int main()
{

    FILE *fptr;
    char string1[80];
    char string2[80];
    if ((fptr = fopen("/Users/hukai/Downloads/test.txt", "w")) == NULL)// 只读方式打开文本文件
    {
        printf("FILE cannot open\n");
        exit(1);
    }
    else
    {

        printf("input string :\n");
        if (fgets(string1, sizeof(string1), stdin) != NULL)
        {
            fputs(string1, fptr); // 将输入的字符串写入文件
        }


        fclose(fptr);
    }

    return 0;
}