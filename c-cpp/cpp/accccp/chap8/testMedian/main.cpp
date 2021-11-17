#include <iostream>
#include <numeric>
#include <vector>
#include "median.h"
using std::cout;
using std::endl;
using std::vector;

int main() {

    // int -->> X  why ? / 2 !
    float nums1[] = {50.0F, 30.0F, 90.0F, 100.0F, 40.0F, 10.0F, 20.0F, 60.0F, 80.0F, 70.0F};
    vector<float> v1(nums1, nums1 + 10);      // iterator를 이용해서 초기화 했음 시작 주소, 사이즈

    float median = ::median(v1);                  // int형 vector 전달됨
    cout << "median : " << median << endl;

    double nums2[] = {55.5, 33.3, 99.9, 100.0, 44.4, 11.1, 22.2, 66.6, 88.8, 77.7};
    vector<double> v2(nums2, nums2 + 10);

    double median2 = ::median(v2);
    cout << "median : " << median2 << endl;

    double sum = std::accumulate(nums2, nums2 + 10, 0.0);
    cout << "sum :" << sum << endl;

    return 0;
}
