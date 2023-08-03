#include<iostream>
using namespace std;


// 1 --> EVEN
// 0 --> ODD

bool isPrime(int n){

    for (int i = 2; i <= n; i++)
    {
        // divide hogaya --> not a prime no
        if (n%i == 0)
        {
            return 0;
        }
        
    }
    
        return 1;
    
    
}

int main(){

    int n;

    cout << "Enter n : " << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Is Prime " << endl; 
    }
    else{
        cout <<"Not Prime" <<endl ;
    }
    

}