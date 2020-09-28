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
    unordered_map<string, int> indexMap;
    vector<double> priceOrWeightPer100yen(n + 1, 0);
    vector<double> standardOrPackageWeight(n + 1, 0);
    vector<double> allowableError(n + 1, 0);
    FOR(i, 0, n) {
        string productCode;
        double a, b, error;
        cin >> productCode >> a >> b >> error;
        indexMap.emplace(productCode, i + 1);

        priceOrWeightPer100yen[i + 1] = a;
        standardOrPackageWeight[i + 1] = b;
        allowableError[i + 1] = error;
    }

    while(true) {
        bool ok = true;
        int amount = 0;
        string errorCode = "";
        string start = "";
        cin >> start;
        if (start == "start") {
            string barcode = "0000000000000";
            double weightOfBasket = 0;
            string preBarcode = "";
            double preWeightOfBasket = 0;
            int preProductIndex = 1;
            bool correctCheckSum = true;
            bool firstFlag = false;
            while (barcode != "end") {
                cin >> barcode >> weightOfBasket;
                if (firstFlag) {
                    string productFlag = preBarcode.substr(0, 2);
                    double increase = weightOfBasket - preWeightOfBasket;
                    int priceOfProductSoldByWeight = (productFlag != "02") ? 0 : atoi(preBarcode.substr(7, 5).c_str());
                    double standardWeight = (productFlag != "02") 
                        ? standardOrPackageWeight[preProductIndex] 
                        : standardOrPackageWeight[preProductIndex] + priceOrWeightPer100yen[preProductIndex] * priceOfProductSoldByWeight / 100;
                    
                    if (correctCheckSum && (preProductIndex != 0) && ( increase < standardWeight - allowableError[preProductIndex] || increase > standardWeight + allowableError[preProductIndex])) {
                        if (errorCode == "" || errorCode == "1") { errorCode = "1"; }
                        else if (errorCode == "2" || errorCode == "1 2") { errorCode = "1 2"; }
                    } else if (!correctCheckSum || preProductIndex == 0) {
                        if (errorCode == "" || errorCode == "2") { errorCode = "2"; }
                        else if (errorCode == "1" || errorCode == "1 2") { errorCode = "1 2"; }
                    } else {
                        amount += (productFlag != "02") ? priceOrWeightPer100yen[preProductIndex] : priceOfProductSoldByWeight;
                    }
                }

                firstFlag = true;
                int calcCheckSum = 0;
                FOR(k, 0, 12) {
                    calcCheckSum += ctoi(barcode[k]);
                }
                correctCheckSum = (ctoi(barcode[12]) == calcCheckSum % 10);
                preProductIndex = (barcode.substr(0, 2) != "02") ? indexMap[barcode.substr(0, 12)] : indexMap[barcode.substr(2, 5)];
                preWeightOfBasket = weightOfBasket;
                preBarcode = barcode;
            }
            if (errorCode == "") { cout << amount << endl; } else { cout << "staff call: " + errorCode << endl; }

        } else { break; }
    }
    return 0;
}