#include <iostream>
#include "struct-job.h"

template <typename T> void Swap(T &a, T &b);

template <> void Swap<job>(job &j1, job &j2);

void show(job &j);

template <typename T>
void Swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &j1, job &j2) {
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void show(job &j) {
	using namespace std;
	cout << j.name << ": $" << j.salary << " on floor " << j.floor << endl;
}