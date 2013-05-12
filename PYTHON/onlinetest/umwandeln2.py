import sys


def umwandeln(s):
    dic = {}
    s = s.split('\n')
    flag = True
    end = ""

    for i in s:
        if i == '':
            flag = False
        if flag:
            einzel = i.split(':')
            dic[einzel[0]] = einzel[1]
        else:
            end += i

    return (dic,end) if end is not '' else (dic,None)


if __name__ == '__main__':
    s = 'a:b\nc:d\n\nTest String'
    print umwandeln(s)
