#include <iostream>
#include <vector>


void sort_vec(std::vector<int>&, int);
void del_unit(std::vector<int>&, int);

int main() {
    int n, sn;
    std::cout << "Enter vector's size!\n";
    std::cin >> n;
    std::vector<int> vec(n);
    std::cout << "Fill the vector:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        std::cin >> vec[i];
    }
    std::cout << "Enter unit to delete:\n";
    std::cin >> sn;
    sort_vec(vec, sn);
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    del_unit(vec, sn);
    std::cout << "================" << std::endl;

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }

}

void sort_vec(std::vector<int>& vec, int sn)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == sn)
        {
            for (int j = i; j < vec.size() - 1; j++)
            {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}

void del_unit(std::vector<int>& vec, int sn)
{
    for (int i = (int)vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] == sn)
        {
            vec.pop_back();
        }
    }
}