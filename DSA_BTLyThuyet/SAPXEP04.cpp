#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstdlib>

using namespace std;

void QuickSort(int[], int);
void QuickSort(int[], int, int);
int Partition(int[], int, int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
    int arr[50000];
    int n;
    Nhap(arr,n);

    QuickSort(arr,n);

    Xuat(arr,n);
    return 0;
}
void QuickSort(int arr[], int n)
{
    QuickSort(arr,0, n-1);
}
void QuickSort(int arr[], int Left, int Right)
{
    if(Left < Right)
    {
        int iPivot = Partition(arr, Left, Right);
        QuickSort(arr, Left, iPivot - 1);
        QuickSort(arr, iPivot + 1, Right);
    }
}
int Partition(int arr[], int Left, int Right)
{
    int pivot = arr[Right];
    int vt = (Left - 1);
    for(int i = Left; i <= Right - 1; i++)
    {
        if(arr[i] < pivot)
        {
            vt++;
            swap(arr[vt], arr[i]);
        }
    }
    vt = vt + 1;
    swap(arr[vt], arr[Right]);
    return vt;
}

void Nhap(int arr[], int &n)
{
    cout << "Nhap n: ";
    cin >> n;
    srand(time(NULL));
    for(int i = 0 ; i < n ;i++)
    {
        arr[i] = -1000 + rand() % 4001;
    }
}
void Xuat(int arr[], int n)
{
    for(int i = 0 ; i < n ;i++)
    {
        cout << arr[i] << " ";
    }
}