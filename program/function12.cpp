#include <iostream>
#include <cstdlib>

using namespace std;

void test(int i,int nEnd)
{
	static int x = 0; //稱靜態變數,類似區域變數,但在編譯時會配置固定記憶體空間,所以即使退出函式,變數x的值還會留下 
	int y = 0; //做一次 y+1 ,做第二次時生命週期結束,從頭來過y=0,y++,y=0+1 無限循環 
	
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


