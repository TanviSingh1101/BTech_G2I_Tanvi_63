#include<iostream>
using namespace std;
int main()
{
    int mat1[100][100],mat2[100][100],i,j,transpose[100][100],n,m;
    cout<<"Enter the size dimension of matrix";
    cin>>n>>m;
    cout<<"Enter the elements of matrix";
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
      cin>>mat1[i][j];
    }
     }
     for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        {
          mat2[i][j]=mat1[j][i];
          cout<<" "<<mat2[i][j];
        }
        cout<<endl;
     }
return 0;
}