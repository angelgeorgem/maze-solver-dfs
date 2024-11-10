# maze-solver-dfs
# Maze Solver using Depth-First Search (DFS)

This project is a **Maze Solver** that uses the **Depth-First Search (DFS)** algorithm to find a path through a maze from a starting point to a goal point. The maze is represented by a 2D array where `0` indicates an open path, and `1` indicates a blocked cell. The goal of the project is to demonstrate how DFS can be applied to solve such maze problems.

## Features

- Implements the **Depth-First Search (DFS)** algorithm to find a path from the start point to the goal in a maze.
- Uses a **stack** to simulate the DFS traversal.
- Marks **visited cells** to avoid revisiting and getting stuck in loops.
- Prints the path from the start to the goal if a valid path exists.
- If no path is found, the program prints `No path found`.

## Problem Description

Given a maze represented by a 2D array:
- `0` denotes a free space or open path.
- `1` denotes a blocked cell.

The goal is to find a path from the start position (usually the top-left corner `(0, 0)`) to the goal position (usually the bottom-right corner `(ROWS-1, COLS-1)`). The program uses **Depth-First Search (DFS)** to explore possible paths.


