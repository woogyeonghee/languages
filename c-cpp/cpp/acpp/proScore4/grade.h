//
// Created by test on 21. 10. 6..
//

#ifndef PROSCORE4_GRADE_H
#define PROSCORE4_GRADE_H
#include <vector>
#include "Student_info.h"

double grade(double, double, double );
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif //PROSCORE4_GRADE_H
