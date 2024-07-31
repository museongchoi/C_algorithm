#include <iostream>
using namespace std;

int main()
{
    string str = "Hello";
    cout << "insert 전 : " << str << "\n";

    str.insert(5, " World");

    cout << "insert 후 : " << str << "\n";

    // 문자열 길이 반환 length() / size() 함수 사용
    cout << str.length() << "\n";
    cout << str.size() << "\n";
    char c = str[1];
    cout << sizeof(c) << "\n";
    cout << sizeof(str)/sizeof(str[0]) << "\n";

    // 특정 문자열 찾기 find() - 해당 문자열을 찾아 시작 idx 반환
    int stridx = str.find("World");

    // 문자 삭제
    str.erase(stridx);
    cout << str << "\n"; // 공백은 지워지지 않음, 공백부터 지울시 공백을 찾으면 된다.

    // += / append() 문자열 끝에 추가
    str += "!";
    cout << str << "\n";
    str += "!!!";
    cout << str << "\n";

    // 문자열 찾기 find + 문자열 삭제
    int stridx1 = str.find("!");
    cout << stridx1 << "\n";

    str.erase(stridx1-1, 5); // 공백 + !!!! (느낌표 4개)
    cout << str << "\n";

    // 두 문자열 비교 == , != / compare()
    string str2 = "Hello";
    string str3 = "World"

    if (str == str2)
        cout << "str 과 str2는 같다." << "\n";
    else
        cout << "str 과 str2는 다르다." << "\n";
    

    return 0;
}