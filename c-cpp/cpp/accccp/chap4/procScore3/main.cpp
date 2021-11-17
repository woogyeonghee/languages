#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <vector>
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

istream& read_hw(istream& in, vector<double>& homeworks) {
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

int main()
{
    string name;
    cout << "input your name : ";
    cin >> name;
    cout << "hello, " + name + "!" << endl;

    cout << "input your midterm finalterm : ";
    double midterm, finalterm;
    cin >> midterm >> finalterm;

    cout << "input your homework scores (and EOF) : ";
    vector<double> homeworks(100);
    read_hw(cin, homeworks);

    try {
        streamsize ss = cout.precision();
        cout << "your final score : " << setprecision(3)
             << ::grade(midterm, finalterm, homeworks) << setprecision(ss) << endl; // grade가 grade를 호출
        // cout에 디폴트로 지정되어있는 유효 자릿수를 임시 변수를 써서 저장, 세자리수로 맞춰서 쓰고 원래상태로 되돌림
    } catch (std::domain_error& e) {
        std::cerr << e.what() << endl;          // grade.cpp의 예외처리문호출
        return 1;
    }

    return 0;
}

