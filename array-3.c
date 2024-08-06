//pos and neg number cal
#include<stdio.h>
void main()
{
	int a[25],i,n,pos=0,neg=0,num;
	printf("enter the number of terms you want=\n");
	scanf("%d",&n);
	printf("enter elements you want=\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("pos numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			printf("%d\n",a[i]);
			pos++;
		}
	}
	printf("neg numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
			neg++;
		}
	}
	printf("pos number=%d\n",pos);
	printf("neg number=%d\n",neg);
}
