// 배열 사용
#include <iostream>
using namespace std;

int main()
{
    string str1 = "";
    cin >> str1;

    for (int i = 0; i < str1.length(); i++)
    {
        cout << str1[i];
        if (i%10 == 9)
        {
            cout << '\n';
        }
    }
    
    return 0;
}

// substr()
#include <iostream>
using namespace std;

int main()
{
    string str1 = "";
    cin >> str1;

    for (int i = 0; i < str1.length(); i+=10)
    {
        cout << str1.substr(i, 10) << endl;
    }
    
    return 0;
}