def loop(n, count, str):
    if count == n:
        return str
    
    count = count + 1
    str +="Coding Ninjas "

    loop(n, count, str)

def main(n):
    count = 0
    str = ""
    s = loop(n, count, str)
    print(s)

main(6)
# print(main(6))