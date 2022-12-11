people = {
    'Carter': '349572379',
    'Joemama': '73624968'
}

name = input('Name ')
if name in people:
    number = people[name]
    print(f'Number: {number}')