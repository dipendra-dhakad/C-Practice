#include <iostream>
#include<map>
using namespace std;

class node
{
public:
    int data;
    node* next;
    // constructor
    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~node()
{
    int value = this -> data;
    // Memory free for the next node
    if (this->next != NULL)
    {
        delete next;
        this->next = NULL;
    }
    cout << "Memory is freed for data " << value << endl;
}
};
void insertatHead(node* &head, int d)
{
    // new node create

    node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertattail(node* &tail, int d)
{
    //new node create
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}
void print(node* &head)
{
    if(head == NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertatPosition(node* &tail, node* &head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertatHead(head, d);
        return;
    }
    node* temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }

    // inserting at last position
    if (temp -> next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    // creating a node for d
    node* nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}
void deletion(int position, node* & head)
{
    // deleting at 1 st position
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free start done
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // deleting any middle and last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
};

int main()
{
    // new node
    node* node1 = new node(10);
    // cout<< node1 ->data <<endl;
    // cout<< node1 ->next <<endl;

    // head point to next
    node* head = node1;
    node* tail = node1;

    print(head);

    // insertatHead(head ,12);
    // print(head);

    // insertatHead(head ,15);
    // print(head);

    // insertattail(tail,10);
    // print(head);

    insertattail(tail,12);
    print(head);

    insertattail(tail,15);
    print(head);

     insertattail(tail,17);
     print(head);

    //  insertattail(tail,19);
    //  print(head);
    insertatPosition(tail, head, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    delete (4, head);
    print(head);

    
    return 0;
}