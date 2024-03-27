
def recursion(x, count, l):
    if count == x: 
        return l
    
    count = count + 1
    l.append(count)
    
    recursion(x, count, l)

def main(x):
    l = []
    count = 0

    recursion(x, count, l)
    return l

print(main(6))