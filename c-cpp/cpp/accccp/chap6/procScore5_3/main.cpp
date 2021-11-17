#include "algorithm"
#include <iostream>
#include <string>
#include <vector>
#include "median.h"
#include "grade.h"
#include "student_info.h"

using std::cin;
using std::cout;
using std::endl;
using std::find;
using std::string;
using std::vector;

bool did_all_hw(const student_info& s)
{
    // 숙제 점수가 0점인 사람을 찾음
    return find(s.homeworks.cbegin(), s.homeworks.cend(), 0) == s.homeworks.end();      // 끝까지 갔다는 것은 0 점이 없는 것
}

double median_analysis(const vector<student_info>& students)
{
    vector<double> scores;

    // 범위 값을 grade에 넣고 결과를 벡터에 넣음
//    for (vector<student_info>::const_iterator it = students.cbegin(); it != students.cend(); ++it) {
//        scores.push_back(::grade(*it))
//    }
    std::transform(students.cbegin(), students.cend(), std::back_inserter(scores), grade);

    return ::median(scores);
}

void write_analysis(std::ostream& out, const string& analysisName,
                    double (*analysis)(const vector<student_info>& ),
                    const vector<student_info>& did,
                    const vector<student_info>& didnt)
{
    out << analysisName << endl;
    out << "median(did) : " << analysis(did) << endl;
    out << "median(didnt) : " << analysis(didnt) << endl;
}

int main()
{
    // 숙제를 하고 안하고로 분류
    vector<student_info> did, didnt;

    student_info s;
    while(::read(cin, s)) {
        if (::did_all_hw(s))
            did.push_back(s);
        else
            didnt.push_back(s);
    }

    if (did.empty()) {      // 숙제를 다 한 사람이 없음
        cout << "no student did all homework" << endl;
    }

    if (didnt.empty()) {    // 모든 학생이 숙제를 다 함
        cout << "every student did all homework" << endl;
    }

    write_analysis(cout, "median", median_analysis, did, didnt);

    return 0;
}