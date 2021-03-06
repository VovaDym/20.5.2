#include <iostream>
#include <fstream>
#include <ctime>

int main() {

    std::srand(std::time(nullptr));

    int h, w;

    std::cout << "Enter the height of the picture: " << std::endl;
    std::cin >> h;
    std::cout << "Enter the width of the picture: " << std::endl;
    std::cin >> w;

    std::ofstream file("myFile.txt",std::ios::app);

    if (!file.is_open())
    {
        std::cout << "Error!" << std::endl;
    }
    else
    {
        for (int i = 0;i < h; ++i)
        {
            for (int j = 0;j < w; ++j)
            {
                file << rand() % 2 << " ";
            }
            file << std::endl;
        }
    }
    file.close();
}
