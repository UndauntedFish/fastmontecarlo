# fastmontecarlo
This Monte-Carlo simulator uses statistics of a trading strategy, like profit probability and win:loss ratio, to simulate multiple equity curve outcomes and help assess the drawdown and expected return of the strategy. 

It has the same functionality as my previous Monte-Carlo simulator, found here: https://github.com/UndauntedFish/montecarlo/tree/master. This version was rewritten to maximize its runtime and push the limit of how many simulations it can run.

Here is an example of using the program to simulate the possible outcomes of 50,000,000 trades with a trading strategy with the following statistics:
 - Win probability: 60%
 - Size of average win: 1.2R 
    - 1.2R = 1.2 times the initial risk of each trade. More about this unit of measurement, the R multiple, here: https://www.vantharp.com/trading/wp-content/uploads/2018/06/A_Short_Lesson_on_R_and_R-multiple.pdf)
 - Size of average loss: -1R
 - Average cost per trade (commissions, spread, extra fees, etc.): -0.05R
 
![image](https://user-images.githubusercontent.com/58181651/233721762-86b241fc-f3b7-4c63-9ed5-5e7f301789eb.png)


The purpose of doing this is to stress test a trading system by seeing how it may play out throughout millions of different scenarios.
