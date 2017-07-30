#include <iostream>
#include <climits>

int main(){
	using namespace std;
	int n_int = INT_MAX;
	short  n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << sizeof n_int << endl;
	cout << sizeof n_short << endl;
	cout << sizeof n_long << endl;
	cout << sizeof n_llong << endl;
	cout << endl;

	cout << "max value" << endl;
	cout << n_int << endl;
	cout << n_short << endl;
	cout << n_long << endl;
	cout << n_llong << endl;
	cout << endl;

	cout << "min int value=:" << INT_MIN << endl;
	cout << "bits per bite = " << CHAR_BIT << endl;
	return 0;
}
