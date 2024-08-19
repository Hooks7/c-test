#include <stdio.h>
#include <wchar.h>
#include <locale.h>

struct student
{
    wchar_t name[20];  // 使用宽字符数组来存储中文字符
    char no[10];
    int age;
};

int main(void)
{
    setlocale(LC_ALL, "");  // 设置区域环境为系统默认

    struct student stud[100];
    struct student *p = stud;

    int num = 0;

    wprintf(L"请输入学生数量: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        getchar(); // 清除输入缓冲区中的换行符
        wprintf(L"请输入学生学号: ");
        scanf("%s", (p + i)->no);

        getchar(); // 清除输入缓冲区中的换行符
        wprintf(L"请输入学生姓名: ");
        fgetws((p + i)->name, sizeof((p + i)->name), stdin);  // 使用 fgetws 获取宽字符
        (p + i)->name[wcscspn((p + i)->name, L"\n")] = 0;  // 去掉换行符

        wprintf(L"请输入学生年龄: ");
        scanf("%d", &(p + i)->age);
    }

    wprintf(L"\n学生信息列表:\n");
    for (int i = 0; i < num; i++)
    {
        wprintf(L"No：%s, Name：%ls, Age：%d\n", (p + i)->no, (p + i)->name, (p + i)->age);
    }

    return 0;
}
