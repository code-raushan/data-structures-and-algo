
# l: list of int
# v: target value

# l is sorted in ascending order

def binary_search(v, l):
    if l == []:
        return False
    
    m = len(l) // 2

    if (v == l[m]):
        return True
    
    if (v > m):
        return binary_search(v, l[m+1:])
    else:
        return binary_search(v, l[:m])
    

print(binary_search(4, [2,3,4,5,7]))