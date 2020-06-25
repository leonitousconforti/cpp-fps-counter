#include "fps_counter.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    Fps_counter fps;

    // Example processing loop
    for (int i = 0; i < 100; i++)
    {
        // Some really complex operation
        usleep(20 * 1000);

        fps.update();
        std::cout << "FPS is: " << fps.get() << std::endl;
    }
}
