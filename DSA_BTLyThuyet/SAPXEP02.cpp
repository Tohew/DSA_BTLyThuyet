#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void InsertionSort(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
    int arr[50000];
    int n;
    Nhap(arr,n);

    InsertionSort(arr,n);

    Xuat(arr,n);
    return 0;
}
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1; i++)
    {
        int x = arr[i];
        int vt = 0;
        for (vt = i - 1; vt >= 0 && arr[vt] > x; vt--)
            arr[vt + 1] = arr[vt];
        arr[vt + 1] = x;
    }
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