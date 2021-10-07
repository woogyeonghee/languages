//
// Created by test on 21. 10. 6..
//

#include <algorithm>
#include <stdexcept>
#include <vector>
#include "median.h"


using std::domain_error;
using std::sort;
using std::vector;

//find middle num
double median(const vector<double>& vec)
{
    if(vec.size()==0)
        throw domain_error("median of an empty vector");
    //like when the exception accure print this sting

    vector<double> tmp=vec;

    sort(tmp.begin(),tmp.end());

    double median;
    if(tmp.size() %2 !=0)
    {
        median =tmp[tmp.size()/2];
    }
    else {
        median = (tmp[tmp.size() / 2] + tmp[tmp.size() / 2 - 1]) / 2;
    }

    return median;
}
