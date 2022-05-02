#include <iostream>
#include <cstdlib>

using namespace std;
void temp(int x,int y);
void do_somthing(int);
main ()
{
	int a= 10,b=20;
	cout << a <<" " << b << endl;
	swap(a,b);
	cout << a <<" " << b << endl;
	do_somthing(121); 
}
void swap(int x , int y)
{
	int temp = x;
	x = y;
	y = temp;
}

void do_somthing(int n = 22)
{
	cout << n << endl;
}
