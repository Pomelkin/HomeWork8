#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, Mass[20][20] = {}, m;
    m = 3;
    cout << "введите длину чисел" << endl;
    cin >> n;

    for (int i = 0; i < m-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(Mass + i) + j) = rand() % 10;
            if (j == 0) *(*(Mass + i) + j) = 0;
            cout << " " << *(*(Mass + i) + j);
        }
        cout << endl;
    }

    int k = 0;
    int n1 = 0;
    for (int j = n - 1; j > 0; j--)
    {
        
        if (k == 1)
        {
            *(*(Mass + 2) + j) -= 1;
            k = 0;
        }
        if ((*(*(Mass + 1) + 1)> (*(*(Mass + 0) + 1))))
        {
            n1 = 1;
            if (*(*(Mass + 1) + j) < *(*(Mass + 0) + j))
            {
                *(*(Mass + 2) + j) += (*(*(Mass + 1) + j) + 10) - *(*(Mass + 0) + j);
                k += 1;
            }
            else *(*(Mass + 2) + j) += *(*(Mass + 1) + j) - *(*(Mass + 0) + j);
        }
        else {
            if (*(*(Mass + 1) + j) > *(*(Mass + 0) + j))
            {
                *(*(Mass + 2) + j) += (*(*(Mass + 0) + j) + 10) - *(*(Mass + 1) + j);
                k += 1;
            }
            else if (*(*(Mass + 1) + j) < *(*(Mass + 0) + j)) *(*(Mass + 2) + j) += *(*(Mass + 0) + j) - *(*(Mass + 1) + j);
        }
        if (*(*(Mass + 2) + j) == -1)
        {
            *(*(Mass + 2) + j) = 0;
            k += 1;
        }
    }

    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cout << " " << *(*(Mass + i) + j);
        cout << "\n";
    }

    if (n1 == 1)
    {
        cout << "Ответ = -";
        for (int j = 1; j < n; j++) cout << *(*(Mass + 2) + j);
    }
    else
    {
        cout << "Ответ = ";
        for (int j = 1; j < n; j++) cout  << *(*(Mass + 2) + j);
    }

}
