#!/usr/bin/python
# -*-coding: utf-8 -*-

#shakespear.txt
#3760  Zeilen
#19110  Wörter
#112267  Buchstaben

import sys
from wc import words
from wc import chars

def count_chars(fname):
    "Zählt das Vorkommen von Buchstaben in einer Datei mit Rückgabe eines dict"
    ws = file(fname).read()
    dic = {}
    for i in ws:
        dic[i] = dic.get(i,0)+1
        
    return dic

def count_words(fname):
    "Zählt das Vorkommen von Wörtern in einer Datei mit Rückgabe eines dict"
    ws = file(fname).read().split()
    dic = {}
    for i in ws:
        dic[i] = dic.get(i,0)+1
    return dic
    

if __name__ == '__main__':
    fname = "/home/medieninf/studium/programmieren3/PYTHON/ueb7/shakespear.txt"
    dic_chars = count_chars(fname)
    for ele, key in dic_chars.items():
        print key, ele

    dic_words = count_words(fname)
    
    #for ele, key in dic_words.items():
        #print key, ele

    #print sorted(((x,y) for y,x in dic.items()), None, None, True)[:10]
