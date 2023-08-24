#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double excursionPrice;
    int puzzlesCount, talkingDollsCount, fluffyBearsCount, minionsCount, truckToyCount;

    cin >> excursionPrice >> puzzlesCount >> talkingDollsCount >> fluffyBearsCount >> minionsCount >> truckToyCount;

    int totalCount = puzzlesCount + talkingDollsCount + fluffyBearsCount + minionsCount + truckToyCount;

    double totalMoneyEarned = puzzlesCount * 2.60 + talkingDollsCount * 3 + fluffyBearsCount * 4.10 + minionsCount * 8.20 + truckToyCount * 2;

    cout.setf(ios::fixed);
    cout.precision(2);


    if (totalCount >= 50) {
        double totalMoneyDiscout = totalMoneyEarned - totalMoneyEarned * 0.25;
        double moneyLeft = totalMoneyDiscout - (totalMoneyDiscout * 0.10);

        if (moneyLeft - excursionPrice >= 0) {
            cout << "Yes! " << moneyLeft - excursionPrice << " lv left.";

        }
        else {
            cout << "Not enough money! " << abs(moneyLeft - excursionPrice) << " lv needed.";
        }
    }
    else {
        double totalMoneyEarnedchep = totalMoneyEarned - (totalMoneyEarned * 0.10);
        if (totalMoneyEarned - excursionPrice >= 0) {

            
            cout << "Yes! " << totalMoneyEarnedchep - excursionPrice << " lv left.";
        }
        else {
            cout << "Not enough money! " << abs(totalMoneyEarnedchep - excursionPrice) << " lv needed.";
        }
    }
}

