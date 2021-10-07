#ifndef PROCSCORE4_STUDENT_INFO_H
#define PROCSCORE4_STUDENT_INFO_H
#include <iostream>
#include <string>
#include <vector>
// 최종 성적만 구조체에 남김
struct student_info {
    std::string name;
    //double midterm;
    //double finalterm;
    //std::vector<double> homeworks;
    double score;
};

std::istream& read(std::istream& in, student_info& s);

#endif //PROCSCORE4_STUDENT_INFO_H
