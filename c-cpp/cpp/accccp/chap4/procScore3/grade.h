#ifndef PROCSCORE3_GRADE_H
#define PROCSCORE3_GRADE_H
#include <vector>

double grade(double midterm, double finalterm, double homework);
double grade(double midterm, double finalterm, const std::vector<double>& homeworks);

#endif //PROCSCORE3_GRADE_H
