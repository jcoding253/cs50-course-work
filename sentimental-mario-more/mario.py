# TODO

def main():
    h = get_height()
    draw(h)

def get_height():
    while True:
        try:
            n = int(input('Height: '))
            if n > 0:
                return n
        except ValueError:
            print('Not an integer, please try again. ')

def draw(j):

    z += 2

    if j < 1:
        return

    draw(j-1)

    for i in range (z):
        print('$', end='')

    print(end='  ')

    for i in range (j):
        print('#', end='')

    print()


main()