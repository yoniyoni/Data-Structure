#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
Node *top=NULL;
bool isEmpty()
{
 return (top==NULL);
}

void push(int value)
{
Node *newnode=new Node;
newnode->data=value;
newnode->next=top;
top=newnode;
cout<<value<<" Pushed on the stack"<<endl;
}
void pop()
{
 if(isEmpty())
  cout<<"stack is empty";
else
{
Node *temp=top;
cout << top->data << " popped from stack.\n";
top=top->next;
delete temp; 
}
}
void display() {
        if (top == NULL) {
            cout << "Stack is empty!\n";
        }
	else{
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int peek() {
        if (top == NULL) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return top->data;
    }
int main() {
    push(5);
    push(6);
    push(7);
    display();
    cout << "Top element: " << peek() << endl;
    pop();
    display();
	pop();
    display();
    return 0;
}

