#!/usr/bin/python
# -*- coding: utf-8 -*-

import sys

def umwandeln(s):
    s = s.split('\n')
    flag = True
    end = ""
    dic = {}

    for i in s:
        if i == '':
            flag = False
        if flag:
            einzel = i.split(':')
            dic [einzel[0]] = einzel[1]
        else:
            end += i

    if len(end) == 0:
        end = None

    return (dic,end)


if __name__ == '__main__':
    s = 'a:b\nc:d\n\nTest String'
    print umwandeln(s)
