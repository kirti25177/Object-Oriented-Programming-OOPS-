
#include <iostream>
using namespace std;
class Rocket {
private:
    int initialFuel;
    int fuelUsedPerMinute;
    int flightDuration;
public:
    void getInput() {
        cin >> initialFuel;
        cin >> fuelUsedPerMinute;
        cin >> flightDuration;
    }
    int remainingFuel() {
        int fuelConsumed = fuelUsedPerMinute * flightDuration;
        if (fuelConsumed >= initialFuel) {
            return 0;
        }
        return initialFuel - fuelConsumed;
    }
};

int main() {
    Rocket rocket;
    rocket.getInput();
    cout << rocket.remainingFuel();
    return 0;
}
