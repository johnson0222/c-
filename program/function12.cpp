#include <iostream>
#include <cstdlib>

using namespace std;

void test(int i,int nEnd)
{
	static int x = 0; //���R�A�ܼ�,�����ϰ��ܼ�,���b�sĶ�ɷ|�t�m�T�w�O����Ŷ�,�ҥH�Y�ϰh�X�禡,�ܼ�x�����ٷ|�d�U 
	int y = 0; //���@�� y+1 ,���ĤG���ɥͩR�g������,�q�Y�ӹLy=0,y++,y=0+1 �L���`�� 
	
	x++;
	cout << "x1 =  " << x << endl; 
	y++;
	cout << "y1 =  " << y << endl;
	
	if(i == (nEnd-1))
	{
		for(i = 0 ; i<5 ; i++)
		{
			cout << "x2=" << x << endl;
			cout << "y2=" << y << endl;
		}
	}
}
main ()
{
	for (int i =0;i<5;i++)
		test(i,5);
	
}

/*int test();
main()
{
	for (int a=0; a < 10 ; a++)
		cout << test() << " ";
}
int test()
{
	static int a = 0;
	a++;
	return a;
	 } */
//int i = 5;

/*main()
{
	int i = 50;
	for (i=0;i<20;i++)
		cout << i << endl ; 
 	cout << i << endl; 
}*/

/*main()
{
	for(; i<20; i++)
		cout << i << " " ;
	cout << endl;
	int i = 2;
	cout << i << endl;
	cout << ::i << endl;
	 
}*/


