#include <vector>
#include <iostream>

using namespace std;
class BuyCar {
public:
    static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth);
    /*static std::vector<int> nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth) {
        std::vector<int> pay;
        double total = 0;
        double startPriceOldD = startPriceOld;
        double startPriceNewD = startPriceNew;
        int number = 0;
        double rate = 1 - percentLossByMonth / 100;
        if (startPriceOld >= startPriceNew) {
            pay.push_back(0);
            pay.push_back(startPriceOld - startPriceNew);
            for (int i : pay) {
                cout << "payCar" << i << endl;
            }
            return pay;
        }
        while (total >= 0) {
            number += 1;
            if (number % 2 == 0) rate -= 0.005;
            startPriceOldD *= rate;
            startPriceNewD *= rate;
            total = (startPriceNewD - startPriceOldD) - savingperMonth * (number);
        }
        pay.push_back(number);
        pay.push_back(round( - total));
        for (int i : pay) {
            cout << "payCar" << i << endl;
        }
        return pay;
    }*/
};

vector<int> BuyCar::nbMonths(int startPriceOld, int startPriceNew, int savingperMonth, double percentLossByMonth){
    int mth = 0;
    double priceOld = static_cast<double>(startPriceOld);
    double priceNew = static_cast<double>(startPriceNew);
    double available = static_cast<double>(startPriceOld);
    while (available < priceNew)
    {
        // at the end of this month
        mth += 1;
        if (mth % 2 == 0)
        {
            percentLossByMonth = percentLossByMonth + 0.5;
        }
        priceOld = priceOld * (100 - percentLossByMonth) / 100;
        priceNew = priceNew * (100 - percentLossByMonth) / 100;
        available = mth * savingperMonth + priceOld;
    }
    vector<int> res = { mth, static_cast<int>(available - priceNew + .5) };
    for (int i : res) {
            cout << "payCar: " << i << endl;
        }
    return res;
}