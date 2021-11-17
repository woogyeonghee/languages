#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>


using std::cin; using std::sort;
using std::cout; using std::streamsize;
using std::endl; using std::string;
using std::setprecision; using std::vector;
using std::domain_error; using std::istream;

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

//from isream hw score and input the vector
//to not use sum and count
istream& read_hw(istream& in,vector<double>& hw)
{
    if(in)//if there has value in stream
    {
        //for prevent not using value in stream, clear the stream
        hw.clear();

        double x;

        while (in>> x)
            hw.push_back(x);

        //ignore eof,then use clear the init error state
        in.clear();
    }
    return in;
}


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

    read_hw(cin,homework);

    //exec try{} and if domain error then print string
    try
    {
        double final_grade=grade(midterm,final,homework);
        streamsize prec =cout.precision();
        cout <<"Ur final grade is "<<setprecision(3)
            <<final_grade<<setprecision(prec)<<endl;
    }
    catch (domain_error)
    {
        cout<<endl<<"U must enter ur grades. "
                    "Please try again."<<endl;
        return 1;
    }
    return 0;
}
