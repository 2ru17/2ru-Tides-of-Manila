/**
 * This is to certify that this project is my own work, based on my personal efforts in studying
 * and applying the concepts learned. I have constructed the functions and their respective
 * algorithms and corresponding code by myself. The program was run, tested, and debugged by
 * my own efforts. I further certify that I have not copied in part or whole or otherwise
 * plagiarized the work of other students and/or persons.
 *
 *                                   <Neil Jr. L. Gutang> <#12410225>
 */

/**
 * Description:  Source code for Turn-based game "Tides of Manila: A Merchant's Quest"
 * Programmed by: <Neil Jr. L. Gutang >
 * Last modified: 2024-11-21
 * Version: 2.4.1
 * Acknowledgements:
 *  - https://www.geeksforgeeks.org/generating-random-number-range-c/
 *  - https://answers.microsoft.com/en-us/windowserver/forum/all/windows-server-2022-notepad-utf-8-to-ansi/015f4e39-48cf-417c-92ee-5f5d79b68772
 *  - https://www.geeksforgeeks.org/c-do-while-loop/
 *  - https://www.asciiart.eu/text-to-ascii-art
 *  - https://www.asciiart.eu
 *  - https://www.programiz.com/c-programming/c-for-loop
 *  - https://stackoverflow.com/questions/40011048/if-else-or-early-return
 *  - https://stackoverflow.com/questions/47596596/exit-from-while-loop-without-break-in-c
 *  - https://www.geeksforgeeks.org/how-to-create-a-command-line-progress-bar-in-c-c/
 *  - https://stackoverflow.com/questions/7620239/best-way-to-implement-busy-loop
 *  - https://stackoverflow.com/questions/69864631/what-is-a-busy-loop-in-c
 *  - https://www.geeksforgeeks.org/c-switch-statement/
 *  - https://cboard.cprogramming.com/c-programming/143106-turn-based-gaming-c.html
 *  - https://users.ece.cmu.edu/~eno/coding/CCodingStandard.html
 *  - https://www.geeksforgeeks.org/difference-while1-while0-c-language/
 *  - https://stackoverflow.com/questions/24278724/purpose-of-while1-statement-in-c
 *  - https://stackoverflow.com/questions/55315748/use-of-flag-in-c
 *  - https://cboard.cprogramming.com/cplusplus-programming/104699-flag-controlled-while-loop.html
 *  -
 *
 */

#include "gamebackend.h"

int main() {
  // Variable declarations
  int nMerchantCode, nLocation = LOCATION_MANILA, nCurrentDay = 1;
  int nPlayerGold = STARTING_GOLD_COINS, nCargoCapacity = MAX_CARGO_CAPACITY;
  int nCurrentCargoCoconut = 0, nCurrentCargoRice = 0, nCurrentCargoSilk = 0, nCurrentCargoGun = 0;
  int nMarketPriceCoconut, nMarketPriceRice, nMarketPriceSilk, nMarketPriceGun;
  char cActionCode;
  int nDifficulty, nMaxStormsAllowed, nStormChance, nStormsCount = 0;
  int nInitialGold, nInitialProfit;

  // Display start screen
  displayStartScreen();

  // Get initial game setup details from player
  nMerchantCode = getMerchantCode();
  nInitialGold = getInitialGold();
  nPlayerGold = nInitialGold;
  nInitialProfit = getInitialProfit();

  // Set game difficulty
  getDifficultyLevel(&nDifficulty, &nMaxStormsAllowed, &nStormChance);

  displayKeyPressContinue();
  loadingBar();

  // Initialize Market Prices for starting location
  setMarketPrices(nLocation, &nMarketPriceCoconut, &nMarketPriceRice, &nMarketPriceSilk, &nMarketPriceGun);

  // Main game loop
  while (nCurrentDay < TURN_LIMIT) {
    // Display current game details
    displayBoat();
    cActionCode = showCurrentGameDetails(nMerchantCode, nLocation, nCurrentDay, nPlayerGold, nInitialGold, nInitialProfit,
                                         nMarketPriceCoconut, nMarketPriceRice, nMarketPriceSilk,
                                         nMarketPriceGun, nCargoCapacity, nCurrentCargoCoconut,
                                         nCurrentCargoRice, nCurrentCargoSilk, nCurrentCargoGun, cActionCode);
    // Handle player action
    switch (cActionCode) {
      case 'T':
      case 't':  // Travel
        nLocation = showPortsOptions(nLocation, &nCurrentDay);
        setMarketPrices(nLocation, &nMarketPriceCoconut, &nMarketPriceRice, &nMarketPriceSilk, &nMarketPriceGun);
        displayKeyPressContinue();
        loadingBar();
        break;
      case 'B':
      case 'b':  // Buy
        if (showBuyScreen(&nPlayerGold, nMarketPriceCoconut, nMarketPriceRice,
                          nMarketPriceSilk, nMarketPriceGun, nCargoCapacity,
                          &nCurrentCargoCoconut, &nCurrentCargoRice, &nCurrentCargoSilk,
                          &nCurrentCargoGun, cActionCode) == -2) {
          displayKeyPressContinue();
          loadingBar();
          continue;
        }
        break;
      case 'S':
      case 's':  // Sell
        if (showSellScreen(&nPlayerGold, nMarketPriceCoconut, nMarketPriceRice,
                           nMarketPriceSilk, nMarketPriceGun, &nCurrentCargoCoconut,
                           &nCurrentCargoRice, &nCurrentCargoSilk, &nCurrentCargoGun,
                           cActionCode) == -2) {
          displayKeyPressContinue();
          loadingBar();
          continue;
        }
        break;
      case 'Q':
      case 'q':  // Quit
        printf("Thank you for playing! Exiting game...\n");
        displayLoseScreen();
        return 0;
      default:
        printf("Invalid action. Please enter T, B, S, or Q.\n");
    }

    // Calculate current profit percentage
    int nCurrentProfitPercentage = ((nPlayerGold - nInitialGold) / (float)nInitialGold) * 100;

    // Check for win/lose conditions after each action
    if (nCurrentProfitPercentage >= nInitialProfit) {
      displayWinScreen();
      return 0;
    }

    // Check for storm occurrence
    if (checkForStorm(nMaxStormsAllowed, nStormChance, &nStormsCount)) {
      nCurrentDay++;  // Increment day if a storm occurs
    }
    displayKeyPressContinue();
  }

  // Final win/lose check at the end of the game
  int nFinalProfitPercentage = ((nPlayerGold - nInitialGold) / (float)nInitialGold) * 100;
  if (nFinalProfitPercentage >= nInitialProfit) {
    displayWinScreen();
  } else {
    displayLoseScreen();
  }

  return 0;
}
