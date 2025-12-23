#include<stdio.h>

int main()
{   
    int n,i,j,l,dim[10],m[10][10],s[10][10],z,k;
    printf("Enter the no of matrix you want to multiply:");
    scanf("%d",&n);
    
    printf("\nEnter the dimensions of the matrices accordingly:");
    for(i=0;i<=n;i++)
    {
       scanf("%d",&dim[i]);
    }
    
    for(i=1;i<=n;i++)
    {
       m[i][i]=0;
    }
    
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)
        {
           j=i+l-1;
           m[i][j]=10000;
           for(k=i;k<j;k++)
           {
              z=m[i][k]+m[k+1][j]+dim[i-1]*dim[k]*dim[j];
              if(z<m[i][j])
              {
                 m[i][j]=z;
                 s[i][j]=k;
              }
           }
        }
    }
    
    printf("\nParenthesization value table is:\n");
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
          if(i>=j){
          printf(" ");
          }else{
          printf("%d",s[i][j]);
          }
       }
       printf("\n");
    }
    
    return 0;
}
