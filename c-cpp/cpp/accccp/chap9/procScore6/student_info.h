#ifndef PROCSCORE4_STUDENT_INFO_H
#define PROCSCORE4_STUDENT_INFO_H
#include <iostream>
#include <string>
#include <vector>
// structure -> class
class student_info {
public:
    student_info();
    explicit student_info(std::istream& in);         // cin을 통해 받음

    std::string name() const;

    bool valid() const;         // 벡터 안의 내용이 비어있는지 확인

    std::istream& read(std::istream& in);
    double grade() const;

private:
    std::string name_;
    double midterm_;
    double finalterm_;
    std::vector<double> homeworks_;

    std::istream& read_hw(std::istream& in);    // helper function
};



#endif //PROCSCORE4_STUDENT_INFO_H
