#################################
#   Uebungsblatt 5 - Aufgabe 6  #
#################################

#!/usr/bin/python
# -*-coding: utf-8 -*-

import sys

lis = [1,2,3]
# [1,2,3]

lis[len(lis):] = [4]
# [1,2,3,4]

unter = [5,6]
# [5,6]

lis[1] = unter
# [1,[5,6],3,4]

unter[0] = 7
# lis = [1,[7,6],3,4]
# unter = [7,6]
