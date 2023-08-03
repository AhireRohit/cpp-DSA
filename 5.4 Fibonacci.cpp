// # Fibonacci sequence is a sequence of number in which each number is the sum of he two preceding ones and sequence starts from 0 and 1.

#include<iostream>
using namespace std;
int main(){

    int n = 10;
    // cout<<"Enter the value of n: "<< endl;
    // cin>>n;
    int a = 0;
    int b = 1;

    cout<<a <<" "<<b;

    for (int i = 1; i <= n; i++)
    {
        int nextNo = a+b;
        cout<<" " << nextNo;
        a = b;
        b = nextNo;
    }

}