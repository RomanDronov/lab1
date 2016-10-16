#include <iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int num;
	cin >> num;
	for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
		if (num & (1 << i))
		{
			cout << 1;
		}
		else cout << 0;
	}
	return 0;
}