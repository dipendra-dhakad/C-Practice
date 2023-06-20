#include <iostream>
#include <math.h>
using namespace std;

int numberofdigit(int x){
    int n=0;
    while (x>0)
    {
        n++;
        x=x/10;
    }
    return n;
    
}

bool isarmstrong(int x){
    int n=numberofdigit(x);
    int temp = x,sum=0;

    while (temp>0)
    {
        int r = temp%10;

        sum =sum + pow(r ,n);
        temp = temp /10;
    }
    return (sum ==x);    
}
int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isarmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}


