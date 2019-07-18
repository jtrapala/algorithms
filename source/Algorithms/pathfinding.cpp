#include "pathfinding.hpp"


/** solve_maze(int** maze, int n)
 * Recursively decides whether the maze is solvable from the given position
 * using backtracking.
 * A maze is solvable if position (n - 1, n - 1)  may be reached from the
 * given position by only moving downward and to the right, but not both at
 * once (i.e. not diagonally). A position in the maze is valid to move to
 * only if it contains a 1.
 */
bool solve_maze(int** maze, int n, int position[2]){
    int x = position[0], y = position[1];

    if((x == n-1) && (y == n-1) && (maze[x][y] == 1)) return true; 
    else if((x > n-1) || (y > n-1) || (maze[x][y] == 0)){
        return false;
    }
    else if(maze[x][y]==1){
        //Down (1,0)
        int down[] = {x+1, y};
        //Right
        int rgt[] = {x, y+1};
        
        maze[x][y] = 0;

        return (solve_maze(maze, n, down) || solve_maze(maze, n, rgt));
    } 
    else return false;
}


/** solve_maze(int** maze, int n)
 * Decides whether the maze is solvable from position (0, 0) by making a call
 * to the recursive function by the same name.
 */
bool solve_maze(int** maze, int n){
    int st[] = {0, 0};
    return solve_maze(maze, n, st);
}
