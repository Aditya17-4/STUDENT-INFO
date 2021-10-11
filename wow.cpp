#include <iostream>
#include <algorithm>
 using namespace std;
int main()
{
    int arr[10];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x=0;x<n;x++)
    {
    	cin>>arr[x];
	}
 
    sort(arr, arr + n);
 
    for (int x=0;x<n;x++) {
         cout << x
		 << ' ';
    }
 
    return 0;
}
