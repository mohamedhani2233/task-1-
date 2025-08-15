#include <iostream>
using namespace std;

int main() {
    int arr[4];
    int maxVal;

    cout << "Enter 4 integers: ";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    maxVal = arr[0];

   
    for (int i = 1; i < 4; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

        cout << "The maximum number is: " << maxVal << endl;

}
