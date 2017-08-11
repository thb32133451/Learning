#include <iostream>
using namespace std;

int swap(int & a);

int main(){
    int a = 10;
    int & swaps_a = a;

    swaps_a = 20;
    cout << swap(a) << endl;;
    cout << a << endl;;

    return 0;
}

int swap(int & a){
    a*=a;
    return a;
}
