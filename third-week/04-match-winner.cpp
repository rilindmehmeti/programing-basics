// ============================================================
//  Kush fitoi ndeshjen? (golat e dy ekipeve + "lojtari i ndeshjes")
//  Koncepte: if për krahasim, lidhja me max-of-three
//  TIPI: Pyetje
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    string homeTeam, awayTeam;
    int homeGoals, awayGoals;
    int playerA, playerB, playerC;   // gola të tre lojtarëve kandidatë

    cout << "Home team name: ";
    cin >> homeTeam;
    cout << "Away team name: ";
    cin >> awayTeam;

    cout << "Final score (home away): ";
    cin >> homeGoals >> awayGoals;

    // Kush e fitoi ndeshjen?
    if (homeGoals > awayGoals) {
        cout << homeTeam << " wins!" << endl;
    } else if (awayGoals > homeGoals) {
        cout << awayTeam << " wins!" << endl;
    } else {
        cout << "It's a draw." << endl;
    }

    // Lojtari i ndeshjes = ai me më shumë gola (riperdorimi i idesë "max of 3")
    cout << "Goals of three players (A B C): ";
    cin >> playerA >> playerB >> playerC;

    if (playerA >= playerB && playerA >= playerC) {
        cout << "Player of the match: A (" << playerA << " goals)" << endl;
    } else if (playerB >= playerA && playerB >= playerC) {
        cout << "Player of the match: B (" << playerB << " goals)" << endl;
    } else {
        cout << "Player of the match: C (" << playerC << " goals)" << endl;
    }

    return 0;
}
