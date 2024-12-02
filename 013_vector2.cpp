#include <iostream>
using namespace std;

class Vector2 {
private:
    float x, y;
public:
    Vector2();
    Vector2(float x, float y);
    float GetX() const;
    float GetY() const;
    static Vector2 Sum(Vector2 a, Vector2 b);
    Vector2 Add(Vector2 other);
};
Vector2 Sum(Vector2 a, Vector2 b);

int main()
{
    Vector2 a(2, 3);
    Vector2 b(5, 6);
    Vector2 c1 = Sum(a, b);                 // 전역함수 이용
    Vector2 c2 = Vector2::Sum(a, b);        // 정적메소드 이용
    Vector2 c3 = a.Add(b);                  // 클래스의 멤버함수
    cout << "a = (" << a.GetX() << ", " << a.GetY() << ")" << endl;

    cout << "c1 = (" << c1.GetX() << ", " << c1.GetY() << ")" << endl;
    cout << "c2 = (" << c2.GetX() << ", " << c2.GetY() << ")" << endl;
    cout << "c3 = (" << c3.GetX() << ", " << c3.GetY() << ")" << endl;
}

Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
float Vector2::GetX() const { return x; }
float Vector2::GetY() const { return y; }
Vector2 Vector2::Sum(Vector2 a, Vector2 b) {
    return Vector2(a.x + b.x, a.y + b.y);
}

Vector2 Vector2::Add(Vector2 other) {
    return Vector2(this->x + other.x, this->y + other.y);
}

Vector2 Sum(Vector2 a, Vector2 b) {
    return Vector2(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}
