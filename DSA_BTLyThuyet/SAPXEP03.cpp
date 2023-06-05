#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void HeapSort(int[], int);
void BuildHeap(int [], int);
void Heapify(int[], int, int);


void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
    int arr[50000];
    int n;
    Nhap(arr,n);

    HeapSort(arr,n);

    Xuat(arr,n);
    return 0;
}
void Heapify(int arr[], int n, int i)
{
	int max = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && arr[l] > arr[max])
		max = l;
	if (r < n && arr[r] > arr[max])
		max = r;
	if (max != i)
	{
		swap(arr[i], arr[max]);
		Heapify(arr, n, max);
	}
}
void BuildHeap(int arr[], int n)
{
	for (int i = n / 2 - 1; i >= 0; i--)
		Heapify(arr, n, i);
}
void HeapSort(int arr[], int n)
{
	BuildHeap(arr, n);
	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);
		Heapify(arr, i, 0);
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