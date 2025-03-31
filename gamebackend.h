/**
 * This is to certify that this project is my own work, based on my personal efforts in studying
 * and applying the concepts learned. I have constructed the functions and their respective
 * algorithms and corresponding code by myself. The program was run, tested, and debugged by
 * my own efforts. I further certify that I have not copied in part or whole or otherwise
 * plagiarized the work of other students and/or persons.
 *
 *                            <Neil Jr. L. Gutang> <#12410225>
 */
/**
 * Description:  Backend Files for the turn-based game "Tides of Manila: A Merchant's Quest"
 * Programmed by: <Neil Jr. L. Gutang>
 * Last modified: 2024-11-07
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef GAME_BACKEND_H
#define GAME_BACKEND_H  // prevent multiple inclusions of the same header file

// Int values for Each Port
#define LOCATION_MANILA 1
#define LOCATION_TONDO 2
#define LOCATION_PANDAKAN 3
#define LOCATION_SAPA 4

// Tondo Prices
#define TONDO_COCONUT_MIN 4
#define TONDO_COCONUT_MAX 24
#define TONDO_RICE_MIN 1
#define TONDO_RICE_MAX 20
#define TONDO_SILK_MIN 48
#define TONDO_SILK_MAX 68
#define TONDO_GUN_MIN 70
#define TONDO_GUN_MAX 95

// Manila Prices
#define MANILA_COCONUT_MIN 3
#define MANILA_COCONUT_MAX 18
#define MANILA_RICE_MIN 5
#define MANILA_RICE_MAX 20
#define MANILA_SILK_MIN 24
#define MANILA_SILK_MAX 39
#define MANILA_GUN_MIN 65
#define MANILA_GUN_MAX 84

// Pandakan Prices
#define PANDAKAN_COCONUT_MIN 2
#define PANDAKAN_COCONUT_MAX 12
#define PANDAKAN_RICE_MIN 4
#define PANDAKAN_RICE_MAX 14
#define PANDAKAN_SILK_MIN 22
#define PANDAKAN_SILK_MAX 32
#define PANDAKAN_GUN_MIN 90
#define PANDAKAN_GUN_MAX 103

// Sapa Prices
#define SAPA_COCONUT_MIN 9
#define SAPA_COCONUT_MAX 14
#define SAPA_RICE_MIN 1
#define SAPA_RICE_MAX 6
#define SAPA_SILK_MIN 17
#define SAPA_SILK_MAX 22
#define SAPA_GUN_MIN 204
#define SAPA_GUN_MAX 301

// Cargo and gold coin limits
#define MAX_CARGO_CAPACITY 75  // Max cargo capacity of the vessel
#define STARTING_GOLD_COINS 0  // set 0 for starting value of coins (until set)
#define TURN_LIMIT 30          // Maximum number of turns per game

// Profit limits
#define MIN_PROFIT_PERCENTAGE 20  // Minimum target profit percentage

/* Displays the Welcome Start Sreen ASCII art
   Precondition: None
   @return none, just prints the ASCII art of the game start screen
*/
void displayStartScreen();

/* Displays the ASCII art of the boat
   Precondition: None
   @return none, just prints the ASCII art of the boat
*/
void displayBoat();

/* Displays the ASCII - Port
   Precondition: None
   @return none
*/
void displayManilaPort();

/* Displays the ASCII - Port
   Precondition: None
   @return none
*/
void displayTondoPort();

/* Displays the ASCII - Port
   Precondition: None
   @return none
*/
void displaySapaPort();

/* Displays the ASCII - Port
   Precondition: None
   @return none
*/
void displayPandakanPort();

/* Displays the ASCII Buy Screen
   Precondition: None
   @return none
*/
void displayBuyScreen();

/* Displays the ASCII Sell Screen
   Precondition: None
   @return none
*/
void displaySellScreen();

/* Displays the ASCII Success Transaction
   Precondition: None
   @return none
*/
void displaySuccessTransaction();

/* Displays the ASCII Cancel Transaction
   Precondition: None
   @return none
*/
void displayCancelTransaction();

/* Displays the ASCII Travel Screen
   Precondition: None
   @return none
*/
void displayTravelScreen();

/* Displays the ASCII art for the Win screen
   Precondition: None
   @return none, just prints the ASCII art for the Win screen
*/
void displayWinScreen();

/* Displays the ASCII art for the Lose screen
   Precondition: None
   @return none, just prints the ASCII art for the Lose screen
*/
void displayLoseScreen();

/* Displays the ASCII art for when a storm occurs
   Precondition: None
   @return none, just prints the ASCII art for the storm
*/
void displayStormOccurence();

/*
   Determines if a random storm occurs based on game difficulty
   Precondition: nDifficulty is set using getGameDifficulty() (1 for easy, 2 for hard, 3 for difficult)
   @param nDifficulty is the selected difficulty level (easy, hard, difficult)
   @param nStormsCount is the current number of storms that have occurred in the game
   @return 1 if a storm occurs, 0 otherwise. Storm occurrence is based on difficulty:
           - Easy: 0% chance of storm
           - Hard: 30% chance of storm, max of 5 storms
           - Difficult: 50% chance of storm, max of 10 storms
*/
void getDifficultyLevel(int *nDifficulty, int *nMaxStormsAllowed, int *nStormChance);
/*
   Gives out a prompt to enter any character to continue
   Precondition: None
   @param cTemp takes the value of the input
   @return None, garbage value for cTemp
*/
void displayKeyPressContinue(void);
/*
   Checks for storm occurrence based on the difficulty parameters
   Precondition: nMaxStormsAllowed and nStormChance are set
   @param nMaxStormsAllowed is the maximum number of storms allowed based on the difficulty
   @param nStormChance is the chance of a storm occurring based on the difficulty
   @param nStormsCount is the current number of storms that have occurred in the game
   @return 1 if a storm occurs, 0 otherwise
*/
int checkForStorm(int nMaxStormsAllowed, int nStormChance, int *nStormsCount);

/*
   Retrieves the player's merchant code
   Precondition: nMerchantCode is a positive integer between 0 and 999
   @param nMerchantCode is the code representing the player
   @return the player's valid merchant code
*/
int getMerchantCode();

/*
   Retrieves the player's initial gold
   Precondition: nInitialGold must be greater than 0
   @param nInitialGold is the initial amount of gold the player starts with
   @return the valid initial gold value
*/
int getInitialGold();

/*
   Retrieves the player's target profit percentage
   Precondition: nInitialProfit must be greater than 20%
   @param nInitialProfit is the player's target profit percentage
   @return the valid profit percentage
*/
int getInitialProfit();

/*
   Displays the current game details and allows the user to select an action
   Precondition: All parameters must be valid and initialized
   @param nMerchantCode is the player's merchant code
   @param nLocation is the player's current location (Manila, Tondo, etc.)
   @param nCurrentDay is the current day in the game
   @param nPlayerGold is the player's current amount of gold
   @param nPlayerProfit is the player's current profit percentage
   @param nMarketPriceCoconut is the current market price of coconuts
   @param nMarketPriceRice is the current market price of rice
   @param nMarketPriceSilk is the current market price of silk
   @param nMarketPriceGun is the current market price of guns
   @param nCargoCapacity is the player's total cargo capacity
   @param nCurrentCargoCoconut is the amount of coconut in the player's cargo
   @param nCurrentCargoRice is the amount of rice in the player's cargo
   @param nCurrentCargoSilk is the amount of silk in the player's cargo
   @param nCurrentCargoGun is the amount of guns in the player's cargo
   @param cActionCode is the action the player wants to take ('t' for travel, 'b' for buy, 's' for sell, 'q' for quit)
   @return the character representing the selected action
*/
char showCurrentGameDetails(int nMerchantCode, int nLocation, int nCurrentDay, int nPlayerGold,
                            int nInitialGold, int nInitialProfit, int nMarketPriceCoconut,
                            int nMarketPriceRice, int nMarketPriceSilk, int nMarketPriceGun,
                            int nCargoCapacity, int nCurrentCargoCoconut, int nCurrentCargoRice,
                            int nCurrentCargoSilk, int nCurrentCargoGun, char cActionCode);

// Displays the menu for buying goods and allows the player to select an item
// Precondition: All parameters must be valid and initialized
// @param nPlayerGold is a pointer to the player's current amount of gold
// @param nMarketPriceCoconut is the current market price of coconuts
// @param nMarketPriceRice is the current market price of rice
// @param nMarketPriceSilk is the current market price of silk
// @param nMarketPriceGun is the current market price of guns
// @param nCargoCapacity is the player's total cargo capacity
// @param cActionCode is the player's selected item ('c' for coconut, 's' for silk, 'r' for rice, 'g' for gun, 'x' for cancel, 'q' for quit)
// @param nBuyAmount is the quantity of the item the player wants to buy
// @return an integer representing the outcome of the buying process
int showBuyScreen(int *nPlayerGold, int nMarketPriceCoconut, int nMarketPriceRice,
                  int nMarketPriceSilk, int nMarketPriceGun, int nCargoCapacity,
                  int *nCurrentCargoCoconut, int *nCurrentCargoRice, int *nCurrentCargoSilk,
                  int *nCurrentCargoGun, char cActionCode);

// Displays the menu for selling goods and allows the player to select an item
// Precondition: All parameters must be valid and initialized
// @param nPlayerGold is a pointer to the player's current amount of gold
// @param nMarketPriceCoconut is the current market price of coconuts
// @param nMarketPriceRice is the current market price of rice
// @param nMarketPriceSilk is the current market price of silk
// @param nMarketPriceGun is the current market price of guns
// @param nCurrentCargoCoconut is a pointer to the player's coconut cargo amount
// @param nCurrentCargoRice is a pointer to the player's rice cargo amount
// @param nCurrentCargoSilk is a pointer to the player's silk cargo amount
// @param nCurrentCargoGun is a pointer to the player's gun cargo amount
// @param cActionCode is the player's selected item ('c' for coconut, 's' for silk, 'r' for rice, 'g' for gun, 'x' for cancel, 'q' for quit)
// @param nSellAmount is the quantity of the item the player wants to sell
// @return an integer representing the outcome of the selling process
int showSellScreen(int *nPlayerGold, int nMarketPriceCoconut, int nMarketPriceRice,
                   int nMarketPriceSilk, int nMarketPriceGun, int *nCurrentCargoCoconut,
                   int *nCurrentCargoRice, int *nCurrentCargoSilk, int *nCurrentCargoGun,
                   char cActionCode);

/*
   Generates a random price for an item within a specified range
   Precondition: nMinimumItemPrice and nMaximumItemPrice are valid integers, with nMinimumItemPrice <= nMaximumItemPrice
   @param nMinimumItemPrice is the minimum price for the item
   @param nMaximumItemPrice is the maximum price for the item
   @return a random price between nMinimumItemPrice and nMaximumItemPrice
*/
int giveRandomPrice(int nMinimumItemPrice, int nMaximumItemPrice);

/*
   Displays the available ports for traveling and allows the player to choose a destination
   Precondition: nCurrentDock is the player's current location
   @param nCurrentDock is the player's current dock location
   @return an integer representing the new port chosen by the player (1 for Manila, 2 for Tondo, 3 for Pandakan, 4 for Sapa)
*/
int showPortsOptions(int nCurrentDock, int *nCurrentDay);

/*   Sets the market prices for items based on the current location
   Precondition: nLocation is a valid location constant (1 for Manila, 2 for Tondo, 3 for Pandakan, 4 for Sapa)
   @param nLocation is the current location of the player
   @param nMarketPriceCoconut is a pointer to the market price of coconut
   @param nMarketPriceRice is a pointer to the market price of rice
   @param nMarketPriceSilk is a pointer to the market price of silk
   @param nMarketPriceGun is a pointer to the market price of guns
   @return none, but updates the market prices for the provided items based on location */
void setMarketPrices(int nLocation, int *nMarketPriceCoconut, int *nMarketPriceRice, int *nMarketPriceSilk, int *nMarketPriceGun);

/* Displays the Loading Bar
   Precondition: None
   @return none
*/
void loadingBar();

#endif  // GAME_FUNCTIONS_H
        // End of the conditional block
