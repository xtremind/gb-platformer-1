// author: chris-scientist
// created at: 29/01/2019
// updated at: 02/02/2019

#ifndef PLATFORMER_DISPLAY
#define PLATFORMER_DISPLAY

#include <Gamebuino-Meta.h>

#include "Constantes.h"
#include "Character.h"
#include "Platform.h"
#include "Object.h"

void paintHomeScreen();
void paint(Character &aCharacter, Platform * aSet, Object * aSetOfObjects);
void paintBackground();
void paintHero(Character &aCharacter);
void paintPlatforms(Platform * aSet);
void paintPlatform(Platform aPlatform);
void paintPlatform(const int anIndex, const int aNbBlocks, const int aX, const int aY);
void paintHill(const int anIndex, const int aNbBlocks, const int aX, const int aY);
void paintGround(const int aX, const int aY);
void paintObjects(Object * aSet);
void paintObject(Object anObject);
void paintKey(const int aX, const int aY, const int aState);
void paintDoor(const int aX, const int aY, const int aState);

#endif
