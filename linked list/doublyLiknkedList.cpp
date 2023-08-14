#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node *next;

    //constructor
    node (int d){
        this -> data =d;
        this ->next =NULL;
        this ->prev = NULL;
    }
};
// travesing a list
void print (node * head){
    node * temp = head;
    while (temp != NULL)
    {
        cout <<temp -> data <<" ";
        temp = temp -> next;

    }
    cout <<endl;
    
}

//gives the length of list 
 int getLength(node * head){
    int len =0;
    node * temp = head;
    while (temp != NULL)
    {
        len ++;
        temp = temp ->next;    
     }
     return len;
    
 }
void insertathead (node* &head ,int d){
    node * temp = new node (d);
    temp ->next = head;
    head->prev = temp;
     head = temp;
}
int main(){
    node*node1 = new node(10) ;
       node * head = node1;

       print(head);
    //    cout<<getLength(head) <<endl;

       insertathead(head , 11);
       print (head);

       insertathead(head , 13);
       print (head);

       insertathead(head , 15);
       print (head);

       insertathead(head , 8);
       print (head);
    return 0 ;
}