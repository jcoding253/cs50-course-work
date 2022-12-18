# Global for recursion drawing


z = 0


# Draw Pyramid function


def main():
    h = get_height()
    draw(h)


# Height input


def get_height():
    while True:
        try:
            n = int(input('Height: '))
            if n in range(1, 9, 1):
                return n
        except ValueError:
            print('Not an integer from 1-8, please try again. ')


# Recursion drawing, countdown with simultaneous opposite count up


def draw(j):
    global z

    if j < 1:
        return

    z += 1
    draw(j-1)

    for i in range(z-j):
        print(' ', end='')

    for i in range(j):
        print('#', end='')

    print(end='  ')

    for i in range(j):
        print('#', end='')

    print()


# Runs program
main()