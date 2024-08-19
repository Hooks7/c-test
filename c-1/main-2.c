#include <stdio.h>
#include <string.h>
// 自定义结构体类型
struct student
{
    char name[20];
    char no[10];
    int age;
} STU;

STU *p, *q; //利用STU定义结构体类型指针变量p和q



int main(void)
{
    STU stud[100], fit[100];

    int num = 0, fit_count = 0, high = 0, low = 0, i = 0;

    scanf("%d", &num);
    p = stud;
    q = fit;

    for (int i = 0; i < num; i++)
    {
        getchar();
        printf("请输入学生信息:");

        sscanf("%s", (stud + i) -> no);
        getchar();
        sscanf("%s", (p + i) -> name);
        getchar();
        sscanf("%d", (p + i) -> age);
        /* code */
        getchar();
    }

    for (size_t i = 0; i < stud; i++)
    {

        printf("No：%s,Name：%s, Age：%d");
        /* code */
    };

    return 0;
};