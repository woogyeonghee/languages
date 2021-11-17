#include <iostream>
#include <map>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

int main() {
    map<string,int> wordCounts; //key and value

    string s;
    while(cin >>s)
    {
        ++wordCounts[s];//==key
    }

    for(map<string,int>::const_iterator it = wordCounts.cbegin();it!=wordCounts.cend();++it)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }
    return 0;
}
