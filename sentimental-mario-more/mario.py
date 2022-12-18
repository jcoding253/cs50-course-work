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

def draw(i):
    if i < 1:
        print('done')
        return

    draw(i-1)

    for i in range (i):
        print('#')

    print()


main()