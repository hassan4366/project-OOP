#include <iostream>
using namespace std;


class Device {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
    virtual ~Device() { cout << "Device Destroyed\n"; }
};


class TV : public Device {
public:
    void turnOn() override {
        cout << "TV is turning on\n";
    }

    void turnOff() override {
        cout << "TV is turning off\n";
    }

    ~TV() { cout << "TV Destroyed\n"; }
};


class AC : public Device {
public:
    void turnOn() override {
        cout << "AC is cooling\n";
    }

    void turnOff() override {
        cout << "AC is shutting down\n";
    }

    ~AC() { cout << "AC Destroyed\n"; }
};

class Radio : public Device {
public:
    void turnOn() override {
        cout << "Radio is playing\n";
    }

};

int main() {
    Device *d1 = new TV;
    Device *d2 = new AC;

    d1->turnOn();  // TV is turning on
    d1->turnOff(); // TV is turning off
    delete d1;     // TV Destroyed, Device Destroyed

    cout << "----------\n";

    d2->turnOn();  // AC is cooling
    d2->turnOff(); // AC is shutting down
    delete d2;     // AC Destroyed, Device Destroyed

    // Radio *r = new Radio; // خطأ: Radio تجريدي لأنه معرفش turnOff

    return 0;
}