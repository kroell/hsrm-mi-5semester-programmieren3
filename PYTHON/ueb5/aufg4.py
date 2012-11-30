#!/usr/bin/python
# -*- coding: utf-8 -*-

#################################
#   Uebungsblatt 5 - Aufgabe 4  #
#################################

# Extrahieren Sie aus einer Liste der Zahlen von 0 bis 100:
# - die ersten 10 Zahlen,
# - die letzten 10 Zahlen,
# - jede 10.te Zahl (beginnend mit 0),
# - die mittlere Zahl,
# - jede dritte Zahl außer von den ersten vier und von den letzten fünf,
# - jede dritte Zahl aber davon nicht die ersten vier und nicht die letzten fünf.



import sys


lis = range (0,101)

# die ersten 10 Zahlen
print lis[0:11]
# die letzten 10 Zahlen
print lis[-10:]
#jede 10.te Zahl (beginnend mit 0)
print lis[::10]
# die mittlere Zahl
print lis[50:51:]
# jede dritte Zahl außer von den ersten vier und von den letzten fünf
print lis[4:-5:3]



