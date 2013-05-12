import sys

def change(l):
    lis = []
    for i in l:
        if i not in lis:
            lis.append(i)
    return lis

def union(l1,l2):
    for i in l2:
        if i not in l1:
            l1.append(i)
    return l1

if __name__ == '__main__':
    l = [1,2,3,3,2]
    print change(l) #[1,3,2]

    l2 = [1,2,3,4,5]
    l3 = [4,3,6]
    print union(l2,l3)
