#include <iostream>
#include "boundArray.h"
#include "invalidIndex.h"
using std::cout;
using std::endl;

int main()
{
    BoundArray arr1(1,5);//[1,5]
    BoundArray arr2;    //[0,10]
    BoundArray arr3(10); //[0,10] BoundArray arr3= 10; X
    
    int nums[]={1,2,3,4,5};
    BoundArray arr4(nums,5);
    BoundArray arr5=arr4;

    arr1=arr4;

    if(arr1==arr4)
        cout<<"arr1 and arr4 is equal"<<endl;
    else
        cout<<"arr1 and arr4 is not equal"<<endl;
    try
    {
        for (int i =arr1.lower();i<=arr1.upper();++i)
            cout<<arr1[i]<<endl;
    }
    catch (InvalidIndex &e)
    {
    }


    return 0;
}

