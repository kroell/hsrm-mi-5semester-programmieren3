# -*- coding: utf-8 -*-
# Aufgabe 4

import sys
import string


def hintereinander(*funcs):
    def f(x):
        for func in reversed(funcs):
            x = func(x)
        return x
    return f

def partiell(func, *args):
    def f(*p):
        return func(*(args+p))
    return f


