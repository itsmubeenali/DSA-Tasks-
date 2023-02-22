#include<conio.h>
#include<iostream>
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
	//reverse of elements of array
	  for(i=4;i>=0;i--)
	    {
	  	   cout<<"Values are  "<<array[i]<<"\n";
	    }
	    getch();
	
}