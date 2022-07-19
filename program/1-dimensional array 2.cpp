#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	int i,a[]={15,6,8};
	
	int length = sizeof(a)/sizeof(int);
	for (i=0 ; i<length ; i++)
		cout << "a["<< i << "]=" << a[i] << ", ";
	cout << endl << "array a has " << length << "elements";
	
}


