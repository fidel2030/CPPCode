//
//  mazegame.cpp
//  cppprog1
//
//  Created by F on 6/24/18.
//  Copyright © 2018 F. All rights reserved.
//

#include <stdio.h>
#include "maze.h"
#include "mazegame.h"
#include "room.h"
#include "door.h"
#include "wall.h"

Maze* MazeGame::CreateMaze()
{
    Maze* aMaze = new Maze;
    Room* r1 = new Room(1);
    Room* r2 = new Room(2);
    Door* theDoor = new Door(r1, r2);
    
    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);
    
    r1->SetSide(North, new Wall);
    
    return aMaze;
}
