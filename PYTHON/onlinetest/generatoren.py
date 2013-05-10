# -*- coding: utf-8 -*-
# Aufgabe 3

import sys
import string

def gen1():
    i = 1
    while True:
        yield i**1
        i += 1

def gen2():
    i = 2
    while True:
        yield i**2
        i += 1

def vielfach(g1,n):
    while True:
        yield n * g1.next()

def nmischen(g1,n,g2):
    while True:
        for i in range(n):
            yield g1.next()
        yield g2.next()

def getestet(g1,test):
    while True:
        wert = g1.next()
        if test(wert):
            yield wert


if __name__ == '__main__':
    g1 = gen1()
    g2 = gen2()
    v = vielfach (g1,2)
    n = nmischen (g1,3,g2)
    print n.next()
    print n.next()
    print n.next()
    print n.next() 
