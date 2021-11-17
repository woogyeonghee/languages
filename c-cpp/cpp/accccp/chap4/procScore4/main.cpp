#include <algorithm>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <vector>
#include "student_info.h"
#include "grade.h"

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::streamsize;
using std::setprecision;
using std::string;
using std::vector;
using std::domain_error;
using std::sort;
using std::max;

bool compare(const student_info& s1, const student_info& s2)
{
    return s1.name < s2.name;
}

int main()
{
    vector<student_info> students;          // 학생들의 정보를 받음
    string::size_type maxLen = 0;

    student_info s;
    while(::read(cin, s)) {
        students.push_back(s);      // 입력을 받으면 학생 벡터에 값을 넣음
        maxLen = max(maxLen, s.name.size());
    }

    sort(students.begin(), students.end(), compare);
    // 구조체가 저장된 벡터는 정렬이 안됨 -> student_info 안에는 정렬하는 방법(>, <)가 정의가 안되어있음,
    // compare라는 함수를 만들어서 해결

//    for (vector<student_info>::size_type i = 0; i != students.size(); ++i) {    // students.size()의 type 때문에 i가 int 가 아님
//        cout << students[i].name << string(maxLen - students[i].name.size() + 1, ' ');  // 제일 긴 이름을 기준으로 + 1칸만큼 띄워서 예쁘게 정렬
//
//        try {
//            streamsize ss = cin.precision();
//            cout << setprecision(3) << ::grade(students[i]) << setprecision(ss) << endl;
//        } catch (domain_error& e) {
//            std::cerr << e.what() << endl;
//            return 1;
//        }
//    }
    //for(vector<student_info>::const_iterator it = students.cbegin(); it != students.cend(); ++it) {
    for(auto it = students.cbegin(); it != students.cend(); ++it) { // auto 로 타입을 자동 지정 (it 가 const it 타입이어서 auto 사용 가능)
        cout << it->name << string(maxLen - it->name.size() + 1, ' ');

        try {
            streamsize ss = cin.precision();
            cout << setprecision(3) << ::grade(*it) << setprecision(ss) << endl;
        } catch (domain_error& e) {
            std::cerr << e.what() << endl;
            return 1;
        }
    }


    return 0;
}

