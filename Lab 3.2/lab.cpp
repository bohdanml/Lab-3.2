// Lab_03_2.cpp
// < Михайлів Богдан >
// ??????????? ?????? ? 3.2
// ????????????, ?????? ????????: ??????? ? ???????????.
// Варіант 16
#include <iostream>
using namespace std;
int main()
{
	double x; // ??????? ????????
	double a; // ??????? ????????
	double b; // ??????? ????????
	double c; // ??????? ????????
	double F; // ????????? ?????????? ??????
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

		cout << "x = "; cin >> x;

	// ?????? 1: ???????????? ? ?????????? ?????
	if (x == 0 && b != 0)
		F =a*pow(x+c,2);
	if (x == 0 && b == 0)
		F = (x-a)/ -c;
	if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
		F = a+(x/c);
	cout << endl;
	cout << "1) F = " << F << endl;
	// ?????? 2: ???????????? ? ?????? ?????
	if (x == 0 && b != 0)
		F = a * pow(x + c, 2);
	else
		if (x == 0 && b == 0)
			F =(x - a) / -c;
		else
			F = a + (x / c) ;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
