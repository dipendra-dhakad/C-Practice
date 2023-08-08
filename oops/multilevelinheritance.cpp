#include <iostream>
using namespace std;

class Animal{
    public:
    int height;
    int age;

    public:
    void speak (){
        cout<< "speaking" <<endl;

    }
};
class dog :public Animal{

};
class cat :public dog{

};
int main(){
    cat c;
    c.speak();
    return 0 ;
}