#!/usr/bin/python
# -*-coding: utf-8 -*-

from itertools import izip, ifilter, islice

def is_prim(n):
    "Stellt fest ob die mitgegebene Zahl eine Primzahl ist und liefert true oder false zurueck"
    prim = True
    if n == 1:
        prim = False
    else:
        i = 2
        while i <= n-1:
            if n % i == 0 :
                prim = False
            i = i+1

    return prim

def prim ():
    "Generator, der alle Primzahlen generiert"
    yield 2
    i = 3
    while True:
        if is_prim(i):
            yield i
        i += 2


def pprim():
    "Generiert mit Hilfe von prim() alle Primzahlpaare"
    p1,p2 = prim(),prim()
    p2.next()
    return ifilter(lambda t: t[1]-t[0] == 2 , izip (p1,p2))


if __name__ == '__main__':
    i = islice(pprim() ,0, 100)
    print list(i)
