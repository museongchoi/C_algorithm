// cin >> char 형 문자로 입력 받기
#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch;
    cin >> n;

    int total = 0;
    for (int i=0; i < n; i++)
    {
        cin >> ch;
        total += ch - 48;
        
    }
    cout << total << endl;
    
    return 0;
}

// 문자열 인덱스 접근
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string line;
    cin >> t;
    cin >> line;
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum += line[i] - '0';
    }
    cout << sum;
    return 0;
}

// stoi() 함수 : string 자료형을 숫자로 변경
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string line;
    string tmp;
    cin >> n;
    cin >> line;

    int total = 0;
    for (int i=0; i < n; i++)
    {
        tmp = line[i];
        total += stoi(tmp);
    }
    cout << total;
    return 0;
}