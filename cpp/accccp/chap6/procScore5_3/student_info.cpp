#include <iostream>
#include <vector>
#include "student_info.h"

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
    in >> s.name >> s.midterm >> s.finalterm;
    ::read_hw(in, s.homeworks);

    return in;

}