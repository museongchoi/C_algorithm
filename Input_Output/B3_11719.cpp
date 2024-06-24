// 그대로 출력하기
// 정적 할당 : 배열 사용
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string textlist[101];
    string a;
    int n = 1;
    
    while(true)
    {
        if (!getline(cin, a))
        {
            break;
        }
        textlist[n] = a;
        n++;
    }
    
    for (int i = 1; i < n; i++)
    {
        cout << textlist[i] << "\n";
    }
    return 0;
}

// 동적 할당 : std::vector
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> textlist;
    string a;
    
    while(getline(cin, a))
    {
        textlist.push_back(a);
    }
    // for문
    for (int i = 0; i < textlist.size(); i++)
    {
        cout << textlist[i] << "\n";
    }
    return 0;
}

// 범위 기반 for 문
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> textlist;
    string a;
    
    while(getline(cin, a))
    {
        textlist.push_back(a);
    }
	  // 범위 기반 for 문
    for (const auto& text : textlist)
    {
        cout << text << "\n";
    }
    return 0;
}

// std::getline() 사용
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    while(getline(cin, text))
    {
        cout << text << "\n";
    }
    return 0;
}

// 스트림 상태 직접 확인
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    while(true)
    {
        getline(cin, text);
        if(!cin) break;
        cout << text << "\n";
    }
    return 0;
}