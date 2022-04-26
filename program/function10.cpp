//https://shengyu7697.github.io/cpp-static/ static把σlink 
//***********繰篈场/办跑计***********
#include <iostream>
#include <cstdlib>

using namespace std;
void odd(void);

int a;

main()
{
	a = 14 ;
	cout << a <<endl;
	odd();
	cout << "after odd(), a=" << a << endl; 
}

void odd(void)
{
	a = 10;
	if(a%2==1)
		cout << "a=" << a << ", a琌计" << endl;
	else 
		cout << "a=" << a << ", a琌案计" << endl; 
}
