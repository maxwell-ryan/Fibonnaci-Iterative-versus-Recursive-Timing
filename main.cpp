

#include <iostream>
#include <ctime>

int recursiveFibonnaci(int);
int iterativeFibonnaci(int);

int main()
{
    clock_t time;
    
    time = clock();
    
    for (int counter = 0; counter < 10; counter++)
    {
    std::cout << recursiveFibonnaci(25) << " ";
    }
    //std::cout << recursiveFibonnaci(47) << " ";
    time = clock() - time;
    
    std::cout << "It took " << time << "clicks to calculate the fibonnaci sequence requested.\n";
    
    return 0;
}

int iterativeFibonnaci(int nSize)
{
    int nMinus2 = 0;
    int nMinus1 = 1;
    int n;
    int counter = nSize;
    
    for (int x = 2; x <= counter; x++)
    {
        n = nMinus2 + nMinus1;
        nMinus2 = nMinus1;
        nMinus1 = n;
    }
    
    if (nSize == 0)
        return 0;
    else if (nSize == 1)
        return 1;
    else
        return n;
}

int recursiveFibonnaci(int nSize)
{
    switch (nSize)
    {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        default:
            return recursiveFibonnaci( (nSize - 2) ) + recursiveFibonnaci( (nSize - 1) );
    }
}
