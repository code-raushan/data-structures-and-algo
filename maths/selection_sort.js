function selection_sort(arr) {
    let n = arr.length;
    for (let i = 0; i <= n - 2; i++) {
        let min_index = i;
        for (let j = i + 1; j <= n - 1; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        let temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    console.log(arr);
}

selection_sort([44, 55, 11, 22, 66, 33])
/**
 * Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.
 * 
 * In this algorithm, we run a loop from start to end - 2  and inside this loop  we replace the min_valued element with first element of the array and then we run another loop from i+1 to end and find the minimum value and replace it with the first element of the array and so on.
 * 
 */