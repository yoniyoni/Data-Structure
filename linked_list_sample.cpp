#include<iostream>
using namespace std;
struct student
{
  char name[10];
  int age;
  float cgpa;
  student *next;
};
student *temp,*temp2, *start_ptr=NULL;
student* get_details()
{
 temp=new student;
  cout<<"Enter the name of student:";
  cin>>temp->name;
  cout<<"Enter the Age:";
  cin>>temp->age;
  cout<<"Enter student CGPA";
  cin>>temp->cgpa;
  temp->next=NULL; 
 return temp;
}
void adding_node()
 {
  student *temp=get_details();
  if(start_ptr == NULL)
   start_ptr=temp;
  else
  {
  temp->next=start_ptr;
  start_ptr=temp;
  }
 }
void adding_node_at_end()
{
  student *temp=get_details();
  if(start_ptr == NULL)
   start_ptr=temp;
  else
  {
  temp2=start_ptr;
    while(temp2->next!=NULL)
	{
	 temp2=temp2->next;
	}
	temp2->next=temp;
  }
}
void display()
 {
   temp=start_ptr;
   do{
      if(temp==NULL)
	    cout<<"You dont have a list";
	  else{
	     // Display details for what temp points to 
	cout << "Name : " << temp->name << endl; 
	cout << "Age : " << temp->age << endl; 
	cout << "CGPA : " << temp->cgpa << endl; 
	cout << endl; // Blank line 
	temp = temp->next;
	  }
   }while(temp!=NULL);
 }
void delete_first_node()
{
  temp=start_ptr;
  start_ptr=start_ptr->next;
  delete temp;
}
void delete_last_node()
{
   if(start_ptr==NULL)
    cout<<"the list is empty";
  else
  {
   temp=start_ptr;
   if(temp->next==NULL)
    {
	delete temp;
    start_ptr=NULL;
	}
    else
	{
	 while(temp->next!=NULL)
	 {
	   temp2=temp;
	   temp=temp->next;
	 }
	 delete temp;
	 temp2->next=NULL;
	}
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
  cout<<"Deleted all data";
}
int main()
{
 int ch;
 do{
 cout<<"Enter choice:";
 cout<<"1 : add at the beginnig"<<endl;
 cout<<"2 : add at the end"<<endl;
 cout<<"3 : to display the list"<<endl;
 cout<<"4 : to delete first node"<<endl;
 cout<<"5 : to delete last node"<<endl;
 cout<<"6 : delete all node"<<endl;
 cout<<"7 : to exit"<<endl;
 cin>>ch;
   switch(ch)
   { 
   case 1:
  adding_node();
   break;
    case 2:
   adding_node_at_end();
   break;
   case 3:
  display();
   break;
   case 4:
    delete_first_node();
   break;
   case 5:
   delete_last_node();
   break;
   case 6:
   delete_all_data();
   break; 
   case 7:
   cout<<"out of the choice";
   break;
  }
  }while(ch!=7);
return 0;
}

