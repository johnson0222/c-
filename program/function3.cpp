#include <iostream>
#include <cstdlib>

using namespace std;

void func (int a,int b)
{
	a+=10;
	b+=10;
	cout << "In func()a =" << a << ",b=" << b << endl;
		
}

main()
{
	int a = 3,b = 6;
	cout << "In man(a,b),a=" << a << ",b= " << b << endl;
	func(a,b); // fun(a=3,b=6)傳到func()函數,這時函數func(a=10,b=10),因為接收到main的func(3,6),so func(a=3+10,b=6+10) 
	//cout << "After fun(),a="<< a <<",b=" <<b <<endl;
	   
}
