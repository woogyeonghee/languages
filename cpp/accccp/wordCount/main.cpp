#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

// how many words in bts butter
// ./wordCount < ../../butter.txt
int main()
{
    vector<string> words;
    vector<int> counts;

    string word;

    while (cin >> word) {
        // find word in words
        int i;
        for(i = 0; i != words.size(); ++i) {
            if (words[i] == word)
                break;
        }
        if (i != words.size()) {
            ++counts[i];
        } else {
            words.push_back(word);
            counts.push_back(1);
        }
        // found?? ++count
        // not found push_back(word). push_back(1)

    }

    for (int i = 0; i != words.size(); ++i) {
        cout << words[i] << " : " << counts[i] << endl;
    }
    return 0;
}