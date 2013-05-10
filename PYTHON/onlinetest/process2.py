# -*- coding: utf-8 -*-
#aufgab1

import sys
import string

def process(lines,split=":",key=0, del_key=False):
    ret = {}
    for i in lines:
        line = i.split(split)
        tempkey = line[key]
        ret[tempkey] = line
        if del_key:
            line.remove(tempkey)

    return ret
