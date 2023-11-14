#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int lb, int ub)
{
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end){
    while(arr[start]<=pivot)
    {
        start++;
    }
    while(arr[end]>=pivot)
    {
        end--;
    }
    if(start<end)
    {
        swap(arr[start], arr[end]);
    }
    }
    swap(arr[lb], arr[end]);
    return end;
}
void quicksort(int arr[], int lb, int ub)
{
    // int loc;
    if(lb<ub)
    {
        int loc=partition(arr, lb, ub);
        quicksort(arr, lb, loc-1);
        quicksort(arr, loc-1, ub);
    }

}
int main()
{
    int arr[]={7, 6, 7, 5, 9, 2, 1, 15, 10};
    int a=0, b=8;
    quicksort(arr, a, b);
    for(int i=0; i<b; i++)
    {
        cout<<arr[i];
    }
    return 0;
}