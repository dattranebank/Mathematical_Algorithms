#include <iostream>
#include <vector>
using namespace std;

// Dùng Recursion (Đệ quy)

// 7. The Nth Fibonnaci (Tìm số Fibonacci thứ n)
// Link exercise: https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1
// Link answer:

// Cách 1: Tự code, dùng Recursion
// Hoàn thành
// Time: O(2^n)
int fib1(int n)
{
    if (n==0) return 0;
    if (n==1) return 1;
    else return (fib1(n-1)+fib1(n-2));
}

// Cách 2: Recursion có dùng memoization kiểu array
// Hoàn thành
// Time: O(n)
int fib2(int n, int memo[]) {
    if (n==0) return 0;
    if (n==1) return 1;
    if (memo[n]!=-1) return memo[n];  // Trả về kết quả đã lưu

    // Tính và lưu lại kết quả
    memo[n]=fib2(n-1,memo)+fib2(n-2,memo);
    return memo[n];
}

// Cách 3: Recursion có dùng memoization kiểu vector
// Hoàn thành
// Time: O(n)
int fib3(int n, vector <int>& memo)
{
    if (n==0) return 0;
    if (n==1) return 1;
    if (memo[n]!=-1) return memo[n]; // Trả về kết quả đã lưu

    memo[n]=fib3(n-1,memo)+fib3(n-2,memo);
    return memo[n];
}


int main()
{
    int n;
    cout <<"Nhap n:"; cin >>n;

    // Tạo mảng memo với kích thước n+1 và khởi tạo tất cả phần tử là -1
    // vector <int> memo(n+1,-1);

    // Khởi tạo mảng memo với kích thước n+1
    int memo[n+1];
    // Khởi tạo tất cả các phần tử của memo là -1
    for (int i=0;i<=n; i++) memo[i]=-1;

    cout <<fib2(n,memo);
}

