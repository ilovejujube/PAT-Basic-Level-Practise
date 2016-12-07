#include <cstdio>
int main(void)
{
	int N;
	scanf("%d", &N);
	int all = N; 
	char a, b;
	int ac = 0, aj = 0, ab = 0;
	int bc = 0, bj = 0, bb = 0;
	int aw = 0,bw = 0, nw = 0;
	while(N--)
	{
		getchar();//ÎüÊÕ»Ø³µ·û 
		scanf("%c %c", &a, &b);
		if(a == 'C')
		{
			if(b == 'C')
			{
				nw++;
			} 
			else if(b == 'J')
			{
				aw++;
				ac++;
			}
			else
			{
				bw++;
				bb++;
			}
		}
		if(a == 'J')
		{
			if(b == 'C')
			{
				bw++;
				bc++;
			} 
			else if(b == 'J')
			{
				nw++;
			}
			else
			{
				aw++;
				aj++;
			}
		}
		if(a == 'B')
		{
			if(b == 'C')
			{
				aw++;
				ab++;
			} 
			else if(b == 'J')
			{
				bw++;
				bj++;
			}
			else
			{
				nw++;
			}
		}
	}
	printf("%d %d %d\n", aw, nw, all-aw-nw);
	printf("%d %d %d\n", bw, nw, all-bw-nw);	
	char maxa = ab>=ac?ab>=aj?'B':'J':ac>=aj?'C':'J';
	char maxb = bb>=bc?bb>=bj?'B':'J':bc>=bj?'C':'J';
	printf("%c %c\n", maxa, maxb);
	return 0;
}