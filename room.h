//
//  room.h
//  cppprog1
//
//  Created by F on 6/24/18.
//  Copyright © 2018 F. All rights reserved.
//

#ifndef room_h
#define room_h
#include "mapsite.h"
#include "mazegame.h"
class Room : public MapSite
{
public:
    
    //constructor
    Room(int roomNo);
    
    MapSite* GetSide(MazeGame::Direction) const;
    void SetSide(MazeGame::Direction, MapSite* );
    
    virtual void Enter();
    
private:
    MapSite* _sides[4];
    int _roomNumber;
    
};

#endif /* room_h */
