
//***********�R�A�~���ܼ�***********
#include <iostream>
#include <cstdlib>

using namespace std;
void odd(void);

int a;

main()
{
	odd();
	cout << "after odd(), a=" << a << endl; 
}
void odd(void)
{
	a = 21;
	if(a%2==1)
		cout << "a=" << a << ", a�O�_��" << endl;
	else 
		cout << "a=" << a << ", a�O����" << endl; 
}
