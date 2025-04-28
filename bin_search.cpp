#include<iostream.h>
   int binary_search(int data[], int key, int size)
   {
     int mid,bottom=0,top=size-1;
	  while(bottom<=top)
	  {
	    mid=(bottom+top)/2;
		if(key>data[mid])
		  bottom=mid+1;
		else if(key<data[mid])
		   top=mid-1;
		else
		  return 1;  
	  }
   
   }
int main()
{
     int key,size;
	 int array[5]={1,2,3,4,5};
	    size= sizeof(array) / sizeof(array[0]);
		cout<<"Enter search key:";
		cin>>key;
	 int found=binary_search(array,key,size);
	    if(found==1)
		   cout<<"Success";
		 else
		   cout<<"Not found";
	 	 
 return 0;
}

