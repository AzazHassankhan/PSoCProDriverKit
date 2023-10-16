# 🎮 Reaction Game: Test Your Reflexes! 🎮

This repository houses an intriguing reaction game designed to test your reflexes and timing skills. It operates discreetly and is a testament to our software expertise.

### 🌟 Key Features 🌟

State-of-the-Art Control: The game employs a sophisticated state machine to manage the game's different states.  

**Real-Time Challenge:** Players must react within a certain time limit when the game prompts them.  

**Random Challenge:** The game introduces an element of randomness to keep you on your toes. Can you react in time?  

**Visual Feedback:** LEDs and a seven-segment display provide instant feedback on your performance.  

**UART Interaction:** The game communicates with you through UART, allowing you to track your reactions and correctness.  

**Flexible Loop:** The game is designed for multiple rounds, and your performance is assessed based on correct reactions.  

### 🎯 How to Play 🎯

Initiate the game, and it will enter the "Game_Wait" state.
If the game prompts you with a visual challenge, react by pressing the designated button.
If your reaction is correct, you'll see a green LED and get feedback through UART.
An incorrect reaction results in a red LED and feedback via UART.
Your overall performance is assessed based on multiple rounds.
The game ends after ten rounds.

### 🚀 State Machine Magic 🚀

The game relies on a sophisticated state machine to manage different states: "Game_Wait," "Game_Press_button," "Game_Time_out," and "Game_exit." This state machine ensures that the game operates smoothly, reacts to your input, and provides accurate feedback.

### ⚙️ Initializing the Game ⚙️

To begin playing, follow these steps:  

Initialize the game.  
Ensure UART communication is set up. 
Set up the interrupt service routine for button presses.  
Initialize the random number generator.  
Prepare the game object for state management.  
Now you're ready to test your reflexes and aim for a perfect score!  

### 🔧 Contributions Welcome 🔧

While this repository is private and confidential, we believe in the power of collaboration. If you have suggestions or improvements, please feel free to share them within our team.

### 📚 License and Copyright 📚

This repository contains proprietary and copyrighted software. Any unauthorized use or distribution is strictly prohibited.

**Are you ready for the challenge? Dive into the code and test your reaction time. Let the games begin!** 🚀🕹️
