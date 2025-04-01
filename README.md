# 2ru-TIDES-OF-MANILA
 * This is to certify that this project is my own work, based on my personal efforts in studying
 * and applying the concepts learned. I have constructed the functions and their respective
 * algorithms and corresponding code by myself. The program was run, tested, and debugged by
 * my own efforts. I further certify that I have not copied in part or whole or otherwise
 * plagiarized the work of other students and/or persons.
---
# What is the Program about?
- It is a **CLI turn-based buy/sell game** in where there are 4 places with items that have varying prices, and the end goal is to **reach the specified profit** using the specified gold as inputted by the player wihtin the amount of allowed turns (30 turns).
- A turn only counts when the player used the **"Travel"** option in the game.
- There is a another feature in where a **random "Storm"** will occur depending on the difficulty the player has selected. *(This is not included in the main MP guidelines, but rather a bonus function for the game.)*
---

# How to Run Program?

Open cmd or pwsh
1. `gcc -Wall -std=c99 main.c gamebackend.c -o game`
2. `./game`
3. Code should be compiled and executable

# Issue with displaying the ASCII Art? Enable UTF-8 in Powershell Windows

> Check Powershell version

## Poweshell Core (7.X)
[console]::InputEncoding = [console]::OutputEncoding = New-Object System.Text.UTF8Encoding

## Windows Powershell (5.1)
$OutputEncoding = [console]::InputEncoding = [console]::OutputEncoding = New-Object System.Text.UTF8Encoding


# Why is my Program Looping?

1. Main reason it is looping is because you have inputted a character or integer that is not supposed to be placed. Since the project has restrictions regarding the allowed use of certain functions, and usage of structs/arrays; please follow the game guidelines.

2. In the event that it is looping, simply kill the terminal and run back the program.

---
*This git repo will be archived until I get the motivation to do the changes as mentioned in the ver. release notes :>*

