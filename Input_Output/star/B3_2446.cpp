// 별찍기-9
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2*n-1; i++)
    {
        if (i < n)
        {
            for (int k = 0; k < i; k++)
                cout << " ";
            for (int j = 1; j <= (2*n-1)-(i*2); j++)
                cout << "*";
            for (int k = 0; k < i; k++)
                cout << " ";
            cout << "\n";
        }
        
    }
    return 0;
}