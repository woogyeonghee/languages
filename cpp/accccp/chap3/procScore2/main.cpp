#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>            // sorting을 쓰기 위함
// 벡터(중앙값을 사용하기 위함) 및 정렬 사용
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main()
{
    cout << "input your midterm finalterm : ";
    double midterm, finalterm;
    cin >> midterm >> finalterm;

    cout << "input your homework scores (and EOF) : ";

    vector<double> homeworks(100);         // template 클래스, 벡터 안에 double형 자료를 저장한다는 의미, 기본 크기는 1
                                             // 공간이 부족하면 크기를 두배씩 늘리고 늘린 곳에 데이터를 넣고 기존 데이터가 저장된 크기를 제거
                                             // 오버헤드를 줄이기 위해 100이라는 크기를 주었음

    double hw;
    while(cin >> hw) {      // 숙제를 받는 동안 반복문을 계속 받음
        homeworks.push_back(hw);           // 벡터 안에 값을 넣을 때 쓰는 함수
    }

    sort(homeworks.begin(), homeworks.end()); // sort 함수도 template 함수 -> 형에 따라 바뀜, 범위를 주면 정렬

    // vector<double>::size_type size = homeworks.size();

    // 올드 스타일, 벡터의 사이즈
    typedef vector<double>::size_type vec_size;
    vec_size size = homeworks.size();

    // auto size = homeworks.size();           // 자동으로 타입을 찾아서 정의, 최근 트렌드, auto는 리턴값 받을 때 좋다.

    double median;
    if (homeworks.size() % 2 != 0) {                    // 홀수면
        median = homeworks[homeworks.size() / 2];       // 2로 나누면 나오는 가운데 값 사용
    } else {
        median = (homeworks[homeworks.size() / 2] + homeworks[homeworks.size() / 2 - 1]) / 2; // 짝수이므로 가운데 값 두개를 사용
    }

    std::streamsize ss = cout.precision();
    cout << "your final score : " << std::setprecision(3) <<
                0.2 * midterm + 0.4 * finalterm + 0.4 * median << std::setprecision(ss) << endl;
    // cout에 디폴트로 지정되어있는 유효 자릿수를 임시 변수를 써서 저장, 세자리수로 맞춰서 쓰고 원래상태로 되돌림

    return 0;
}

