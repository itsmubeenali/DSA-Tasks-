#include<iostream>
#include<conio.h>
using namespace std;
int main()
{  int array[5];
   int min,i,j;
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
	    //showing unique values
	int flag;
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
     getch();
}