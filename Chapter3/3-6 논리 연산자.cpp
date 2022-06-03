#include<iostream>

using namespace std;

int _3_6()
{
	// logical NOT
	{
		bool x = true;

		cout << !x << endl;
	}

	// logical AND
	{
		bool x = true;
		bool y = false;


		//cout << x && y << endl;	// 연산자 우선순위 안맞음
		cout << (x && y) << endl;

		// 앞이 false 일 경우 뒤 연산은 하지 않으니 주의

		// && || 중 우선순위가 높은 것은 && 이니 주의
	}


	return 0;
}