#include <iostream>
using namespace std;

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void swap(double& x, double& y) { // 레퍼런스 변수 사용
    double t = x;
    x = y;
    y = t;
}

int main()
{
    int a = 4;
    int b = 5;

    double x = 1.1234;
    double y = 5.4321;

   /* swap(&a, &b);*/
    swap(a, b);
    swap(x, y);

    cout << a << ' ' << b << endl;
    cout << x << ' ' << y << endl;
}
