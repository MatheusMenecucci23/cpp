#include <iostream>
#include <vector>

using namespace std;
//------ Ordenação por Inserção ----------//
void insertionSort(vector<int> &vetor) {

    for (uint32_t indice = 1; indice < vetor.size(); indice++)//O(N)
    {
		int chave = vetor[indice];
		int i = indice - 1;
		
		while (i >= 0 && vetor[i] > chave)//O(N)
		{
			vetor[i+1] = vetor[i];
			i--;
		}
		
		vetor[i+1] = chave;
	}
}
//O(N^2)

//------ Ordenação por selecão ----------//
void selectionSort(vector<int> &vetor)
{
    for (uint32_t indice = 0; indice < vetor.size()-1; indice++)
    {
        uint32_t min = indice;
        
        for (uint32_t tempIndice = indice+1; tempIndice < vetor.size(); ++tempIndice)
        {
            if( vetor[tempIndice] < vetor[min] )
            {
                min = tempIndice;
            }
        }
        
        if( min != indice )
        {
            int temp = vetor[indice];
            vetor[indice] = vetor[min];
            vetor[min] = temp;
        }
    }
}
//O
//------ procedimento para mostrar o vetor -----//
void mostrarVetor(vector<int> vetor)
{
    for (uint32_t i = 0; i < vetor.size(); ++i)
    {
        cout << vetor[i] << ", ";
    }
    cout << "\n";
}

int main()
{
    //------ Ordenação por Inserção ----------//
    vector<int> vetor;
    for (uint32_t i = 0; i < 10; ++i)
    {
        vetor.push_back(rand() % 100);
    }

    cout << "Ordenacao por insercao\n";
    mostrarVetor(vetor);
    insertionSort(vetor);
    mostrarVetor(vetor);


    //------ Ordenação por selecão ----------//
    vector<int> vetor2;
    for (uint32_t i = 0; i < 10; ++i)
    {
        vetor2.push_back(rand() % 100);
    }
    cout << "Ordenacao por selecao\n";
    mostrarVetor(vetor2);
    selectionSort(vetor2);
    mostrarVetor(vetor2);
}