#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::copy;

int main()
{
    vector<int> v;

//    int i;
//    while (cin >> i) {
//        v.push_back(i);
//    }

    copy(std::istream_iterator<int>(cin),std::istream_iterator<int>(), std::back_inserter(v) );

//    for (vector<int>::const_iterator it = v.cbegin(); it != v.cend(); ++it) {
//        cout << *it << endl;
//    }

    copy(v.cbegin(), v.cend(), std::ostream_iterator<int>(cout, "\n"));

    return 0;
}