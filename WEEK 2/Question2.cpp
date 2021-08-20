#include<iostream>
using namespace std;
int findindex(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]==arr[k])
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }
    return -1;
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
    int index = findindex(arr,n);
    if(index<0)
    {
        cout<<"Sequence not found"<<endl;
    }




}
