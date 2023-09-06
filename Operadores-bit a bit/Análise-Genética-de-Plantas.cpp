#include <iostream>
using namespace std;

int main()
{
    unsigned char informacaoGenetica;

    cout << "Digite a informação genética da planta (um valor entre 0 e 255): ";
    cin >> informacaoGenetica;

    if (informacaoGenetica >= 0 && informacaoGenetica <= 255)
    {
        cout << "Quantidade de genes presentes: ";
        int contador = 0;

        for (int i = 0; i < 8; i++)
        {

            if (informacaoGenetica & (1 << i))
            {
                cout << i + 1 << " ";
                contador++;
            }
        }

        if (contador == 0)
        {
            cout << "Nenhum gene presente nesta planta." << endl;
        }
        else
        {
            cout << endl;
        }

        int geneEspecifico;
        cout << "Digite o número de um gene específico (entre 1 e 8): ";
        cin >> geneEspecifico;

        if (geneEspecifico >= 1 && geneEspecifico <= 8)
        {

            bool presente = informacaoGenetica & (1 << (geneEspecifico - 1));
            if (presente)
            {
                cout << "O gene " << geneEspecifico << " está presente nesta planta." << endl;
            }
            else
            {
                cout << "O gene " << geneEspecifico << " não está presente nesta planta." << endl;
            }
        }
        else
        {
            cout << "Número de gene específico inválido." << endl;
        }
    }
    else
    {
        cout << "Valor fora do intervalo permitido." << endl;
    }

    return 0;
}
