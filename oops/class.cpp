#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class hero
{

private:
   int health;

public:
   char level;
   char *name;
   static int timetocomplete; 

   // default constructor
   hero()
   {
      cout << " default constructor called" << endl;
      name = new char[100];
   }

   // paramertic constructor
   hero(int health)
   {
      cout << "this keyword :" << this << endl;

      this->health = health;
   }
   hero(int health, char level)
   {
      this->health = health;
      this->level = level;
   }

   // copy constuctor
   hero(hero &temp)
   {
      char *ch = new char[strlen(temp.name) + 1];
      strcpy(ch, temp.name);
      this->name = ch;

      cout << "copy constructor called " << endl;
      this->health = temp.health;
      this->level = temp.level;
   }
   void print()
   {
      cout << endl;
      cout << "[ Name : " << this->name << " , ";
      cout << "Health : " << this->health << " , ";

      cout << "Level : " << this->level << " ]" << endl;
      cout << endl;
   }
   int gethealth()
   {
      return health;
   }
   char getlevel()
   {
      return level;
   }
   void sethealth(int h)
   {
      health = h;
   }
   void setlevel(char ch)
   {
      level = ch;
   }
   void setName(char name[])
   {
      strcpy(this->name, name);
   }
   ~hero() {
      cout<<"destructor bhai called " <<endl;
   }
};

int hero :: timetocomplete =5;
int main()
{


cout <<hero::timetocomplete <<endl;



//   //static
//   hero a;

//   //dynamic
//   hero *b = new hero;
// //manually call
//   delete b;

 // hero hero1;

   // hero1.sethealth(60);
   // hero1.setlevel('S');
   // char name[7] = "Dip";
   // hero1.setName(name);

   // // hero1.print();

   // hero hero2(hero1);
   // // hero2.print();

   // hero1.name[0] = 'H';
   // // hero1.print();

   // // hero2.print();

   // //deep and shallo
   // hero1=hero2;

   // hero1.print();

   // hero2.print();

   // hero s(40 ,'K');
   // s.print();

   // //copy constructor
   // hero r(s);
   // r.print();

   // //stastic
   // hero ramesh(50);
   // // // cout<<"addres of ramesh "<< &ramesh <<endl;
   // // ramesh.gethealth();
   // ramesh.print();
   // //dhyanamically
   // hero *b =new hero;
   // b->print();

   // hero temp(22 ,'D');
   // temp .print();
   // // object created statically
   // cout<<"hii"<<endl;
   // hero ramesh;
   // cout<<"hello"<<endl;

   // //static allocation
   //      hero a;
   //      a.sethealth(50);
   //      a.setlevel('A');
   //      cout<<"health is " <<a.gethealth()<<endl;
   //      cout<<"level is " <<a.level <<endl;

   //      //dynamic allocation
   //      hero * b = new hero;
   //      b->sethealth(80);
   //      b->setlevel('B');
   //      cout<<"health is " <<(*b).gethealth() <<endl;
   //      cout<<"level is " <<(*b).level <<endl;

   //  //creation of object
   //   hero ramesh;
   //   cout <<"ramesh health is : " <<ramesh.gethealth()<<endl;

   //   //set of value
   //   ramesh.sethealth(70);
   //   ramesh.level ='A';

   //   cout<<"health is " <<ramesh.gethealth()<<endl;
   //   cout<<"level is " <<ramesh.getlevel()<<endl;
   return 0;
}
