godi = {2000: "Dragon",
        2001: "Snake",
        2002: "Horse",
        2003: "Goat",
        2004: "Monkey",
        2005: "Cock",
        2006: "Dog",
        2007: "Pig",
        2008: "Rat",
        2009: "Bull",
        2010: "Tigr",
        2011: "Rabbit",
        }
a = int(input())
while True:
    if a < 2000:
        a = a + 12
    elif a > 2011:
        a = a - 12
    elif a >= 2000 or a <= 2011:
        print(godi[a])
        break
