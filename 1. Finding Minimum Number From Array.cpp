#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int array[5];
   int min,i;
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
	  //finding minimum number
	     min=array[0];
	         for(i=1;i<5;i++)
	 		{
	  		    if(min>array[i])
	  		    {
	  		       min=array[i];	
				}
	 		}
       cout<<"Minimum Number Is  "<<min; 
     getch();
}