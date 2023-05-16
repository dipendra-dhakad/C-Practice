//friendly pair

#include<iostream>
using namespace std;
 
int divisorSum(int n){
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum+=i;
        }
        
    }
    return sum;
}
 
int main(){
 int num1 = 30;
 int num2 = 140;
 int sum1 = divisorSum(num1);
 int sum2 = divisorSum(num2);
  
if (sum1/num1 == sum2/num2)
{
    cout<<num1<<" and "<<num2<<" are friendly pairs"<<endl;
}
else{
        cout<<num1<<" and "<<num2<<" are  not  friendly pairs"<<endl;

}


return 0;
}