#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int array[5];
   int max,i;
   cout<<"Enter 5 numbers in array \n";
   for(i=0;i<5;i++)
	{ 
      cout<<"Enter Value At "<<i<<" index  ";
	  cin>>array[i]; 
	}
	//showing values
	cout<<"Values Are \n";
	  for(i=0;i<5;i++)
	    {
	  	   cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	    }
	  //finding maximum number
	     max=array[0];
	         for(i=1;i<5;i++)
	 		{
	  		    if(max<array[i])
	  		    {
	  		       max=array[i];	
				}
	 		}
       cout<<"Maximum Number Is  "<<max; 
     
}