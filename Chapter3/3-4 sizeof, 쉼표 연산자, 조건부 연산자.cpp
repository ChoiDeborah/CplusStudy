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
		// ������ ���� ũ�⸦ �˰� ���� �� ���
		float a;
		sizeof(float);	// 4 byte
		sizeof(a);

		// sizeof�� �������̴�....!
	}

	// comma operator
	{
		int x = 3;
		int y = 10;
		int z = (++x, ++y);

		cout << x << " " << y << " " << z << endl;

		//���� ����
		{
			int a = 1, b = 10;
			int z;

			z = a, b;	// �������� �켱������ = ���� ����

			cout << z << endl;	// output : 1
		}
	}

	// conditional operator(arithmetric if) ���Ǻ� ������ 
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