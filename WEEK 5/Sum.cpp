#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key,l,r,flag=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter key"<<endl;
    cin>>key;
    sort(arr,arr+n);
    l=0;
    r=n-1;
    while (l < r)
    {
        if (arr[l] + arr[r] == key)
        {
            cout<<arr[l]<<" "<<arr[r]<<endl;
            l++;
            r--;
            flag = 1;
        }
        else if(arr[l] + arr[r] <key)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    if(flag == 0)
    {
        cout<<"No such pair exist"<<endl;
    }
}
