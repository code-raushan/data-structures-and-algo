#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    bool swapped;

    for(int i=0; i<=n-1; i++){
        swapped = false;
        // loop will run for the unsorted part only
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }

        if(!swapped) break;
    }
}

void selection_sort(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int min_idx = i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[min_idx]>arr[j]){
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void insertion_sort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int value = arr[i];
        int hole = i;

        while(hole>0 && arr[hole-1]>value){
            arr[hole] = arr[hole-1];
            hole = hole -1;
        }

        arr[hole] = value;
    }
}

int main(){

    int arr[5] = {23, 17, 22, 30, 16};
    int n = 5;

    bubble_sort(arr, n);
    // selection_sort(arr, n);
    // insertion_sort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " "<<endl;
    }

    return 0;
}