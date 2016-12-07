#include <cstdio>
int main()
{
  int n, k = 1;
  scanf("%d", &n);
  _int64 A, B, C;
  while(n--)
  {
    scanf("%l64d%l64d%l64d", &A, &B, &C);
    if(A + B > C)
     printf("Case #%d: true\n", k); 
    else
      printf("Case #%d: false\n", k);
    ++k;
  }
  return 0;
}