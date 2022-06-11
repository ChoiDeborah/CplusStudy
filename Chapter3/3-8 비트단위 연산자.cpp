#include <iostream>
#include <bitset>


using namespace std;

int _3_8()
{
	// << left shift
	// >> right shift		// cout cin 에서 쓰이는 건 다른거
	// ~, &, |, ^			// bitwise xor는 있음

	// left shift  << 연산자
	{
		unsigned int a = 1;
		cout << std::bitset<4>(a) << endl;

		unsigned int b = a << 1;
		cout << std::bitset<4>(b) << endl;		// 어떤 의미?	X << N -> X * 2^N 제곱

	}

	// right shft >> 연산자
	{
		unsigned int a = 1024;

		cout << std::bitset<16>(a) << " " << a << endl;
		
		cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;
		cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;
		cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;
		cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;		// 어떤 의미? X >> N -> X / 2^N 제곱
	}
		
	// & and, | or, ^ xor 연산자
	{
		unsigned int a = 0b1100;	// 이진 수 표현 법 0b
		unsigned int b = 0b0110;

		cout << a << " " << b << endl;

		cout << std::bitset<4>(a & b) << endl;		// bitwise AND
		cout << std::bitset<4>(a | b) << endl;		// bitwise OR
		cout << std::bitset<4>(a ^ b) << endl;		// bitwise XOR
	}


	return 0;
}