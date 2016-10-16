#include <iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
int main() {
	int num;
	cin >> num;
	for (int i = sizeof(int) * 8 - 1; i >= 0; --i) {
		if (num & (1 << i)) //сдвиг 1 на i бит (в данном случае на числа от 32 и до 0), дале происходит выполнение операции &(OR) она изменяет только значение i бита, все остальные не изменяются
		{
			cout << 1;
		}
		else cout << 0;
	}
	return 0;
}
