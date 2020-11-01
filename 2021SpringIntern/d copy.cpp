#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <queue>
#include <map>
#include <list>
#include <set>
#include <sstream>
using namespace std;

vector<string> split(const string &s, char delim) {
    vector<string> elems;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
    if (!item.empty()) {
            elems.push_back(item);
        }
    }
    return elems;
}

#define FOR(i,a,b) for(int i=(a),i##formax=(b);i<i##formax;i++)
typedef long long ll;


int main(int argc, char *argv[]) {

    int n;
    cin >> n;

    map<string, vector<string>> rented_for_book;
    map<string, vector<string>> rented_for_user;

    // map<string, set<string>> reserved_possible_for_book;
    map<string, set<string>> reserved_possible_for_user;

    map<string, set<string>> reserved_inpossible_for_user;
    map<string, queue<string>> reserved_inpossible_for_book;

    string line;
    int index = 1;
    while (!cin.eof()) {
        getline(cin, line);
        vector<string> words = split(line, ' ');

        if (words[0] == "open"){
            cout << "open" << endl;
            continue;
        }
        if (words[0] == "close"){
            cout << "close" << endl;
            continue;
        }
        if (words[0] == "borrow") {
            string user_id = words[1];
            set<string> possible_books = reserved_possible_for_user[user_id];
            int num_of_books_for_rent = words.size() - 2;
            int num_of_rented_book = rented_for_user[user_id].size();
            int num_of_reserved_book = possible_books.size();
            if (n < num_of_books_for_rent + num_of_rented_book + num_of_reserved_book) {
                cout << "cannot" << num_of_books_for_rent + num_of_rented_book + num_of_reserved_book - n << endl;
                continue;
            }
            cout << "can";
            reserved_possible_for_user[user_id].clear();
            for (auto e : possible_books) {
                cout << e;
            }
            cout << endl;
            continue;
        }
        if (words[0] == "return") {
            int num_of_books_return = words.size() - 1;
            for (int i = 1; i < words.size(); i++) {
                string book_id = words[i];
                if (reserved_inpossible_for_book.count(book_id)) {
                    string next_user_id = reserved_inpossible_for_book[book_id].front();
                    cout << next_user_id << endl;
                    reserved_inpossible_for_book[book_id].pop();
                    reserved_inpossible_for_user[next_user_id].erase(book_id);
                    reserved_possible_for_user[next_user_id].insert(book_id);
                } else {
                    cout << "return" << endl;
                }
            }
        }
        if (words[0] == "reserve") {
            string user_id = words[1];
            int num_reserve_new = words.size() - 2;
            int num_reserved = reserved_possible_for_user[user_id].size() + reserved_inpossible_for_user[user_id].size();
            if (n < num_reserve_new + num_reserved) {
                cout << "cannot" << num_reserve_new + num_reserved - n << endl;
                continue;
            }
            // for (int i = 2; i < words.size(); i++) {
                
            // }
        }

    }
  return 0;
}
