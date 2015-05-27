#coding: utf-8
def shop (name, *arguments, **keywords):
    print "Are you want to buy %s? \n Yes"%name
    print "I'm sorry, I have many kinds, what kinds you want to buy?"
    for arg in arguments:
        print arg
    keys = keywords.keys()
    keys.sort()
    for kw in keys: print kw, ": ", keywords[kw]
shop ("Storage Drive", "HDD : Hard Disk Drive", "SSD: Solid State Drive", USB = 'Universal Serial Bus', FD = 'Flask Disk')
      
