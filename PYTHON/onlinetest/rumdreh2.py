# -*- coding: utf-8 -*-
#aufgabe2

def rumdreh(zk):
    return zk[::-1]

def vokale(zk):
    s = 'aeiouAEIOU'
    a = ""
    b = ""
    for i in zk:
        if i in s:
            a += i
        else:
            b += i

    return (a,b)

def ersetze(zk,dic):
    for key,value in dic.items():
        zk = zk.replace('{'+key+'}',dic[key])
    return zk
