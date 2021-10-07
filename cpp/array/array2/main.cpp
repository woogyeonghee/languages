#include <iostream>
#include "array.h"
using std::cout;
using std::endl;

int main()
{
    int nums1[]={1,2,3,4,5};
    Array<int> arr1(nums1,5);

    double nums2[]={1.1,2.2,3.3,4.4,5.5};
    Array<double> arr2(nums2,5);

    for(int i=0;i<5;++i)
        cout<<arr1[i]<<endl;
    
    for(int i=0;i<5;++i)
        cout<<arr2[i]<<endl;

    return 0;
}
