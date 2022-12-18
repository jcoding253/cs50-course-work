# TODO

def main():
    height = get_height()

    if height < 1:
        sys.exit(0)

    for i in range (height-1):
        print('#')

    print()




def get_height():
    while True:
        try:
            n = int(input('Height: '))
            if n > 0:
                return n
        except ValueError:
            print('Not an integer, please try again. ')




main()