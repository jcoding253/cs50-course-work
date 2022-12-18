# TODO

def main():
    height = get_height()
    draw(height)

def get_height():
    while True:
        try:
            n = int(input('Height: '))
            if n > 0:
                return n
        except ValueError:
            print('Not an integer, please try again. ')

def draw(i):
    if height < 1:
        print(done)
        sys.exit(0)

    draw(height-1)

    for i in range (height):
        print('#')

    print()


main()