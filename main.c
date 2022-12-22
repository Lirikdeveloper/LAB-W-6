#include <stdio.h>
#include <Windows.h>
#include "math.h"
#include "locale.h"

double series(double, double);

int main() {
    setlocale(LC_CTYPE, "RUSSIAN");
    float A=0,B=0,r=0,eps=0, x;
    printf("Выводится таблица функции, заданная рядом Тейлора");
    while (A >= B )
    {
        printf("\nВведите границы интервала\n\n\tЛевая: ");
        scanf("%6f", &A);
        printf("\n\tПравая:");
        scanf("%5f", &B);
        if (A >= B)
        {
            printf("\nЛевая должна быть меньше правой! Повторите.");
        }
    }
    while (r >= B-A || r <= 0) {
        printf("\nВведите шаг табулирования:");

        scanf("%5f",&r);

        if (r >= B-A || r <= 0)
        {
            printf("\nШаг должен быть меньше длины интервала!\n\t0 < r < %f",B-A);
        }
    }
    while (0 >= eps || eps >= 1) {
        printf("\nВведите погрешность вычисления\n\t0 < eps < 1:");

        scanf("%5f",&eps);

        if (0 >= eps || eps >= 1)
        {
            printf("\nВведено недопустимое значение.");
        }
    }
    printf("\n\tЛевая граница %lf\n"
           "\tПравая граница %lf\n"
           "\tШаг табулирования %lf\n"
           "\tПогрешность равна %lf\n", A,B, r, eps);
//    printf("%f %f %f %f",A,B,r,eps);

    printf("\t\tТаблица\n"
           "+---------------------------------------+\n"
           "|\tx\t|\tFx\t\t|\n"
           "+---------------------------------------+\n");

    x = A;
    while (x<=B)
    {
        printf("|\t%.2lf\t|\t%.6lf\t|\n", x, series(x, eps));
        x = x+r;
    }
    printf("+---------------------------------------+\n");

    return 0;

}

double series(double x, double eps)
{
    double sum, ai;
    int i = 2;
    ai = -(x/180);
    sum = ai;
    while (fabs(ai)<=eps)
    {
        ai = ai*((3*x-2*i*x)/((8*(i*i*i))-(8*(i*i))-(2*i)+2));
        sum = sum + ai;
        i = i + 1;
    }
    return (sum);
}
