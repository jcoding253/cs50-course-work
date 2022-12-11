//uppercase
before = input('Before: ')
after = before.upper()
print(f'After: {after}')



//compare
s = input('s: ')
t = input('t: ')

if s == t:
    print('Same')
else:
    print('Different')



//copy
s = input('s: ')
t = s.capitalize()

print(f's: {s}')
print(f's: {t}')




//swap
x = 1
y = 2

print(f'x is {x}, y is {y}')
x, y = y, x
print(f'x is {x}, y is {y}')