#include <iostream>
using namespace std;

class DeliveryTimeEstimator {
public:

    int estimateTime(int distanceInKm) {
        return (distanceInKm / 10) + 1;
    }

    int estimateTime(string cityName) {
        if (cityName == "Cairo" || cityName == "cairo") {
            return 2;
        } else if (cityName == "Alex" || cityName == "alex") {
            return 3;
        } else {
            return 5;
        }
    }
};

int main() {
    DeliveryTimeEstimator estimator;

    int distance;
    string city;

    cout << "Enter distance in KM: ";
    cin >> distance;
    cout << "Estimated Delivery Time: " 
         << estimator.estimateTime(distance) 
         << " hours" << endl;

    cout << "Enter city name: ";
    cin >> city;
    cout << "Estimated Delivery Time: " 
         << estimator.estimateTime(city) 
         << " hours" << endl;

    return 0;
}
