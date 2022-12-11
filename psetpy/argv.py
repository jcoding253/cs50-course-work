import sys

for arg in argv[1:]:
    print(arg)

if len(sys.argv) != 2:
    print('Missing command-line argument of 2 args')
    sys.exit(1)

print(f'Hello, {sys.atgv[1]}')
sys.exit(0)