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
	//showing values
	cout<<"Values Are \n";
	  for(i=0;i<5;i++)
	    {
	  	   cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	    }
	  //finding a number
	  int flag=0;
	     cout<<"Input number You want to find  ";
	     cin>>finder;
	         for(i=0;i<5;i++)
	 		{
	  		    if(finder==array[i])
	  		    { 
	  		       flag++;
				   cout<<"Number found At "<<i<<" index \n"; 	
				}
	 		}
			        if(flag==0)
			 		{
			 	      cout<<"Number Not Found";
			 		} 
			 		else
			 		{
			 		 cout<<"Number found "<<flag<<"  times";
					}
			 	getch();
}