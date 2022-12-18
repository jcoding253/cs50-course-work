z = 0

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

    if j < 1:
        return

    global z += 1
    draw(j-1)


    for i in range (z-j):
        print('$', end='')

    print(end='  ')

    for i in range (j):
        print('#', end='')

    print()


main()