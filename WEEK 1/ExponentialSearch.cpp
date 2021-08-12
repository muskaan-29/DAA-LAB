#include<iostream>
using namespace std;
int comp = 0;
int linearsearch(int arr[],int ,int ,int );

int exponentialsearch(int arr[],int n,int key)
{
    if(arr[0]==key)
    {
        comp = comp + 1;
        return 0;
    }
    comp =comp +1;
    int i=1;
    while(i<n && arr[i]<=key)
    {
        comp = comp + 1;

        i=i*2;
    }
    return linearsearch(arr,(i/2),n,key);
}
int linearsearch(int arr[],int index,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            comp = comp +1;
            return i;
        }
        comp = comp +1;
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
    cout<<"ENTER KEY"<<endl;
    cin>>key;
    int result = exponentialsearch(arr,n,key);
    if(result<0)
        cout<<"NOT PRESENT\t"<<comp<<endl;
    else
        cout<<"PRESENT\t"<<comp<<endl;
}
