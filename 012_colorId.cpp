#include <iostream>
using namespace std;

class Color {
private:
    float r, g, b;
    int id;
    static int idCounter;
public:
    /*Color() :r(0), g(0), b(0), id(idCounter++) {}*/
    Color() {
        r = 0;
        g = 0;
        b = 0;
        id = idCounter++;
    }
    /*Color(float r, float g, float b) : r(r), g(g), b(b), id(idCounter++) {}*/
    Color(float r, float g, float b) {
        this->r = r;
        this->g = g;
        this->b = b;
        this->id = idCounter++;
    }

    float GetR() { return r; }
    float GetG() { return g; }
    float GetB() { return b; }
    int GetId() { return id; }
    static Color MixColors(Color a, Color b) {
        return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
    }
};
int Color::idCounter = 1;

int main()
{
    Color red = Color(1, 0, 0);
    Color blue = Color(0, 0, 1);
    Color purple = red.MixColors(red, blue);

    cout << purple.GetR() << ", " << purple.GetG() << ", " << purple.GetB() << endl;
    cout << "red : id = " << red.GetId() << endl;
    cout << "blue : id = " << blue.GetId() << endl;
    cout << "purple : id = " << purple.GetId() << endl;
}
