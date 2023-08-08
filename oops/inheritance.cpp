#include <iostream>
using namespace std;
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getage()
    {
        return this->age;
    }

    int setweight(int w)
    {
        this->weight = w;
    }
    int getheight(){
        return this ->height ;
    }
};
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    Male m1;
    cout<<m1.getheight()<<endl;


    // Male object1;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;

    // object1.setweight(70);
    //  cout << object1.weight << endl;
    // object1.sleep();
    return 0;
}