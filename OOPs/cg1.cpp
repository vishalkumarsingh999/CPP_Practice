#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <GL/glut.h>

float rotX = 0.0, rotY = 0.0, zTranslate = -65.0;
float fogDensity = 0.02;
int i, j = 0;
GLfloat fog_color[] = { 1.0,1.0,1.0,1.0 };
GLenum doubleBuffer;

void Key(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'd':fogDensity *= 1.10;
		glFogf(GL_FOG_DENSITY, fogDensity);
		glutPostRedisplay();
		break;
	case 'D':fogDensity /= 1.10;
		glFogf(GL_FOG_DENSITY, fogDensity);
		glutPostRedisplay();
		break;
	case 27:exit(0);
	}
}

void Myinit(void)
{
	GLfloat light_ambient[] = { 0.3, 0.3, 0.3, 1.0 };
	GLfloat light_diffuse[] = { 6.0, 6.0, 6.0, 1.0 };
	GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
	GLfloat light_position[] = { 1.0, 1.0, 0.0, 0.0 };

	glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);

	glEnable(GL_LIGHT0);
	glDepthFunc(GL_LESS);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, 1.0, 1.0, 200.0);
	glMatrixMode(GL_MODELVIEW);
}

void SpecialKey(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
		rotX -= 5;
		glutPostRedisplay();
		break;
	case GLUT_KEY_DOWN:
		rotX += 5;
		glutPostRedisplay();
		break;
	case GLUT_KEY_LEFT:
		rotY -= 5;
		glutPostRedisplay();
		break;
	case GLUT_KEY_RIGHT:
		rotY += 5;
		glutPostRedisplay();
		break;
	}
}

void main_menu(int value)
{
	switch (value)
	{
	case 1:i = 0;
		glutPostRedisplay();
		break;
	case 2:i = 1;
		glutPostRedisplay();
		break;
	case 3:i = 2;
		glutPostRedisplay();
		break;
	case 4:exit(0);
		break;
	}
}

void Draw(void)
{
	float red[] = { 1.0, 0.0, 0.0, 1.0 };
	float grey[] = { 0.8, 0.5, 1.0, 1.0 };
	float green[] = { 0.0, 0.8, 0.0, 1.0 };
	float blue[] = { 0,1,1 };

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	glTranslatef(0, 0, zTranslate);
	glRotatef(rotY, 0, 1, 0);
	glRotatef(rotX, 1, 0, 0);
	glScalef(2, 2, 2);
	if (i == 0)
	{
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, red);
		glutSolidTeapot(3);
	}
	else if (i == 1)
	{
		glScalef(5, 5, 5);
		glRotatef(90.0, 1.0, 0.0, 0.0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, grey);
		glutSolidTetrahedron();
	}
	else if (i == 2)
	{
		glScalef(2, 2, 2); glRotatef(90.0, 1.0, 0.0, 0.0);
		glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, blue);
		glutSolidDodecahedron();
	}

	glPopMatrix();
	if (doubleBuffer)
	{
		glutSwapBuffers();
	}
	else
	{
		glFlush();
	}
}

void Menu()
{
	glutCreateMenu(main_menu);
	glutAddMenuEntry("Teapot", 1);
	glutAddMenuEntry("Tetrahedron", 2);
	glutAddMenuEntry("DodecaHedron", 3);
	glutAddMenuEntry("Quit", 4);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
}


void fog()
{
	glEnable(GL_FOG);
	glFogi(GL_FOG_MODE, GL_EXP);
	glFogf(GL_FOG_DENSITY, fogDensity);
	glFogfv(GL_FOG_COLOR, fog_color);
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char** argv)
{



	GLenum type;
	glutInit(&argc, argv);

	type = GLUT_RGB | GLUT_DEPTH;
	type |= (doubleBuffer) ? GLUT_DOUBLE : GLUT_SINGLE;
	glutInitDisplayMode(type);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Fog Test");
	glFrontFace(GL_CW);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	Myinit();
	fog();
	Menu();
	glutKeyboardFunc(Key);
	glutSpecialFunc(SpecialKey);
	glutDisplayFunc(Draw);
	glutMainLoop();
	return 0;
}
