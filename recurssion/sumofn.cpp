#include <iostream>
using namespace std;

int f(int n){
    if(n==0) return 0 ;
    return n + f(n-1);
}
int main(){

     #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n =3 ;
   // cout<<"Enter the number ";
   // cin>>n;
   //cout <<n;
    cout<< (f(n));
    return 0 ;
}