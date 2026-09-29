# ArenaCombat

ArenaCombat is a small C++ console combat project built to strengthen my understanding of object-oriented programming, C++ project structure, and Git/GitHub workflow.

The project began as a procedural combat loop and has gradually been refactored into an object-oriented design using classes, encapsulation, inheritance, virtual functions, and function overriding.

## Features

- Turn-based console combat
- Attack, defend, and heal actions
- Input validation
- Health and damage tracking
- Defending reduces incoming damage
- Healing is capped at maximum health
- Fighter base class for shared combat behaviour
- Soldier and Knight derived fighter classes
- Virtual attack behaviour with derived class overrides

## Current Fighter Types

### Fighter

The base class contains shared combat functionality including:

- Health
- Damage
- Attacking
- Defending
- Healing
- Death checking
- Stat display

### Soldier

`Soldier` inherits from `Fighter` and overrides the base attack behaviour.

Its current attack performs two standard attacks against the target.

### Knight

`Knight` also inherits from `Fighter` and currently provides its own attack override while retaining the standard Fighter attack behaviour.

## C++ Concepts Used

This project currently demonstrates:

- Classes and objects
- Constructors
- Encapsulation
- Private and public access
- References
- Header and source file separation
- Inheritance
- Virtual functions
- Function overriding
- Virtual functions and polymorphic design
- `const` member functions

## Project Structure

```text
ArenaCombat/
│
├── ArenaCombat.cpp
├── Fighter.h
├── Fighter.cpp
├── Soldier.h
├── Soldier.cpp
├── Knight.h
├── Knight.cpp
└── README.md
```

## Running the Project

1. Clone the repository.
2. Open the project solution in Visual Studio.
3. Build the solution.
4. Run the project.

The game runs in the console and presents the player with combat actions each round.

## Controls

```text
1 - Attack
2 - Defend
3 - Heal
```

## Project Status

ArenaCombat is an ongoing learning and portfolio project.

The current focus has been building a clean object-oriented combat foundation. Future development may expand the fighter system, combat mechanics, and C++ architecture as the project grows.
