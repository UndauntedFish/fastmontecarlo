#include "Trade.h"
#include <iostream>
#include <random>

// Constructor
Trade::Trade(double winProbability, double winLossRatio)
{
    this->winProbability = winProbability;
    this->winLossRatio = winLossRatio;

    // Needed to make reroll() generate a random outcome with a different seed.
    // Without it, it'll just keep giving the same sequence of wins and losses for each reroll.
    // https://stackoverflow.com/questions/13500494/rand-generating-the-same-number
    srand(time(NULL));

    // Call reroll to pre-populate tradeResult with an outcome, but user can re-call reroll() to manually generate a new tradeResult.
    reroll();
}

// Function to reroll trade result. 
void Trade::reroll()
{
    // If the random trade outcome is a win, win the amount, in R multiples, specified by WinLoss ratio.
    // If the random trade outcome is a loss, lose 1 R multiple.
    tradeResult = rollTrade(winProbability) ? winLossRatio : -1.0;
}


// Rolls a random trade result given a win rate. Returns true if the randomly rolled trade is a win, false if loss.
bool Trade::rollTrade(float winRate)
{
    float randomNumBetween0And1 = (float)rand() / (float)RAND_MAX;

    return randomNumBetween0And1 <= winRate;
}

// Returns the amount won or lost in this trade, expressed as an R multiple.
double Trade::getResult()
{
    return tradeResult;
}