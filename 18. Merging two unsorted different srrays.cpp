#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i,n,m;
	int array1[5];
	int array2[7];
	int array3[5+7];
	cout<<"Enter numbers in array 1 \n";	
		for(i=0;i<5;i++)
		{ 
     		 cout<<"Enter Value At "<<i<<" index  ";
	 		 cin>>array1[i];
		}
	cout<<"Enter numbers in array 2 \n";
   		for(i=0;i<7;i++)
		{ 
      		cout<<"Enter Value At "<<i<<" index  ";
	  		cin>>array2[i]; 
		}
//merging arrays
			for(i=0;i<5;i++)
		{ 
     	  array3[i]=array1[i];
	 	}
				for(i=5;i<5+7;i++)
				{ 
     				  array3[i]=array2[i];
				}
		
		cout<<" Merges array is \n";
			for(i=0;i<5+7;i++)
			{
			
				cout<<array3[i]<<endl;
			}
	getch();
}