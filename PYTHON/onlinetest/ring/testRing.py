# -*- coding: utf-8 -*-
# © 2011 Alexander Baumgärtner

def doCommand(cmd):
    print ">>> "+cmd
    output = eval(cmd)
    if output!=None:
        print output

print ">>> "
from ring import Ring
print ">>> from ring import Ring"
r = Ring()
print ">>> r = Ring()"

doCommand("r.is_empty()")
doCommand("len(r)")
doCommand("r.add('a')")
doCommand("r.is_empty()")
doCommand("len(r)")
doCommand("r.clear()")
doCommand("r.is_empty()")
doCommand("len(r)")
doCommand("r.add('A')")
doCommand("r.is_empty()")
doCommand("len(r)")
doCommand("r")
doCommand("r.add_sequence(('B','C'))")
doCommand("len(r)")
doCommand("r")
doCommand("r.add('D')")
doCommand("len(r)")
doCommand("r")
doCommand("r.next()")
doCommand("r")
doCommand("r.next()")
doCommand("r")
doCommand("r.next()")
doCommand("r")
doCommand("r.next()")
doCommand("r")
doCommand("r.next()")
doCommand("r")
doCommand("r.next()")
doCommand("r")
doCommand("r.clear()")
doCommand("len(r)")
doCommand("r.is_empty()")
doCommand("r.add_sequence([(1,2),(3,4),(5,6)])")
doCommand("r")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.add(\"7/8\")")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.add(\"9/10\")")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.add({11:\"Elf\",12:\"Zwoelf\"})")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.next()")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.next()")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.next()")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.next()")
doCommand("r.get_current()")
doCommand("r")
doCommand("r.next()")
doCommand("r.get_current()")
doCommand("r")

itrtr = iter(r)
print ">>> itrtr = it(r)"

doCommand("[itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next()]")
doCommand("[itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next()]")
doCommand("[itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next()]")
doCommand("r.remove_current()")
doCommand("r")
doCommand("r.remove_current()")
doCommand("r")
doCommand("r.remove_current()")
doCommand("r")
doCommand("r.remove_current()")
doCommand("r")
doCommand("r.remove_current()")
doCommand("r")
doCommand("r.remove_current()")
doCommand("r.is_empty()")
doCommand("len(r)")
doCommand("[itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next()]")
doCommand("[itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next()]")
doCommand("[itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next(),itrtr.next()]")
doCommand("r.add_sequence([1,2,3,4])")
doCommand("r")
doCommand("0 in r, 1 in r, 2 in r, 3 in r, 4 in r, \"1\" in r, \"4\" in r, 5 in r")
doCommand("r[0], r[1],  r[2],  r[3],  r[4],  r[5],  r[6],  r[7],  r[8]")
doCommand("r.next()")
doCommand("r")
doCommand("len(r)")
doCommand("r.get_elements()")
doCommand("r.remove_current()")
doCommand("r")
doCommand("1 in r, 2 in r, 3 in r, 4 in r")
doCommand("r[0], r[1],  r[2],  r[3],  r[4],  r[5],  r[6],  r[7],  r[8]")
doCommand("r.get_elements()")
doCommand("r.next()")
doCommand("r")
doCommand("len(r)")
doCommand("r.get_current()")
doCommand("r.get_elements()")
doCommand("r.remove_current()")
doCommand("r")
doCommand("1 in r, 2 in r, 3 in r, 4 in r")
doCommand("r[0], r[1],  r[2],  r[3],  r[4],  r[5],  r[6],  r[7],  r[8]")
doCommand("len(r)")
doCommand("r.get_elements()")
doCommand("r.next()")
doCommand("r")
doCommand("1 in r, 2 in r, 3 in r, 4 in r")
doCommand("r[0], r[1],  r[2],  r[3],  r[4],  r[5],  r[6],  r[7],  r[8]")
doCommand("len(r)")
doCommand("r.get_current()")
doCommand("r.get_elements()")
doCommand("r.remove_current()")
doCommand("r")
doCommand("1 in r, 2 in r, 3 in r, 4 in r")
doCommand("r[0], r[1],  r[2],  r[3],  r[4],  r[5],  r[6],  r[7],  r[8]")
doCommand("len(r)")
doCommand("r.get_elements()")
doCommand("r.next()")
doCommand("r.get_elements()")
doCommand("r.get_current()")
doCommand("r")
doCommand("len(r)")
doCommand("r.next()")
doCommand("r.get_elements()")
doCommand("r.get_current()")
doCommand("r")
doCommand("len(r)")
doCommand("r.remove_current()")
doCommand("1 in r, 2 in r, 3 in r, 4 in r")
doCommand("r.is_empty()")