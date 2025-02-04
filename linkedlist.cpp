#include <iostream>

using namespace std;

struct node
{
    int data;
    node *link;
};

class linkedlist
{
    public:
    // pointer to the first node in the list
    node *head;


    // constuctor to intailize the head to null
    //  linkedlist() : head(NULL){}
    //   or
    linkedlist()
    {
        head = NULL;
    }

    // for insertion at begin
    void insertAtbegin(int data)
    {

        node *temp = new node;

        temp->data = data;
        temp->link = head;

        // updata head

        head = temp;
        
    }

    // for diaplay

    void diaplay()
    {

        if (head == NULL)
        {
            cout << "list is empty";
            return;
        }
        else
        {
         node* temp = head;

         while (temp != NULL)
         {
          cout << temp->data << " -> ";

          temp = temp->link;
         }

         cout << "NULL";
        }
    }
};


// int main()
// {

// linkedlist list1;

// list1.insertAtbegin(4);
// list1.insertAtbegin(9);
// list1.insertAtbegin(4);

// cout << list1.head->data;

// list1.diaplay();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = nullptr;
//     }
// };

// class LinkedList {
// public:
//     Node* head;

//     LinkedList() {
//         head = nullptr;
//     }

//     void insertAtBegin(int val) {
//         Node* newNode = new Node(val);
//         newNode->next = head;
//         head = newNode;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp != nullptr) {
//             cout << temp->data << " -> ";
//             temp = temp->next;
//         }
//         cout << "NULL" << endl;
//     }
// };

// int main() {
//     LinkedList list1;

//     list1.insertAtBegin(4);
//     list1.insertAtBegin(9);
//     list1.insertAtBegin(4);

//     cout << "Head data: " << list1.head->data << endl;
//     list1.display();

//     return 0;
// }
