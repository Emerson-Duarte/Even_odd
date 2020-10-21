#include <iostream>
using namespace std;

int main() {
  int user_value; 
  int user;
  int cpu_value;
  int total;
  int par = 2;
  int impar = 1;
  
  srand(time(0));

  cout << "---------Par ou Ímpar---------\n\n";

  cout << "Digite 1 (impar) ou 2 (par): ";
  cin >> user;
  while(user != 1 && user != 2){
    cout << "Informe o valor '1' para IMPAR ou '2' para PAR" << endl;
    cin >> user;
  }
  cout << "Informe uma valor de 1 a 5...." << endl;
  cin >> user_value;
  while(user_value < 1  || user_value > 5) {
    cout << "Informe uma valor de 1 a 5...." << endl;
    cin >> user_value;
  }

  cpu_value = rand() % (5)+1;

  cout  << "Valor do pc = " << cpu_value << endl << endl;

  total = user_value + cpu_value;

  cout << "TOTAL = " << total << endl << endl;
  if(user == 1) cout << "Você escolheu IMPAR\n\n";
  if(user == 2) cout << "Você escolheu PAR\n\n";

  
  if(user == 2){
    if(total % 2 == 0){
      cout << "Parabéns, você ganhou!!!";
    }else{
      cout << "Desculpe, você perdeu!!!";
    }
  }else{
    if(total % 2 != 0){
      cout << "Parabéns, você ganhou!!!";
    }else{
      cout << "Desculpe, você perdeu!!!";
    }
  }
}
