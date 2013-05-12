import sys


def f(s, sep,esc):
    x,y,z = zip(*s)

    for i in range(len(x)):
        s[i] = x[i]+sep+y[i]+sep+z[i]

    for i in range(len(s)):
        s[i] = s[i].replace(esc[0],"\\"+esc[0])
        s[i] = s[i].replace(esc[1],'\\'+esc[1])

    return '\n'.join(s)



if __name__ == '__main__':
    s = [("igude#","was","geh*t"),("hier","geht","einiges#"),("und","sonst","so")]
    sep = ":"
    esc = ["#","*"]
    print f(s,sep,esc)
