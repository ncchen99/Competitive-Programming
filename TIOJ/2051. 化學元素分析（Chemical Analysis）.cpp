#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
struct Atom {
    string name;
    int amount;
} atoms[256];
struct tag {
    int si;
    int ei;
    int cm;  //change amount
} tags[256];
string cf;  //chemical formula  打扣也能學英文
int ca(int &i) {
    int amount = 0;
    while (isdigit(cf[i + 1])) {
        amount = (cf[i + 1] - '0') + amount * 10;
        i++;
    }
    return amount;
}  //count atoms
int main() {
    ios_base::sync_with_stdio(0);
    while (cin >> cf) {
        int i = 0, b = 0, aatmp;  //brackets, atomsAmountTmp
        string antmp;             //atomsNameTmp
        stack<struct tag> tagSt;
        for (int k = 0; k < 256; k++) {
            atoms[k].name = "NULL";
            atoms[k].amount = 0;
            tags[k].si = 0;
            tags[k].ei = 0;
            tags[k].cm = 0;
        }
        while (i < cf.length()) {
            if (isalpha(cf[i])) {
                antmp = cf[i];
                if (isalpha(cf[i + 1]) && islower(cf[i + 1])) {
                    antmp += cf[i + 1];
                    i++;
                }
                if ((isalpha(cf[i + 1]) && isupper(cf[i + 1])) || cf[i + 1] == '(' || cf[i + 1] == ')' || i + 1 == cf.length())
                    aatmp = 1;
                if (isdigit(cf[i + 1]))
                    aatmp = ca(i);
                atoms[i].name = antmp;
                atoms[i].amount = aatmp;
            } else if (cf[i] == '(') {
                struct tag tmptag;
                tmptag.si = i;
                tagSt.push(tmptag);
            } else if (cf[i] == ')') {
                tagSt.top().ei = i;
                tagSt.top().cm = ca(i);
                tags[b] = tagSt.top();
                tagSt.pop();
                b++;
            }
            i++;
        }
        for (int i = 0; i < b; i++) {
            if (tags[i].cm == 0) continue;
            for (int j = tags[i].si; j < tags[i].ei; j++) {
                if (atoms[j].name != "NULL")
                    atoms[j].amount *= tags[i].cm;
            }
        }
        map<string, int> ansA;
        map<string, int>::iterator iter;
        for (int i = 0; i < cf.length(); i++) {
            if (atoms[i].name != "NULL") {
                if (ansA.find(atoms[i].name) != ansA.end())
                    ansA[atoms[i].name] += atoms[i].amount;
                else
                    ansA[atoms[i].name] = atoms[i].amount;
            }
        }
        cout << cf << endl;
        for (iter = ansA.begin(); iter != ansA.end(); iter++) {
            cout << iter->first << ":" << iter->second << endl;
        }
    }
}