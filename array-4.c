//decimal to binary
//#include<stdio.h>
//void main()
//{
//int a[10],i,n;
//printf("enter the number to convert=\n");
//scanf("%d",&n);
//for(i=0;n>0;i++)
//{
//	a[i]=n%2;
//	n=n/2;
//}
//printf("binary of given number=\n");
//for(i=i-1;i>=0;i--)
//{
//	printf("%d",a[i]);
//}
//}

//decimal to octal
//#include<stdio.h>
//void main()
//{
//	int i,n,a[10];
//	printf("enter a decimal number\n");
//	scanf("%d",&n);
//	for(i=0;n>0;i++)
//	{
//		a[i]=n%8;
//		n=n/8;
//	}
//	for(i=i-1;i>=0;i--)
//	{
//		printf("%d",a[i]);
//	}
//}
//decimal to hexadecimal
#include<stdio.h>
void main()
{
	int i,n,a[10],A,B,C,D,E,F;
	printf("enter a decimal number\n");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		a[i]=n%16;
		n=n/16;
	if(a[i]==10)
		{
			a[i]='A';
			printf("A");
		}
		else if(a[i]==11)
		{
			a[i]='B';
			printf("B");
		}
		else if(a[i]==12)
		{
			a[i]='C';
			printf("C");
		}
		else if(a[i]==13)
		{
			a[i]='D';
			printf("D");
		}
		else if(a[i]==14)
		{
			a[i]='F';
		printf("E");
		}
		else if(a[i]==15)
		{
			a[i]='E';
			printf("F");
		}
	}

	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
