import sys


def a1(lis):
    temp = []
    for i in lis:
        if i not in temp:
            temp.append(i)
    return temp

def b1(lis1,lis2):
    temp = []
    for i in lis2:
        if i not in lis1:
            lis1.append(i)
    return sorted(lis1)
    

if __name__ == '__main__':
    lis = [1,2,3,4,5,2,1]
    lis1 = [1,2,3,4,5]
    lis2 = [4,3,6]
    print a1(lis)
    print b1(lis1,lis2)
