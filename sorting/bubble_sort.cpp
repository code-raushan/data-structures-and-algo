#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    bool swapped;

    for(int i=0; i<=n-1; i++){
        swapped = false;

        for(int j = 0; j<n-i-1; j++){
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

int main(){
    int arr[6] = {7,2,4,1,5,3};
    int n = 6;
    bubble_sort(arr, 6);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}