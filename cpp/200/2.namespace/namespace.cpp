#include <iostream>

using namespace std;

namespace silla
{
    int year =935;
    
    void CentralArea()
    {
        cout<<"gyeongsang"<<endl;
    }
}

namespace baekjae
{
    int year =660;
    
    void CentralArea()
    {
        cout<<"chung ceng"<<endl;
    }
}

//when u want use same variant
using namespace silla;
using namespace baekjae;

int main()
{
    cout<<"silla: ";
    silla::CentralArea();
    cout<<"silla: "<<silla::year<<endl;

    cout<<"baekjae: ";
    baekjae::CentralArea();
    cout<<"baekjae: "<<baekjae::year<<endl;

    return 0;
}
