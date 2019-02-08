#include <iostream>

using namespace std;

void reverseArray(int arr[], int size){
    const int b = size;
    cout << "Before: ";
    for(int x = 0; x < size ; x++){
        cout << arr[x] << " ";
    }
    int reverse[b];
    cout << endl << "After: ";
    int y = size - 1;
    for (int x = 0; x < size; x++){
        reverse[x] = arr[y];
        cout << reverse[x] << " ";
        y--;
    }
    cout << endl;
}

int main(){
    const int size = 5;
    int arr[size] = {1,2,3,4,5};
    reverseArray(arr, size);
    return 0;
}