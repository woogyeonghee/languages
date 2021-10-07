#include <iostream>
#include <map>
// ex 7-2 223pg
using std::cout;
using std::endl;
using std::map;

int main()
{
    //static char grades[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
    static char *grades = "FFFFFFDCBAA";
    double scores[] = {93.5, 88.1, 81.5, 99.0, 59.4, 71.2, 69.5, 65.0, 49.1, 100.0};

    map<char, int> gradeCounts;

    for (int i = 0; i != 10; ++i) {
        ++gradeCounts[grades[static_cast<int> (scores[i] / 10)]];
    }

    for (auto it = gradeCounts.cbegin(); it != gradeCounts.cend(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }
    return 0;
}
