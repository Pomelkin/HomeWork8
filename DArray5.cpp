#include "pt4.h"
using namespace std;

void Solve()
{
    Task("DArray5");
    int n, Mass[20][20] = {}, k = 0;
    pt >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j < k) 
            {
                *(*(Mass + i) + j) = 0;
                int a;
                pt >> a;
            }
            else pt >> *(*(Mass + i) + j);
        k += 1;
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) pt << *(*(Mass + i) + j);
}
