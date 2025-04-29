#include<iostream>  
using namespace std;  
int main ()  
{    
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};   
       
    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int i=1; i<10; i++)   
    {  
        int temp = myarray[i];  
        int j= i-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int k=0;k<10;k++)  
    {  
        cout <<myarray[k]<<"\t";  
    }  
}

