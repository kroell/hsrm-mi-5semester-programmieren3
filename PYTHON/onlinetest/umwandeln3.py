import sys

def umwandeln(s):
    dic = {}
    end = ""
    flag = True
    s = s.split('\n')

    for i in s:
        if i is '':
            flag = False
        if flag:
            einzeln = i.split(':')
            dic[einzeln[0]] = einzeln[1]
        else:
            end += i


    return (dic,end) if end is not '' else (dic,None)
    

if __name__ == '__main__':
    s = 'a:b\nc:d\n\nTest String'
    print umwandeln(s)
