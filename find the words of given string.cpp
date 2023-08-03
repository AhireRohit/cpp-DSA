#include<iostream>
using namespace std;

int main(){
    string str;
    int ch = 0; 
    int word = 0;

    cout << "Enter the line of string : " << endl;
    getline(cin, str);

    for (int i = 0; str[i] != '\0' ; i++)
    {
        if(str[i] == ' '){

            if (ch != 0)        
            {
                word ++;
            }
            
            ch = 0;
        }
        else{
            ch ++;
        }
    }
    if (ch != 0)
    {
        word ++;
    }
    cout << "Total words : " << word << endl;
}