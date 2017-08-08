#include <iostream>

int main() {
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter charactors;enter # to quit:\n";
	cin.get(ch);
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl <<count << " charactor read\n";
	
	system("pause");
	
	return 0;
}