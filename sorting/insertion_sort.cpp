#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i<=n-1; i++){
        int value = arr[i];
        int hole = i;

        while(hole>0 && arr[hole-1]>value){
            arr[hole] = arr[hole-1];
            hole = hole-1;
        }
        arr[hole] = value;
    }
}

int main(){
    int arr[6] = {7,2,4,1,5,3};

    insertion_sort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}