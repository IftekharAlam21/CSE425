import csv
# Asking for user's choice
print('press 1 to view by description:\n'
      'press 2 to view by Industry:\n'
      'press 3 to view by Level:\n'
      'press 4 to view by Size:\n'
      'press 5 to view by Line Code:\n'
      'press 6 to view by Value:\n')

# Taking user's choice
userChoice = int(input("Enter what you want\n"))

# Custom flag for checking invalid requests
status = 0

# By description
if userChoice == 1:
    userChoice1 = input("enter your Desired Description\n")
    with open('survey.csv', 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        next(csv_reader)
        for line1 in csv_reader:
            if userChoice1 in line1[0]:
                print(line1)
                status == 1
    if status != 1:
        print("invalid input")

# By Value
elif userChoice == 6:
    userChoice6 = input("enter your desired value\n")
    with open('survey.csv', 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        next(csv_reader)
        for line6 in csv_reader:
            if userChoice6 == line6[5]:
                print(line6)
                status == 1
    if status != 1:
        print("invalid input")

# By Industry
elif userChoice == 2:
    userChoice2 = input("enter the industry info\n")
    with open('survey.csv', 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        next(csv_reader)
        for line2 in csv_reader:
            if userChoice2 in line2[1]:
                print(line2)
                status == 1
    if status != 1:
        print("invalid input")

# By Level
elif userChoice == 3:
    userChoice3 = input("enter the level\n")
    with open('survey.csv', 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        next(csv_reader)
        for line3 in csv_reader:
            if userChoice3 in line3[2]:
                print(line3)
                status == 1
    if status != 1:
        print("invalid input")

# By Size
elif userChoice == 4:
    userChoice4 = input("enter the size\n")
    with open('survey.csv', 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        next(csv_reader)
        for line4 in csv_reader:
            if userChoice4 in line4[3]:
                print(line4)
                status == 1
    if status != 1:
        print("invalid input")

# By Line code
elif userChoice == 5:
    userChoice5 = input("enter the code\n")
    with open('survey.csv', 'r') as csv_file:
        csv_reader = csv.reader(csv_file)
        next(csv_reader)
        for line5 in csv_reader:
            if userChoice5 in line5[4]:
                print(line5)
                status == 1
    if status != 1:
        print("invalid input")
