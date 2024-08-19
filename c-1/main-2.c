#include <stdio.h>
#include <string.h>
// 字符串拼接
void concat(char *a, char *b, char *c)
{
    for (; *a != '\0';)
    {
        *c = *a;
        a++;
        c++;
    }

    for (; *b != '\0';)
    {
        *c = *b;
        b++;
        c++;
    }

    *c = '\0';
}

int main()
{

    char s1[100], s2[100], s3[100];

    printf("请输入S1");
    fgets(s1, sizeof(s1), stdin); // 使用fgets获取用户输入

    s1[strcspn(s1, "\n")] = '\0'; // 移除换行符
    printf("请输入S2");
    fgets(s2, sizeof(s1), stdin); // 使用fgets获取用户输入
    s2[strcspn(s2, "\n")] = '\0'; // 移除换行符
    concat(s1, s2, s3);

    // 打印结果
    printf("str1 = %s, str2 = %s, str3 (concat) = %s\n", s1, s2, s3);
}
