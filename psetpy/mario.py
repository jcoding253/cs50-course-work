#Calls get height function
def main():
    height = get_height()
    for i in range (height):
        print('#')

#Tries the values until an integer enters
def get_height():
    while True:
        try:
            n = int(input('Height: '))
            if n > 0:
                return n
        except ValueError:
            print('Not an integer, please try again. ')

main()