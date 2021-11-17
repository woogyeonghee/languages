#include <iostream>
#include <map>
#include <cctype>
#include <algorithm>
#include <vector>
#include <string>

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
    map<string, vector<int>> wordCrossRef;

    int lineNumber=1;
    string line;
    while (std::getline(cin,line))
    {
        vector<string> words =::split(line);
        for(vector<string>::const_iterator it =words.cbegin();it!=words.cend();++it)
        {
            if(wordCrossRef[*it].empty()) {
                wordCrossRef[*it].push_back(lineNumber);//==vector
            } else if (wordCrossRef[*it][wordCrossRef[*it].size()-1]!=lineNumber)
            {
                wordCrossRef[*it].push_back(lineNumber);//==vector
            }
        }
        ++lineNumber;
    }

//    for(auto it=wordCrossRef.begin();it!=wordCrossRef.end();++it)
//    {
//        vector<int>::iterator it2=it->second.begin();
//        while(it2!=it->second.cend())
//        {
//            vector<int>::iterator it3= ++it2;
//            ++it3;
//
//            while(it3!=it->second.cend() && *it3 ==*it2)
//            {
//                it->second.erase(it3);
//            }
//
//            it2=it3;
//        }
//    }

    for(auto it= wordCrossRef.cbegin(); it!= wordCrossRef.cend();++it)
    {
        cout << it->first<<" : ";
        for(auto it2=it->second.cbegin();it2!=it->second.cend();++it2)
        {
            cout<<*it2<<" ";
        }
        cout <<endl;
    }
    return 0;
}
