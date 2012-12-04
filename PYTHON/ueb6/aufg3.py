#################################
#   Uebungsblatt 6 - Aufgabe 3  #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys

def f(a,b,c=1):
    print a,b,c

# 1 2 3
f(1,2,3)

# Fehler - zu wenig Argumente
f(1)

# 1 2 1
f(1,2)

# Fehler - zu viele Argumente
f(1,2,3,4)




def g(a,b,*c,**d):
    print a,b,c,d

#1 2 () {}
g(1,2)
#1 2 (3, 4) {}
g(1,2,3,4)
#1 2 (3, 4) {'bla': 'bla'}
g(1,2,3,4,bla="bla")



def h(a,b,c=1,*d,**e):
    print a,b,c,d,e

# Fehler - doppelte Zuweisung von c
h(1,2,3,4,5,6,c=7)

# 1 2 3 (4,5) {x:7}
h(1,2,3,4,5,6,x=7)
