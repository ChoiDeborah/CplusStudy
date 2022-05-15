#include <iostream>

using namespace std;

int getPrice(bool onSale)
{
	if (onSale) return 10;
	else return 100;
}

int _3_4()
{
	// size of
	{
		// 데이터 형의 크기를 알고 싶을 때 사용
		float a;
		sizeof(float);	// 4 byte
		sizeof(a);

		// sizeof는 연산자이다....!
	}

	// comma operator
	{
		int x = 3;
		int y = 10;
		int z = (++x, ++y);

		cout << x << " " << y << " " << z << endl;

		//주의 사항
		{
			int a = 1, b = 10;
			int z;

			z = a, b;	// 연산자의 우선순위가 = 보다 낮음

			cout << z << endl;	// output : 1
		}
	}

	// conditional operator(arithmetric if) 조건부 연산자 
	{
		bool onSale = true;

		{
			const int price = (onSale == true) ? 10 : 100;
			cout << price << endl;
		}

		{
			const int price = getPrice(onSale);
			cout << price << endl;
		}
		//int price;
		//if (onSale)
		//	price = 10;
		//else
		//	price = 100;
		
		{
			int x = 5;
			cout << ((x % 2 == 0) ? "even" : "odd") << endl;
		}
	}

	return 0;
}