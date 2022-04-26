#include <iostream>
#include <cstdlib>

using namespace std;

void star()
{
    int j;
    for (j=1;j<=8;j++)
        cout << "*";
    cout << endl;
}

main()
{
    int i;
    star();
    cout << "enter your number = " ;
    cin >> i;
    cout << "number" << i << endl << endl;
    star();

}

