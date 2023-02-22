#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i;
	int arrayeven[10],arrayodd[10];
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

	    //finding odd values array 1
	int flag=0,counter=0;
	cout<<"\n   Odd Numbers In Array 1 and 2 Are \n";
	  	for(i=0;i<5;i++)
	    {
	    	if(array1[i]%2!=0)
	  	    {   
	  	   		cout<<" Odd number in array1 is "<<array1[i]<<endl;
	  	   		flag++;
			}
		}
			for(i=0;i<5;i++)
	   		 	{
	    			if(array2[i]%2!=0)
					{
						cout<<" Odd number in array2 is "<<array2[i]<<endl;
						flag++;
					}
				}
	    	if(flag==0)
	    		{
	    			cout<<"No Odd Number In Array 1 and 2";
				}
		
			cout<<"\n   Even Numbers In Array 1 and 2 Are \n";
			counter=0;
			flag=0;
	  	for(i=0;i<5;i++)
	    {
	    	if(array1[i]%2==0)
	  	    { 	
	  	   		  	   		cout<<" Even number in array1 is "<<array1[i]<<endl;
							flag++;
	  		}
		}
			for(i=0;i<5;i++)
	    	{
	    			if(array2[i]%2==0)
	  	   			{ 
	  	   				cout<<" Even number in array1 is "<<array1[i]<<endl;
						flag++;
	  				}
			}
	    	if(flag==0)
	    	{
	    			cout<<"No Even Number In Array";
			}
			
		
	    getch();
	    
}