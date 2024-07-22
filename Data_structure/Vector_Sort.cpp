#include <iostream>
#include <algorithm> // std::sort() 사용
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {5, 4, 1, 3, 2};
    sort(vec.begin(), vec.end());

    // 범위 기반 for 문
    for (int element : vec)
    {
        cout << element << " ";
    }

    return 0;
}