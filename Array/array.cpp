#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout<< arr [i] << " ";

    }
    cout<<"printing is done " <<endl;
    
}
int main(){
    int array [15] ;

    //Accesing the array 
    cout<<"The value at 14 index is : "<< array[14] << endl;

    int number [3] ={1,2,3};
    cout<<"The value at 2 th index is : "<<number[2] <<endl;

    int num[15] ={1,13};
    printArray(num,15);
    return 0 ;
}