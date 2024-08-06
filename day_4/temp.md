Suneet and Slavic play a card game. The rules of the game are as follows:

Each card has an integer value between $$$1$$$ and $$$10$$$.
Each player receives $$$2$$$ cards which are face-down (so a player doesn't know their cards).
The game is turn-based and consists exactly of two turns. In a round, both players pick a random unflipped card and flip it. The player who flipped a card with a strictly greater number wins the round. In case of equality, no one wins the round.
A player wins a game if he wins the most number of rounds (i.e. strictly greater than the other player). In case of equality, no one wins the game.
Since Suneet and Slavic aren't best friends, you need to calculate the number of ways the game could happen that Suneet would end up as the winner.

For a better understanding, please check the notes section.

Input
The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.

The first and only line of each test case contains $$$4$$$ integers $$$a_1$$$, $$$a_2$$$, $$$b_1$$$, $$$b_2$$$ ($$$1 \leq a_1, a_2, b_1, b_2 \leq 10$$$) where $$$a_1$$$ and $$$a_2$$$ represent the cards Suneet has, and $$$b_1$$$ and $$$b_2$$$ represent the cards Slavic has, respectively.

Output
For each test case, output a single integer — the number of games Suneet would win considering all possible games.