# cookieTycoon-cpp
Cookie Tycoon Game Simulator

# Overview

Cookie Tycoon Simulator is a console-based C++ program that models a resource accumulation and upgrade-driven production system. The player generates cookies through manual actions and strategic investments in automated production units, progressively increasing output efficiency.

The objective of the simulation is to manage resources effectively, purchase production upgrades, and fulfill all defined win conditions to complete the game.

# Game Mechanics

The system tracks core production variables including:

- Cookies (primary resource)
- Click Power (cookies gained per manual click)
- Clickers (automated production units)
- Grandmas (higher-tier automated producers)

Players can manually generate cookies or invest accumulated resources into upgrades that increase long-term production rates.

# Production System

The simulation implements scalable production mechanics:

- Manual clicks generate cookies based on current click power
- Clickers automatically increase cookie output
- Grandmas provide higher-level production boosts
- Upgrade costs scale as additional units are purchased

Strategic investment decisions impact production efficiency and determine how quickly win conditions are met.

# Core Concepts Applied

- Object-Oriented Programming (OOP)
- Encapsulation of game state and production variables
- Continuous game loop with dynamic state updates
- Conditional logic for upgrade purchasing and win validation
- Input validation to handle invalid user actions
- Operator overloading for structured console output

# Class Design

The "Clicker" class maintains private member variables representing production units and total resources, and exposes controlled public methods to:

- Generate cookies manually
- Purchase production upgrades
- Track production scaling
- Check win conditions
- Display formatted game status

All game state transitions are handled through structured member functions to ensure consistent behavior throughout the simulation.

# How to Run

1. Compile the program using a C++ compiler (ex. g++, clang++)
2. Run the executable
3. Interact with the simulation via the console
4. Continue upgrading production until all win conditions are satisfied
