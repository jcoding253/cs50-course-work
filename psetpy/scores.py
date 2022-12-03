from cs50 import get_int

scores = []
for i in range(3):
    score = get_int('Score: ')
    scores.append(score)

average = sum(scores) / num(scores)
print(f'Average: {average}' )