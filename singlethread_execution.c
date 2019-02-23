#include<stdio.h>
#include<stdlib.h>
#define SIZE 7
	

void unique_pair(int a[])
{

	int i, j, k, flag;
	
	for(i=0; i<SIZE-1; i++)
	{

		for(j=i+1; j<SIZE; j++)
		{
			//flag is initially set to 1 before starting comparing
			flag=1; 
			for(k=0; k<SIZE; k++)
			{
				if(a[i]<a[j] && a[k]>a[i] && a[k]<a[j] && k!=i && k!=j)//if a[i]<a[j] and a[k] is in bet a[i] and a[j]
				{
					//flag = 0 if value any value is found between a[i] and a[j]
					flag=0;
					break;
				}

				else if(a[j]<a[i] && a[k]<a[i] && a[k]>a[j] && k!=i &&k!=j)//if a[i]>a[j] and a[k] is in bet a[i] and a[j]
				{
					//flag = 0 if value any value is found between a[i] and a[j]
					flag=0;
					break;
				}

			}
			//if flag still stays 1 throughout the iterations that means no value is found in bet a[i] and a[j]
			//and a[i] and a[j] are unique pairs
			if(flag ==1)
			{
				printf("(%d,%d) or (%d,%d) = %d\n",a[i],a[j],a[j],a[i],abs(a[i]-a[j]));
			}

		}
	}
}


int main()
{
	int a[SIZE]={0,3,5,7,10,1,2};
	
	int i;
	//printing the array
	for(i =0; i<SIZE; i++)
		printf("%d\t",a[i]);
	printf("\n");
	
	unique_pair(a);


	return 0;
}

