#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main()
{
    map<string, int> wordCounts;                // key, value 형태

    string s;
    while (cin >> s) {
        ++wordCounts[s];			// 만약 like 를 찾았는데 없으면 디폴트 생성자가 생성되고 0 값이 들어감
                                    // 값이 있으면 해당하는 카운터가 1 증가 [] 안의 내용은 밸류가 된다.
                                    // 키 값은 멤버변수 first로 접근
    }

    for (map<string, int>::const_iterator it = wordCounts.cbegin(); it != wordCounts.cend(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
    return 0;
}