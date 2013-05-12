import sys

def g1(s):
    while True:
        s = s[-1:]+s[:-1]
        yield s

def g3(lis):
    for i in lis:
        yield i
        yield i * -1


if __name__ == '__main__':
    s = "abc"
    lis = [1,2,3]
    g = g1(s)
    print g.next()
    print g.next()
    print g.next()
    print g.next()

    g_ = g3(lis)
    print g_.next()
    print g_.next()
    print g_.next()
    print g_.next()
    print g_.next()
