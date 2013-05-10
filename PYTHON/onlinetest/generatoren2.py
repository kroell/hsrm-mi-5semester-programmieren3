# -*- coding: utf-8 -*-

def g1():
    i = 1
    while True:
        yield i ** 2
        i += 1


def vielfach(g1,n):
    while True:
        yield g1.next() * n


def nmischen(g1,n,g2):
    while True:
        for i in range(n):
            yield g1.next()
        yield g2.next()

def getestet(g1,test):
    while True:
        n = g1.next()
        if test(n):
            yield n
