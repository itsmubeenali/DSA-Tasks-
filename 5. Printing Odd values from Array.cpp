#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int array[5];
   int finder,i;
   cout<<"Enter 5 numbers in array \n";
   for(i=0;i<5;i++)
	{ 
      cout<<"Enter Value At "<<i<<" index  ";
	  cin>>array[i]; 
	}
	//showing odd values
	int flag=0;
	cout<<"Odd Values Are \n";
	  for(i=0;i<5;i++)
	    {
	    	if(array[i]%2!=0)
	  	   {
	  	   	cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	  	   	flag++;
			}
	    }
	    if(flag==0)
	    {
	    	cout<<"No Odd Number In Array";
		}
			 	getch();
}