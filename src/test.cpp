#include <GLFW/glfw3.h>

int main(int argc, char** argv) {
	if(glfwInit() == GLFW_FALSE) {
		return 1;
	} else {
		GLFWwindow* window = glfwCreateWindow(500, 500, "Test", nullptr, nullptr);
		if(window == nullptr) {
			glfwTerminate();
			return 2;
		} else {
			glfwMakeContextCurrent(window);
			while(glfwWindowShouldClose(window) == GLFW_FALSE) {
				glfwSwapBuffers(window);
				glfwPollEvents();
			}
			glfwTerminate();
		}
	}
	return 0;
}
