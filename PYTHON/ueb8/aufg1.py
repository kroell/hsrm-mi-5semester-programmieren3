#!/usr/bin/python
# -*-coding: utf-8 -*-

# Aufgabe 7.2 haeufig.py

import sys

def wc(eingabe):
    dic = {}
    for i in eingabe:
        dic[i] = dic.get(i,0)+1
        
    most(dic)

def most(dic):
    lis = []
    for ele,key in dic.items():
        lis.append(key)

    lis2 = sorted(lis,None,None,True)
    gesucht = 0
    for i in lis2:
        while(i < len(lis2)-1):
            if lis2[i] > lis2[i+1]:
                gesucht = lis2[i]
            else:
                lis2[i] = lis2[i+1]

    for ele, key in dic.items():
        if key == gesucht:
            print key ,":", ele
    

if __name__ == '__main__':
    if len(sys.argv) > 1:
        eingabe = sys.argv [1:]
        wc(eingabe)


    
