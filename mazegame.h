//
//  mazegame.h
//  cppprog1
//
//  Created by F on 6/24/18.
//  Copyright © 2018 F. All rights reserved.
//

#ifndef mazegame_h
#define mazegame_h
#include "maze.h"

class MazeGame
{
public:
    enum Direction {North, South, East, West};
    Maze* CreateMaze();
};

#endif /* mazegame_h */
