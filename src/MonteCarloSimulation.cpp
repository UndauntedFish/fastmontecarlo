#include "MonteCarloSimulation.h"
#include <iostream>


// Constructor
MonteCarloSimulation::MonteCarloSimulation(double startingBalance, double riskPerTrade, double winProbability, double winLossRatio, int tradesPerSim, int numOfSims)
{
    this->startingBalance = startingBalance;
    this->riskPerTrade = riskPerTrade;
    this->winProbability = winProbability;
    this->winLossRatio = winLossRatio;
    this->tradesPerSim = tradesPerSim;
    this->numOfSims = numOfSims;
}

// Function to display the inputs of this Monte Carlo Simulation instance
void MonteCarloSimulation::printInputs()
{
    std::cout << "Starting Balance: " << startingBalance << "\nRisk per Trade: " << riskPerTrade << "\nWin Probability: " << winProbability << "\nWin:Loss Ratio: " << winLossRatio << "\nTrades per Sim: " << tradesPerSim << "\nNum of Sims: " << numOfSims << std::endl;
}