#include <algorithm>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

bool isSix(int num)
{
    return num == 6;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    vector<int> v1(nums, nums + 5);
    vector<int> v2 = v1;

    std::copy(v2.crbegin(), v2.crend(), std::back_inserter(v1));

    vector<int>::const_iterator it = std::find(v1.cbegin(), v1.cend(),5);

    cout << "5 ?? : " << *it << endl;

    it = std::find_if(v1.cbegin(), v1.cend(), isSix);

    if (it != v1.cend())
        cout << "6 is found" << endl;
    else
        cout << "6 is not found" << endl;

    if (std::equal(v2.cbegin(), v2.cend(), v1.cbegin()))
        cout << "v1 has a sub v2" << endl;
    else
        cout << "v1 don't has a sub v2" << endl;



    for (auto it = v1.cbegin(); it != v1.cend(); ++it)
            cout << *it << endl;

    return 0;
}
