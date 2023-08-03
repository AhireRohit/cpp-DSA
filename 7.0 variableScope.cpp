#include<iostream>
using namespace std;
int main() {

    // cout<<a;         // --> throws error because a not defined
    int n;
    cout<<"Value of n is : "<<n << endl;            // --> value of n is not declared so it prints garbage value 
                        // --> or
                        // --> it prints whatever value is stored in memory location allocated for n

    
    // Value of b is different according to block.
    // cannot initialize same variable twice
    int b = 4;
    cout<<"Value of b outside: "<<b << endl;
    if (true)
    {
        int b = 7;
        cout<<"Value of b insidr IF is : " <<b << endl;
    }
    

}