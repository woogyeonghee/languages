//
// Created by test on 21. 10. 6..
//
#include <stdexcept>
#include <vector>
#include "grade.h"
#include "median.h"
#include "Student_info.h"

using std::domain_error;
using std::vector;

//when call func make those variants and the end of func code delete variants
double grade(double midterm,double final,double homework)
{
    return 0.2*midterm +0.4*final+0.4*homework;
}

//midterm,finalterm,homework score
double grade(double midterm, double final,const vector<double>& hw)
//const vector<double>& is 'reference the const double vector'
//will not change this value
{
    if(hw.size()==0)
        throw domain_error("Student has done no homework");

    return grade(midterm,final,median(hw));
    //call grade cal score
}

//bring struct and cal values
double grade(const Student_info& s)
{
    return grade(s.midterm,s.final,s.homework);
}
