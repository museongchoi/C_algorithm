// 그대로 출력하기
// C
// 1.
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char text;
		//while (scanf("%c", &text) != -1)
    while (scanf("%c", &text) != EOF)
    {
        printf("%c", text);
    }
    return 0;
}


// C++
// 2. std::getline() 사용
#include <iostream>
using namespace std;

int main()
{
    string text;

    while (getline(cin, text))
    {
        cout << text << "\n";
    }
    return 0;
}

// 3. 조건 변환
#include <iostream>
using namespace std;

int main()
{
    string text;

    while (true)
    {
        getline(cin, text);
        //if (text == "") break;
        if (text.empty()) break;
        
        cout << text << "\n";
    }
    return 0;
}

// 4. iostream cin.getline() 함수 사용
#include <iostream>
using namespace std;

int main()
{
    char text[101];
    while (cin.getline(text, 101))
    {
        cout << text << endl;
    }
    return 0;
}
    