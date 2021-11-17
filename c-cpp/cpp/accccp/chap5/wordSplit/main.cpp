#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::string;
using std::vector;


string::size_type width(const vector<string>& words)
{
    string::size_type maxLen = 0;

    for (vector<string>::const_iterator it = words.cbegin(); it != words.cend(); ++it) {
        maxLen = max(maxLen, it->size());
    }

    return maxLen;
}

vector<string> frame(const vector<string>& words)
{
    vector<string> frameWords;
    string::size_type maxLen = width(words);        // max length of words
    string border(maxLen + 4, '*');           // 위 아래에 쓸 테두리, 여백길이까지 출력 1 + * -> 양쪽 --> 4

    frameWords.push_back(border);
    for (vector<string>::const_iterator it = words.cbegin(); it != words.cend(); ++it) {
        frameWords.push_back("* " + *it + string(maxLen - it->size(), ' ') + " *");
    }
    frameWords.push_back(border);

    return frameWords;
}

// 문자를 세로로 합치는 함수
vector<string> vcat(const vector<string>& top, const vector<string>& bottom)
{
    vector<string> result = top;

    //for (vector<string>::const_iterator it = bottom.cbegin(); it != bottom.cend(); ++it)
    //    result.push_back(*it);
    //result.insert(result.end(), bottom.cbegin(), bottom.cend());        // 반복문을 insert로..
    //std::copy(bottom.cbegin(), bottom.cend(), result.cend());             // result의 크기를 모르지만 뒤에 넣게 만들어져있음
    std::copy(bottom.cbegin(), bottom.cend(), std::back_inserter(result));  // 할당되지 않은 공간에 접근하는 것을 막기 위해 back_inserter 사용
    return result;
}


// 문자를 가로로 합치는 함수
vector<string> hcat(const vector<string>& left, const vector<string>& right)
{
    vector<string> result;

    string::size_type leftWidth = ::width(left) + 1;           // 왼쪽에 있는 글자의 길이를 알아야 오른쪽을 붙일 수 있음

    vector<string>::const_iterator it = left.cbegin();
    vector<string>::const_iterator it2 = right.cbegin();

    while (it != left.cend() || it2 != right.cend()) {
        string s;

        if (it != left.cend()) {
            s = *it;
            ++it;
        }
        s += string(leftWidth - s.size(), ' ');         // 왼쪽편에 문자 열이 들어가거나 여백이 들어감

        if (it != right.cend()) {
            s += *it2;
            ++it2;
        }

        result.push_back(s);
    }
    return result;
}
//vector<string> split(const string& s)
//{
//    vector<string> words;
//
//    string::const_iterator it = s.cbegin();            // 문자열을 컨테이너 처럼 다룸
//    while (it != s.cend()) {
//        while (it != s.cend() && isspace(*it))          // 앞에 있는 여백 제거, 문자를 가리킴
//            ++it;
//
//
//        string::const_iterator it2 = it;                // 단어 끝의 다음 문자열(여백문자)을 가리킴
//        while (it2 != s.cend() && !isspace(*it2))
//            ++it2;
//
//        if (it != it2) {
//            words.push_back(string(it, it2));
//            it = it2;
//        }
//    }
//
//    return words;
//}


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

bool is_palindrome(const string& s)
{
//    for (string::size_type i = 0; i != s.size() / 2; ++i) {
//        if (s[i] != s[s.size() - i])
//            return false;
//    }
//    return true;
    return std::equal(s.cbegin(), s.cend(), s.crbegin());

}

int main()
{
//  string s = "knocking on the heaven's door";
//  vector<string> words = ::split(s);

    string s;

    while (std::getline(cin, s)) {
        vector<string> words = ::split(s);              // 반복문 안에 넣어야 함

         // 분리만 해서 출력
//        for (vector<string>::const_iterator it = words.cbegin(); it != words.cend(); ++it) {
//            cout << *it << endl;
//        }


        // 테두리를 씌우고 분리해서 출력
        vector<string> frameWords = ::frame(words);

        for (vector<string>::const_iterator it = frameWords.cbegin(); it != frameWords.cend(); ++it) {
            cout << *it << endl;
        }

        // 수직 붙이기
        vector<string> result = ::vcat(words, frameWords);

        for (vector<string>::const_iterator it = result.cbegin(); it != result.cend(); ++it) {
            cout << *it << endl;
        }

        // 수평 붙이기
        result = ::hcat(words, frameWords);

        for (vector<string>::const_iterator it = result.cbegin(); it != result.cend(); ++it) {
            cout << *it << endl;
        }
    }

    return 0;
}