#include <iostream>
using namespace std;

bool f(int i , string s){
    if(i>=s.size()) return true;
    if(s[i] != s[s.size()-i-1])return false;
    return f(i+1,s);
}

int main(){
    string s = "nayan" ;
    cout << f(0,s);
    return 0 ;
}