#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int min;
    int sec;

    // Helper function to handle overflow of seconds and minutes
    void normalize() {
        if (sec >= 60) {
            min += sec / 60;
            sec %= 60;
        }
        if (min >= 60) {
            hour += min / 60;
            min %= 60;
        }
        if (hour >= 24) {
            hour %= 24;
        }
    }

public:
    Time(int h = 0, int m = 0, int s = 0) : hour(h), min(m), sec(s) {}

    // Pre-increment
    Time& operator++() {
        ++sec;
        normalize();
        return *this;
    }

    // Post-increment
    Time operator++(int) {
        Time temp = *this;
        ++sec;
        normalize();
        return temp;
    }

    void display() const {
        cout << "Time: " << hour << ":" << min << ":" << sec << endl;
    }
};

int main() {
    Time t1(23, 59, 58);

    cout << "Initial Time: ";
    t1.display();

    ++t1;  // Pre-increment
    cout << "After Pre-increment: ";
    t1.display();

    t1++;  // Post-increment
    cout << "After Post-increment: ";
    t1.display();

    return 0;
}
