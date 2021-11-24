# TEST PLAN: 

## High level testplan 

|Test ID | Description | Exp I/P | Exp O/P |
|--------|-------------|---------|---------|
|H_01    |  Check if the grid for playing is being drawn or not.           |    No input.     |      3X3 grid is drawn.   |
|H_02    |Check if player 1/2 got 3 of his inputs in vertical, horizontal or diagonal format.             | 1-9  i/p from the player 1/2.      |The Player 1/2 won the game.|
|H_03    | Check for draw.            |   9 inputs from (Player 1 + Player 2).      |     The game is over.    |



## Low level test plan

|Test ID | Description | Exp I/P | Exp O/P |
|--------|-------------|---------|---------|
|L_01    | Checking for the basic requirement to the game, i.e., a 3X3 grid is drawn or not. This 3X3 grid is the basic need to play the game as it is like a game board for the game. |    Not input expected from the user. |  3X3 grid is drawn.  |
|L_02    |  Play proceeds with the Player 1/2 alternately placing their marks in any unoccupied cell. Check if any player finishes  with 3 marks in a row(vertical, horizontal or diagonal). |   1-9  i/p from the player 1/2.       |   The Player 1/2 won the game.      |
|L_03    |   Check if a total of 9 moves have been made( combining that of Player 1 and player 2), the game ends up in a draw when neither the Player 1 nor the player 2 is able to get 3 marks in a row.           |  9 inputs from (Player 1 + player 2).       |                The game is over.       Somebody won or the game ended as a draw. |
