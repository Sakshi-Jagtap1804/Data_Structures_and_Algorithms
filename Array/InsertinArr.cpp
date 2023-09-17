#include<iostream>

using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
	if(n == cap)
	{
		return n;
	}
	int idx = pos - 1;
	for(int i = n-1; i >= idx; i--)
	{
		arr[i+1] = arr[i];
	}
	
	arr[idx] = x;
	
	return (n+1);
}

int main()
{
	int arr[] = {5, 10, 20};
	int x, pos, cap;
	cout << "Enter the element you want to insert and the position you want to insert : ";
	cin >> x >> pos;
	cout << "Enter the capacity of the array : ";
	cin >> cap;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << insert(arr, n, x, cap, pos);
	
	return 0;
}
