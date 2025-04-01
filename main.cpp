#include <iostream>

using namespace std;

int main() 
{
	int Number1 = 5;
	int Number2 = 4;

	float Value1 = 5.5f;
	float Value2 = 4.4f;
	
	cout << Number1 + Number2 << endl;
	cout << Number1 - Number2 << endl;
	cout << Number1 * Number2 << endl;
	cout << Number1 / Number2 << endl;
	cout << Number1 % Number2 << endl;

	cout << Value1 + Value2 << endl;
	cout << Value1 - Value2 << endl;
	cout << Value1 * Value2 << endl;
	cout << Value1 / Value2 << endl;

	return 0;
}

/*
Output:
	cout << (int)(Value1 + Value2) << endl;
	cout << (float)(Number1 + Number2) << endl;

*/