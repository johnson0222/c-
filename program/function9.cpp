//https://shengyu7697.github.io/cpp-extern/ ---->�Ѧ�link 

#include <iostream>
#include <cstdlib>

using namespace std;
void peri(double),area(double);

double pi=3;

main()
{
	//double pi = 3;
	extern double pi; //extern ��������ܼƪ�value 
	double r = 2.0;
	cout << "pi=" << pi << endl;
	cout <<"radius=" << r <<endl;
	peri(r);
	area(r); 
}

//-------global variable-------
//double pi = 3.14;
void peri(double r)
{
	cout <<"peripheral length=" << 2*pi*r << endl;
	return; 
}
void area (double r)
{
	cout << "area=" << pi*r << endl;
	return; 
}
