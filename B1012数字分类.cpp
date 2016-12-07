#include <cstdio>
 
 int main(void)
 {
 	int N;
 	scanf("%d", &N);
 	
 	int a1 = 0, a2 = 0, a3 = 0,a4 = 0, a5 = 0;

	int count2 = 0,count4 = 0;//分别用于a2和a4计数 
	int i;
 	while(N--)
 	{		
	 	scanf("%d", &i);
	 	
	 	if(0 == i % 5)
	 	{
	 		if(0 == i % 2) 
	 		{
	 			a1 += i;		 		
		 	}
	 	}
	 	else if(1 == i % 5)
	 	{
	 		count2++;
	 		if(0 == count2 % 2)
	 		{
		 		a2 -= i;
		 	}
		 	else
		 	{
	 			a2 += i;
	 		}
	 	}
	 	else if(2 == i % 5)
	 	{
	 		a3++;
	 	}
	 	else if(3 == i % 5)
	 	{
	 		count4++;
	 		a4 += i;	
	 	}
	 	else 
	 	{
	 		if(i > a5)
	 		{
		 		a5 = i;
		 	}
	 	}
 	}
 	if(a1 > 0)
 	{
	 	printf("%d ", a1);
	 }
	else
	{
		printf("N ");
	}
	if(count2 > 0)//a2输出不应用是否为0判断 
 	{
	 	printf("%d ", a2);
 	}
	else
	{
		printf("N ");
	}
	if(a3 > 0)
 	{
	 	printf("%d ", a3);
 	}
	else
	{
		printf("N ");
	}
	if(a4 > 0)
 	{
	 	printf("%.1f ", double(a4 / (1.0 * count4)));
 	}
	else
	{
		printf("N ");
	}
	if(a5 > 0)
 	{
	 	printf("%d\n", a5);
 	}
	else
	{
		printf("N\n");
	}
 	
 	return 0;
 }