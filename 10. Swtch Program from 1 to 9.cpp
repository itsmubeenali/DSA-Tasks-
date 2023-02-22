#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   int i,number, min,max,finder,j,flag;
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
	cout<<" Press 1 For finding minimum number \n";
	cout<<" Press 2 For finding maximum number \n";
	cout<<" Press 3 For finding required number \n";
	cout<<" Press 4 For finding how many time required number is present \n";
	cout<<" Press 5 For Showing odd values \n";
	cout<<" Press 6 for Showing even values \n";
	cout<<" Press 7 For finding sum of array elements \n";
	cout<<" Press 8 for reverse of array elements \n";
	cout<<" Press 9 for showing unique values \n";
	cout<<" Enter 0 for exit \n";
	label:
    cout<<"  Enter Any Number from 0 to 9 \t";
    cin>>number;
    switch(number)
	{
	case 0:
	exit(0); 
	case 1:
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
             break;
    
    case 2:
    	 //finding maximum number
	    max=array[0];
	        for(i=1;i<5;i++)
	 		{
	  		    if(max<array[i])
	  		    	{
	  		         	max=array[i];	
					}
	 		}
       			cout<<"Maximum Number Is  "<<max; 
       			 break;
       			
	case 3:
		flag=0;
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
			 		 break;
	case 4:
		 //finding a number
	        cout<<"Input number You want to find  ";
	        cin>>finder;
	        flag=0;
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
					 break;
	case 5:
			//showing odd values
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
		 break;
	case 6:
	//showing even values
	    cout<<"Even Values Are \n";
	    for(i=0;i<5;i++)
	    {
	    	if(array[i]%2==0)
	  	   {
	  	   		cout<<"Value at index  "<<i<< " is  "<<array[i]<<"\n";
	  	   		flag++;
			}
	    }
	    	if(flag==0)
	    {
	    	cout<<"No Even Number In Array";
		}
		 break;
	case 7:
	{	//sum of elements of array
	int sum=0;
   	 for(i=0;i<5;i++)
	   {
	  		sum=sum+array[i];
	   }
	  cout<<"Sum of all elements is  "<<sum;
	   break;}
	case 8:
		{//reverse of elements of array
	 		 for(i=4;i>=0;i--)
	    	{
	  	 	  cout<<"Values are  "<<array[i]<<"\n";
	    	}
	     		break;
		}
	case 9:
		 //showing unique values
	  	bool p;
	  for(i=0;i<5;i++)
	    {
	    	flag=0;
	    	for(j=0;j<5;j++)
	        {
				if(array[i]==array[j])
				{
				  if(i!=j)
					{
				  	flag++;
				  	p++;
				  	continue;
					}
		    	}
			}
			if(flag==0)
		    	{ 
				  cout<<array[i]<<"  is a unique number \n";
			    }
	  	  
	    }
	    if(p==1)
	    {
	    	cout<<" No unque number found";
		}
	     break;
	     default:
	     	cout<<"Invalid Number"<<endl;
	}
	goto label;
}