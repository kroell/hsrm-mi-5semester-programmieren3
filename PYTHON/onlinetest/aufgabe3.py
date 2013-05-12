# Aufgabe 3
import sys

def gen1(s):
    '''
    Gibt einen rotierten String zurueck
    '''
    while True:
        s = s[-1:]+s[:-1]
        yield s

def gen3(lis):
    '''
    Gibt Werte erst positiv, dann negativ zurueck
    '''
    while True:
        for i in lis:
            yield i
            yield i*-1

if __name__ == '__main__':
    s = "abc"
    g = gen1(s)
    print g.next()
    print g.next()
    print g.next()

    lis = [1,2,3]
    g3 = gen3(lis)
    print g3.next()
    print g3.next()
    print g3.next()
    print g3.next()
    print g3.next()
    print g3.next()
    print g3.next()
    print g3.next()
