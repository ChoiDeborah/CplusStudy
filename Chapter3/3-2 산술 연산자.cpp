#include <iostream>

using namespace std;

int _3_2()
{
	// ��� ������ arithmetic operators
	{
		int x = 1;
		int y = -x; // ������ �ǹ̶�� ���� x�� ��ȣ�� �ٲپ� �ִ� �� 1 * -1; 
					// ���� ���� �����ڴ� �� �ٿ� �� �� !
	}
	
	// ������ ������
	{
		int x = 7;
		int y = 4;
		int z = x % y;

		// ���� ������ �Ǽ� ������ ����� �ٸ�
		cout << x / y << endl;					// ���� ����
		cout << float(x) / y << endl;			// �Ǽ� ����
		cout << x / float(y) << endl;			// ���� �Ǽ�
		cout << float(x) / float(y) << endl;	// �Ǽ� �Ǽ�
	
		// �� �� �ϳ��� �Ǽ��� �Ǽ��� ����

		cout << -5 / 2 << endl;
		// ���� -2 c++ 11����.
		cout << -5 % 2 << endl;
		// ���ʿ� ���� ������ ��ȣ�� ������.
	}

	// ���� ������
	{
		int x = 7;
		int y = 4;

		int z = x;
		z += y;			// z = z + y;
	}

	return 0;
}