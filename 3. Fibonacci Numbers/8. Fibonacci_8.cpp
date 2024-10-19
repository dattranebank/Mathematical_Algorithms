#include <iostream>
#include <vector>
using namespace std;

// Dùng Dynamic Programming (Quy hoạch động)

// 8. The Nth Fibonnaci (Tìm số Fibonacci thứ n)
// Link exercise: https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
// Link answer:

// Cách 1: Dynamic Programming kiểu array
// Hoàn thành
// Time: O(n)
int fib1(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;

    int A[n+1];  // Tạo mảng để lưu trữ các giá trị Fibonacci
    A[0]=0;
    A[1]=1;

    for (int i=2;i<=n;i++)
    {
        A[i]=A[i-1]+A[i-2];  // Lưu kết quả trung gian
    }
    return A[n];
}

// Cách 2: Dynamic Programming kiểu vector
// Hoàn thành
// Time: O(n)
int fib2(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;

    vector <int> vec(n+1);  // Tạo mảng để lưu trữ các giá trị Fibonacci
    vec[0]=0;
    vec[1]=1;

    for (int i=2;i<=n;i++)
    {
        vec[i]=vec[i-1]+vec[i-2];  // Lưu kết quả trung gian
    }
    return vec[n];
}


int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;
    cout <<fib2(n);
}


