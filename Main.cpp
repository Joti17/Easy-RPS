#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using std::string;

char ChoosePlayerMove();
char ChooseComputerMove();
void DecideWinner(char player, char computer);


int main()
{
    char player = ChoosePlayerMove();
	char computer = ChooseComputerMove();
	DecideWinner(player, computer);
	
}

char ChoosePlayerMove()
{
	char choice;
	std::cout << "Choose 1 of the below: \n";
	std::cout << "'r': Rock\n'p': Paper\n's': Scissors";
	std::cin >> choice;
	if( choice == 'r' || 'p' || 's')
	{
		return choice;
	}
	else
	{
		std::cout << "Invalid choice";
	}
}

char ChooseComputerMove()
{
	srand(time(NULL));
	int choiceint = rand() % 3 + 1;
	switch (choiceint)
	{
	case 1: return  'r';
		break;
	case 2: return  'p';
		break;
	case 3: return  's';
		break;
	}
}

void DecideWinner(char player, char computer)
{
	if(computer == 'r' && player == 's' || computer == 'p' && player == 'r' || computer == 's' && player == 'p')
	{
		std::cout << "The Computer won!\n";
	}
	else if(computer == player)
	{
		std::cout << "The game ended in a tie!\n";
	}
	else
	{
		std::cout << "You won!\n";
	}
}
