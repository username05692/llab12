#include <stdio.h> // ���������� ������� 
#include <math.h>

int main() {
    double x; //���������� ������
    double a, r, b;

    printf("Enter a, b, r: "); // ���� ����������� �� ����� �����������
    scanf_s("%lf%lf%lf", &a, &b, &r); // ��������� ������� ������

    if (a < b) { // 1 �����
        if (r != 0) { // ��������� ����, ��� 
            x = pow(fabs(r), 1.0 / 4.0) * (a * pow(b, 2) - 1); // ����������
            printf("a=%lf b=%lf x=%lf", a, b, x);
        }
        else {
            printf("a=%lf b=%lf x not found", a, b);//���� ��������� ���� �� ������� 
        }
    }
    else {// 2 �����
        double m = (b + 1) / (1 + pow(a, 2));// ���
        if (m < 0) {// ���������� ����
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
