# Hackathon-2-G23

# Description of your game
The game Save the Princess was created using the C++ programming language. We implemented a word search in this game. Basically, this game is about rescuing a princess. To save the princess, you must navigate through three kingdoms which are the Kingdom of Food, the Kingdom of Country, and the Kingdom of Celebrations. The word search is carefully design to each kingdom's theme, drawing players into an immersive experience. For example, in Food Kingdom, players may encounter word searches containing food-related words such as "apples", "pizza", and "rice". In each kingdom there are 5-word search and must search for a word in each word search. Upon reaching the first kingdom, the Food Kingdom, a 10x10 grid of letters will appear and the player must find the hidden words. This process is repeated for each kingdom. The player has two options. They can guess the word directly or get a hint first and then guess the word. When the players guessed the word correctly, they will obtain scores. The player must obtain a minimum of 25 points by correctly guessing the words in the word searches in order to win the game and save the princess.

# Features of your game
There are many features contain in the game that we created:

1. Word Puzzle Generation: For each category, a word puzzle grid is generated with random letters. The correct word related to the category is hidden within the grid. The word can be placed horizontally or vertically.

2. Guessing and Hint System: The player can enter their guess for the hidden word in the puzzle. Additionally, the player has the option to request a hint before making a guess. The hint provides information about the size of the hidden word.

3. Word Validation: After the player makes a guess, the game checks if the guessed word matches the hidden word. If the guess is correct, a congratulatory message is displayed, and the player earns 2 points. Otherwise, an incorrect message is shown, and the correct word is revealed.

4. Scoring: The game keeps track of the player's score. Each correct guess earns the player 2 points. The score is incremented for each correctly guessed word.

5. Multiple Rounds: The game consists of multiple rounds. In each round, a word puzzle from a different category is presented to the player. The player can play as many rounds as they want by choosing to continue the game.

6. Data Structure: The game utilizes linked lists to store and manage words for each category. Each category (Food, Country, Celebration) has its own linked list to store the words.

7. User Interaction: The game prompts the user for input using the `cin` statement and displays information using the `cout` statement. The player can start a new game by entering 'y' or 'Y' and exit the game by entering any other character.

Overall, the game provides an interactive and challenging word puzzle experience, allowing the player to test their knowledge of food, countries, and celebrations while earning points for correct guesses.

# How to play your game.

1. Start the game by running the program.
   
2. The program will display a prompt asking if you want to start the game. Enter "Y" or "y" and press Enter to indicate that you want to play.

3. The game will begin with the Kingdom of Food. A 10x10 grid of letters will appear on the screen, representing the word search for this kingdom.

4. Your task is to find specific words hidden within the word search grid. The words will be related to food. For example, you may find words like "apples," "pizza," and "rice."

5. The puzzle grid is presented and you will have options to choose between two actions:
Enter 1: Guess the word directly. Enter the word you think is hidden within the grid and press Enter.
Enter 2: Get a hint first. The game will provide a hint by providing information about the size of the hidden word.

7. If you guess the word correctly, a congratulatory message is displayed, and the you can earn 2 points. Otherwise, an incorrect message is shown, and the correct word is revealed. You can gain maximum 10 points for each kingdom.

8. Repeat steps 3-7 for a total of five word searches in the Kingdom of Food. 

9. Once you guessed all five words in the Kingdom of Food, no matter your guesses are correct or not, you will automatically proceed to the next kingdom, which is the Kingdom of Country.

10. The gameplay in the Kingdom of Country is similar to the previous kingdom. A new 10x10 grid of letters will appear on the screen, and you need to find five words related to the country theme.

11. Repeat steps 3-7 for a total of five word searches in the Kingdom of Country. Guess all five words to advance to the final kingdom which will be the Kingdom of Celebration.

12. After completing the Kingdom of Country, you will move on to the Kingdom of Celebrations.

13. The Kingdom of Celebrations will present you with another set of five word searches, this time with a celebration theme. Again, try to find and guess the words.

14. Repeat steps 3-7 once again for all the word searches in the Kingdom of Celebrations.

15. Once you have guessed all five words in the Kingdom of Celebrations, your total marks will be revealed.

Remember, in order to save the princess, you must obtain 25 or more than 25 marks. You are considered failed to save the princess if your total marks end up being less than 25.

# How object-oriented concepts were used to develop your game
Each of the kingdom was developed using classes, which is an object-oriented concept.Here's a breakdown of how these concepts were used:

Encapsulation: Within the boundaries of its scope, each class encapsulates its own data and behaviour. In order to protect data integrity and abstraction, the private member variables (ListNode* head) are shielded from external access. Access to the data can be regulated using public member functions.

Abstraction: Each class abstracts a particular aspect or idea associated to the game, such as celebrations, food, or countries. The user only interacts with the public interfaces that the classes' public interfaces give, therefore they are concealed from them.











# How linked lists/stacks/queues play a role in your game.

# Link to game demo video & Screenshots of game

