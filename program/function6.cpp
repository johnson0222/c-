#include <iostream>
#include <cstdlib>

using namespace std;

int max (int a,int b)
{
	if (a>b)
		return a;
	else 
		return b;
 } 
 
 main()
 {
 	int in[2];
 	cout << "Enter two number:";
 	for (int i=0;i<=1 ; i++)
 		cin >> in[i];
 	cout <<endl;
 	cout << "you enter numbers are:" << in[0] <<" and "<< in[1] <<endl;
	max(in[0],in[1]);
	cout << "The larger number is " << max(in[0],in[1])<<endl; 
 }
