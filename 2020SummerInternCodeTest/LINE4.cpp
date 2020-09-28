#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <unordered_map>
//#include <bits/stdc++.h>


using namespace std;

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}


int main(){
    int n;
    cin >> n; 
    map<string, int> indexMap;
    map<string, int> pointCardMap;

    vector<double> setOfPrice(n + 1, 0);
    FOR(i, 0, n) {
        string productCode;
        cin >> productCode;
        indexMap.emplace(productCode, i + 1);

        if ((int)(productCode.length()) == 12) { cin >> setOfPrice[i + 1]; }
    }

    int indexOfPointCard = 0;
    while(true) {
        int amount = 0;
        string errorCode = "", code = "", pointCard = "";
        cin >> code >> pointCard;
        bool isPointCard = ((int) pointCard.length() == 10) ? true : false;
        if (code == "start") {
            string barcode = isPointCard ? "0000000000000" : pointCard;
            while (true) {
                if (isPointCard) { 
                    cin >> barcode;
                    if (barcode == "end") break; 
                }
                isPointCard = true;

                // definition of basic information of product
                string productFlag = barcode.substr(0, 2);
                int productIndex = (productFlag != "02") ? indexMap[barcode.substr(0, 12)] : indexMap[barcode.substr(2, 5)];
                int lengthOfBarcode = (int) barcode.length();

                // calculate price
                double originalPrice = (productFlag != "02") ? setOfPrice[productIndex] : atoi(barcode.substr(7, 5).c_str());
                double discountPrice = 0;
                if (lengthOfBarcode == 15) { discountPrice = originalPrice * atoi(barcode.substr(12, 2).c_str()) / 100; }
                else if (lengthOfBarcode == 18) { discountPrice = atoi(barcode.substr(12, 5).c_str()); }
                int finalPrice = originalPrice - round(discountPrice);

                // caluculate sum of bracode and chech correct checksum
                int calcCheckSum = 0;
                FOR(k, 0, lengthOfBarcode - 1) { calcCheckSum += ctoi(barcode[k]); }
                bool correctCheckSum = (ctoi(barcode[lengthOfBarcode - 1]) == calcCheckSum % 10);

                // upadate amout price by adding price of a product or update error code
                if ((lengthOfBarcode == 15 || lengthOfBarcode == 18) && correctCheckSum && (productIndex != 0) && (finalPrice <= 0 || finalPrice >= originalPrice)) {
                    if (errorCode == "" || errorCode == "1") { errorCode = "1"; }
                    else if (errorCode == "2" || errorCode == "1 2") { errorCode = "1 2"; }
                } else if ((lengthOfBarcode != 15 && lengthOfBarcode != 18 && lengthOfBarcode != 13) || !correctCheckSum || productIndex == 0) {
                    if (errorCode == "" || errorCode == "2") { errorCode = "2"; }
                    else if (errorCode == "1" || errorCode == "1 2") { errorCode = "1 2"; }
                } else {
                    amount += finalPrice;
                }
                
            }
            
            // output the result
            if (errorCode == "") { 
                if (errorCode == "" && isPointCard) {
                    int point = pointCardMap[pointCard];
                    if (point > amount )  {
                        point = point - amount + amount / 100;
                        amount = 0;
                        pointCardMap[pointCard] = point;
                    } else {
                        pointCardMap[pointCard] += amount;
                    }
                }
                cout << amount << endl; 
            } else { cout << "staff call: " + errorCode << endl; }

        } else { break; }
    }
    return 0;
}