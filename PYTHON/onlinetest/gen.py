#generator
'''
a, b, c
A, b, c
a, B, c
a, b, C
A, B, c
A, B, C
'''

import sys

def gen(s):
    x = 0
    y = 0
    length = len(s)
    while True:
        s1 = ""
        if x < length: #3
            for i in range(length):
                if x == i:
                    s1 += s[i].upper()
                    #x += 1
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


if __name__ == '__main__':
    s = "abc"
    g = gen(s)
    print g.next()
    print g.next()
    print g.next()
    print g.next()
    print g.next()
    print g.next()
