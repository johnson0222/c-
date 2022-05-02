#include <iostream>
#include <cstdlib>

using namespace std;

void func(void);

main()
{
	int a = 10;
	cout << "In Main(),a=" << a << endl;
	func();
	cout << "In Main(),a=" << a << endl; 
}
void func (void)
{
	int a= 30;
	cout << "In func(),a="<< a << endl;
	return;
}
