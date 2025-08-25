# 🎮 Programming Assignment  

## Question:  
Write a C program to create an interactive game of *Rock, Paper, Scissors, Lizard, Spock* using *functions, loops, and conditionals (if/else or switch)* without using arrays.  

---

## Objective:  
- Practice *functions* to separate logic (menu, rules, winner check).  
- Practice *loops* to handle multiple rounds and replay option.  
- Use *conditionals* to check the winner.  
- Apply *random number generation* for computer moves.  
- Strengthen problem-solving skills with game logic.  

---

## Rules of the Game:  
1. The game starts with a *menu*:  
   - 1 → Play Game  
   - 2 → Show Rules  
   - 3 → Exit  

2. Player chooses a number between *1–5*:  
   - 1 → Rock  
   - 2 → Paper  
   - 3 → Scissors  
   - 4 → Lizard  
   - 5 → Spock  

3. *Winning Rules:*  
   - Rock crushes Scissors & Lizard  
   - Paper covers Rock & disproves Spock  
   - Scissors cut Paper & decapitate Lizard  
   - Lizard poisons Spock & eats Paper  
   - Spock smashes Scissors & vaporizes Rock  

4. The match is played for *5 rounds (Best of 5)*.  
   - Track *Player Wins, Computer Wins, and Draws*.  
   - After 5 rounds, display the *Final Winner*.  

---

## Sample Input / Output  

### Case 1: Showing Rules  

=== ROCK PAPER SCISSORS LIZARD SPOCK ===
1. Play Game
2. Rules
3. Exit
Enter choice: 2

RULES OF THE GAME:
1 = Rock, 2 = Paper, 3 = Scissors, 4 = Lizard, 5 = Spock
- Rock crushes Scissors & Lizard
- Paper covers Rock & disproves Spock
- Scissors cut Paper & decapitate Lizard
- Lizard poisons Spock & eats Paper
- Spock smashes Scissors & vaporizes Rock


---

### Case 2: Playing the Game  

=== ROCK PAPER SCISSORS LIZARD SPOCK ===
1. Play Game
2. Rules
3. Exit
Enter choice: 1

Round 1:
Enter your choice (1=Rock, 2=Paper, 3=Scissors, 4=Lizard, 5=Spock): 2
Computer chose: 5
Paper disproves Spock → You Win!
Score: Player=1, Computer=0, Draw=0

Round 2:
Enter your choice: 1
Computer chose: 3
Rock crushes Scissors → You Win!
Score: Player=2, Computer=0, Draw=0

Round 3:
Enter your choice: 4
Computer chose: 2
Lizard eats Paper → You Win!
Score: Player=3, Computer=0, Draw=0

Final Result after 5 rounds:
Player = 3 | Computer = 0 | Draw = 0
🎉 Congratulations! You Won the Match!


---

### Case 3: Exit Option  

=== ROCK PAPER SCISSORS LIZARD SPOCK ===
1. Play Game
2. Rules
3. Exit
Enter choice: 3

Exiting the game... Goodbye!
