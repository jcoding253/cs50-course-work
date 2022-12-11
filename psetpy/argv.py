import sys

if len(argv) != 2:
    print('Missing command-line argument of 2 args')
    sys.exit(1)

for arg in argv[1:]:
    print(arg)

print(f'Hello, {argv[1]}')
sys.exit(0)

