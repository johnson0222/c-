#include <iostream>
#include <cstdlib>

using namespace std;

int square (int i)
{
	int sqa;
	sqa = i*i;
	//return sqa;
}

main()
{
	int i;
	cout << "Enter number :";
	cin >> i;
	cout << "square(i)= " << square(i) <<endl; 
}
