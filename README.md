# Hackathon-2-G23

# Description of your game
The game Save the Princess was created using the C++ programming language. We implemented a word search in this game. Basically, this game is about rescuing a princess. To save the princess, you must navigate through three kingdoms which are the Kingdom of Food, the Kingdom of Country, and the Kingdom of Celebrations. The word search is carefully design to each kingdom's theme, drawing players into an immersive experience. For example, in Food Kingdom, players may encounter word searches containing food-related words such as "apple", "pizza", and "rice". In each kingdom there are 5-word search and must search for the correct word in each word search. Upon reaching the first kingdom, the Food Kingdom, a 10x10 grid of letters will appear and the player must find the hidden words. This process is repeated for each kingdom. The player has two options. They can guess the word directly or get a hint first and then guess the word. When the players guessed the word correctly, they will obtain scores. The player must obtain a minimum of 25 points by correctly guessing the words in the word searches in order to win the game and save the princess.

# Features of your game
There are many features contain in the game that we created:

1. Word Puzzle Generation: For each category, a word puzzle grid is generated with random letters. The correct word related to the category is hidden within the grid. The word can be placed horizontally or vertically.

2. Guessing and Hint System: The player can enter their guess for the hidden word in the puzzle. Additionally, the player has the option to request a hint before making a guess. The hint provides information about the size of the hidden word.

3. Word Validation: After the player makes a guess, the game checks if the guessed word matches the hidden word. If the guess is correct, a congratulatory message is displayed, and the player earns 2 points. Otherwise, an incorrect message is shown, and the correct word is revealed.

4. Scoring: The game keeps track of the player's score. Each correct guess earns the player 2 points. The score is incremented for each correctly guessed word.

5. Multiple Rounds: The game consists of multiple rounds. In each round, a word puzzle from a different category is presented to the player. The player can play as many rounds as they want by choosing to continue the game.

6. Data Structure: The game utilizes linked lists to store and manage words for each category. Each category (Food, Country, Celebration) has its own linked list to store the words.

7. User Interaction: The game prompts the user for input using the `cin` statement and displays information using the `cout` statement. The player can start a new game by entering 'n' or 'N' or resume the game by entering 'r' or 'R'.

8. Progress Saving: The player has the option to stop and save the progress of the game. When the player chooses to stop the game, their name, category, and score are saved to a text file ("text.txt") for future resuming.

9. Win or Lose: After completing all the category games, the player's total score is displayed. If the player's score is 25 or higher, a message indicating that the player won the game is shown. Otherwise, a message indicating that the player lost the game is displayed.

Overall, the game provides an interactive and challenging word puzzle experience, allowing the player to test their knowledge of food, countries, and celebrations while earning points for correct guesses.

# How to play your game.

1. Start the game by running the program.
   
2. The program will display a prompt asking your name. Then you can choose you want to start a new game or resume the game.

3. First will be the kingdom of Food. A 10x10 grid of letters will appear on the screen, representing the word search for this kingdom.

5. Your task is to find specific words hidden within the word search grid. The words will be related to food. For example, you may find words like "apples," "pizza," and "rice."

6. The puzzle grid is presented and you will have options to choose between two actions:
Enter 1: Guess the word directly. Enter the word you think is hidden within the grid and press Enter.
Enter 2: Get a hint first. The game will provide a hint by providing information about the size of the hidden word.

7. If you guess the word correctly, a congratulatory message is displayed, and the you can earn 2 points. Otherwise, an incorrect message is shown, and the correct word is revealed. No points are given. You can gain maximum 10 points for each kingdom.

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

1)Encapsulation: Within the boundaries of its scope, each class encapsulates its own data and behaviour. In order to protect data integrity and abstraction, the private member variables (ListNode* head) are shielded from external access. Access to the data can be regulated using public member functions.

2)Abstraction: Each class abstracts a particular aspect or idea associated to the game, such as celebrations, food, countries and chapter. The user only interacts with the public interfaces that the classes' public interfaces give, therefore they are concealed from them.

3)Constructor: The head pointer is initialised and set to nullptr in each class' constructor **(CelebrationList, FoodList, CountryList)**. When an object is formed, constructors are used to guarantee that it is properly initialised.

4)Member Functions: Each class has member functions for carrying out different game-related tasks. These features consist of class-specific appendNode, searchNode, and game functions. Data manipulation and action on class objects are both done via member functions.

These object-oriented concepts provide a structured and modular approach to develop the game, allowing for code organization, reusability, and maintainability.

# How linked lists/stacks/queues play a role in your game.
We used linked lists to develop our game.Linked list was used in **"CelebrationList", "FoodList",and "CountryList"** classes.The linked list is utilized in the following ways:

1)Appending Nodes: A new celebration,food and country is added to the linked list using the appendNode function. The celebration name is added respectively to the **CelebrationName**,**foodName** and **CountryName** member of the newly created node, which is then appended to the end of the list.

2)Searching Nodes: The linked list of celebration,food and country may be searched for using the **searchNode** function.For instance,it moves through the list, checking the input guess against each node's storage of the names of the celebrations. It returns true if a match is discovered; otherwise, it returns false.

3)Game Implementation: The **celebrationGame**,**foodGame** and **countryGame** function implements a game using a linked list.To illustrate,it produces the 10x10 character array **arr_celebration**, which is randomly composed of lowercase letters. The names of the celebrations are then concealed inside this array. The player must determine the celebration's name after being presented with the array as a riddle by the function.The names of the celebrations (a_celebration) are kept distinct and utilised for comparisons.Users can enter information to try to guess the name of the holiday or ask for a tip.The predicted word is checked to see whether it matches any of the holiday names in the linked list using the **searchNode** function.Same thing will happen within the other 2 classes.The score of the player is adjusted accordingly.

Overall, the linked list is utilized to store and oversee the list of celebrations,food and country.
# Screenshots of game
<img width="948" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/b7221a4f-f662-44a6-96a0-c32cf36519f2">
<img width="947" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/0c0ef31f-0fc1-4d61-b03f-28c70485b6ce">
<img width="948" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/2bd31f37-95c8-4203-81b1-bf384e67a874">
<img width="947" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/949cd993-b6af-443b-b828-0a137151d8ec">
<img width="949" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/a367267c-85f5-4819-9559-26d066eb8fed">
<img width="949" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/a67033e5-467f-4dfd-bfc8-12d2ee2ceebf">
<img width="949" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/4126154f-b979-4e7a-ab75-bbcacf5126b7">
<img width="948" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/3cdd36f8-1f1d-490c-b209-d1bf74cba509">
<img width="947" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/9146a6a9-1574-4f9a-82b7-c8fb41c69b2f">
<img width="948" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/1083cc8f-8f60-41f0-8fa6-6548e3235d3f">
<img width="949" alt="image" src="https://github.com/Dershyani/Hackathon-2-G23/assets/121543711/c16cedc9-0f98-49eb-9fe2-19cb42bf7402">

When we run our program, it starts with a storyline. The main focus of our game is to save the princess as a warrior. After you read the storyline you can click any key to continue. Then, it will ask for your name. If you want to play a new game, you have to enter ‘n’. If you want to resume a game that you played earlier you have to enter ‘r’. If you enter ‘r’,  it will ask for the category(food,country,celebration) to choose from and you have to choose the category that you left from. In these screenshots, as you can see we enter ‘n’ indicating we want to play a new game. Then, it will continue with the storyline and start with the Food Kingdom. 

Each of the Kingdom consists of five word searches, where a word that is related to the category will be hidden in it. The size of the word search will be 10 by 10. You can press 1 and enter your guess if you straight away want to answer. If you are stuck on it, you can always use a hint by pressing 2. The hint will show the size of the letter. For example, if the hidden word is ‘apple’, the hint will reveal the number of letters consist in the word ‘apple’ which is 5. After you are done with the Food Kingdom, it will ask whether you want to stop the game or not. If you want to continue playing this game, you can enter ‘n’. But don’t worry,  your progress will be saved and you can always continue this game from where you left out. In this case, we enter ‘y’ so it proceeds to the next kingdom which is the Kingdom Of Country. 

Same as before, you have to guess 5 word searches in order to enter the next kingdom. For each correct guess, a congratulation message is displayed and 2 marks will be gained. If you failed to answer the word search correctly, then an incorrect message will be displayed and the correct answer will be revealed. After you guess all 5 word searches in the Country Kingdom, again it will ask whether you want to stop the game or not. In this case, we press ‘n’ so it proceeds to the last Kingdom which is the Kingdom Of Celebration. When you complete all the 5 word searches in this last kingdom, your total marks will be revealed. If your total mark is 25 or more than 25, congratulations you win this game by successfully saving the princess. The winning text will be displayed. However, if your total mark is less than 25, you will lose this game and you will not be able to save the princess. A different message will be displayed indicating that you lose this game.













# Link to game demo video 
https://youtu.be/sdNct1kQyKg
