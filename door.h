//
//  door.h
//  cppprog1
//
//  Created by F on 6/24/18.
//  Copyright © 2018 F. All rights reserved.
//

#ifndef door_h
#define door_h
class Door : public MapSite
{
public:
    Door(Room* = 0, Room* = 0);
    
    virtual void Enter();
    Room* OtherSideFrom(Room*);
private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};

#endif /* door_h */
