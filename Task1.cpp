#include <stdio.h>
#include <Windows.h>
#include <math.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b;

    printf("������ ����� a: ");
    scanf_s("%d", &a);

    printf("������ ����� b: ");
    scanf_s("%d", &b);

    if (a > b) {
        a = 3 * a;
        b = (a + b) / 2;
    }
    else {
        b = 3 * b;
        a = (a + b) / 2;
    }

    printf("������ �������� a: %d\n", a);
    printf("������ �������� b: %d\n", b);

    return 0;
}