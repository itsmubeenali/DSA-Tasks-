#include<iostream>
#include<conio.h>
using namespace std;
int main()
{    int i,j,temp;
     int array[5];
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
	   cout<<"Sorted array in descending order is \n";
	  	   for(i=0;i<5;i++)
	  	    {
	  	   	   for( j=i+1;j<5;j++)
	  	   	   {
					if(array[i]<array[j])
					{
						temp=array[i];
						array[i]=array[j];
						array[j]=temp;
					}
				}
			}
	
	for(i=0;i<5;i++)
	{
		cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	}
	getch();
}