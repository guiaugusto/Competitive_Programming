word = raw_input()

vowels = ['a', 'e', 'i', 'o', 'u', 'y']
letters = []

for i in range(0, len(word)):
    letter = word[i]
    if letter.lower() not in vowels:
        letters.append(letter.lower())

result = ""

for i in range(0, len(letters)):
    result += "."
    result += letters[i]

print(result)
