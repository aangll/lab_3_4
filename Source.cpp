// Lab_03_4.cpp
// ������� �������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 17
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((y <= sqrt(-(x * x) - 2 * x * R) && x >= -R && x <= 0 && y >= 0) ||
		(y >= -sqrt(2 * x * R - x * x) && x >= 0 && x <= R && y <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
