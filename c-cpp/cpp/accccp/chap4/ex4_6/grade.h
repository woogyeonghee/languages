#ifndef PROCSCORE3_GRADE_H
#define PROCSCORE3_GRADE_H
#include <vector>
#include "student_info.h"

//double grade(double midterm, double finalterm, double homework);
double grade(double midterm, double finalterm, const std::vector<double>& homeworks);
//double grade(const student_info& s);
#endif //PROCSCORE3_GRADE_H
