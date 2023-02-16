#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Cola
{
public:
	Cola() {};

	void dibujarCola(float paso, float an, float h, float Aninicial, float ANGULO, int n, float x, float y, float z);

};

