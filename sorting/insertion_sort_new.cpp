#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j > 0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main(){
    int arr[6] = {7,2,4,1,5,3};
    int n = 6;

    insertion_sort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}