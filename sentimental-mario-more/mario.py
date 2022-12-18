# TODO

def main():
    h = get_height()
    draw (h)

def get_height():
    while True:
        try:
            n = int(input('Height: '))
            if n > 0:
                return n
        except ValueError:
            print('Not an integer, please try again. ')

def draw():
    if h < 1:
        print(done)
        sys.exit(0)

    draw (h-1)

    for i in range (h):
        print('#')

    print()


main()