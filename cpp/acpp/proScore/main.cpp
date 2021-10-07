#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

using std::cin; using std::setprecision;
using std::cout; using std::string;
using std::endl; using std::streamsize;


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

    //default initialization
    int count =0;
    double sum=0;
    //same as sum=0.0;

    double x;

    //while
    while (cin >>x) //till eof
    {
        ++count;
        sum+=x;
    }


    //set streamsize
    streamsize prec= cout.precision(3);//precision is cout's member func
    //print
    cout <<"ur final grade is "
         <<0.2*midterm +0.4*final +0.4 *sum/count<<endl;
    cout.precision(prec);

    //another way
//    streamsize prec= cout.precision();
//    cout <<"ur final grade is"<<setprecision(3)
//        <<0.2*midterm +0.4*final +0.4 *sum/count
//        <<setprecision(prec)<<endl;

    return 0;
}
