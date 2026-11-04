#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, ".UTF8");
    int m;

    printf("Введите возраст в месяцах: ");
    scanf("%d", &m);

    if (m < 0)
        printf("Ошибка: возраст не может быть отрицательным\n");
    else if (m < 2)
        printf("Новорожденный\n");
    else if (m < 12)
        printf("Младенец\n");
    else if (m < 36)
        printf("Раннее детство\n");
    else if (m < 84)
        printf("Дошкольник\n");
    else if (m < 156)
        printf("Школьник\n");
    else if (m < 204)
        printf("Подросток\n");
    else
        printf("Возраст вне диапазона детских категорий\n");

    return 0;
}