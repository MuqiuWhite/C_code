#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a=2, n,flag=0;
    int b[100] = { 5,2,8,5,1,5 };
    /*vector<int>b;
    cin >> a;

    while (cin >> n)
    {
        if (cin.get() == '\n')
            break;
        b.push_back(n);
    }*/
    int tmp = 0;
    int re = 0;
    for(int i = 0; i < 9; i += 3)
    {
        for (int j = i; j < 3 + i - 1; j++)
        {
            for (int k = i; k < 3 + i - 1-j; k++)
            {
                if (b[k] > b[k + 1])
                    swap(b[k], b[k + 1]);
            }

        }
        tmp = b[3 + i - 2];
        re += tmp;
    }
    cout << re << endl;
    return 0;

}