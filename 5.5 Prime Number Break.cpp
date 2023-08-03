// # Fibonacci sequence is a sequence of number in which each number is the sum of he two preceding ones and sequence starts from 0 and 1.

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n: "<< endl;
    cin>>n;

    for (int i = 2 ; i < n; i++)
    {
        if (n % i == 0)
        {

            cout<<"Not a prime Number!!";
            break;

        }
        else{
            cout<<"Maybe prime! ";
        }
        
    }
    
    

}