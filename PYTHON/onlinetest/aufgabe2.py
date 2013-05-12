#a2
import sys

def change(s):
    dic = {}
    split = s.split('\n')
    lis = []

    for i in split:
        lis.append(i.split(':'))

    #letzten 2 elemente aus liste entfernen
    lis.pop()
    lis.pop()

    for i in lis:
        dic[i[0]] = dic.get(i[0],i[1])
        
    # String rausholen und verarbeiten    
    for i in split:
        string = i.split(':')

    return (dic,string[0]) if string[0] is not '' else (dic,None)


if __name__ == '__main__':
    s = "a:b\nc:d\n\ntest string"
    print change(s)
