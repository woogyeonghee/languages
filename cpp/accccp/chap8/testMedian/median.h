#ifndef PROCSCORE3_MEDIAN_H
#define PROCSCORE3_MEDIAN_H
#include <algorithm>
#include <stdexcept>
#include <vector>
// template

//double median(const std::vector<double>& v);
//double median(const std::vector<int>& v);


template<typename T>
T median(const std::vector<T>& v)     // median은 정렬을 하므로 원본이 바뀜, 복사본을 정렬해서 중앙값을 정렬하기 위해 책에서는 밸류로 넘김
{
    if(v.size() == 0)
        throw std::domain_error("median of an empty vector");

    std::vector<T> tmp = v;                // 레퍼런스를 받았기 때문에 복사본 생성 (원본을 그대로 두기 위함)
    std::sort(tmp.begin(), tmp.end());
    // sort가 끝난 tmp를 써야함
    T median;
    if (tmp.size() % 2 != 0) {               // 홀수면
        median = tmp[tmp.size() / 2];          // 2로 나누면 나오는 가운데 값 사용
    } else {
        median = (tmp[tmp.size() / 2] + tmp[tmp.size() / 2 - 1]) / 2; // 짝수이므로 가운데 값 두개를 사용
    }

    return median;
}

#endif //PROCSCORE3_MEDIAN_H
