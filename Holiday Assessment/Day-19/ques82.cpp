#include<iostream>
using namespace std;
int main()
{
    int mat1[100][100],i,j,n,sum=0;
    cout<<"Enter the size dimension of matrix";
    cin>>n;
    cout<<"Enter the elements of matrix";
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
      cin>>mat1[i][j];
     }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)==(n-1)||i==j)
            {
                sum=mat1[i][j]+sum;
            }
        }
    }
    cout<<"The diagonal sum is "<<sum;
    return 0;
}