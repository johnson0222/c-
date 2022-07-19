#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct mydata
{
	string name;
	int math;
}student;

int main()
{
	cout << "Name:";
	cin >> student.name;
	cout << endl << "Score:";
	cin >> student.math;
	
	cout << "Name:" << student.name << endl << "Scores:" << student.math;
}
