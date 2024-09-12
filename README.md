# Dinner Dash Project Using C++
For educational purpose <br>
Team:
- Muhammad Yaser Syafa Al-Machdi (5223600080)
- Adhitya Wira Wardhana (5223600078)

- Awe
# Change Log for Feature Development Branch

## Overview
This branch contains the implementation of customer emotion management for the Diner Dash-style game, along with various refactorings and bug fixes. The focus is to adhere to the Single Responsibility Principle (SRP) and ensure clean and modular code.

## Key Changes

### 1. Customer Emotion Timer
- Implemented a timer mechanism that decreases the customer’s emotion level every second until it reaches the minimum level.
- The emotion is represented as an integer, starting at 5 and decrementing until 1.
- Added a `startEmotionTimer()` method that utilizes `std::thread` and `std::chrono` to manage the timing of emotion changes.

### 2. Functionality Fixes
- Fixed a bug in the `decrementEmotion()` method where `updateEmotionDisplay()` was not being properly called. It is now correctly invoked to display the customer's current emotion level.

### 3. Refactoring
- Simplified the customer class by ensuring that each method is responsible for a single task. 
- Made sure to follow best practices in object-oriented programming by keeping the responsibilities separated between methods.

### 4. Thread Usage
- Used `std::thread` to handle the emotion timer, allowing emotion changes to occur asynchronously while the game continues to run.

