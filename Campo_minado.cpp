#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gerarminas(int minas){
    
    int cm[8][8];
    int l, c, cont = 0;
    int gerado;
    srand(time(0));

   do{
      gerado = 1+ (rand() % 8);
      l = gerado;
      gerado = 1+ (rand() % 8);
      c = gerado;
      if (cm[l][c] != 8){
         cm[l][c] = 8;
         cont++;
      }
   }while (cont < minas);
}


void refresh(int l, int c){
    
    int pos [8][8];
    pos[l][c] = 1;
    cout << endl;

    for (int i = 0; i<=7; i++){
        cout <<"|";
            for (int j=0; j<=7; j++){
                cout << "_"<<"|";
	}
        cout << endl;
    }
}

void posicao(int l, int c){
    
    int column;
    char line;
    bool mina;
    int tabuleiro[l][c];
    int pos[l][c];

    cout <<endl;

    do{
        cout <<endl;
        cout << "Digite a linha: "<<endl;
        cin >>line;
        cout << "Digite a coluna: "<<endl;
        cin >>column;

        refresh(4,5);

    }while(mina!=0);
}

int main()
{
    int dimensao, l, c;
    int tabuleiro[8][8];

    cout << "*******MENU*******"<<endl;
    cout <<endl;
    cout << "Escolha a dimensao do tabuleiro:"<<endl;
    cout << "1. 8x8"<<endl;
    cout << "2. 16x16"<<endl;
    cin >>dimensao;
//it can to be a function too
    cout << " 1 2 3 4 5 6 7 8"<<endl;
    for (int i = 0; i<=7; i++){cout <<" "<<"_";}
    cout << endl;
    if (dimensao == 1){
        for (int i = 0; i<=7; i++){
                cout <<"|";
            for (int j=0; j<=7; j++){
                cout << "_"<<"|";
            }
            cout << endl;
        }
        cout<<"escolheu 8x8";

        gerarminas(16);
 
      }
     else if (dimensao == 2){
        cout <<"Escolheu 16x16";
    }
    return 0;
}
