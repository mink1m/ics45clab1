#include "Functions.h"

string createPyramid(int num)
{
    if (num == 0)
    {
        return "Invalid pyramid size.";
    }
    else if (num < 0)
    {
        return "Negative pyramid size.";
    }
    else if (num >= 500)
    {
        return "Pyramid size too large.";
    }
    else
    {
        string pyramid = std::string(num, ' ');
        int height_counter = 1;
        int original_num = num;
        pyramid += "-\n";
        while (num > 0)
        {
            num--;
            pyramid += std::string(num, ' ');
            pyramid += "|";
            int temp_height = height_counter;
            while (temp_height != 0)
            {
                pyramid += " |";
                temp_height--;
            }
            pyramid += "\n";
            height_counter++;
            pyramid += std::string(num, ' ');
            if (height_counter > original_num)
            {
                pyramid += ' ';
                pyramid += std::string(original_num * 2 - 1, '-');
            }
            else
            {
                pyramid += std::string(height_counter * 2 - 1, '-');
            }
            if (num != 0)
            {
                pyramid += "\n";
            }
        }
        return pyramid;
    }
}

int getUserInput()
{
    int num;
    std::cout << "Pyramid size: " << std::endl;
    std::cin >> num;
    return num;
}