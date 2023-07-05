// Given input for number of cards per hand, N, return a random hand of N cards

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4			
#define NUM_RANKS 13	

int main(void){
	bool in_hand [NUM_SUITS] [NUM_RANKS] = {false};	// Create array to determine which cards
							// have been picked, and initialise false
	int num_cards;					// Input from user
	int rank, suit;					// what is the cards rank and suit
	const char rank_code[13] = {'2','3','4','5',  	// Hold card ranks
				    '6','7','8','9',
				    'T','J','Q','K',
				    'A'};		
	const char suit_code[4] = {'C','D','H','S'};	// Hold card suits

	srand((unsigned) time(NULL));			// Initialize the random number generator

	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);

	printf("Your hand: ");
	while (num_cards > 0) {			// This loop counts down to fill the hand
		suit = rand() % NUM_SUITS;	// Get a random number by modulo-ing  4
		rank = rand() % NUM_RANKS;	// Get a random number by modulo-ing 13
		if (!in_hand[suit][rank]){	// Checks the multi-d array to see if cards true
			in_hand[suit][rank] = true;	// Register card as in hand, picked
			num_cards--;		
			printf(" %c%c", rank_code[rank], suit_code[suit]);
			}
		}				// The loop does nothing if a card has already 
						// been picked.
	printf("\n");
	
	return 0;
}
