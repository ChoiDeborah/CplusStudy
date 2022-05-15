#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int _3_3()
{
	{
		int x = 5;
		int y = ++x; // 앞에도 뒤에도 붙일 수 있다. 
		int z = x++;

		cout << y << endl;	// 6
	}

	{
		int x = 6, y = 6;
		cout << x	<< " " << y		<< endl;
		cout << ++x << " " << --y	<< endl;
		// output
		// 6 6
		// 7 5
	}

	{
		int x = 6, y = 6;
		cout << x	<< " " << y		<< endl;
		cout << x++ << " " << y--	<< endl;
		// output
		// 6 6
		// 6 6
	}

	{
		int x = 6, y = 6;
		cout << x	<< " " << y		<< endl;
		cout << x++ << " " << y--	<< endl;
		cout << x	<< " " << y		<< endl;
		// output
		// 6 6
		// 6 6
		// 7 5
	}


	{
		int x = 6, y = 6;
		cout << x	<< " " << y		<< endl;
		cout << ++x << " " << --y	<< endl;
		cout << x	<< " " << y		<< endl;
		cout << x++	<< " " << y--	<< endl;
		cout << x	<< " " << y		<< endl;
		
		// output
		// 6 6
		// 7 5
		// 7 5
		// 7 5
		// 8 4
	}

	{
		int x = 1;
		int v = add(x, ++x);	// 이 따위로 쓰지마세요...

		cout << v << endl;		// output : 4
	}

	return 0;
}