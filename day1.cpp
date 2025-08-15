#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (only 0, 1, or 2): ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0)
            count0++;
        else if(arr[i] == 1)
            count1++;
        else if(arr[i] == 2)
            count2++;
    }

    for(int i=0; i<count0; i++)
        arr[i] = 0;
    for(int i=count0; i<count0+count1; i++)
        arr[i] = 1;
    for(int i=count0+count1; i<n; i++)
        arr[i] = 2;

    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
