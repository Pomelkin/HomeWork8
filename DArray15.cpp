#include "pt4.h"
using namespace std;

void Solve()
{
    Task("DArray15");
    int n, k = 0, Sum = 0, Mass[20][20] = {};
    float Mass1[20][20] = {};
    pt >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pt >> *(*(Mass + i) + j);
            if (j == k) Sum+= *(*(Mass + i) + j);
        }
        k += 1;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)  *(*(Mass1 + i) + j) = *(*(Mass + i) + j);
    
    for (int i = 0; i < n; i++)
        if ((i+1) % 2 ==0)
        for (int j = 0; j < n; j++) *(*(Mass1 + i) + j)/=float(Sum);
    
    
    pt << Sum;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) pt << *(*(Mass1 + i) + j);
}
