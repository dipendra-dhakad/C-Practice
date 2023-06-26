#include <iostream>
using namespace std;

int countdistinctway(long long n){
    if(n<0)return 0;
    if(n==0)return 1;
    
    int ans = countdistinctway(n-1) + countdistinctway(n-2);
    return ans;
}
int main(){
    int n ;
    cin>>n;
     
   cout<< countdistinctway(n);
    
    return 0 ;
}