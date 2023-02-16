#include "Cola.h"



void Cola::dibujarCola(float paso, float an, float h, float Aninicial, float ANGULO, int n, float x, float y, float z) 
{
	glPushMatrix();
	glTranslatef(x, y, z);

	//Aqui reutilizado y modificado de http://www.glprogramming.com/red/chapter03.html

	glPushMatrix();
	glTranslatef(-paso, 0.0, 0.0);
	glRotatef(Aninicial, 0.0, 0.0, 1.0);
	glTranslatef(paso, 0.0, 0.0);
	glPushMatrix();
	glScalef(an, h, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();
	for (int i = 0; i < n;i++) {
		glTranslatef(paso, 0.0, 0.0);
		glRotatef(ANGULO, 0.0, 0.0, 1.0);
		glTranslatef(paso, 0.0, 0.0);
		glPushMatrix();
		glScalef(an, h, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();
	}
	glPopMatrix();
	glPopMatrix();
}
