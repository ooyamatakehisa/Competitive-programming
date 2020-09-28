#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
//#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for (int i = (a), i##formax = (b); i < i##formax; i++)
typedef long long ll;

int main() {
    int daysInYear, daysInMonth, daysInWeek;
    string date;
    cin >> daysInYear >> daysInMonth >> daysInWeek >> date;

    if (1 <= daysInYear && to_string(daysInYear).length() <= 2 &&  1 <= daysInMonth && to_string(daysInMonth).length() <= 2) {
        cout << -1 << endl;
        return 0;
    }
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());

    int remainderOfDate = 0;
    int cntOfYear = 1, cntOfMonth = 1, cntOfDay = 0;
    int monthsInYear = daysInYear / daysInMonth;
    int remainder = daysInYear % daysInMonth;
    int sumOfRemainder = 0;
    bool flag = false;
    while (true) {
        remainderOfDate %= daysInWeek;
        remainderOfDate++;

        cntOfDay++;
        if (cntOfDay > daysInMonth) {
            cntOfMonth++;
            cntOfDay = 1;
        }

        if (cntOfMonth > monthsInYear) {
            if (!flag) { sumOfRemainder += remainder; } else { flag = false; }
            if (sumOfRemainder >= daysInMonth) {
                flag = true;
                sumOfRemainder -= daysInMonth;
                cntOfMonth++;
            } else {
                cntOfYear++;
                cntOfMonth = 1;
            }

        }

        if (year == cntOfYear && month == cntOfMonth && day == cntOfDay) {
            char dayName = 'A' + remainderOfDate -1 ;
            cout << dayName << endl;
            break;
        }

        if (cntOfYear > 9999) {
            cout << -1 << endl;
            break;
        }
    }
    return 0;
}