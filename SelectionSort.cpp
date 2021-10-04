#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int indx;
    // Selection sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            indx = i;
            if (arr[indx] > arr[j])
            {
                indx = j;
            }
            int temp;
            temp = arr[i];
            arr[i] = arr[indx];
            arr[indx] = temp;
            // break;
        }
        cout<<"Pass "<<i+1<<" : ";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    //Sorted array is
    cout<<endl<<"Sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}