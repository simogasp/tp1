#include <cstdlib>

// for mac osx
#ifdef __APPLE__
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#else
// only for windows
#ifdef _WIN32
#include <windows.h>
#endif
// for windows and linux
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#endif

// function called everytime the windows is refreshed
void display()
{
    // clear window
    glClear(GL_COLOR_BUFFER_BIT);

    // draw scene
    glutWireTeapot(.5);

    // flush drawing routines to the window
    glFlush();
}

// Function called everytime a key is pressed
void key(unsigned char key, int, int)
{
    switch(key)
    {
        // the 'esc' key
        case 27:
        // the 'q' key
        case 'q': exit(EXIT_SUCCESS); break;
        default: break;
    }
    glutPostRedisplay();
}

// Function called every time the main window is resized
void reshape(int width, int height)
{
    // define the viewport transformation;
    glViewport(0, 0, width, height);
}

// Main routine
int main(int argc, char* argv[])
{
    // initialize GLUT, using any commandline parameters passed to the
    //   program
    glutInit(&argc, argv);

    // setup the size, position, and display mode for new windows
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGB);

    // create and set up a window
    glutCreateWindow("Hello, teapot!");

    // Set up the callback functions:
    // for display
    glutDisplayFunc(display);
    // for the keyboard
    glutKeyboardFunc(key);
    // for reshaping
    glutReshapeFunc(reshape);

    // tell GLUT to wait for events
    glutMainLoop();
}
