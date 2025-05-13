#include<iostream>
using namespace std;
const int max_size=5;
int data[5];
int top=-1;
bool isFull()
{
 return (top==max_size-1);
}
bool isEmpty()
{
 return (top==-1);
}
int peek()
{
 return data[top];
}
void push(int value)
{
 if(!isFull()) 
  {
   top++;
   data[top]=value;
   cout<<value<<" is Pushed Element"<<endl;
  }
 else
   cout<<"Stack Overflow"<<endl;
}
 int pop()
 {
  int x;
    if(!isEmpty())
	{
	 x=data[top];
	 top--;
	}
	else
	  cout<<"Stack UnderFlow"<<endl;
 return x;
 }
void display()
{
 for(int i=0;i<=top;i++)
   cout<<data[i]<<"  ";
cout<<endl;
}
int main()
{
push(5);
push(6);
push(7);
cout<<"Popped Element: "<<pop()<<endl;
display();
cout<<"Peek Element:"<<peek()<<endl;
return 0;
}

