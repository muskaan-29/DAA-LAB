#include<iostream>
using namespace std;
int comparison = 0;
int linearsearch(int arr[],int n,int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            comparison = comparison + 1;
            return i;
        }
        else
            comparison = comparison + 1;
    }
    return -1;
}
int main()
{
    int n,i;
    cout<<"ENTER THE SIZE OF THE ARRAY"<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER ELEMENTS OF ARRAY"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"ENTER THE KEY TO BE SEARCHED"<<endl;
    cin>>key;
    int index = linearsearch(arr,n,key);
    if(index<0)
        cout<<"NOT PRESENT\t"<<comparison<<endl;
    else
        cout<<"PRESENT\t"<<comparison<<endl;

}
