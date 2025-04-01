#include <iostream>

using namespace std;

int main() 
{
	int Number1 = 5;
	int Number2 = 4;

	float Num1 = 5.5f;
	float Num2 = 4.4f;
	

	int Number3 = Number1 + Number2;
	cout << Number3 << endl;
	int Number4 = Number1 - Number2;
	cout << Number4 << endl;
	int Number5 = Number1 * Number2;
	cout << Number5 << endl;
	int Number6 = (float)Number1 / (float)Number2;
	cout << Number6 << endl;
	int Number7 = Number1 % Number2;
	cout << Number7 << endl;

	float Num3 = Num1 + Num2;
	cout << Num3 << endl;
	float Num4 = Num1 - Num2;
	cout << Num4 << endl;
	float Num5 = Num1 * Num2;
	cout << Num5 << endl;
	float Num6 = Num1 / Num2;
	cout << Num6 << endl;
	float Num7 = (int)Num1 % (int)Num2;
	cout << Num7 << endl;

	return 0;
}