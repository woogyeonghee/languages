//
// Created by test on 21. 10. 6..
//

#ifndef PROSCORE4_STUDENT_INFO_H
#define PROSCORE4_STUDENT_INFO_H

#include <iostream>
#include <string>
#include <vector>

struct Student_info
{
    std::string name;
    double midterm,final;
    std::vector<double> homework;
};

std::istream& read(std::istream& in,Student_info& s);

#endif //PROSCORE4_STUDENT_INFO_H
