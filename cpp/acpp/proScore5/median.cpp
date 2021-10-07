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
double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size=vec.size();

    if(size==0)
        throw domain_error("median of an empty vector");
    //like when the exception accure print this sting

    sort(vec.begin(),vec.end());
    vec_sz mid=size/2;

    return size %2 ==0?(vec[mid]+vec[mid-1])/2:vec[mid];
}
