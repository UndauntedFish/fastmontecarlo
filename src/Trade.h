#ifndef TRADE_H
#define TRADE_H

class Trade
{
private:
    double winProbability;
    double winLossRatio;
    double tradeResult;

    // Private helper function to generate a trade result given a win rate (true = win, false = loss)
    bool rollTrade(float winRate);

public:
    // Constructor
    Trade(double winProbability, double winLossRatio);

    // Function to return the amount won/lost per trade
    double getResult();

    // Function to reroll trade result
    void reroll();
};

#endif // TRADE_H