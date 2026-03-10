#include<iostream>
using namespace std;
 bool seq_search(int data[],int key,int size)
  {
   bool found =false;
   for(int i=0;i<size;i++)
   {
	   if(key==data[i])
	   {
	   found=true;
	   break;
	   }
   }
  
 return found; 
  }	        

 int main()
   {
       int array[5]={1,3,2,5,4};
	    int key;
		int size=sizeof(array)/ sizeof(array[1]);
		   cout<<"Please Enter the key:";
		     cin>>key;
                 bool x=seq_search(array,key,size);
				    if(x==true)
					    cout<<"success";		    
					else
					   cout<<"Not found";
   return 0;
   }

