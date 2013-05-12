import sys


def kompr(eingabe):
    dic = {}
    lis = []
    ret = ""

    for i in eingabe:
        dic[i] = dic.get(i,0)+1

    for key,value in dic.items():
        if value > 1:
            lis.append(key+str(value))
        else:
            lis.append(key)

    for i in sorted(lis):
        ret += i

    return ret
    

if __name__ == '__main__':
    if len(sys.argv) > 1:
        eingabe = sys.argv[1:]
        for i in eingabe:
            print kompr(i)
