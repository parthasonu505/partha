#include<stdio.h>
main()
{
	int i,j=-1,t=-1,l=-1,a,pos1=0,x,n;
	printf("enter the number of element to input: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{  x=j;
	 printf("\nEnter %d no- \n",i);
		scanf("%d",&j);
	if(t<j || l<j)
	{if(l<j && t>=j)
	{
		l=j;
	}
	else{
	
		l=t;
	t=j;
}
		}
}
	
	printf("2nd maximum :%d",l);
}
