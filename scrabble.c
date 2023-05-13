#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Points             A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q   R  S  T  U  V  W  X  Y  Z
	const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

	// Get the word from the first player
	string player1 = get_string("Player 1: ");

	// Get the word from the secong player
	string player2 = get_string("Player 2: ");
	
	// Calculate the points of the first player
	int player1_points = calc_points(player1);
	
	// Calculate the points of the second player
	int player2_points = calc_points(player2);

	// Print out the winner
	if(player1_points > player2_points)
	{
		printf("Player 1 is the winner!");
		return 0;
	}
	else if(player1_points < player2_points)
	{
		printf("Player 2 is the winner!");
		return 0;
	}
	else
	{
		printf("Tie!");
		return 0;
	}
}

int calc_points(string player_word)
{
	int points = 0;

	return points;
}
