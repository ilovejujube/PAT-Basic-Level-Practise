#include <cstdio>
int main() 
{
	int N;
	scanf("%d", &N);
	int afail = 0, bfail = 0;
	while(N--)
	{
		int agive, asay, bgive, bsay;
		scanf("%d%d%d%d", &agive, &asay, &bgive, &bsay);
		if(asay == agive + bgive && bsay != agive + bgive)
		{
			bfail++;
		}
		else if(bsay == agive + bgive && asay != agive + bgive)
		{
			afail++;
		}	
	}
	printf("%d %d\n", afail, bfail);
	return 0;
}