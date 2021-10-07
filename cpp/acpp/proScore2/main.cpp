#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::sort;
using std::cout; using std::streamsize;
using std::endl; using std::string;
using std::setprecision; using std::vector;


int main() {
    //enter name
    cout<<"Please enter ur name: ";
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<"!"<<endl;

    //input midterm and final score
    std::cout << "Enter ur midterm and final exam grades, "
                 "followed by end-of-file: ";
    //for easy to read
    double midterm, final;
    cin>>midterm>>final;
    //same as ==> cin>>midterm; cin>>final;

    //input homework grade
    cout<<"Enter all ur homework grade, "
          "followed by end-of-file: ";

    //make vector contrainer
    vector<double> homework;
    double x;

    //till now input numbers add to vector
    while (cin >>x) //enter eof
    {
        homework.push_back(x);
        //input one by one
    }

    // vector type is double
    // vector<double>'s size_type called vec_sz
    typedef vector<double>::size_type vec_sz;
    // number of vectors put into vec_sz type and object name size
    vec_sz size =homework.size();

    // check there has input nums
    if (size==0)
    {
        cout<<endl<<"U must enter ur grades. "
                    "Please try again."<<endl;
        return 1;
        //return 1 is not-normal ended program
    }

    //in algorithm header and sorted upper
    //begin()==first elements, end() =last elements
    sort(homework.begin(),homework.end());

    //find mid
    //variants name size divided by two
    vec_sz mid=size/2;
    double median;
    // if even num median is ([mid]-1+[mid])/2, else [mid]
    median=size%2==0?(homework[mid]+homework[mid-1])/2:homework[mid];

    //set streamsize
    streamsize prec= cout.precision(3);//precision is cout's member func
    //print
    cout <<"ur final grade is "
         <<0.2*midterm +0.4*final +0.4 *median<<endl;
    cout.precision(prec);



    return 0;
}
