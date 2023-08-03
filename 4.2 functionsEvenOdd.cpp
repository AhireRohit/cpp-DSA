#include<iostream>
using namespace std;

// 1 --> EVEN
// 0 --> ODD

bool isEven(int a){
    if(a % 2 == 0){
        return 1;
    }
    else{
        return 0;
    } 
}

int main(){


    int num = 0 ;
    cout<<"Enter the num : " << endl;
    cin >> num;

    if(isEven(num)){
        cout << "Number is even : " << endl;
    }
    else{
        cout <<"Number is odd" <<endl;
    }
}