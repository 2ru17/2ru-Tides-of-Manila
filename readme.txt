/**
 * This is to certify that this project is my own work, based on my personal efforts in studying
 * and applying the concepts learned. I have constructed the functions and their respective
 * algorithms and corresponding code by myself. The program was run, tested, and debugged by
 * my own efforts. I further certify that I have not copied in part or whole or otherwise
 * plagiarized the work of other students and/or persons.
 *
 *                                   <Neil Jr. L. Gutang> <#12410225>
 */


# How to Run Program?

Open cmd or pwsh
1. `gcc -Wall -std=c99 main.c gamebackend.c`
2. `./a.exe`
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

# I have found bugs or logical errors in the code.

1. Contact me:
neil_gutang_jr@dlsu.edu.ph (Email)
kougetsu_shima (Discord)
shinobinomono_17 (Telegram)

Thank you for using my program :3
