#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {   
        ans = ans * a;
        
    }
    return ans;
}

int main(){

    int a, b;
    cout << " Enter the value of a and b : " << endl;
    cin >> a >> b;
    
    int answer = power(a, b);
    cout << " Answer is : " << answer << endl;



    int num1, num2;
    cout << " Enter the value of num1 and num2 : " << endl;
    cin >> num1 >> num2;
    
    answer = power(num1, num2);
    cout << " Answer is : " << answer << endl;



    int c, d;
    cout << " Enter the value of c and d : " << endl;
    cin >> c >> d;
    
    answer = power(c, d);
    cout << " Answer is : " << answer << endl;


}