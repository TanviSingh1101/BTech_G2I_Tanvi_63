#include<iostream>
using namespace std;
int main()
{
    int mat1[100][100],mat2[100][100],i,j,sum[100][100],n,m,n1,m1;
    cout<<"Enter the size dimension of first matrix";
    cin>>n>>m;
    cout<<"Enter the dimension if 2 matrix";
    cin>>n1>>m1;
    if(n!=n1||m!=m1)
    cout<<"The sum is not possible";
    else
{
        cout<<"Enter the elements of 1st matrix";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>mat1[i][j];
            }
        }
        cout<<"Enter the elements of 2nd element";
         for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>mat2[i][j];
            }
        }
        cout<<"The sum matrix is\n";
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                sum[i][j]=mat1[i][j]+mat2[i][j];
                cout<<" "<<sum[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}