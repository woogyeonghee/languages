//
// Created by test on 21. 10. 6..
//

#include <algorithm>
#include <stdexcept>
#include <list>
#include <vector>
#include "median.h"


using std::domain_error;
using std::sort;
using std::list;
using std::vector;

//find middle num
double median(const list<double>& list)
{
    if(list.size()==0)
        throw domain_error("median of an empty vector");
    //like when the exception accure print this sting

    vector<double> tmp(list.cbegin(),list.cend());

    sort(tmp.begin(),tmp.end());

    double median;
    if(tmp.size() %2 ==0)
    {
        median =tmp[tmp.size()/2];
    }
    else {
        median = (tmp[tmp.size() / 2] + tmp[tmp.size() / 2 - 1]) / 2;
    }

    return median;
}
