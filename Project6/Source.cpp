#include<iostream>
using namespace std;

 int main()
{
	setlocale(LC_ALL, "Rus");
	double a;
	cout << "¬ведите цену: " << endl;
	cin >> a;
	int b;
	cout << "¬ведите скидку:" << endl;
	cin >> b;
		double c = a - ((a / 100) * b);
	cout << "÷ена со скидкой = " << c;
	



}
