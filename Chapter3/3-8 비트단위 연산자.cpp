#include <iostream>
#include <bitset>


using namespace std;

int _3_8()
{
	// << left shift
	// >> right shift		// cout cin ���� ���̴� �� �ٸ���
	// ~, &, |, ^			// bitwise xor�� ����

	// left shift  << ������
	{
		unsigned int a = 1;
		cout << std::bitset<4>(a) << endl;

		unsigned int b = a << 1;
		cout << std::bitset<4>(b) << endl;		// � �ǹ�?	X << N -> X * 2^N ����

	}

	// right shft >> ������
	{
		unsigned int a = 1024;

		cout << std::bitset<16>(a) << " " << a << endl;
		
		cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
		cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
		cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
		cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;		// � �ǹ�? X >> N -> X / 2^N ����
	}
		
	// & and, | or, ^ xor ������
	{
		unsigned int a = 0b1100;	// ���� �� ǥ�� �� 0b
		unsigned int b = 0b0110;

		cout << a << " " << b << endl;

		cout << std::bitset<4>(a & b) << endl;		// bitwise AND
		cout << std::bitset<4>(a | b) << endl;		// bitwise OR
		cout << std::bitset<4>(a ^ b) << endl;		// bitwise XOR
	}


	return 0;
}