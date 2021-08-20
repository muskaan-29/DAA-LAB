#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key,int searchelement)
{
    int left =0,right = n-1;
    int result = -1;
    while(left<=right)
    {
        int mid = left+(right-left)/2;
        if(arr[mid]==key)
        {
            result = mid;

            if(searchelement)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else if(arr[mid]>key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return result;
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
    int key;
    cout<<"Enter key to be searched "<<endl;
    cin>>key;
    int first = BinarySearch(arr,n,key,1);
    int last =  BinarySearch(arr,n,key,0);
    int occurence = last - first + 1;
    if(first!= -1)
    {
        cout<<key<<" - "<<occurence<<endl;
    }
    else
    {
        cout<<"Key not present"<<endl;
    }

}
