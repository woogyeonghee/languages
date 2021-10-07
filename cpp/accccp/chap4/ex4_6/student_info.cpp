#include <iostream>
#include <vector>
#include "student_info.h"
#include "grade.h"

using std::istream;
using std::vector;

static istream& read_hw(istream& in, vector<double>& homeworks) {   // read() 함수에서만 사용하므로 static
    if (in ) {
        homeworks.clear();              // vector 안의 내용이 모두 지워짐

        double hw;
        while(in >> hw) {
            homeworks.push_back(hw);
        }

        in.clear();         // 내부 상태가 false 였던 것이 true로 됨, 학생의 이름 중간고사 기말고사 숙제점수,
                            // 다음 학생 학생을 읽을 때 string을 읽어야 하는데 homework가 받을 수 있는 타입과 달라서 오류가 생김
    }

    return in;
}


istream& read(istream& in, student_info& s)
{
    // 구조체에서 스코어만 빼고 나머지를 없앴으므로 지역변수를 써서 값을 구하고 s.score에 grade 함수로 값을 넣음
    double midterm, finalterm;
    vector<double> homeworks;

    in >> s.name;    // 맨 마지막에서 값이 없는데(homeworks의 값이 0)도 계속 값을 받는 문제가 생겨서 s.name을 바깥으로 뺐음

    if (in ) {      // 마지막에 EOF 에서 받지 못하도록

        in >> midterm >> finalterm;
        ::read_hw(in, homeworks);

        s.score = ::grade(midterm, finalterm, homeworks);
    }
    return in;
}