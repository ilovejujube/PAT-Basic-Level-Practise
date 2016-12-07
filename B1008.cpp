#include <cstdio>
int main(void)
{
	int N, M;
	scanf("%d%d", &N, &M);
	M = M % N;
	
	int A[110];
	for(int i = 0; i < N; i++)//ÊäÈë 
	{
		scanf("%d", &A[i]);
	}
	//Êä³ö
	for(int i = N - M; i < N; i++)
	{
		printf("%d ", A[i]);
	} 
	for(int i = 0; i < N - M; i++)
	{
		printf("%d", A[i]);
		if(i != N - M - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}