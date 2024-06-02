# algorithm - find minimum first and put it at the top of the last (starting from bottom) and repeat the process

def selection_sort(l):
    n = len(l)
    if (n<1):
        return l
    
    for i in range(n):
        # assume: l[:i] is sorted
        min = i
        for j in range(i+1, n):
            if (l[j] < l[min]):
                min = j
        l[i], l[min] = l[min], l[i]
        # now: l[:i+1] is sorted

    return l

print(selection_sort([2,1,3,4,2,5]))