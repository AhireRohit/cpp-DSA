// suppose apke pass amt = 1330
// iske liye kitne 100 , 50, 20, 1 ke note lagenge
// matlab 13 --> 100rs
//        1  --> 20rs
//        10 --> 1rs
//        ke note lagenge

 
#include <iostream>
using namespace std;

int main() {
    int amount = 1330;
    int note100 = 0, note50 = 0, note20 = 0, note1 = 0;

    while (amount > 0) {
        switch (amount) {
            case 1330 ... 1000000:
                note100 += amount / 100;
                amount %= 100;
                break;
            case 100 ... 1329:
                note50 += amount / 50;
                amount %= 50;
                break;
            case 50 ... 99:
                note20 += amount / 20;
                amount %= 20;
                break;
            default:
                note1 = amount;
                amount = 0;
                break;
        }
    }

    cout << "Number of 100 rupee notes: " << note100 << endl;
    cout << "Number of 50 rupee notes: " << note50 << endl;
    cout << "Number of 20 rupee notes: " << note20 << endl;
    cout << "Number of 1 rupee notes: " << note1 << endl;

    return 0;
}
