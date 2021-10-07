#include <algorithm>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <list>
#include "student_info.h"
#include "grade.h"

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::streamsize;
using std::setprecision;
using std::string;
using std::list;
using std::domain_error;
using std::sort;
using std::max;

bool compare(const student_info& s1, const student_info& s2)
{
    return s1.name < s2.name;
}

bool fgrade(const student_info& s)
{
    return ::grade(s) < 60;
}

// iterator version
list<student_info> extract_fails(list<student_info>& students)      // 벡터를 받으면 fail을 내보냄 값이 바뀌어야 하므로 &
{
    list<student_info> fail;          // students(원본)에서 fail인 사람을 제거

    for(list<student_info>::iterator it = students.begin(); it != students.end(); ) {  // students.size() 는 erase()로 인해 크기가 변경되므 상수로 대체할 수 없음
        if (fgrade(*it)) {
            fail.push_back(*it);

           it = students.erase(it);            // it가 다음 엘리먼트를 가리키도록 it = 을 썼음 (포인터를 쓰기 때문) 메모리 상에 연속적으로 있는 상황이 아닐 수 있기 때문
        } else {
            ++it;            // 삭제가 안된 경우에만 ++
        }
    }

    return fail;
}

int main()
{
    list<student_info> students;          // 학생들의 정보를 받음
    string::size_type maxLen = 0;

    student_info s;
    while(::read(cin, s)) {
        students.push_back(s);      // 입력을 받으면 학생 벡터에 값을 넣음
        maxLen = max(maxLen, s.name.size());
    }
    // pass/fail 을 나누기 전에 정렬해야 정렬이 됨
    students.sort(compare);        // list는 sort 함수가 별도로 있음, 구조체 안에 <, > 연산이 없어서 compare 함수 전달

    list<student_info> pass = students;       // 복사생성자를 이용한 치환
    list<student_info> fail = ::extract_fails(pass);



    // 합격인 사람 부분
    cout << "[pass list]" << endl;
    for (list<student_info>::const_iterator it = pass.cbegin(); it != pass.cend(); ++it) {
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
    for (list<student_info>::const_iterator it = fail.cbegin(); it != fail.cend(); ++it) {
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

