#include <iostream>

using namespace std;

extern "C" long Add(long,long);
extern "C" long Sub(long,long);
extern "C" void TellC(long);


void main()
{
	
	cout << "Ingrese el primer numero: " << endl;
	int num1 = 0;
	cin >> num1;
	cout << "Ingrese el segundo numero: " << endl;
	int num2 = 0;
	cin >> num2;

	long a = Add(num1,num2);
	cout << num1 << " + " << num2 << " = " << a << endl;

	long b = Sub(num1, num2);
	cout << num1 << " - " << num2 << " = " << b << endl;

	system("PAUSE");
}

void TellC(long Value)
{
	cout << "Rresultado " << Value << " Desde una funcion de ensamblador" << endl;
}