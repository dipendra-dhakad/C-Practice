#include <iostream>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"func1 call" <<endl;
    }
};
class B :public A{
    public:
    void func2(){
        cout<<"func2 call" <<endl;
    }
};
class D {
    public:
    void func3(){
        cout<<"func3 call"<<endl;
    } 
};
class C: public B, public D{

};

int main(){
      A obj1;
      obj1.func1();

      cout<<endl;
      B obj2;
      obj2.func1();
      obj2.func2();

      cout<<endl;
      C obj3;
      obj3.func1();
      obj3.func2();
      obj3.func3();

      cout<<endl;
      D obj4;
      obj4.func3();
      

    return 0 ;
}