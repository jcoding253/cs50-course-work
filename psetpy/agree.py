
s = input('Do you agree? ')

//A Method that creates a lowercase function within the string
s = s.lower()

if s in ('y' , 'yes')
    print ('Agreed.')
elif s in ('n' , 'no')
    print ('Not Agreed.')


//regular expressions
import re

s = s.lower()

if re.search('^y(es)?$', s):
    print ('Agreed.')
elif re.search('^no?$', s):
    print ('Not Agreed.')