#include <stdio.h> // підключення бібліотек 
#include <math.h>

int main() {
    double x; //оголошення змінних
    double a, r, b;

    printf("Enter a, b, r: "); // вивід повідомлення на екран користувача
    scanf_s("%lf%lf%lf", &a, &b, &r); // присвоєння значень змінним

    if (a < b) { // 1 умова
        if (r != 0) { // вкладений цикл, ОДЗ 
            x = pow(fabs(r), 1.0 / 4.0) * (a * pow(b, 2) - 1); // розрахунки
            printf("a=%lf b=%lf x=%lf", a, b, x);
        }
        else {
            printf("a=%lf b=%lf x not found", a, b);//якщо вкладений цикл не спрацює 
        }
    }
    else {// 2 умова
        double m = (b + 1) / (1 + pow(a, 2));// ОДЗ
        if (m < 0) {// вклдадений цикл
            printf("Logarithm. Expression cannot be < 0");
        }
        else
        {
            x = log((b + 1) / (1 + pow(a, 2)));
            printf("a=%lf b=%lf x=%lf", a, b, x);
        }
    }

    return 0;
}
