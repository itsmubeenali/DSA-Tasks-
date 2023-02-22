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
	//showing values
	cout<<"Values Are \n";
	  for(i=0;i<5;i++)
	    {
	  	   cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	    }
	//sum of elements of array
	int sum=0;
	  for(i=0;i<5;i++)
	  {
	  	sum=sum+array[i];
	  }
	  cout<<"Sum of all elements is  "<<sum;
	  getch();
}