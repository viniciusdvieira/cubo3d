#include <GL/glut.h>

// �ngulos de rota��o da c�mera
GLfloat angleX = 00.0f;
GLfloat angleY = 00.0f;
GLfloat angleZ = 40.0f;
// Fun��o para desenhar o cubo


//coluna da camera
void drawCube()
{

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);	
	glVertex3f(1.0, 3.0, 1.0);
	glVertex3f(-1.0, 3.0, 1.0);
	glVertex3f(-1.0, -3.0, 1.0);
	glVertex3f(1.0, -3.0, 1.0);
	glEnd();
	
	
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(1.0, 3.0, -1.0);
	glVertex3f(1.0, -3.0, -1.0);
	glVertex3f(-1.0, -3.0, -1.0);
	glVertex3f(-1.0, 3.0, -1.0);
	glEnd();
	
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 
	glVertex3f(-1.0, 3.0, 1.0);
	glVertex3f(-1.0, 3.0, -1.0);
	glVertex3f(-1.0, -3.0, -1.0);
	glVertex3f(-1.0, -3.0, 1.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);	
	glVertex3f(1.0, 3.0, 1.0);
	glVertex3f(1.0, -3.0, 1.0);
	glVertex3f(1.0, -3.0, -1.0);
	glVertex3f(1.0, 3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(-1.0, 3.0, -1.0);
	glVertex3f(-1.0, 3.0, 1.0);
	glVertex3f(1.0, 3.0, 1.0);
	glVertex3f(1.0, 3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glEnd();
	
}


//coluna direta camera
void drawCube2()
{

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(5.0, 3.0, 1.0);
	glVertex3f(3.0, 3.0, 1.0);
	glVertex3f(3.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, 1.0);
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(5.0, 3.0, -1.0);
	glVertex3f(5.0, -3.0, -1.0);
	glVertex3f(3.0, -3.0, -1.0);
	glVertex3f(3.0, 3.0, -1.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 
	glVertex3f(3.0, 3.0, -1.0);
	glVertex3f(3.0, 3.0, 1.0);
	glVertex3f(3.0, -3.0, 1.0);
	glVertex3f(3.0, -3.0, -1.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);	
	glVertex3f(5.0, 3.0, -1.0);
	glVertex3f(5.0, 3.0, 1.0);
	glVertex3f(5.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(3.0, 3.0, -1.0);
	glVertex3f(3.0, 3.0, 1.0);
	glVertex3f(5.0, 3.0, 1.0);
	glVertex3f(5.0, 3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(3.0, -3.0, -1.0);
	glVertex3f(3.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, -1.0);
	glEnd();
}
//coluna frente
void drawCube3()
{
	//face inferior
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(1.0, 3.0, 5.0);
	glVertex3f(-1.0, 3.0, 5.0);
	glVertex3f(-1.0, -3.0, 5.0);
	glVertex3f(1.0, -3.0, 5.0);
	glEnd();
	
	//face superior
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(1.0, 3.0, 3.0);
	glVertex3f(1.0, -3.0, 3.0);
	glVertex3f(-1.0, -3.0, 3.0);
	glVertex3f(-1.0, 3.0, 3.0);
	glEnd();
	
	//face esquerda
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 
	glVertex3f(-1.0, 3.0, 5.0);
	glVertex3f(-1.0, 3.0, 3.0);
	glVertex3f(-1.0, -3.0, 3.0);
	glVertex3f(-1.0, -3.0, 5.0);
	glEnd();
	
	//face direita
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(1.0, 3.0, 5.0);
	glVertex3f(1.0, -3.0, 5.0);
	glVertex3f(1.0, -3.0, 3.0);
	glVertex3f(1.0, 3.0, 3.0);
	glEnd();
	
	//face de cima
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(-1.0, 3.0, 3.0);
	glVertex3f(-1.0, 3.0, 5.0);
	glVertex3f(1.0, 3.0, 5.0);
	glVertex3f(1.0, 3.0, 3.0);
	glEnd();
	
	//fds
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(-1.0, -3.0, 3.0);
	glVertex3f(1.0, -3.0, 3.0);
	glVertex3f(1.0, -3.0, 5.0);
	glVertex3f(-1.0, -3.0, 5.0);
	glEnd();
}


//coluna direita frente
void drawCube4()
{

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(3.0, -3.0, 5.0);
	glVertex3f(5.0, -3.0, 5.0);
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(5.0, 3.0, 3.0);
	glVertex3f(5.0, -3.0, 3.0);
	glVertex3f(3.0, -3.0, 3.0);
	glVertex3f(3.0, 3.0, 3.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(3.0, 3.0, 3.0);
	glVertex3f(3.0, -3.0, 3.0);
	glVertex3f(3.0, -3.0, 5.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(5.0, -3.0, 5.0);
	glVertex3f(5.0, -3.0, 3.0);
	glVertex3f(5.0, 3.0, 3.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(3.0, 3.0, 3.0);
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(5.0, 3.0, 3.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(3.0, -3.0, 3.0);
	glVertex3f(5.0, -3.0, 3.0);
	glVertex3f(5.0, -3.0, 5.0);
	glVertex3f(3.0, -3.0, 5.0);
	glEnd();
}

//coluna diagonal direita
void drawCube5()
{
	
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(3.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, 1.0);
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(5.0, 3.0, 3.0);
	glVertex3f(5.0, -3.0, -1.0);
	glVertex3f(3.0, -3.0, -1.0);
	glVertex3f(3.0, 3.0, 3.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(3.0, 3.0, 3.0);
	glVertex3f(3.0, -3.0, -1.0);
	glVertex3f(3.0, -3.0, 1.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(5.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, -1.0);
	glVertex3f(5.0, 3.0, 3.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(3.0, 3.0, 3.0);
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(5.0, 3.0, 3.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(3.0, -3.0, -1.0);
	glVertex3f(3.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, 1.0);
	glVertex3f(5.0, -3.0, -1.0);
	glEnd();
}

//coluna diagonal camera
void drawCube6()
{
	
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0);
	glVertex3f(5.0, 3.0, 1.0);
	glVertex3f(3.0, 3.0, 1.0);
	glVertex3f(-1.0, -3.0, 1.0);
	glVertex3f(1.0, -3.0, 1.0);
	glEnd();
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(5.0, 3.0, -1.0);
	glVertex3f(1.0, -3.0, -1.0);
	glVertex3f(-1.0, -3.0, -1.0);
	glVertex3f(3.0, 3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 
	glVertex3f(3.0, 3.0, 1.0);
	glVertex3f(3.0, 3.0, -1.0);
	glVertex3f(-1.0, -3.0, -1.0);
	glVertex3f(-1.0, -3.0, 1.0);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);
	glVertex3f(5.0, 3.0, 1.0);
	glVertex3f(1.0, -3.0, 1.0);
	glVertex3f(1.0, -3.0, -1.0);
	glVertex3f(5.0, 3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(3.0, 3.0, -1.0);
	glVertex3f(3.0, 3.0, 1.0);
	glVertex3f(5.0, 3.0, 1.0);
	glVertex3f(5.0, 3.0, -1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glEnd();
}

//coluna diagonal esquerda
void drawCube7()
{

	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0);	
	glVertex3f(1.0, 3.0, 1.0);
	glVertex3f(-1.0, 3.0, 1.0);
	glVertex3f(-1.0, -3.0, 5.0);
	glVertex3f(1.0, -3.0, 5.0);
	glEnd();
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(1.0, 3.0, -1.0);
	glVertex3f(1.0, -3.0, 3.0);
	glVertex3f(-1.0, -3.0, 3.0);
	glVertex3f(-1.0, 3.0, -1.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 1.0, 0.0); 	
	glVertex3f(-1.0, 3.0, 1.0);
	glVertex3f(-1.0, 3.0, -1.0);
	glVertex3f(-1.0, -3.0, 3.0);
	glVertex3f(-1.0, -3.0, 5.0);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 1.0, 0.0);	
	glVertex3f(1.0, 3.0, -1.0);
	glVertex3f(1.0, -3.0, 3.0);
	glVertex3f(1.0, -3.0, 5.0);
	glVertex3f(1.0, 3.0, 1.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  	
	glVertex3f(-1.0, 3.0, 3.0);
	glVertex3f(-1.0, 3.0, 5.0);
	glVertex3f(1.0, 3.0, 5.0);
	glVertex3f(1.0, 3.0, 3.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(0.0, -1.0, 0.0); 
	glVertex3f(-1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, -1.0);
	glVertex3f(1.0, -1.0, 1.0);
	glVertex3f(-1.0, -1.0, 1.0);
	glEnd();
}



//coluna diagonal frente
void drawCube8()
{
	
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face frontal
	glNormal3f(0.0, 0.0, 1.0);	
	glVertex3f(1.0, 3.0, 5.0);
	glVertex3f(-1.0, 3.0, 5.0);
	glVertex3f(3.0, -3.0, 5.0);
	glVertex3f(5.0, -3.0, 5.0);
	glEnd();
	
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face posterior
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(1.0, 3.0, 3.0);
	glVertex3f(5.0, -3.0, 3.0);
	glVertex3f(3.0, -3.0, 3.0);
	glVertex3f(-1.0, 3.0, 3.0);
	glEnd();
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);			// Face lateral esquerda
	glNormal3f(0.0, 0.0, 1.0); 
	glVertex3f(-1.0, 3.0, 5.0);
	glVertex3f(-1.0, 3.0, 3.0);
	glVertex3f(3.0, -3.0, 3.0);
	glVertex3f(3.0, -3.0, 5.0);
	glEnd();
	
	glColor3f(1.0f, 0.0f, 0.0f);
	glBegin(GL_QUADS);			// Face lateral direita
	glNormal3f(0.0, 0.0, 1.0);	
	glVertex3f(1.0, 3.0, 5.0);
	glVertex3f(5.0, -3.0, 5.0);
	glVertex3f(5.0, -3.0, 3.0);
	glVertex3f(1.0, 3.0, 3.0);
	glEnd();
	
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face superior
	glNormal3f(0.0, 1.0, 0.0);  
	glVertex3f(3.0, 3.0, 3.0);
	glVertex3f(3.0, 3.0, 5.0);
	glVertex3f(5.0, 3.0, 5.0);
	glVertex3f(5.0, 3.0, 3.0);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);
	glBegin(GL_QUADS);			// Face inferior
	glNormal3f(1.0, -1.0, 0.0); 
	glVertex3f(3.0, -3.0, 3.0);
	glVertex3f(5.0, -3.0, 3.0);
	glVertex3f(5.0, -3.0, 5.0);
	glVertex3f(3.0, -3.0, 5.0);
	glEnd();
}


// Fun��o para desenhar o ch�o
void drawFloor()
{
	glColor3f(0.75f, 0.54f, 0.33f);
	glBegin(GL_QUADS);
	glNormal3f(0.0, 0.0, 0.0); 
	glVertex3f(-50.0f, -3.0f, -50.0f);
	glVertex3f(-50.0f, -3.0f, 50.0f);
	glVertex3f(50.0f, -3.0f, 50.0f);
	glVertex3f(50.0f, -3.0f, -50.0f);
	glEnd();
}

// Fun��o para exibir a cena
void display()
{
	
	
	GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
    GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0};       // "cor" 
    GLfloat luzEspecular[4]={1.0, 1.0, 1.0, 1.0};// "brilho" 
    GLfloat posicaoLuz[4]={1.0, 50.0, 50.0, 1.0};

    // Capacidade de brilho do material
    GLfloat especularidade[4]={1.0,1.0,1.0,1.0}; 
    GLint especMaterial = 60;

     // Especifica que a cor de fundo da janela ser� preta
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    // Habilita o modelo de coloriza��o de Gouraud
    glShadeModel(GL_SMOOTH);

    // Define a reflet�ncia do material 
    glMaterialfv(GL_FRONT,GL_SPECULAR, especularidade);
    // Define a concentra��o do brilho
    glMateriali(GL_FRONT,GL_SHININESS,especMaterial);

    // Ativa o uso da luz ambiente 
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);

    // Define os par�metros da luz de n�mero 0
    glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente); 
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
    glLightfv(GL_LIGHT0, GL_SPECULAR, luzEspecular );
    glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz );

    // Habilita a defini��o da cor do material a partir da cor corrente
    glEnable(GL_COLOR_MATERIAL);
    //Habilita o uso de ilumina��o
    glEnable(GL_LIGHTING);
    // Habilita a luz de n�mero 0
    glEnable(GL_LIGHT0);
    // Habilita o depth-buffering
    glEnable(GL_DEPTH_TEST);

    
	// Limpa o buffer de cor e o buffer de profundidade
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	
	// Define a matriz de proje��o
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, 1.0f, 0.1f, 100.0f);

	// Define a matriz de visualiza��o
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0.0f, 0.0f, angleZ,  // posi��o da c�mera
		0.0f, 0.0f, 0.0f,  // ponto para onde a c�mera est� olhando
		0.0f, 1.0f, 0.0f); // vetor de orienta��o da c�mera

// Aplica as rota��es da c�mera
	glRotatef(angleX, 1.0f, 0.0f, 0.0f);
	glRotatef(angleY, 0.0f, 1.0f, 0.0f);

	// Desenha o cubo
	drawCube();

	drawCube2();
	
	drawCube3();
	
	drawCube4();
	
	drawCube5();
	
	drawCube6();
	
	drawCube7();
	
	drawCube8();
	// Desenha o ch�o
	drawFloor();

	// Troca os buffers (buffer duplo)
	glutSwapBuffers();
}

// Fun��o para tratar eventos de teclado
void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 'q':
	case 27: // Tecla ESC
		exit(0);
		break;
	}

	glutPostRedisplay();
}

// Fun��o para tratar eventos de teclas especiais
void special(int key, int x, int y)
{
	switch (key) {
	case GLUT_KEY_LEFT:
		angleY -= 5.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY += 5.0f;
		break;
	case GLUT_KEY_UP:
		angleX -= 5.0f;
		break;
	case GLUT_KEY_DOWN:
		angleX += 5.0f;
		break;
	}

	glutPostRedisplay();
}

// Fun��o callback chamada para gerenciar eventos do mouse
void GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON) {
		angleZ += 2.0f;
	}

	if (button == GLUT_RIGHT_BUTTON) {
		angleZ -= 2.0f;
	}

	glutPostRedisplay();
}

int main(int argc, char** argv)
{
	// Inicializa o GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(1000, 800);
	glutCreateWindow("Cubo 3D com c�mera controlada pelo teclado");

	// Define a fun��o de exibi��o
	glutDisplayFunc(display);

	// Define as fun��es de teclado
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(special);
	glutMouseFunc(GerenciaMouse);
	// Habilita o teste de profundidade
	glEnable(GL_DEPTH_TEST);

	// Inicia o loop principal do GLUT
	glutMainLoop();

	return 0;
}
