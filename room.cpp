//
//  room.cpp
//  cppprog1
//
//  Created by F on 6/24/18.
//  Copyright © 2018 F. All rights reserved.
//

#include <stdio.h>
#include "room.h"

Room::Room(int roomNo)
{
    _roomNumber = roomNo;
}

void Room::SetSide( MazeGame::Direction dir,  MapSite* mapsite)
{
    
}

MapSite* Room::GetSide(MazeGame::Direction dir) const
{
    
    return _sides[dir];
}
void Room::Enter()
{
    
}
