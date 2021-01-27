//
//  main.cpp
//  bubblesort
//
//  Created by Christian Turner on 1/26/21.
//

#include <iostream>
using namespace std;

void printArr(int arr[]);
int bubbleSort(int arr[]);

int arr[7] = {7, 3, 1, 4, 6, 2, 3};
int len = sizeof(arr)/sizeof(arr[0]);

int main() {
    cout << "arr = "; printArr(arr); cout<< endl;
    bubbleSort(arr);
    cout << "~~~ bubblesort ~~~" << endl;
    cout << "arr = "; printArr(arr); cout<< endl;
    cout << endl;
    return 0;
}

void printArr(int arr[]){
    for (int i=0; i < len; i++) {
        cout << arr[i] << " ";
    }
    return;
}

int bubbleSort(int arr[]){
    for (int i=0; i < len; i++){
        for (int j=i+1; j < len; j++){
            if (arr[i] > arr[j]){
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
    return 0;
}
