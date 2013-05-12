import sys
import string

def gen1(s):
    while True:
        s= s[-1:]+s[:-1]
        yield s

def gen2(s):
    i = 0
    y = 1
    while True:
        s= s[:i:].upper()+s[y::]
        yield s
        i +=1
        y +=1
        
def gen3(lis):
    for i in lis:
        yield i
        yield i *-1


if __name__ == '__main__':
    s = "abc"
    g1 = gen1(s)
    g2 = gen2(s)
    g3 = gen3([1,2,3])

    print g2.next()
    print g2.next()
    print g2.next()
    print g2.next()

