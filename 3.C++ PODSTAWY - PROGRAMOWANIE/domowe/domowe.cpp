#include <iostream>
void revertCharArrayv2(char tab[][3])
{
for (int i = 0; i < 3; ++i)
{
    for (int j = 0; j < 3; ++j)
    {
        std::swap(tab[i][j], tab[3 - i - 1][3 - j - 1]);
    }
}

for (int i = 0; i < 3; ++i)
{
    for (int j = 0; j < 3; ++j)
    {
        std::cout << tab[i][j];
    }
    std::cout << std::endl;
}

}
int main()
{
    const int size = 3;
    char tab[size][size] =
    { {'a', 'b', 'c'},
      {'d', 'e', 'f'},
      {'*', '#', '$'} };

    //revertCharArray(tab);
    revertCharArrayv2(tab);

}