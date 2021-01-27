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
int bubbleFast(int arr[]);
int bubbleFaster(int arr[]);

int arr[7] = {7, 3, 1, 4, 6, 2, 3};
int len = sizeof(arr)/sizeof(arr[0]);

int main() {
    cout << "~~~ starting array ~~~" << endl;
    cout << "arr = "; printArr(arr); cout<< endl << endl;
    
    bubbleSort(arr);
    cout << "~~~ bubblesort regular ~~~" << endl;
    cout << "arr = "; printArr(arr); cout<< endl << endl;
    
    bubbleFast(arr);
    cout << "~~~ bubblesort fast ~~~" << endl;
    cout << "arr = "; printArr(arr); cout<< endl << endl;
    
    bubbleFaster(arr);
    cout << "~~~ bubblesort faster ~~~" << endl;
    cout << "arr = "; printArr(arr); cout<< endl << endl;
    
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

int bubbleFast(int arr[]){
    bool has_swapped = false;
    
    while (has_swapped == true){
        bool has_swapped = false;
        
        for (int i=0; i < len; i++){
            if (arr[i] > arr[i+1]){
                int tmp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;
                has_swapped = true;
            }
        }
    }
    return 0;
}


int bubbleFaster(int arr[]){
    bool has_swapped = true;
    int num_of_itr = 0;
    
    while (has_swapped == true){
        has_swapped = false;
        for (int i=0; i < len - num_of_itr; i++){
            if (arr[i] > arr[i+1]){
                int tmp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;
                has_swapped = true;
            }
        }
    }
    return 0;
}
