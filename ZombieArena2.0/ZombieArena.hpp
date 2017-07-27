//
//  ZombieArena.hpp
//  ZombieArena2.0
//
//  Created by Albert Alma on 18/06/2017.
//  Copyright © 2017 Albert Alma. All rights reserved.
//

#ifndef ZombieArena_hpp
#define ZombieArena_hpp

#pragma once
#include "Zombie.hpp"

using namespace sf;

int createBackground(VertexArray& rVA, IntRect arena);
Zombie* createHorde(int numZombies, IntRect arena);

#endif
