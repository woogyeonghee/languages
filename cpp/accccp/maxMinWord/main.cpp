#include <iostream>
#include <string>
#include <algorithm>
// 3-4 max length, min length
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::max;
using std::min;

int main()
{
    string::size_type maxLen;
    string::size_type minLen;
    // maxLen, minLen 을 int로 정의할 경우 문제점 -> 두 type 이 서로 같지 안않아서 오류가 생김
    // max 함수
    // template <typename T>
    // T max(T a, T b) -> const T& max(const T& a,const T& b)  const T& max 가 아니면 max(a, b) = b; 가 되어버릴 수 있음
    // { 기존에 비교한 값의 주소를 그대로 사용할 수 있기 때문에 레퍼런스로 리턴할 수 있음, 복사생성자를 받을 수 있도록 인자를 const T&로 설정
    //      if ( a > b) { return a; }
    //      else { return b; }
    // }

    string word;
    if (cin >> word) {
        maxLen = word.size();
        minLen = word.size();
    }

    while (cin >> word) {
//        if (maxLen < word.size()) {
//            maxLen = word.size();
//        }
//        if (minLen > word.size()) {
//            minLen = word.size();
//        }
        maxLen = max(maxLen, word.size());
        minLen = min(minLen, word.size());
//
//        if (minLen < word.size())
//            minLen = minLen;
//        else
//            minLen = word.size();
    }

    cout << "max length word : " << maxLen << endl;
    cout << "min length word : " << minLen << endl;

    return 0;
}
