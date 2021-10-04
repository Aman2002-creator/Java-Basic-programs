#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next = NULL;
    Node *prev = NULL;
};
Node *first = NULL;
Node *pointer = NULL;


void display()
{
    Node *temp = new Node;
    temp = first;
    if(first == NULL)
    {
        cout<<"Linked List is empty, nothing to diaplay!";
        return;
    }
    cout << endl<< "Elements are : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insert(int data){
    Node *newNode = new Node;
    Node *temp = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(first == NULL)
    {
        first = newNode;
        pointer = newNode;
        return;
    }
    else{
        temp = first;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newNode;
        newNode->prev = temp;
        pointer = temp->next;
        // free(temp);
    }
}

int undo()
{
    // Node *temp = new Node;
    
    if(pointer == NULL || pointer->prev == NULL )
    {
        return 0;
    }
    // temp = first;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // temp = temp->prev;
    pointer = pointer->prev;
    // cout<<"temp"<<endl;
    return pointer->data;
}

int redo()
{
    // Node *temp = new Node;
    
    if(pointer == NULL || pointer->next == NULL)
    {
        return 0;
    }
    // temp = first;
    // while (temp->next->next != NULL)
    // {
    //     temp = temp->next;
    // }
    pointer = pointer->next;
    // cout<<"temp"<<endl;
    return pointer->data;
}

int main()
{
    int n, ch,value;
    do
    {
        cout << endl<< endl<< "Press (1) For inserting element : " << endl;
        cout << "Press (2) For Undo : "<< endl;
        cout << "Press (3) For Redo : "<< endl;
        // cout << "Press (4) For Display data : "<< endl;
        cout << "Press (4) For exit : "<< endl;
        cout << "Enter choice : " ;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter data into linked list : ";
            cin >> n;
            insert(n);
            break;

        case 2:
            value = undo();
            if(value){
                cout<<value<<" ";
            }
            else{
                cout<<"Undo is not possible";
            }
            break;
        case 3:
            value = redo();
            if(value){
                cout<<value<<" ";
            }
            else{
                cout<<"Redo is not possible";
            }
            break;
        case 4:
            // display();
            exit(0);
            break;

        // case 5:
        //     break;

        default:
            cout << "Wrong choice please try again!";
            break;
        }
    } while (ch != 54);
}