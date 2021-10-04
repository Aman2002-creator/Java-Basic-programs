#include <iostream>
using namespace std;

int cnt = 0, divide = 0, conqer = 0;
void swp(int *num1, int *num2)
{
    cnt += 3;
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
int partition(int arr[], int left, int right)
{
    cnt++; // function call
    int pivot = arr[left];
    cnt++; // pivot = arr[left];

    int i = left;
    cnt++; // i = left;

    int j = right;
    cnt++; // j = right;

    while (i < j)
    {
        cnt++; // i < j
        while (arr[i] <= pivot)
        {
            cnt++; // while loop condition

            i++;
            cnt++; // increment in i
        }
        cnt++; // while loop false condition

        while (arr[j] > pivot)
        {
            cnt++; // while loop condition

            j--;
            cnt++; // decrement in j
        }
        cnt++; // while loop false condition

        cnt++; // if condition
        if (i < j)
        {
            swp(&arr[i], &arr[j]);
        }
    }
    cnt++; // while loop false condition

    cnt++; // if condition
    if (i > j)
    {
        swp(&arr[j], &arr[left]);
    }
    cnt++; // return
    return j;
}
void quickSort(int arr[], int left, int right)
{
    conqer++;
    cnt++; // function call

    cnt++; // if condition
    if (left < right)
    {
        int pivot = partition(arr, left, right);
        divide++;
        cnt++; // pivot

        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Number of instructions are : " << cnt << endl;
    cout << "Number of times division occurs : " << divide << endl;
    cout << "Number of times conquer occurs : " << conqer << endl;
}