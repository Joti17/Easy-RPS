#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using std::string;

//Calling the functions to not get errors, when declaring at the end
char ChoosePlayerMove();
char ChooseComputerMove();
int DecideWinner(char player, char computer);

//Main function
int main()
{
	//Declaring the necessary variables
	bool running = true;
	float score = 0;
	//Game loop
	while (running)
	{
		char player = ChoosePlayerMove();
		char computer = ChooseComputerMove();
		int Winner = DecideWinner(player, computer);
		//Gives the player the score
		if (Winner == 1)
		{
			score += 1;
		}
		else if (Winner == 0)
		{
			score -= 1;
		}
		else
		{
			score -= 0.25;
		}
		std::cout << "Your score is: " << score << std::endl;
	}
}

//Functions


//Lets the player input their move
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
		std::cout << "Invalid choice\n";
	}
}

//Chooses a random number between 3, which gets converted to a variable of the type char
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


//Uses std::cout to say the winner and gives return value, which is being turned into your score
int DecideWinner(char player, char computer)
{
	if(computer == 'r' && player == 's' || computer == 'p' && player == 'r' || computer == 's' && player == 'p')
	{
		std::cout << "The Computer won!\n";
		return 0;
	}
	else if(computer == player)
	{
		std::cout << "The game ended in a tie!\n";
		return -1;
	}
	else
	{
		std::cout << "You won!\n";
		return 1;
	}
}
