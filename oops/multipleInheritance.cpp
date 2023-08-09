#include <iostream>
using namespace std;

class Animal{
    public:
    int height;
    int age;

    public:
    void bark (){
        cout<< "braking" <<endl;

    }
};
class Human{
    public:
    string color;

    public:
    void speak(){
        cout<< "speaking" <<endl;
    };


};

//multiple class
class hybrid : public Animal , public Human{

};
int main(){
    hybrid obj1;
    obj1.bark();
    obj1.speak();
    
    return 0 ;
}