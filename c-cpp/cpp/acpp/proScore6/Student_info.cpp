//
// Created by test on 21. 10. 6..
//
#include"Student_info.h"

using std::istream;
using std::list;

//compare object and way of sorting
bool compare (const Student_info& x,const Student_info& y)
{
    return x.name<y.name;
}

//from isream hw score and input the vector
//to not use sum and count
istream& read_hw(istream& in,list<double>& hw)
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

//from istream hw score and input the vector
//to not use sum and count
istream& read(istream& is,Student_info& s)
{
    //name, midterm ,final exam score store
    is>>s.name>>s.midterm>>s.final;
    //read homework's score into is
    read_hw(is,s.homework);
    return is;
}

