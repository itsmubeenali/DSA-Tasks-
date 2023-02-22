#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i;
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
//	cout<<"Values in array 1 Are \n";
//	  	for(i=0;i<5;i++)
	//    {
	  //	   cout<<"Value at index  "<<i<< " is  "<<array1[i]<<"\n";
	    //}
	   
	//showing values
	//cout<<"Values in array 2 Are \n";
//	for(i=0;i<5;i++)
	//    {
	 // 	   cout<<"Value at index  "<<i<< " is  "<<array2[i]<<"\n";
	 //   }
	    //finding odd values array 1
	int flag=0;
	int flog=0;
	cout<<"\n   Odd Numbers In Array 1  Are \n";
	int count=0;
	  	for(i=0;i<5;i++)
	    {
	    	if(array1[i]%2!=0)
	  	    {
	  	   		cout<<" Odd Value at index  "<<i<< " in array 1 is  :"<<array1[i]<<"\n";
	  	   		flag++;
	  	   		count++;
			}
			
	    }
	     cout<<"  There are  "<<count<<" Odd Numbers in Array 1 \n";
	    	if(flag==0)
	    	{
	    			cout<<"No Odd Number In Array \n";
			}
		
		 cout<<"\n   Odd Numbers In Array 2  Are \n";
		 count=0;
	  	for(i=0;i<5;i++)
	    {
	    	if(array2[i]%2!=0)
	  	    {
	  	   		cout<<" Odd Value at index  "<<i<< " in array 2 is : "<<array2[i]<<"\n";
	  	   		flog++;
	  	   		count++;
			}
			
	    }
	     cout<<"  There are  "<<count<<" Odd Numbers in Array 1 \n";
	    	if(flog==0)
	    	{
	    			cout<<"No Odd Number In Array 2 \n";
			}
		
	flag=0;
	flog=0;
	count=0;
	cout<<"\n   Even Numbers In Array 1  Are \n";
	  	for(i=0;i<5;i++)
	    {
	    	if(array1[i]%2==0)
	  	    {
	  	   		cout<<"Even Value at index  "<<i<< " in array 1 is : "<<array1[i]<<"\n";
	  	   		flag++;
	  	   		count++;
			}
		}
		cout<<"  There are  "<<count<<" Even Numbers in Array 1 \n";
	    
	    	if(flag==0)
	    	{
	    			cout<<"No Even Number In Array 1 \n";
			}
		
		 cout<<"\n   Even Numbers In Array 2  Are \n";
		 count=0;;
	  	for(i=0;i<5;i++)
	    {
	    	if(array2[i]%2==0)
	  	    {
	  	   		cout<<" Even Value at index  "<<i<< " in array 2 is : "<<array2[i]<<"\n";
	  	   		flog++;
	  	   		count++;
			}
			
	    }
	    cout<<"  There are  "<<count<<" Even Numbers in Array 2 \n";
	    	if(flog==0)
	    	{
	    			cout<<"No Even Number In Array 2 \n";
			}
}