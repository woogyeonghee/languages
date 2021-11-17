#include <iostream>
#include <vector>
#include "student_info.h"
#include "grade.h"

using std::istream;
using std::vector;
using std::string;

istream& student_info::read_hw(istream& in) {   // read() 함수에서만 사용하므로 static
    if (in ) {
        homeworks_.clear();              // vector 안의 내용이 모두 지워짐

        double hw;
        while(in >> hw) {
            homeworks_.push_back(hw);
        }

        in.clear();         // 내부 상태가 false 였던 것이 true로 됨, 학생의 이름 중간고사 기말고사 숙제점수,
                            // 다음 학생 학생을 읽을 때 string을 읽어야 하는데 homework가 받을 수 있는 타입과 달라서 오류가 생김
    }

    return in;
}




student_info::student_info()
:midterm_(0.0), finalterm_(0.0)         // 디폴트 생성자 0.0점 사용
{

}

student_info::student_info(istream& in)
{
   this->read(in);
}

string student_info::name() const
{
    return name_;
}

bool student_info::valid() const
{
    return !homeworks_.empty();         // empty가 아닌 것을 반환
}

istream& student_info::read(istream& in)
{
    in >> name_ >> midterm_ >> finalterm_;
    this->read_hw(in);

    return in;
}

double student_info::grade() const
{
    ::grade(midterm_, finalterm_, homeworks_);
}