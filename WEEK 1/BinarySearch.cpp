#include<iostream>
using namespace std;
int comparisons=0 ;
int binarysearch(int arr[],int start,int last,int key)
{
    int mid;
    while(start<=last)
    {
        mid = start + (last-start)/2;
        if(arr[mid]==key)
        {
            comparisons = comparisons + 1;
            return mid;
        }
        else if(arr[mid]<key)
        {
            comparisons = comparisons + 1;
            start = mid + 1;
        }
        else
        {
            comparisons = comparisons + 1;
            last = mid - 1;
        }

    }
    return -1;
}
int main()
{
    int n,i;
    cout<<"ENTER SIZE OF ARRAY"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER ARRAY ELEMENTS"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"ENTER KEY ELEMENT TO BE FOUND"<<endl;
    cin>>key;
    int index = binarysearch(arr,0,n-1,key);
    if(index<0)
    {
        cout<<"NOT PRESENT\t"<<comparisons<<endl;
    }
    else
    {
        cout<<"PRESENT\t"<<comparisons<<endl;
    }
}
