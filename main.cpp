#include <iostream>
#include <math.h>
#include <iomanip>

#define CLUCE 299792458   //Costante velocità della luce
#define PRECISION 54      //digits decimali 

using namespace std;

int main() {
//CALCOLO DEI RISULTATI
  double gamma, velocita, lunghezza_iniz, lunghezza_finale;
  
  velocita = 630;     //velocità dell'oggetto espressa in m/s
  lunghezza_iniz = 40.0;      //lunghezza iniziale dell'oggetto prima degli effetti relatvistici in m

  gamma = 1/(sqrt(1-(pow(velocita,2)/pow(CLUCE,2))));     // calcolo del gamma per poter poi calcolare gli effetti relativistici

  lunghezza_finale = lunghezza_iniz/gamma;      // variazione relatvistica

  double delta =  abs(lunghezza_finale - lunghezza_iniz); //variazione della lunghezza dovuta agli effetti relativistici 

  cout.precision(PRECISION);      //valori decimali dopo la virgola
  //cout <<fixed <<setprecision(PRECISION);
//STAMPA DEI RISULTATI
  cout << endl << endl << "------------------------------------------------------------------------------------------------------------" << endl << endl;
  cout << "\u03B3" <<"  CALCOLATO CON VELOCITA' V1 " << velocita << "  :   " << gamma << endl << endl;

  cout << "\u03B3" << "- 1" <<"  CALCOLATO CON VELOCITA' V1 " << velocita << "  :   " << gamma -1 << endl << endl;

  cout << "Lunghezza iniziale:  " << lunghezza_iniz << endl;

  cout << "Lunghezza finale:  " << lunghezza_finale << endl << endl;

  cout << "VARIAZIONE :  " << delta << endl;

  cout << endl << "------------------------------------------------------------------------------------------------------------" << endl << endl;

return 0;  
}
