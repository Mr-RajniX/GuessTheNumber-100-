# GuessTheNumber-(N<100)
 A number guessing game is a simple guessing game where a user is supposed to guess a number between 0 and N in a maximum of 10 attempts. The game will end after 10 attempts and if the player failed to guess the number, and then he loses the game.

 <p><strong>Approach:</strong> The following steps can be followed to design the game:</p>
 <ul><li>Generate a random number between<strong> 0</strong> and <strong>N</strong>.</li><li>Then iterate from <strong>1</strong> to <strong>10</strong> and check if the input number is equal to the assumed number or not.</li><li>If yes, then the player wins the game.</li><li>Otherwise, terminate the game after <strong>10</strong> attempts.</li></ul>
 
 <p><strong>Examples:</strong></p>
 
 <blockquote><p><strong>N</strong> = 100<br><strong>Number chosen:</strong> 20&nbsp;</p><p><strong>Machine:</strong> Guess a number between 1 and N<br><strong>Player:</strong> 30<br><strong>Machine:</strong> Lower number please!<br><strong>Player:</strong> 15<br><strong>Machine:</strong> Higher number please!<br><strong>Player:</strong> 20<br><strong>Machine:</strong> You guessed the number in 3 attempts<br>Now, terminate the game.</p></blockquote>
 
 <div class="def-title_wrap pl-0"><div class="title large"><a href="https://www.geeksforgeeks.org/number-guessing-game-in-c/">Visit Recommended Article</a></div>
