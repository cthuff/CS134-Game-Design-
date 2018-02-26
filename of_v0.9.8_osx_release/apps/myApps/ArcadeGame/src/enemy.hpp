//
//  enemy.hpp
//  ArcadeGame
//
//  Created by Craig on 2/21/18.
//

#pragma once

#include <stdio.h>
#include "ofMain.h"
#include "baseObject.h"

class Enemy : public BaseObject {
    
public:
    Enemy();
    void draw();
    float speed;    // in screenspace coordinates per second  (pixels)
    ofImage image;
};