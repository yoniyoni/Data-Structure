//Selection Sort

#include<iostream>
using namespace std;
   void insertion_sort(int array[], int n)//function defination
   {
             int temp,j,i;
	       for(i=1;i<n;i++)
		   {
		     temp=array[i];
			 j=i-1;
			  while(j>=0 && array[j]<temp)
			  {
			   array[j+1]=array[j];
			   j--;
			  }
                array[j+1]=temp;
         }
  cout<<"\n After Sorting:";
    for(int i=0;i<n;i++)
	    cout<<array[i]<<",";
 }
int main()
{
  int data[5]={3,4,5,1,2};
   int size=sizeof(data)/ sizeof(data[0]);
   cout<<"before sorting:";
   
   for(int i=0;i<size;i++)
     cout<<data[i]<<",";
      insertion_sort(data,size);//Function calling

return 0;
}

