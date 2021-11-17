#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

bool not_space(char c)
{
    return !isspace(c);
}

bool space(char c)
{
    return isspace(c);
}

vector<string> split(const string& s)
{
    vector<string> words;

    string::const_iterator it = s.cbegin();

    while (it != s.cend()) {
        it = std::find_if(it, s.cend(), not_space);      // 여백을 지나치고 문자를 가리킴

        string::const_iterator it2 = std::find_if(it, s.cend(), space);

        if (it != s.cend())
            words.push_back(string(it, it2));

        it = it2;
    }

    return words;
}

int main()
{
    map<string, vector<int> > wordCrossRef;

    int lineNumber = 1;
    string line;
    while (std::getline(cin, line)) {
        vector<string> words = ::split(line);               // 한 줄을 주면 쪼개서 단어를 만듦
        for (vector<string>::const_iterator it = words.cbegin(); it != words.cend(); ++it) {
            // 7-3 223pg 벡터가 비어있을 때 일단 하나를 넣어주는 방법
            if (wordCrossRef[*it].empty()) {          // 조건문으로 중복된 개수가 들어가지 않도록 설정, 벡터에 바로 직전에 들어간 값이 같으면 넣지 않음
                wordCrossRef[*it].push_back(lineNumber);
            } else if (wordCrossRef[*it][wordCrossRef[*it].size() - 1] != lineNumber) {
                wordCrossRef[*it].push_back(lineNumber);
            }
        }
        ++lineNumber;
    }

    // 별도의 반복문을 썼으므로 투패스
//    for (auto it = wordCrossRef.begin(); it != wordCrossRef.end(); ++it) {
//
//        vector<int>::iterator it2 = it->second.begin();       // (it2가 첫 번째 값을 가리킴)second는 벡터이고 begin으로 벡터의 처음을 가리켰음
//        while (it2 != it->second.cend()) {
//            vector<int>::iterator it3 = it2;      // 값을 두개 비교해
//            ++it3;
//
//            while (it3 != it->second.cend() && *it3 == *it2) {  // 가리킨 곳이 end 위치 일 때 제거하면 문제가 생김
//                it3 = it->second.erase(it3);          // it3 위치의 값을 삭제하고 it3는 다음 값을 가리킴
//            }
//
//            it2 = it3;
//        }
//    }


    for (auto it = wordCrossRef.cbegin(); it != wordCrossRef.cend(); ++it) {
        cout << it->first << " : ";
        for (auto it2 = it->second.cbegin(); it2 != it->second.cend(); ++it2) {
            cout << *it2 << " ";
        }
        cout << endl;
    }

    return 0;
}
