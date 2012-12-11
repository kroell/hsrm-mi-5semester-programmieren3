#################################
#   Uebungsblatt 6 - Aufgabe 5  #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys


# Berechnung:
# - Geradzahlige Kubikzahlen der Zahlen 1 bis 10
# - Alle Teiler einer Zahl z ausser 1 und z (123,12345,123456)
# - Alle Primzahlen zw 1000 und 10100



### KUBIKZAHLEN BERECHNUNG ###

def is_kubik(lis):
    "Berechnung Kubikzahl und Rueckgabe gradzahliger Werte - mit List Comprehension"
    return [x**3 for x in lis if x % 2 == 0]

def is_kubik_variante(lis):
    "Berechnung Kubikzahl und Rueckgabe gradzahliger Werte - ohne List Comprehension"
    return filter(lambda x: x%2 == 0, map(lambda x: x**3,lis))




### TEILER BERECHNUNG ###
    
def devide(value):
    "Berechnung Teiler - mit List Comprehension"
    return [teiler for teiler in range(2,value) if value % teiler == 0]

def devide_variante(value):
    return filter(lambda x: value % x == 0, range(2,value))


#### PRIMZAHLEN BERECHNUNG ###

def is_prim(value):
    "Berechnung Primzahlen und Rueckgabe gradzahliger Werte - mit List Comprehension"
    return [teiler for teiler in range (2,value) if value % teiler == 0] == []

def is_prim_variante(value):
    "Berechnung Primzahlen und Rueckgabe gradzahliger Werte - ohne List Comprehension"
    if value < 2:
        return False
    for teiler in range (2,value):
        if value % teiler == 0:
            return False
    return True




#print filter(is_prim,range(10000,10100))
#print is_kubik_variante(range(1,11))
#print is_kubik(range(1,11))
print devide(123)
print devide_variante(123)
