#include <iostream>
#include <string.h>
using namespace std;

class String {
private:
    char* strData;
    int len;
public:
    String() {
        strData = NULL;
        len = 0;
    }
    String(const char* str) {
        len = strlen(str);
        // strData = str; // 얕은 복사
        strData = new char[len + 1];
        strcpy_s(strData, len + 1, str);
    }
    String(const String& rhs) {
        len = rhs.len;
        strData = new char[len + 1];
        strcpy_s(strData, len + 1, rhs.strData);
    }
    ~String() {
        if (strData != NULL)
            delete[] strData;
    }

    const char* GetStrData() {
        if (strData)
            return strData;
        return "";
    }
    int GetLength() {
        return len;
    }
};

int main()
{
    String s1;
    String s2("Hello");

    cout << s1.GetLength() << endl;
    cout << s1.GetStrData() << endl;
    cout << s2.GetLength() << endl;
    cout << s2.GetStrData() << endl;

    String s("Hello");
    String t = s;
}