#include<stdio.h>

/*
ָ��ͱ����Ĺ�ϵ
*/
int pointer01()
{
    int a, b, temp;
    int* p1, * p2;
    p1 = &a;
    p2 = &b;
    printf("������a��b����ֵ\n");
    scanf_s("%d %d", p1, p2);
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("a=%d b=%d\n", a, b);
    printf("*p1=%d *p2=%d\n", *p1, *p2);
    return 0;
}