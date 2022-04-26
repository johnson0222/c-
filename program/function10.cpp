
//***********繰篈场跑计***********
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
		cout << "a=" << a << ", a琌计" << endl;
	else 
		cout << "a=" << a << ", a琌案计" << endl; 
}
