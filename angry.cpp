#include <iostream>

int main(){
	using namespace std;
	int i[7],j[7];
	int n = 0;
	int max_ungry=0;

	do
	{
		cout << "please type learning time" << endl;
		cin >> i[n] >> j[n];
		
		if ( i[n] + j[n] >= max_ungry)
			max_ungry = i[n]+j[n];
		n++;
	}while (n<=6);
	
	if (max_ungry < 8)
	{
		cout << "0" << endl;
		return 1;
	}

	for(n=0; n<=6; n++)
	{
		if (i[n] + j[n] == max_ungry)
			cout << "The day that most ungry is" << n+1 << endl;
	}

	return 0;
}
