//
// Created by test on 21. 10. 6..
//

#ifndef PROSCORE4_GRADE_H
#define PROSCORE4_GRADE_H
#include <list>
#include "Student_info.h"

static double grade(double, double, double );
static double grade(double, double, const std::list<double>&);
double grade(const Student_info&);

#endif //PROSCORE4_GRADE_H
