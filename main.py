import random

def PlayerChoice():
    choice = input("""Choose 1
    'r': Rock
    'p': Paper
    's': Scissors""")
    if choice != 'r' and choice != 'p' and choice != 's':
        print("Invalid")
    else:
        return choice


def ComputerChoice():
    choice = random.randint(1, 3)
    if choice == 1:
        return 'r'
    elif choice == 2:
        return 'p'
    elif choice == 3:
        return 's'


def WinnerChoice(Player, Computer):
    if Player == Computer:
        print("The Game endet in a draw.")
    elif Computer == 'r' and Player == 's' or Computer == 'p' and Player == 'r' or Computer == 's' and Player == 'p':
        print("The Computer wins!")
    else:
        print("You win!")


while True:
    player = PlayerChoice()
    computer = ComputerChoice()
    WinnerChoice(player, computer)
    print(f"The computer choose {computer}")
    break