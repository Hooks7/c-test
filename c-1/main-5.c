#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 2

// 定义学生结构体类型
struct student_type
{
    char name[10];
    int num;
    int age;
    char address[15];
} stud[SIZE];

void save()
{
    FILE *fp;
    int i;
    if ((fp = fopen("/Users/hukai/Downloads/test1", "wb")) == NULL) // 以二进制写模式打开文件
    {
        perror("Error opening file");
        exit(1);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (fwrite(&stud[i], sizeof(struct student_type), 1, fp) != 1)
        {
            printf("File write error\n");
        }
    }

    fclose(fp);
}

// 定义显示学生信息的函数
void display()
{
    FILE *fp;
    int i;
    if ((fp = fopen("/Users/hukai/Downloads/test1", "rb")) == NULL) // 以二进制读模式打开文件
    {
        perror("Error opening file");
        exit(1);
    }

    for (i = 0; i < SIZE; i++) // 从fp所指向的文件中逐一读取学生的结构体类型数据保存到结构体
    {
        if (fread(&stud[i], sizeof(struct student_type), 1, fp) != 1)
        {
            printf("File read error\n");
        }
        printf("%-10s %4d  %4d %-15s\n", stud[i].name, stud[i].num, stud[i].age, stud[i].address);
    }

    fclose(fp); // 关闭fp所指向的文件
}

int main()
{
    int i;
    printf("Please input student information (name num age address):\n");

    for (i = 0; i < SIZE; i++)
    {
        scanf("%9s%d%d%14s", stud[i].name, &stud[i].num, &stud[i].age, stud[i].address);
    }

    save();
    display();

    return 0;
}