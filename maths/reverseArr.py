def recursiveReverse(x, nums, rev):
    if x<0:
        return rev
    rev.append(nums[x])
    return recursiveReverse(x-1, nums, rev)

def reverseArray(n: int, nums):
    # Write your code here
    rev = []
    return recursiveReverse(n-1, nums, rev)

print(reverseArray(5, [1,2,3,4,5]))