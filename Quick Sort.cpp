#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int Lb, int Ub)
{
    int pivot = arr[Lb];
    int start = Lb;
    int end = Ub;
    while (start < end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while (arr[end]>pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(&arr[start],&arr[end]);
        }
    }
    swap(&arr[Lb],&arr[end]);
    return end;
}
void Quick_sort(int arr[],int Lb, int Ub)
{
    if (Lb<Ub)
    {
        int Loc = partition(arr,Lb,Ub);
        Quick_sort(arr,Lb,Loc-1);
        Quick_sort(arr,Loc+1,Ub);
    }
}
int main()
{
    int arr[9] = {7,6,10,5,9,2,1,15,7};
    Quick_sort(arr, 0,8);
    cout << "Sorted array: ";
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}