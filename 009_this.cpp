#include <iostream>
using namespace std;

class MyClass {
public:
    void PrintThis() {
        cout << "나의 주소 : " << this << endl;
    }
};

int main()
{
    MyClass a, b;

    cout << "a의 주소 : " << &a << endl;
    cout << "b의 주소 : " << &b << endl;

    a.PrintThis();
    b.PrintThis();
   
}
