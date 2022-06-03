#include<iostream>

using namespace std;

int _3_5()
{
	int x, y;
	cin >> x >> y;
	cout << "Your input values are : " << x << " " << y << endl;

	if (x == y)
		cout << "equal" << endl;

	if (x != y)
		cout << "Not equal" << endl;

	if (x > y)
		cout << "x is greater than y" << endl;

	if (x < y)
		cout << "x is less than y" << endl;
	
	if (x >= y)
		cout << "x is greater than y or equal to y" << endl;

	if (x <= y)
		cout << "x is less than y or equal to y" << endl;
	
	// 부동 소수점

	double d1(100 - 99.99); // 0.001
	double d2(10 - 9.99);	// 0.001

	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		if (d1 > d2)
			cout << "d1 > d2" << endl;
		else
			cout << "d1 < d2" << endl;

		cout << "Not Equal" << endl;
	}

	const double epsilon	= 1e-10;
	const double diff		= std::abs(d1 - d2);

	if (diff < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;
}