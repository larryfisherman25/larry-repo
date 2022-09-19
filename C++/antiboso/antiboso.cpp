#include <iostream>
#include <string>
using namespace std;

int main(){
    string presidente;
    cout << "Escreva o nome do melhor presidente que o Brasil já teve: ";
    cin >> presidente;

    if (presidente != "Lula")
        while (presidente != "Lula"){
            cout << "Você não está pensando direito! Tente novamente."<< endl;
            cout << "Escreva o nome do melhor presidente que o Brasil já teve: ";
            cin >> presidente;
        }

        cout << "Você é um dos nossos! 13 na veia." << endl;
    
    return 0;
};