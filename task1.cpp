#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "entre the number:";
	cin >> number;
	if (number>0) {
		cout << "the number is postive";
	}
	else if(number<0){
		cout << "the number is negtive";
	}
	else {
		cout << "the number is equel 0";
	}
}

