#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int num;
	char answer = 'Y';
	int n = 0;
	
	
	while (answer == 'Y'|| answer=='y') {
		cout << "Type number that you want to convert to binary code:" << endl;
		cin >> num;
		cout << "Binary code is: ";
		for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
			if (num & (1 << i))
			{
				cout << 1;
			}
			else cout << 0;
			n++;
			if (n % 8 == 0) {
				cout << " ";
			}

		}
		cout << endl;
		cout << "want to continue? If yes type Y if no type whatever u want" << endl;
		cin >> answer;
	}
	return 0;
}