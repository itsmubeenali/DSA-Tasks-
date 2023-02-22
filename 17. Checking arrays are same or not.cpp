#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,flag;
	int array1[5];
	int array2[5];
	cout<<"Enter 5 numbers in array 1 \n";	
		for(i=0;i<5;i++)
		{ 
     		 cout<<"Enter Value At "<<i<<" index  ";
	 		 cin>>array1[i]; 
		}
	cout<<"Enter 5 numbers in array 2 \n";
   		for(i=0;i<5;i++)
		{ 
      		cout<<"Enter Value At "<<i<<" index  ";
	  		cin>>array2[i]; 
		}
	//showing values
	cout<<"Values in array 1 Are \n";
	  	for(i=0;i<5;i++)
	    {
	  	   cout<<"Value at index  "<<i<< " is  "<<array1[i]<<"\n";
	    }
	   
	//showing values
	cout<<"Values in array 2 Are \n";
	for(i=0;i<5;i++)
	    {
	  	   cout<<"Value at index  "<<i<< " is  "<<array2[i]<<"\n";
	    }
	    //comparing array
	    cout<<"\n Comaring Arrays\n";
	    flag=0;
	    for(i=0;i<5;i++)
	    {
	    	for(j=i;j<i+1;j++)
	    	{
	    		if(array1[i]==array2[j])
	    		{
	    			flag++;
				}
			}
		}
		if(flag==5)
		{
			cout<<"  Both arrays are same";
		}
		else
		{
			cout<<" Arrays are not same";
		}
}