//
//  main.cpp
//  bubblesort
//
//  Created by Christian Turner on 1/26/21.
//

#include <iostream>
#include <chrono>
using namespace std;

void printArr(int arr[]);
int bubbleSort(int arr[]);
int bubbleFast(int arr[]);
int bubbleFaster(int arr[]);

int arr[7] = {7, 3, 1, 4, 6, 2, 3};
int len = sizeof(arr)/sizeof(arr[0]);

int main() {
    //    Print Original Array
    cout << "~~~ starting array ~~~" << endl;
    cout << "arr = ";
    printArr(arr);
    cout<< endl << endl;
    
    //    Measure Bubblesort Runtime
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(arr);
    auto diff = chrono::high_resolution_clock::now() - start;
    auto t1 = chrono::duration_cast<chrono::nanoseconds>(diff);
    cout << "time = " << t1.count() << "ns" << endl;

    //    Print Bubblesort Runtime
    cout << "~~~ bubblesort regular ~~~" << endl;
    cout << "arr = ";
    printArr(arr);
    cout<< endl << endl;
    
    
    
    //    Measure Bubblesort Fast Runtime
    auto start1 = chrono::high_resolution_clock::now();
    bubbleFast(arr);
    auto diff1 = chrono::high_resolution_clock::now() - start1;
    auto t2 = chrono::duration_cast<chrono::nanoseconds>(diff1);
    cout << "time = " << t2.count() << "ns" << endl;
    
    //    Print Bubblesort Fast Runtime
    cout << "~~~ bubblesort fast ~~~" << endl;
    cout << "arr = ";
    printArr(arr);
    cout<< endl << endl;
    
    
    
    //    Measure Bubblesort Faster Runtime
    auto start2 = chrono::high_resolution_clock::now();
    bubbleFaster(arr);
    auto diff2 = chrono::high_resolution_clock::now() - start2;
    auto t3 = chrono::duration_cast<chrono::nanoseconds>(diff2);
    cout << "time = " << t3.count() << "ns" << endl;
    
    //    Print Bubblesort Faster Runtime
    cout << "~~~ bubblesort faster ~~~" << endl;
    cout << "arr = ";
    printArr(arr);
    cout<< endl << endl;
    
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
