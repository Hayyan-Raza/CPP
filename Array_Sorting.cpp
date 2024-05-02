#include <iostream>
using namespace std;

void InputInArray(int n[], int size){
    for(int i = 0; i < size; i++){
        cout << "Enter Value For Index : " << i << ": ";
        cin >> n[i];
    }
}

void Sort(int n[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(n[i] > n[j]){
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
}

void PrintArray(int n[], int size){
    for(int i = 0; i < size; i++){
        cout << "Value at index " << i << " is: " << n[i] << endl; 
    }
}

int main() {
    int size, n[size];
    cout << "Enter Size of the array: ";
    cin >> size;
    
    InputInArray(n, size); 
    Sort(n, size);
    cout << "Sorted Array: " << endl;
    PrintArray(n, size); 
    return 0;
}
