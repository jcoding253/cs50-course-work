import sys

if len(sys.argv) != 2:
    print('Missing command-line argument of 2 args')
    sys.exit(1)

for arg in sys.argv[1:]:
    print(arg)

print(f'Hello, {sys.argv[1]}')
sys.exit(0)

