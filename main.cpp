#include <iostream>

using namespace std;

int main() 
{
	int Number1 = 5;
	int Number2 = 4;

	float A = 5.5f;
	int B = (int)A;
	

	int Number3 = Number1 + Number2;
	cout << Number3 << endl;
	int Number4 = Number1 - Number2;
	cout << Number4 << endl;
	int Number5 = Number1 * Number2;
	cout << Number5 << endl;
	float Number6 = (float)Number1 / (float)Number2;
	cout << Number6 << endl;
	int Number7 = Number1 % Number2;
	cout << Number7 << endl;

	return 0;
}