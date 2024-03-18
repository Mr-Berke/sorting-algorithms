#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void selection(int dizi[],int n)
{
	int i,j,min,temp;
	
	for(int i=0;i<n-1;i++)
	{
		min=i;
		
		for(j=i+1;j<n;j++)
		{
			if(dizi[j]<dizi[min]) 
			{
				min=j;
				temp=dizi[min];
				dizi[min]=dizi[i];
				dizi[i]=temp;
				
			}
		}	
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%d\t",dizi[i]);
	}	
}

void buble (int dizi[],int n)
{
	int i,j,temp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(dizi[j]<dizi[j-1])
			{
				temp=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
			}
		}
	}
	
		
	for(int i=0;i<n;i++)
	{
		printf("%d\t",dizi[i]);
	}	
}

void insertion(int dizi[],int n)
{
	int i,j,mevcut;
	
	for(int i=1;i<n;i++)
	{
		mevcut=dizi[i];
		j=i;
		while(j>0 && mevcut<dizi[j-1])
		{
			dizi[j]=dizi[j-1];
			j--;
		}
		dizi[j]=mevcut;
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\t",dizi[i]);
	}	
}

int main()
{
	int dizi[]={5,3,2,8,6};
	selection(dizi,5);
	
	printf("\n");
	buble(dizi,5);
	
	printf("\n");
	insertion(dizi,5);

}
