#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements for the array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = ";
        cin >> arr[i];
    }

    cout << "Array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Element no " << i+1 <<" = " << arr[i] << endl;
    }
     

    return 0;
}