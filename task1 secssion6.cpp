#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int summation(const vector<int>&v) {
	int sum = 0;
	for (int number:v) {
		sum += number;
	}
	return sum;

}

int main () {
	vector<int>	number = { 2,4,6,8 };

	cout << summation(number);
}
