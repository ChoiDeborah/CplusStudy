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


		//cout << x && y << endl;	// ������ �켱���� �ȸ���
		cout << (x && y) << endl;

		// ���� false �� ��� �� ������ ���� ������ ����

		// && || �� �켱������ ���� ���� && �̴� ����
	}


	return 0;
}