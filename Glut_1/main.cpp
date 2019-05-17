
/*
 * File:   main.cpp
 * Author: Administrateur
 *
 * Created on 8 décembre 2009, 19:30
 */


/*
 * penser à ajouter la lib glut32
 */

#include <stdlib.h>
#include "windows.h"
#include "C_FIGURE.h"
#include "C_SPHERE.h"
#include "C_CUBE.h"
#include "C_POISSON.h"
#include "C_LISTE_POISSON.h"

#include <GL/gl.h>
#include <GL/glu.h>
#include <glut.h>

#include <math.h>

//##############################################################################

C_POISSON* Le_Poisson;

float Delta_X = 0.0f;
float Angle_Y = 0.0f;

bool Plein_Ecran = false;

GLint La_Fenetre_Principale;
#define RESOLUTION_PLEIN_ECRAN "800x600:32@60"
//##############################################################################

void Initialisation_3D() {
    if (Plein_Ecran) {
        glutGameModeString(RESOLUTION_PLEIN_ECRAN);
        glutEnterGameMode();
    } else {
        La_Fenetre_Principale = glutCreateWindow("TRAME");
    }

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, 1024.0f / 768.0f, 1.5, 100.0);

    gluLookAt(0.0, 0.0, 20.0, // est Ã  0,0,20 (x y z)
            0.0, 0.0, 0.0, // regarde 0,0,0 (le centre)
            0.0, 1.0, 0.0); // vecteur orientation  (vers le haut)


    glShadeModel(GL_SMOOTH);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClearDepth(1.0f);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

//------------------------------------------------------------------------------

void Fin_3D() {
    if (Plein_Ecran) {
        glutLeaveGameMode();
    } else {
        glutDestroyWindow(La_Fenetre_Principale);
    }
    //delete des objets creé à faire ici 
    exit(0);
}
//#############################################################################

void Animation_Scene() {

    glutPostRedisplay();
}
//------------------------------------------------------------------------------

void Gestion_Clavier(unsigned char P_Touche, int P_X, int P_Y) {

    glutPostRedisplay();
}

//----------------------------------------------------------------------------

void Affichage_Scene() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT |
            GL_STENCIL_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    //Le_Poisson->Affiche_toi();
    Le_Poisson->Affiche_toi();
    glutSwapBuffers();
}

//==============================================================================

int main(int argc, char** argv) {

    Le_Poisson = new C_POISSON(0,0,0,1,0,0);
    Le_Poisson->Creation();
            
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    Initialisation_3D();

    glutDisplayFunc(Affichage_Scene);
    glutKeyboardFunc(Gestion_Clavier);
    glutIdleFunc(Animation_Scene);

    glutMainLoop();
    
    return (EXIT_SUCCESS);
}

//terminer aquarium et tout
//faire diagramme de classe
//faire programme en réseau
//lire le cours de cpp en entier (même les derniers chap)
//faire toute les démo
//Ce programme va être repris après les vacances, avancer au max sur ça
