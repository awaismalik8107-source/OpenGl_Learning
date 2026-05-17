#include<iostream>
#include<GLFW/glfw3.h>
int main()
{
	GLFWwindow* window;
	const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
	//this return the gut display property like width height rgb and hertz

	if (!glfwInit())
	{
		std::cout << "Error in initiating the GLFW library" << std::endl;
		// every library must be initiate before using the library
		return -1;
	}
	glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_VISIBLE, GLFW_TRUE);
	//hints are bassically for setting property before creating the video
	window = glfwCreateWindow(mode->width-200, mode->height-300, "The window printing", NULL, NULL);
	//window defining here


	if (!window)
	{
		std::cout << "Window wasnt printed Error" << std::endl;
		return -1;
	}

	glfwMakeContextCurrent(window);
	//context is the space where all the refernece exist 
	//to the gpu objects like shadder vgo and other


	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);
		//It clears the color buffer (framebuffer) of the current OpenGL context.
		glfwSwapBuffers(window);
		//So this will but the next buffer as the current screen 
		//two buffer current and next buffer
		//so the swao happen current beomce next.
		//next become current;
		glfwPollEvents();
		

	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}