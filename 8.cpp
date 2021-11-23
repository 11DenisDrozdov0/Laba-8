
#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int x, k =10 ;
	cout << "Enter x =";
	cin >> x;
	float rez;
	int sum = 0;
	for (int n = 1; n < 6; n++)
	{
		sum = sum + log(n*x)-pow(x,2);
	}
	rez = sum;
	cout << "Y=" << rez << endl;
	//Зміна для завдання
	system("pause");
	return 0;
}
