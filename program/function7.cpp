#include <iostream>
#include <cstdlib>

using namespace std;

void myprint (int n, char c)
{
	int i ;
	for (i=1;i<=n;i++)
		cout << c;
	cout << endl;
	return ;
}

main()
{
	int a=7;
	char ch ='%';
	myprint(a,ch);
	//cout << "Printed!!" << endl;
	//cout << myprint(a,ch)<<endl;
	 
}
