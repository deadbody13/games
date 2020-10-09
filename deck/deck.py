file = open("deck.txt", "w")

# libraries
libraries = ["iostream", "time.h", "vector"]
for x in libraries:
    line = "#include<" + x + ">" + "\n"
    file.write(line)

file.write("\n")

string = ""

count = 0
numWord = ["two", "three", "four", "five", "six", "seven",
           "eight", "nine", "jack", "queen", "king", "ace"]
value = [2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 11]
num = ["1", "2", "3", "4"]
numSuit = ["♠", "♡", "♣", "♢"]
suits = ["Spades", "Hearts", "Clubs", "Diamonds"]
att = ["name", "value", "graphic"]

file.close()
