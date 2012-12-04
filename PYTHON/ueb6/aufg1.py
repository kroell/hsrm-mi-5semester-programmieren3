#################################
#   Uebungsblatt 6 - Aufgabe 1  #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys

print "\nErster Teil:"

# Schreiben sie folgende for-Schleife als while-Schleife
l = [1,2,3]
for e in l:
    print e

print "----------"

i = 0    
while i<len(l):
    print l[i]
    i = i+1
       
print "\nZweiter Teil:"

# Schreiben sie folgende while-Schleife als for-Schleife
d = {1:"eins", 2:"zwei", 3:"drei"}
l = d.keys()
i = 0
while i < len(l):
    s = l[i]
    print s, d[s]
    i = i+1
    
print "----------"

for key, value in d.items():
    print key,value
    

