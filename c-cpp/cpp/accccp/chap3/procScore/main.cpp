#include <iostream>
#include <string>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "input your name : ";
    string name;
    cin >> name;

    cout << "iput your midterm finalterm : ";
    double midterm, finalterm;
    cin >> midterm >> finalterm;

    cout << "input your homework scores (and EOF) : ";

    int count = 0;
    double sum = 0.0;

    double homework;
    while (cin >> homework) { // 식의 결과값은 cin, cin 이 true / false (bool타입) 로 타입 캐스팅이 가능함
        sum += homework;
        ++count;
     }

    std::streamsize ss = cout.precision();
    cout << "your final score : " << std::setprecision(3) <<
                0.2 * midterm + 0.4 * finalterm + 0.4 * sum / count << std::setprecision(ss) << endl;
    // cout에 디폴트로 지정되어있는 유효 자릿수를 임시 변수를 써서 저장, 세자리수로 맞춰서 쓰고 원래상태로 되돌림
}

