#include<iostream>
using namespace std;
int main()
{
    int arr[100],choice,n,pos,m,i;
    cout<<"Enter the number of the element ";
    cin>>m;
    cout<<"Enter the elements of the array ";
    for(i=0;i<m;i++)
    cin>>arr[i];
    do
    {
    cout<<"\n========MENU DRIVEN ARRAY OPERATING SYSTEM========\n";
    cout<<"(1)Add the element in end\t(2)insertion\n(3)delete any element\t(4)display\n(5)exit\n";
    cout<<"choice";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter the number to add";
        cin>>n;
        arr[m+1]=n;
        cout<<"The element added successfully!!";
    }
    else if(choice==2)
    {
        cout<<"Enter the end to add and the position of adding ";
        cin>>n,pos;
        for(i=pos;i<=m;i++)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=n;
        cout<<"The element has been inserted successfully ";
        cin>>n;
    }
    else if(choice==3)
    {
        cout<<"Enter the element position who to be delete ";
        cin>>pos;
        for(i=pos;i<n;i++)
        {
            arr[i]=arr[i-1];
            cout<<"The element has been deleted successfully ";
        }
    }
    else if (choice==4)
    {
        cout<<"The array is ";
        for(i=0;i<m;i++)
        cout<<arr[i]<<" ";
    }
    else if (choice>5)
    {
        cout<<"OOPS! Wrong choice";
    }
}while(choice!=5);
return 0;
}