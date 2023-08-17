// #include <iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* prev;
//     node *next;

//     //constructor
//     node (int d){
//         this -> data =d;
//         this ->next =NULL;
//         this ->prev = NULL;
//     }
// };
// // travesing a list
// void print (node * head){
//     node * temp = head;
//     while (temp != NULL)
//     {
//         cout <<temp -> data <<" ";
//         temp = temp -> next;

//     }
//     cout <<endl;
    
// }

// //gives the length of list 
//  int getLength(node * head){
//     int len =0;
//     node * temp = head;
//     while (temp != NULL)
//     {
//         len ++;
//         temp = temp ->next;    
//      }
//      return len;
    
//  }
// void insertathead (node* &head ,int d){
//     node * temp = new node (d);
//     temp ->next = head;
//     head->prev = temp;
//      head = temp;
// }

// void insertatTail(node* &tail ,int d){
//     node *temp = new node(d);
//     tail ->next = temp;
//     temp ->prev = tail;
//     tail =temp;
// }

// void insertatPosition(node *&tail, node* &head ,int position,int d){
//     //insert at start

//     if(position ==1){
//         insertathead(head ,d);
//         return;
//     }
//     node* temp = head;
//     int cnt = 1;

//     while (cnt < position - 1)
//     {
//         temp = temp -> next;
//         cnt++;
//     }

//     // inserting at last position
//     if (temp -> next == NULL)
//     {
//         insertatTail(tail, d);
//         return;
//     }

//     // creating a node for d
//     node* nodetoinsert = new node(d);
//     nodetoinsert -> next = temp -> next;
//     temp -> next = nodetoinsert;
//     nodetoinsert ->prev =temp;
// }
// int main(){
//     node*node1 = new node(10) ;
//        node * head = node1;
//        node * tail = node1;

//        print(head);
//     //    cout<<getLength(head) <<endl;

//        insertathead(head , 11);
//        print (head);

//        insertathead(head , 13);
//        print (head);

//        insertathead(head , 15);
//        print (head);

//        insertathead(head , 8);
//        print (head);

//       insertatPosition(tail ,head,2,100);
//       print (head);

//       insertatPosition(tail ,head,1,101);
//       print (head);

//       insertatPosition(tail ,head,8,102);
//       print (head);
//     return 0 ;
// }

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d ) {
        this-> data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) {
    Node* temp  = head ;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;

    }
}



int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(7, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;





    return 0;
}