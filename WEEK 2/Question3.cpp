#include<iostream>
using namespace std;
int difference(int arr[],int n,int key)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
            {
                count ++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter key "<<endl;
    cin>>k;
    int pairs = difference(arr,n,k);
    if(pairs>0)
    {
        cout<<pairs<<endl;
    }
    else
    {
        cout<<"No such pair exists"<<endl;
    }
}
