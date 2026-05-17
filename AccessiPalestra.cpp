#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, cognome;
    int eta, accessiSettimanali, fasciaOraria;

    cout << "--- SISTEMA ACCESSI FITZONE ---" << endl;
    cout << "Inserisci nome: "; cin >> nome;
    cout << "Inserisci cognome: "; cin >> cognome;
    cout << "Inserisci eta': "; cin >> eta;
    if (eta < 14){
        cout << "Accesso non consentito, Eta' insufficente";
        return 0;
    }
    cout << "Inserisci numero accessi settimanali: "; cin >> accessiSettimanali;
    while (accessiSettimanali < 1 || accessiSettimanali > 7){
        cout << "Pacchetto non valido" << endl;
        cout << "Inserisci numero accessi settimanali: "; cin >> accessiSettimanali;
    }
    cout << "Inserisci fascia oraria preferita (1 = Mattina (6:00 - 12:00), 2 = Pomeriggio (12:00 - 18:00), 3 = Sera (18:00 - 23:00)): "; cin >> fasciaOraria;
    while (fasciaOraria < 1 || fasciaOraria > 3) {
        cout << "Fascia non disponibile" << endl;
        cout << "Inserisci fascia oraria preferita (1 = Mattina (6:00 - 12:00), 2 = Pomeriggio (12:00 - 18:00), 3 = Sera (18:00 - 23:00)): "; cin >> fasciaOraria;
    }
    while (fasciaOraria == 3 && accessiSettimanali < 3){
        cout << "Fascia serale richiede almeno 3 accessi settimanali" << endl;
        cout << "Inserisci numero accessi settimanali: "; cin >> accessiSettimanali;
        while (accessiSettimanali < 1 || accessiSettimanali > 7){
            cout << "Pacchetto non valido" << endl;
            cout << "Inserisci numero accessi settimanali: "; cin >> accessiSettimanali;
        }
        cout << "Inserisci fascia oraria preferita (1 = Mattina (6:00 - 12:00), 2 = Pomeriggio (12:00 - 18:00), 3 = Sera (18:00 - 23:00)): "; cin >> fasciaOraria;
        while (fasciaOraria < 1 || fasciaOraria > 3) {
            cout << "Fascia non disponibile" << endl;
            cout << "Inserisci fascia oraria preferita (1 = Mattina (6:00 - 12:00), 2 = Pomeriggio (12:00 - 18:00), 3 = Sera (18:00 - 23:00)): "; cin >> fasciaOraria;
        }
    }

    if (eta < 16) {
        cout << "Limitazione: Sala pesi non consentito." << endl;
    }
    cout << "Iscrizione accettata." << endl;
    cout << "---------------------" << endl;
    cout << "Riepilogo dati: " << endl;
    cout << "Nome: " << nome << endl;
    cout << "Eta': " << eta << endl;
    cout << "Accessi settimanali: " << accessiSettimanali << endl;
    cout << "Fascia oraria preferita: " << fasciaOraria << endl;
}