#include <iostream>
#include <iomanip>
using namespace std;

class TemperatureConverter {
private:
    double celsius;

public:
    void setTemperature(double temp) {
        celsius = temp;
    }

    double toFahrenheit() {
        return (9.0 / 5.0) * celsius + 32;
    }

    double toKelvin() {
        return celsius + 273.15;
    }

    void display() {
        cout << fixed << setprecision(2);
        cout << "Temperature in Fahrenheit: "
             << toFahrenheit() << endl;
        cout << "Temperature in Kelvin: "
             << toKelvin() << endl;
    }
};

int main() {
    TemperatureConverter temp;
    double celsius;

    cin >> celsius;

    temp.setTemperature(celsius);
    temp.display();

    return 0;
}
