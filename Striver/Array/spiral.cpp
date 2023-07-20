#include <iostream>
#include<vector>
using namespace std;

int spiralMatrix(int MATRIX[],int R,int C) {
     int n =MATRIX.size();
     int m =MATRIX[0].size();
     int left=0,right=m-1;
     int top=0,bottom =n-1;
     vector<int>ans;
     while(top<=bottom && left<=right){
         for(int i=left;i<=right ;i++){
             ans.push_back(MATRIX[top][i]);
         }
         top++;

         for(int i =top;i<=bottom;i++){
             ans.push_back(MATRIX[i][right]);
         }
         right--;

         if(top<=bottom){
             for(int i=right;i>=left;i--){
                 ans.push_back(MATRIX[bottom][i]);
             }
             bottom--;
         }
         if(left<=right){
             for(int i =bottom;i>=top;i--){
                 ans.push_back(MATRIX[i][left]);
             }
             left++;
         }
     }
     return ans;
}
int main(){
    int R=0,C=0;
    int  a[R][C] ={ {1,2,3,4,5},
                     {16,17,18,19,6},
                     {15,24,25,20,7},
                     {14,23,22,21,8},
                     {13,12,11,10,9}};
      cout<<  spiralMatrix(R,C);
    
    return 0 ;
}