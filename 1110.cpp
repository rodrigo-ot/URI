#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> pilha;
    vector<int> xpilha;
    unsigned int x;
    do {
    cin >> x;
    if(x<=50 && x>=0)
    {
        xpilha.push_back(x);
    }
  } while (x);
   for(long unsigned int i =0;i<xpilha.size()-1; i ++)
    {
        if(xpilha[x] == 0) break;
        pilha.clear();
        for(int j = 1; j <= xpilha[i]; j++)
        {
            pilha.push_back(j);
        }
        const int a = pilha.size();
        cout << "Discarded cards: ";
        if(pilha.size() == 1)
        {
                cout << endl;
        }
        for(int k = 0;k < a; k++)
        {
            if(pilha.size() >= 2)
            {
                if(pilha.size() == 2)
                {
                    cout<<pilha[0]<<endl;
                }
                else
                {
                    cout<<pilha[0]<< ',' << ' ';
                }
                pilha.push_back(pilha[1]);
                pilha.erase (pilha.begin()+1);
                pilha.erase (pilha.begin());
            }
            else if(pilha.size() == 1)
            {
                cout << "Remaining card: ";
                cout<< pilha[0] << endl;
            }
        }
    }
}
