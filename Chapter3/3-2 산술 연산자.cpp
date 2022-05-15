#include <iostream>

using namespace std;

int _3_2()
{
	// 산술 연산자 arithmetic operators
	{
		int x = 1;
		int y = -x; // 빼기의 의미라기 보단 x의 부호를 바꾸어 주는 것 1 * -1; 
					// 주의 단항 연산자는 꼭 붙여 쓸 것 !
	}
	
	// 나머지 연산자
	{
		int x = 7;
		int y = 4;
		int z = x % y;

		// 정수 나머지 실수 나머지 결과가 다름
		cout << x / y << endl;					// 정수 정수
		cout << float(x) / y << endl;			// 실수 정수
		cout << x / float(y) << endl;			// 정수 실수
		cout << float(x) / float(y) << endl;	// 실수 실수
	
		// 둘 중 하나만 실수면 실수로 나옴

		cout << -5 / 2 << endl;
		// 버림 -2 c++ 11부터.
		cout << -5 % 2 << endl;
		// 왼쪽에 오는 숫자의 부호에 따른다.
	}

	// 대입 연산자
	{
		int x = 7;
		int y = 4;

		int z = x;
		z += y;			// z = z + y;
	}

	return 0;
}