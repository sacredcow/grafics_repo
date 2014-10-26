//Enforces to compile only once
#pragma once

//Standard libraries includes
#include <map>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <cstdlib>
// Uncomment the corresponding include:
// For Windows:
#include <gl/glut.h>
// For Mac OS:
//#include <GLUT/glut.h>

//Add every new class in the project, in alphabetical order
class Scene;
class SceneObject;
class Teapot;
class Vec;

#define ESC 27

#define RFACTOR 1000
#define rval(min,max) min+(max-min)*(rand() % RFACTOR)/RFACTOR
#define DELTA_TRAN 0.2
#define DELTA_ROT 3.0



