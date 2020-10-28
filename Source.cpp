#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int matrix(void)
{
    int* mas, e, i, j, m, n, sum = 0, k = 0;

    printf("����� ����� ��� ����������� ��������� �������: ");
    scanf_s("%d", &e);
    printf("����� ����� ��� ����������� ����������� ������� (m*n) ����� ������: ");
    scanf_s("%d %d", &m, &n);
    e++;
    int** A;
    A = new int* [n]; 
    for (int i = 0; i < n; i++) {
        A[i] = new int[m];
    }
    /*
    for (i = 0; i < n; i++) {
        mas[i] = rand() % e;
        printf("%d ", mas[i]);
    }
    */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            A[i][j] = rand() % e;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
        
        for (i = 0; i < 10; ++i) {
            sum = 0;
            k++;
            for (j = 0; j < 10; ++j) {
                sum += A[i][j];
            }
            printf("\n������: %d �����: %d\n", k, sum);
        }
        
        printf("\n������� ENTER ��� ������ � ������� ����... \n");
        _getch();
        return 0;
    }
    
int autowrite(void)
{
    int i, n, e, *mas, min = 99999999, max = 0;

    printf("����� ������ �������: ");
    scanf_s("%d", &n);
    printf("����� ����� ��� ����������� ��������� ������� (+/-): ");
    scanf_s("%d", &e);
    e++;
    srand(time(0));
    mas = (int*)malloc(n * sizeof(int));

    printf("������: \n");
    for (i = 0; i < n; i++) {
        mas[i] = rand() % e;
        printf("%d ", mas[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (mas[i] < min)
            min = mas[i];
    }
    for (i = 0; i < n; i++)
    {
        if (mas[i] > max)
            max = mas[i];
    }
    printf("\n����������� �����: %d", min);
    printf("\n������������ �����: %d", max);
    max = max - min;
    printf("\n������� ����� ������������ � ����������� ������� ����������: %d", max);
    printf("\n������� ENTER ��� ������ � ������� ����... \n");
    _getch();
    return 0;
    
}

int str(void)
{
    {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        setlocale(LC_ALL, "Rus");
        setvbuf(stdin, NULL, _IONBF, 0);
        setvbuf(stdout, NULL, _IONBF, 0);
        int i;
        bool ch = 0;
        struct student
        {
            char famil[20];
            char name[20], facult[20];
            int Nomzach;
        } 
        stud[3];
        struct student_search //�������������� ��������� ��� ������ �������� �� �������� ���������
        {
            char famil_search[20];
            char name_search[20], facult_search[20];
            int Nomzach_search;
        } 
        stud_search;
        for (i = 0; i < 3; i++)
        {
            printf("������� ������� ��������\n"); 
            scanf("%20s", stud[i].famil);
        }
        for (i = 0; i < 3; i++)
        {
            printf("������� ��� �������� %s\n", stud[i].famil); 
            scanf("%20s", stud[i].name);
        }
        for (i = 0; i < 3; i++)
        {
            printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name); 
            scanf("%20s", stud[i].facult);
        }
        for (i = 0; i < 3; i++)
        {
            printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name); 
            scanf("%d", &stud[i].Nomzach);
        }
        for (i = 0; i < 3; i++)
        {
            printf("C������ �%d %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", i, stud[i].famil, stud[i].name, stud[i].facult, stud[i].Nomzach);
        }
        printf("\n=======����� �������� �� ���������=======\n");
        printf("������� ������� �������� (��� �������� ������� 0):\n"); 
        scanf("%20s", stud_search.famil_search);
        printf("������� ��� �������� (��� �������� ������� 0): \n"); 
        scanf("%20s", stud_search.name_search);
        printf("������� �������� ���������� �������� (��� �������� ������� 0): \n"); 
        scanf("%20s", stud_search.facult_search);
        printf("������� ����� �������� ������ �������� (��� �������� ������� 0): \n"); 
        scanf("%d", &stud_search.Nomzach_search);
        
        for (i = 0; i < 3; i++) {
            if (strcmp(stud[i].famil, stud_search.famil_search) == 0 
                || strcmp(stud[i].name, stud_search.name_search) == 0
                || strcmp(stud[i].facult, stud_search.facult_search) == 0 
                || stud[i].Nomzach == stud_search.Nomzach_search) 
            {
                printf("������� ������� - %s, %s, %s, ��������� ��� ������� - %d", stud[i].famil, stud[i].name, stud[i].facult, i);
                ch = 1;
            }
        }
        if (ch == 0) {
            printf("������ �������� �� ����������!");
        }
    }
    printf("\n������� ENTER ��� ������ � ������� ����... \n");
    _getch();
    return 0;
}

int selfwrite(void)
{
    int i, n, * mas, min = 99999999, max = 0;
    printf("����� ������ �������: ");
    scanf_s("%d", &n);
    mas = (int*)malloc(n * sizeof(int));
    printf("����� �������� �������: \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf_s("%d", &mas[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d, ", mas[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (mas[i] < min)
            min = mas[i];
    }
    for (i = 0; i < n; i++)
    {
        if (mas[i] > max)
            max = mas[i];
    }
    printf("\n����������� �����: %d", min);
    printf("\n������������ �����: %d", max);
    max = max - min;
    printf("\n������� ����� ������������ � ����������� ������� ����������: %d", max);
    printf("\n������� ENTER ��� ������ � ������� ����... \n");
    _getch();
    return 0;
}

int Menu(void)
{
    system("CLS");
    int c = 0;
    setlocale(LC_ALL, "Rus");
    while (c < '0' || c > '4')
    {
        printf(
            "::=================================::\n"
            "|| 1 : ������ ������               ||\n"
            "|| 2 : �������������� ���� ������� ||\n"
            "|| 3 : ��������� ������            ||\n"
            "|| 4 : ���������                   ||\n"
            "|| 0 : ������� ���������           ||\n"
            "::=================================::\n"
            "> ");
        c = _getch();
        system("cls");
    }
    return c;
}

void main(void)
{
    int Select;
    while ((Select = Menu()) != '0' && Select != 27)
        switch (Select)
        {
        case '1':
            selfwrite();
            break;

        case '2':
            autowrite();
            break;

        case '3':
            matrix();
            break;

        case '4':
            str();
            break;
        }
}