import sys

def count(s):
    dic = {}
    for i in s:
        dic[i] = dic.get(i,0)+1
    most(dic)


def most(dic):
    values = sorted(dic.values(),None,None,True)
    
    l = []
    for key,value in dic.items():
        if values[0] == value:
            l.append(str(value)+":"+str(key))

    l = sorted(l)
    for i in l:
        print i

if __name__ == "__main__":
    if len(sys.argv)>1:
        eingabe = sys.argv[1:]
        count(eingabe)
