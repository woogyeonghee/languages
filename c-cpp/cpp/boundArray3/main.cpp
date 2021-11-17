#include <iostream>
#include "boundArray.h"
#include "invalidIndex.h"

using std::cout;
using std::endl;

int main()
{
    int nums1[]={1,2,3,4,5};
    BoundArray<int> arr1(nums1,5);
    
    double nums2[]={1.1,2.2,3.3,4.4,5.5};
    BoundArray<double> arr2(nums2,5);

    
    try
    {
        for (int i =arr1.lower();i<=arr1.upper();++i)
            cout<<arr1[i]<<endl;
    }
    catch (InvalidIndex &e)
    {
    }

    try
    {
        for (int i =arr2.lower();i<=arr2.upper();++i)
            cout<<arr2[i]<<endl;
    }
    catch (InvalidIndex &e)
    {
    }

    return 0;
}

