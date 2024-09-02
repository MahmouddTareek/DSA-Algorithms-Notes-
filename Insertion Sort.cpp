#include <iostream>
using namespace std ;
void insertion_sort(int arr[], int n);
int main ()
{
    int arr[6] = {5,4,10,1,6,2};
    int n = 6;
    insertion_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while (j >=0 && arr[j] > temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}