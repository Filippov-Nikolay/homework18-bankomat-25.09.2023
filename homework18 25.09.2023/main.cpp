#include <iostream>
#include "Bankomat.h"

using namespace std;

int main() {
    setlocale(0, "");

    Bankomat a;

    a.ShowID();
    a.LoadingBanknotes();

    a.CashWithdrawal();
        
    string text = a.ToString();
    cout << "Осталось денег: " << text << endl;
    


    return 0;
}

