#include<iostream>
using namespace std;

 int main()
{
	setlocale(LC_ALL, "Rus");
	double a;
	cout << "������� ����: " << endl;
	cin >> a;
	int b;
	cout << "������� ������:" << endl;
	cin >> b;
		double c = a - ((a / 100) * b);
	cout << "���� �� ������� = " << c;
	



}
