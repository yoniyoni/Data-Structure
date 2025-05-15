#include<iostream>
using namespace std;
int rear=-1,front=-1,queue_size=0;
const int max_size=5;
char data[5];
void enqueue(char value)
{
  if(rear<max_size-1)
  {
    rear++;
	data[rear]=value;
	cout<<"Enqueue Element :"<<value<<endl;
	queue_size++;
	 if(front==-1)
	  front++;
  }else
     cout<<"Queue Overflow"<<endl;
}
void dequeue()
{
 if(queue_size>0)
  {
   cout<<"\n Dequeue Element:"<<data[front];
   front++;
   queue_size--;
  }else
     cout<<"Queue Underflow"<<endl;
}
void display()
{
  cout<<"\n Queue Element: ";
   for(int i=front;i<=rear;i++)
     cout<<data[i]<<" | ";
}
int main()
{
 enqueue('A');
 enqueue('B');
 enqueue('C');
 enqueue('D');
 display();
 dequeue();
 dequeue();
 display();
return 0;
}

