#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<endl<<"Enter number of element in array : ";
    cin>>n;

    int arr[n],s,l;
    cout<<endl<<"Enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }
    bool flag=0;
    int i=1;
    while (i<=n-1)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=0;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag=1;
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";

        cout<<endl;
        if(flag==0)
        {
            cout<<"Array is already sorted";
            break;
        }
        i++;
    }
    cout<<endl<<"Sorted array is : ";
    for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";


    cout<<endl<<"Enter which num's largest element you want to find :";
    cin>>l;

    for(int i=0;i<n;i++)
    {
        if(l == i+1)
            cout<<"Largest element is :"<<arr[i];
    }


}
