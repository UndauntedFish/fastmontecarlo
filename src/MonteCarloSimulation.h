#ifndef MONTECARLOSIMULATION_H
#define MONTECARLOSIMULATION_H

class MonteCarloSimulation
{

public:
    // User-inputted trading strategy statistics
    double startingBalance;
    double riskPerTrade;
    double winProbability;
    double winLossRatio;
    int tradesPerSim;
    int numOfSims;

    // Constructor
    MonteCarloSimulation(double startingBalance, double riskPerTrade, double winProbability, double winLossRatio, int tradesPerSim, int numOfSims);
    
    // Function to display the inputs of this Monte Carlo Simulation instance
    void printInputs();

    
};

#endif // MONTECARLOSIMULATION_H