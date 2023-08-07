// Need these two includes to use the MonteCarloSimulation class and create an instance of the MonteCarloSimulation object.
#include "MonteCarloSimulation.h"
#include "MonteCarloSimulation.cpp"

// Need these two includes to use the Trade class and create an instance of the Trade object
#include "Trade.h"
#include "Trade.cpp"

// Need this include to print to the console and take in user input
#include <iostream>

// Need this include to generate a random number between 0 and 1 for run_trade()
#include <random>

// Need this directive so that everytime I need to use cout in the code, I can write "count << variblename" instead of "std::cout << variableName"
using namespace std;

// To compile and run: g++ -o main.exe main.cpp
// To run: main.exe


// Rolls a random trade result given a win rate. Returns true if the randomly rolled trade is a win, false if loss.
bool run_trade(float win_rate)
{
    float random_num_between_0_and_1 = (float)rand() / (float)RAND_MAX;

    return random_num_between_0_and_1 <= win_rate;
}

int main()
{
    /*
    for (int i = 0; i < 1000; ++i) {
        cout << run_trade(0.4) << '\n';
    }
    */

    MonteCarloSimulation sim(10000.00, 0.02, 0.4, 2.0, 100, 10);
    sim.printInputs();

    Trade trade(sim.winProbability, sim.winLossRatio);
    double winCounter = 0;
    double tradeCount = 10;
    for (int i = 0; i < tradeCount; i++)
    {
        double tradeResult = trade.getResult();

        if (tradeResult > 0)
        {
            winCounter++;
        }

        cout << tradeResult << '\n';
    }

    cout << winCounter / tradeCount;

    return 0;
}
