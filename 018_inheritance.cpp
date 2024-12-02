#include <iostream>
using namespace std;

class Base {
public:
    int bNum;
    void bFunc() {
        cout << "hello from Base!" << endl;

    }
};

class Derived : public Base {
public:
    int dNum;
    void dFunc() {
        cout << "Hello from Derived!" << endl;
    }
};

int main()
{
    Base b;
    Derived d;

    b.bFunc();
    b.bNum = 1;
    cout << "b.bNum = " << b.bNum << endl;

    d.bFunc();
    d.bNum = 2;
    cout << "d.bNum = " << d.bNum << endl;

    d.dFunc();
    d.dNum = 1;
    cout << "d.dNum = " << d.dNum << endl;
}
