#!/usr/bin/python
# -*-coding: utf-8 -*-

# Aufgabe 7.2 haeufig.py

import sys
import text

from text import count_chars
from text import count_words

def find_25_char(fname):
    "Berechnet den am 25.ten vorkommenden Buvhstaben"
    dic = count_chars(fname)
    lis = []
    for ele, key in dic.items():
        lis.append(key)
    lis2 = sorted(lis,None,None,True)
    
    searched = lis2[25]
    
    for ele, key in dic.items():
        if key == searched:
            print ele

def find_25_word(fname):
    "Berechnet das am 25.ten vorkommende Wort"
    dic = count_words(fname)
    lis = []
    for ele, key in dic.items():
        lis.append(key)
    lis2 = sorted(lis,None,None,True)
    
    searched = lis2[25]
    
    for ele, key in dic.items():
        if key == searched:
            print ele


if __name__ == '__main__':
    fname = "/home/medieninf/studium/programmieren3/PYTHON/ueb7/shakespear.txt"
    find_25_char(fname)
    find_25_word(fname)
