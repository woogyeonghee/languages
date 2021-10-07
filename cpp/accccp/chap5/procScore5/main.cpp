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

//bool compare(const student_info& s1, const student_info& s2)
//{
//    return s1.name < s2.name;
//}

bool fgrade(const student_info& s)          // fail grade less than 60
{
    return ::grade(s) < 60;
}

bool pgrade(const student_info& s)          // pass grade more than 60
{
    return !fgrade(s);
}

// 성능이 떨어짐
//vector<student_info> extract_fails(vector<student_info>& students)      // 벡터를 받으면 fail을 내보냄 값이 바뀌어야 하므로 &
//{
//    vector<student_info> pass, fail;
//    for (vector<student_info>::size_type i = 0; i != students.size(); ++i) {
//        if (::grade(students[i]) < 60)      // 성적이 60 이하면
//            fail.push_back(students[i]);
//        else
//            pass.push_back(students[i]);
//    }
//    students = pass;        // 비싼 연산 (오버헤드가 큼) 기존 벡터를 pass인 학생으로 덮어 씀
//
//    return fail;
//}

//vector<student_info> extract_fails(vector<student_info>& students)      // 벡터를 받으면 fail을 내보냄 값이 바뀌어야 하므로 &
//{
//    vector<student_info> fail;          // students(원본)에서 fail인 사람을 제거
//
//    for(vector<student_info>::size_type i = 0; i != students.size(); ) {  // students.size() 는 erase()로 인해 크기가 변경되므 상수로 대체할 수 없음
//        if (fgrade(students[i])) {
//            fail.push_back(students[i]);
//
//            students.erase(students.begin() + i);            // students.begin() -> 시작 주소 iterator를 쓰는 것은 포인트를 써서 원소에 접근 한다는 의미
//        } else {
//            ++i;            // 삭제가 안된 경우에만 ++
//        }
//    }
//
//    return fail;
//}

//// iterator version
//vector<student_info> extract_fails(vector<student_info>& students)      // 벡터를 받으면 fail을 내보냄 값이 바뀌어야 하므로 &
//{
//    vector<student_info> fail;          // students(원본)에서 fail인 사람을 제거
//
//    for(vector<student_info>::iterator it = students.begin(); it != students.end(); ) {  // students.size() 는 erase()로 인해 크기가 변경되므 상수로 대체할 수 없음
//        if (fgrade(*it)) {
//            fail.push_back(*it);
//
//           it = students.erase(it);            // it가 다음 엘리먼트를 가리키도록 it = 을 썼음 (포인터를 쓰기 때문) 메모리 상에 연속적으로 있는 상황이 아닐 수 있기 때문
//        } else {
//            ++it;            // 삭제가 안된 경우에만 ++
//        }
//    }
//
//    return fail;
//}

// iterator version - upgrade
vector<student_info> extract_fails(vector<student_info>& students)      // 벡터를 받으면 fail을 내보냄 값이 바뀌어야 하므로 &
{
    vector<student_info> fail;          // students(원본)에서 fail인 사람을 제거

    remove_copy_if(students.cbegin(), students.cend(), std::back_inserter(fail), pgrade);    // remove -> copy, students -> fail

    // vector<student_info>::iterator it = remove_if(students.begin(), students.end(), fgrade); // --> iterator
    // students.erase(it, students.end());

    students.erase(remove_if(students.begin(), students.end(), fgrade), students.end());

    return fail;
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

    vector<student_info> pass = students;       // 복사생성자를 이용한 치환
    vector<student_info> fail = ::extract_fails(pass);

//    sort(students.begin(), students.end(), compare);
//    // 구조체가 저장된 벡터는 정렬이 안됨 -> student_info 안에는 정렬하는 방법(>, <)가 정의가 안되어있음,
//    // compare라는 함수를 만들어서 해결

    // 합격인 사람 부분
    cout << "[pass list]" << endl;
    for (vector<student_info>::const_iterator it = pass.cbegin(); it != pass.cend(); ++it) {
        cout << it->name << string(maxLen - it->name.size() + 1, ' ');  // 제일 긴 이름을 기준으로 + 1칸만큼 띄워서 예쁘게 정렬

        try {
            streamsize ss = cin.precision();
            cout << setprecision(3) << ::grade(*it) << setprecision(ss) << endl;
        } catch (domain_error& e) {
            std::cerr << e.what() << endl;
            return 1;
        }
    }

    // 불합격인 사람 부분
    cout << "[fail list]" << endl;
    for (vector<student_info>::const_iterator it = fail.cbegin(); it != fail.cend(); ++it) {
        cout << it->name << string(maxLen - it->name.size() + 1, ' ');  // 제일 긴 이름을 기준으로 + 1칸만큼 띄워서 예쁘게 정렬

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

