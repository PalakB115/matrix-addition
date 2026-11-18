#include <stdio.h>
int main()
{
int m, n, r, c;
printf("enter the number of rows of the matrices:");
scanf("%d", &m);
printf("enter the number of cols of the matrices:");
scanf("%d", &n);
int a[m][n], b[m][n], d[m][n];
printf("enter the elements of matrix A:\n");
for(r=0;r<m;r++)
{
  for(c=0;c<n;c++)
  {
    printf("enter a[%d][%d]:", r,c);
    scanf("%d",&a[r][c]);
  }
}
printf("enter the elements of matrix B:\n");
for(r=0;r<m;r++)
{
  for(c=0;c<n;c++)
  {
    printf("enter b[%d][%d]:", r,c);
    scanf("%d", &b[r][c]);
  }
}
printf("\nMATRIX A IS");
for(r=0;r<m;r++)
{
  printf("\n");
  for(c=0;c<n;c++)
  {
    printf("%d\t", a[r][c]);
  }
}
printf("\nMATRIX B IS");
for(r=0;r<m;r++)
{
  printf("\n");
  for(c=0;c<n;c++)
  {
    printf("%d\t", b[r][c]);
  }
}
for(r=0;r<m;r++)
{
  for(c=0;c<n;c++)
  {
    d[r][c] = a[r][c] + b[r][c];
  }
}
printf("\n\nthe sum[c] of the above is:");
  for(r=0;r<m;r++)
  {
    printf("\n");
    for(c=0;c<n;c++)
    {
      printf("%d\t", d[r][c]);
    }
  }
  return 0;
}
