# Cam's Chess Project

## Note to the Reader
I am aware I am reinventing the wheel in several different ways. Thousands of chess frameworks and libraries exist. It would naturally have been easier to repurpose one of those than to write my game from scratch. I have chosen to implement many facets of this project for just good practice. That being said, I have tried to follow SOLID principles, good documentation practices, and write optimized code. If you see mistakes in this regard, please point them out! The goal here is learning through a game that I enjoy, and I would take corrections to my programming as constructive criticism, not and insult. Be Well, and I hope you have a chane to interact with my site when it's up and live!!

## Overview

In this project I am hoping to gain familiarity with the C++ programming language, web development basics, and explore machine learning frameworks in both C++ and Python. I intend to structure this project in the following manner

### Chess Board API

I am going to write an API representing the model for a game of chess. Implementation will be in C++. There will be five method endpoints.   
First will be a void createGame(). This will initialize a new game of chess.   
Next will be makeMove(Coordinate from, Coordinate to). This method will also be void, and will handle player turn updates only in the case of a valid move.
Next will be resign(Player). As a chess purist (or hardass, depending on who you ask), I do not believe in offered draws. Play the d**n game folks!   
Next, the method  GameState queryGameState() will exist, with outcomes "Draw", "WhiteWins", "BlackWins", and "Active"  
Finally, for the support of different AI algorithms, an "Evaluation" of the board will have to exist. While for some python frameworks I may choose to independently track the board, using existing chess libraries


### AI options
I plan to implement several different AI options as opponents for my chess website. Some will be using exisiting python frameworks,
other existing C++ frameworks, and at least one I hope to implement entirely from scratch


### Web Design
I have zero web dev experience, and no idea where to start. Feel free to follow along on this journey with me! OASIS at northeastern provides some awesome beginner materials :)
