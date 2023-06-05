#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void SelectionSort(int[], int);
void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
    int arr[50000];
    int n;
    Nhap(arr,n);

    SelectionSort(arr,n);

    Xuat(arr,n);
    return 0;
}
void SelectionSort(int arr[], int n)
{
    for(int i = 0 ; i <= n - 2 ;i++)
    {
        int lc = i;
        for(int j = i; j <= n -1;j++)
        {
            if(arr[j] < arr[lc])
                lc = j;
        }
        swap(arr[i], arr[lc]);
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