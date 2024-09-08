import random


#Initializing player Variables
score = 0
#Gets the player input
def PlayerChoice():
    choice = input("""Choose 1
'r': Rock
'p': Paper
's': Scissors: """)
    if choice != 'r' and choice != 'p' and choice != 's':
        print("Invalid")
    else:
        return choice

#Generates a random number between 1 and 3 to return the choice
def ComputerChoice():
    choice = random.randint(1, 3)
    if choice == 1:
        return 'r'
    elif choice == 2:
        return 'p'
    elif choice == 3:
        return 's'

#Checks, who won the game or, if it is a tie
def WinnerChoice(Player, Computer):
    if Player == Computer:
        print("The Game endet in a draw.")
        return -1
    elif Computer == 'r' and Player == 's' or Computer == 'p' and Player == 'r' or Computer == 's' and Player == 'p':
        print("The Computer wins!")
        return 0
    else:
        print("You win!")
        return 1

#Initializing Gameloop
running = True
while running:
    player = PlayerChoice()
    computer = ComputerChoice()
    Winner = WinnerChoice(player, computer)
    if Winner == 1:
        score += 1
    elif Winner == 0:
        score -= 1
    elif Winner == -1:
        score -= 0.25

    if computer == 'r':
        print("The computer choose Rock")
    elif computer == 'p':
        print("The computer choose Paper")
    else:
        print("The computer choose Scissors")
    
    quit = input("Would you like to continue? (y)es/(n)o or show (s)core")
    if quit == 'y':
        continue
    elif quit == 'n':
        print(f"Thanks for playing! You had a score of {score}")
        running = False
    elif quit == "s":
        print(f"Your score is {score}")
