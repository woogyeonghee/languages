#include <algorithm>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <vector>
#include "student_info.h"
#include "grade.h"
// 9장 251pg
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

// 허용된 연산을 사용하므로 name()
bool compare(const student_info& s1, const student_info& s2)
{
    return s1.name() < s2.name();
}

// 멤버 함수이므로 s.grade()로
bool fgrade(const student_info& s)          // fail grade less than 60
{
    return s.grade() < 60;
}

bool pgrade(const student_info& s)          // pass grade more than 60
{
    return !fgrade(s);
}


// iterator version - upgrade
vector<student_info> extract_fails(vector<student_info>& students)      // 벡터를 받으면 fail을 내보냄 값이 바뀌어야 하므로 &
{
    vector<student_info> fail;          // students(원본)에서 fail인 사람을 제거

    remove_copy_if(students.cbegin(), students.cend(), std::back_inserter(fail), pgrade);    // remove -> copy, students -> fail

    students.erase(remove_if(students.begin(), students.end(), fgrade), students.end());

    return fail;
}

int main()
{
    vector<student_info> students;          // 학생들의 정보를 받음
    string::size_type maxLen = 0;

    student_info s;
//    while(::read(cin, s)) {
      while(s.read(cin) ) {
        students.push_back(s);      // 입력을 받으면 학생 벡터에 값을 넣음
        maxLen = max(maxLen, s.name().size());
    }

    vector<student_info> pass = students;       // 복사생성자를 이용한 치환
    vector<student_info> fail = ::extract_fails(pass);

    sort(students.begin(), students.end(), compare);

    // 합격인 사람 부분
    cout << "[pass list]" << endl;
    for (vector<student_info>::const_iterator it = pass.cbegin(); it != pass.cend(); ++it) {
        cout << it->name() << string(maxLen - it->name().size() + 1, ' ');  // 제일 긴 이름을 기준으로 + 1칸만큼 띄워서 예쁘게 정렬

        try {
            streamsize ss = cin.precision();
            cout << setprecision(3) << it->grade() << setprecision(ss) << endl; // it 가 클래스 객체를 가리키므로 it -> grade()
        } catch (domain_error& e) {
            std::cerr << e.what() << endl;
            return 1;
        }
    }

    // 불합격인 사람 부분
    cout << "[fail list]" << endl;
    for (vector<student_info>::const_iterator it = fail.cbegin(); it != fail.cend(); ++it) {
        cout << it->name() << string(maxLen - it->name().size() + 1, ' ');  // 제일 긴 이름을 기준으로 + 1칸만큼 띄워서 예쁘게 정렬

        try {
            streamsize ss = cin.precision();
            cout << setprecision(3) << it->grade() << setprecision(ss) << endl;
        } catch (domain_error& e) {
            std::cerr << e.what() << endl;
            return 1;
        }
    }

    return 0;
}

