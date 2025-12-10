# 📅 DaySelector

A simple C++ console program that asks the user to enter a number between **1 and 7** and prints the corresponding day of the week. The program runs continuously and handles invalid inputs.

## 🌟 Features
- Maps numbers **1–7** to weekdays  
- Infinite loop for continuous use  
- Basic validation for invalid selections  
- Clean and beginner-friendly structure  

## 🧠 Example Output
[1-7] Enter day number: 3
Wednesday

[1-7] Enter day number: 9
Invalid selection please enter number 1-7

## ⚙️ How to Run
1. Clone or download this project:  
   `git clone https://github.com/wdemirkoll/SimpleDaySelector.git`
2. Open a terminal in the project directory.  
3. Compile the program:  
   `g++ main.cpp -o simpledayselector`
4. Run it:  
   `./simpledayselector`

## 🧩 Code Overview

### 🌀 Infinite Loop
The program uses a `while(true)` loop to continuously ask for a day number.

### 🔢 Switch Statement
A `switch` statement maps values **1–7** to weekdays:
- `1 → Monday`  
- `2 → Tuesday`  
- `3 → Wednesday`  
- `4 → Thursday`  
- `5 → Friday`  
- `6 → Saturday`  
- `7 → Sunday`  

### ❗ Input Validation
If the user enters a number outside 1–7, the program prints:

## 🧑‍💻 Author
**wdemirkoll**  
[@wdemirkoll](https://github.com/wdemirkoll)  
Created: December 2025  

⭐ If you like this project, consider giving it a star!

