#include <bits/stdc++.h>
using namespace std;
int jumpSearch(int arr[], int key, int n)
{
    int m = sqrt(n);
    int step = m;
    int prev = 0;
    while (arr[min(step, n)-1] < key)
    {
        prev = step;
        step += m;

        if (prev >= n)
            return -1;
    }

    while (arr[prev] < key)
    {
        prev++;

        if (prev == min(step, n))
            return -1;
    }

    if (arr[prev] == key)
        return prev;

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
    cout<<"ENTER KEY TO BE SEARCHED"<<endl;
    cin>>key;
    int index = jumpSearch(arr,key,n);
    if(index<0)
    {
        cout<<"NOT PRESENT"<<endl;
    }
    else
    {
       cout<<"PRESENT"<<endl;
    }
    return 0;
}
