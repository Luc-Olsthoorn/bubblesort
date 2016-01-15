#include <iostream>
using namespace std;

int main ()
{
	int arr[]={7,9,8,2,3,4,5,6,7,1};
	int size= sizeof(arr)/sizeof(*arr);

	for(int j = 0; j < size-1; j++)
	{
		for(int i = 0; i< size-1-j; i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp;
				temp = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	for(int k = 0; k< size; k++)
	{
		cout << arr[k];
	}
}