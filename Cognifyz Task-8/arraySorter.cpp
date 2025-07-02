#include <iostream>
using namespace std;

int main() {
    int n, order;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    float sum = 0;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Choose sorting order:\n1. Ascending\n2. Descending\nEnter choice: ";
    cin >> order;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((order == 1 && arr[j] > arr[j + 1]) ||
                (order == 2 && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\n Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Min, Max, Average
    int minVal = arr[0];
    int maxVal = arr[n - 1];
    if (order == 2) swap(minVal, maxVal); // reverse if descending

    cout << "\n Minimum: " << minVal;
    cout << "\n Maximum: " << maxVal;
    cout << "\n Average: " << (sum / n) << endl;

    return 0;
}
