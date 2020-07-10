# cpp fps counter

C++ library for calculating the fps/time for an event to run

## C++ Example

```cpp
#include "fps_counter.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    Fps_counter fps;

    // Example processing loop
    for (int i = 0; i < 10000; i++)
    {
        // Some really complex operation
        usleep(20 * 1000);

        fps.update();
        std::cout << "FPS is: " << fps.get() << std::endl;
    }
}
```

### Compile Example File

```sh
g++ -g -Wall example.cpp -o example -std=c++11
```

Example expected output should be FPS is: 50
