#include <iostream>
#include <vector>
using namespace std;

// 6. Kiểm tra x vừa nhập có phải là số thuộc dãy Fibonacci hay không?
// Link exercise:
// Link answer:

// Cách 1: Tự code
// 0/0
// Hoàn thành
bool nFibonacci(int x)
{
    vector <int> vec;
    int F0=0;
    int F1=1;
    int Fn=0;

    vec.push_back(0);
    vec.push_back(1);
    if (x==0 || x==1) return true;

    while (x>Fn)
    {
        Fn=F0+F1;
        F0=F1;
        F1=Fn;
        vec.push_back(Fn);
        if (x==Fn) return true;
    }
    return false;
}


int main()
{
    int x;
    cout <<"Nhap x:"; cin >>x;
    cout <<nFibonacci(x);
}


