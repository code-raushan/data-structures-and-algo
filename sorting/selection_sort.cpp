#include<iostream>

using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
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

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int arr[6] = {23, 17, 22, 30, 16, 19};
    int n = 6;
    selection_sort(arr, n);
    return 0;
}