#include <iostream>
#include <cstdlib>

using namespace std;

int max(int i,int j)
{
	if(i<j)
		return j;
	else 
		return i;
 } 
 
/*int main()
 {
 	int i,a,b;
 	cout << "Enter a,b=";
 	cin >> a >>b; 
	cout << endl; 
	cout <<"a =" << a << " b = " << b << endl; 
 	max(a,b);
 	cout << "The larget number is " << max(a,b) << endl; 
 }*/
 
 int main()
 {
	int input[2];
	int i ;
	cout << "Enter your number:";
	for (i=0 ;i<2 ; i++)
	{
		cin >> input[i];
	}
	cout << endl;
	for (i=0 ; i<2 ;i++)
		cout << "第" << i+1 << "個數字是"<<input[i] << endl;

	max(input[0],input[1]);
	cout << "The larger number is " << max(input[0],input[1]);
 }
 /*int main ()
 {
 	int i;
 	int s[5];
 	for (i=0;i<3;i++)
 		cin >> s[i];
 	for (i=0;i<3;i++)
 		cout<< "第 "<< i+1 << "個數字為"<< s[i] << endl;
 }*/
