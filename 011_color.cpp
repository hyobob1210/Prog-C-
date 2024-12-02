#include <iostream>
using namespace std;

class Color {
private:
    float r, g, b;
public:
    Color() :r(0), g(0), b(0) {}
    Color(float r, float g, float b) : r(r), g(g), b(b) {}

    float GetR() { return r; }
    float GetG() { return g; }
    float GetB() { return b; }
    static Color MixColors(Color a, Color b) {
        return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
    }
};

int main()
{
    Color red = Color(1, 0, 0);
    Color blue = Color(0, 0, 1);
    Color purple = red.MixColors(red, blue);

    cout << red.GetR() << ", " << red.GetG() << ", " << red.GetB() << endl;
    cout << blue.GetR() << ", " << blue.GetG() << ", " << blue.GetB() << endl;
    cout << purple.GetR() << ", " << purple.GetG() << ", " << purple.GetB() << endl;
}
