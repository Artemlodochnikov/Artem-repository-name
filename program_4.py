a = int(input())
i = True
while i:
    match a:
        case(2000): print("dragon") 
        case(2001): print("snake")
        case(2002): print("horse")
        case(2003): print("gose")
        case(2004): print("monkey")
        case(2005): print("chiken")
        case(2006): print("dog")
        case(2007): print("pig")
        case(2008): print("rat")
        case(2009): print("cow")
        case(20010): print("tigr")
        case(2011): print("bunny")
        case _:
            if i < 2000:
                i = i + 12
            elif i > 2011:
                i = i - 12
