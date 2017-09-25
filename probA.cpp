#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
int  start[]  =  {1, 3, 0, 5, 8, 5};
int  finish[] =  {2, 4, 6, 7, 9, 9};
n=sizeof(start)/sizeof(start[0]);
printf("%d ",0);

for(int i=0,j=1;j<n;j++){

 if (start[j] >= finish[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
      return 0;
}
