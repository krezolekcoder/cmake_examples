#include <iostream> 
#include <adder.h>
#include <GLFW/glfw3.h>
int main(void)
{
    std::cout << "Hello world mooorda !" << std::endl; 

    std::cout << add(23.4, 23.0) << std::endl; 

    GLFWwindow* window;
    int width, height;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // // Draw gears
        // draw();

        // // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    // // Exit program
    // exit( EXIT_SUCCESS );


    return 0; 
}