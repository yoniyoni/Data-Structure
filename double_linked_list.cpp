#include<iostream>
using namespace std;
struct node
{
int age;
node *next;
node *prev;
};
node *temp;
node *start_ptr=NULL;
node *end_ptr=NULL;
void node_at_start()
{
int x;
cout<<"Enter number:";
cin>>x;
temp=new node;
temp->age=x;
temp->prev=NULL;
 if(start_ptr==NULL)
 {
  temp->next=NULL;
  start_ptr=temp;
  end_ptr=temp;
  
 }
 else
 {
  temp->next=start_ptr;
  start_ptr->prev=temp;
  start_ptr=temp;
 }
}
void add_node_at_end()
{
 int x;
cout<<"Enter number:";
cin>>x;
temp=new node;
temp->age=x; 
temp->next=NULL;
 if(end_ptr==NULL)
 {
   temp->prev=NULL;
   start_ptr=temp;
   end_ptr=temp;
 }
 else
 {
  temp->prev=end_ptr;
  end_ptr->next=temp;
  end_ptr=temp;
 } 
}
void delete_all_data()
{
  
  while(start_ptr!=NULL)
  {
   temp=start_ptr;
   start_ptr=start_ptr->next;
   delete temp;
  }
  end_ptr=NULL;
  cout<<"Deleted all data";
}
void delete_first_node()
{
 if(start_ptr==NULL)
  cout<<"List is Empty"<<endl;
 else
 {
  temp=start_ptr;
  start_ptr=start_ptr->next;
  if (start_ptr != NULL) { // Check if the list is not now empty
        start_ptr->prev = NULL;
    } else {
        end_ptr = NULL;      // List became empty
    }
  delete temp;
 }
}
void delete_last_node()
{
   if(end_ptr==NULL)
    cout<<"the list is empty";
  else
  {
   temp=end_ptr;
   end_ptr=end_ptr->prev;
   if (end_ptr != NULL) { // Check if the list is not now empty
        end_ptr->next = NULL;
    } else {
        start_ptr = NULL;     // List became empty
    }
   delete temp;
  }
}

void traverse()
{
 if (start_ptr!=NULL)
    {
        node *temp;
        cout << "Items in forward direction are:";
        temp = start_ptr;
        while (temp != NULL)
        {
            cout << temp->age << " ";
            temp = temp->next;
        }
        cout << endl;
        cout << "Items in backward direction are:";
        temp = end_ptr;
        while (temp)
        {
            cout << temp->age << " ";
            temp = temp->prev;
        }
    }else{
        cout << "List is empty!" << endl;
    }
    cout << endl;
}
int main()
{
  int ch;
 do{
 cout<<"\n Enter choice:";
 cout<<"1 : add at the beginnig"<<endl;
 cout<<"2:add at the end"<<endl;
 cout<<"3: destroy all data"<<endl;
 cout<<"4:delete first node"<<endl;
 cout<<"5:delete last node"<<endl;
 cout<<"6:display data"<<endl;
 cout<<"7:to exit"<<endl;
 cin>>ch;
   switch(ch)
   { 
   case 1:
  node_at_start();
   break;
   case 2:
   add_node_at_end();
   break;
   case 3:
   delete_all_data();
   break;
   case 4:
   delete_first_node();
   break;
   case 5:
   delete_last_node();
   break;
   case 6:
  traverse();
   break;
   case 7:
   cout<<"out of the choice";
   break;
  }
  }while(ch!=7);
return 0;
}

