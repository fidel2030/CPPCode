//
//  door.cpp
//  cppprog1
//
//  Created by F on 6/24/18.
//  Copyright © 2018 F. All rights reserved.
//

#include <stdio.h>
#include "room.h"
#include "door.h"

Door::Door(Room* r1, Room* r2)
{
    _room1 = r1;
    _room2 = r2;
}

void Door::Enter()
{
    
}
