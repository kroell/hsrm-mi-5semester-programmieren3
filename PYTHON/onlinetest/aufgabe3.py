# Aufgabe 3
import sys

def gen1(s):
    '''
    Gibt einen rotierten String zurueck
    '''
    while True:
        s = s[-1:]+s[:-1]
        yield s

def gen2(s):
    length = len(s)
    x = 0
    y = 0
    while True:
        s1 = ""
        if x < length:
            for i in range(length):
                if x == i:
                    s1 += s[i].upper()
                else:
                    s1 += s[i].lower()
            x += 1
            yield s1
        else:
            for i in range(length):
                if y == i:
                    s1 += s[i].lower()
                else:
                    s1 += s[i].upper()
            y += 1
            yield s1

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
    #print g.next()
    #print g.next()
    #print g.next()

    g2 = gen2(s)
    print g2.next()
    print g2.next()
    print g2.next()
    print g2.next()
    print g2.next()

    
    lis = [1,2,3]
    g3 = gen3(lis)
    #print g3.next()
    #print g3.next()
    #print g3.next()
    #print g3.next()
    #print g3.next()
    #print g3.next()
    #print g3.next()
    #print g3.next()
