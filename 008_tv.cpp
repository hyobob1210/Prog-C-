#include <iostream>
using namespace std;

struct TV {
private:
    bool poweron;
    int channel;
    int volume;
public:
    void on() {
        poweron = true;
    }
    void off() {
        poweron = false;
    }
    void setChannel(int ch) {
        if (ch >= 0 && ch <= 1000)
            channel = ch;
    }
    int getChannel() {
        return channel;
    }
    void setVolume(int vol) {
        if (vol >= 1 && vol <= 100)
            volume = vol;
    }
    int getVolume() {
        return volume;
    }
};

int main()
{
    TV tv;

    tv.on();
    tv.setChannel(10);
    tv.setVolume(50);

    cout << "현재 채널은 " << tv.getChannel() << endl;
    cout << "현재 볼륨은 " << tv.getVolume() << endl;
}
