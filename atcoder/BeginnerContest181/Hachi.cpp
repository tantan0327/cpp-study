#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string S;
    cin >> S;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;

    // setだと重複が考慮できない
    set<int> numbers;

    if (S.size() <= 3) {
        int cand0 = stoi(S) % 8;
        if (cand0 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        return 0;
    }

    for (char c : S) {
        numbers.insert((int)(c - '0'));
    }

    vector<int> vec(numbers.begin(), numbers.end());
    for (int i=0; i<vec.size(); i++) {
        for (int j=0; j<vec.size(); j++) {
            int cand1 = (10 * vec[i] * vec[j]) % 8;
            int cand2 = (10 * vec[j] * vec[i]) % 8;
            if (cand1 == 0 || cand2 == 0) {
                for (char c : S) {
                    int c1 = (int)(c - '0');
                    if (c1 == 2) {
                        count2++;
                        if (count2 == 2 && (vec[i] == 2 || vec[j] == 2)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 4) {
                        count4++;
                        if (count4 == 2 && (vec[i] == 4 || vec[j] == 4)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 6) {
                        count6++;
                        if (count6 == 2 && (vec[i] == 6 || vec[j] == 6)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 8) {
                        count8++;
                        if (count8 == 2 && (vec[i] == 8 || vec[j] == 8)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
            if (cand1 == 4 || cand2 == 4) {
                for (char c : S) {
                    int c1 = (int)(c - '0');
                    if (c1 == 1) {
                        count1++;
                        if (count1 == 2 && (vec[i] == 1 || vec[j] == 1)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 3) {
                        count3++;
                        if (count3 == 2 && (vec[i] == 3 || vec[j] == 3)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 5) {
                        count5++;
                        if (count5 == 2 && && (vec[i] == 5 || vec[j] == 5)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 7) {
                        count7++;
                        if (count7 == 2 && (vec[i] == 7 || vec[j] == 7)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    } else if (c1 == 9) {
                        count9++;
                        if (count9 == 2 && (vec[i] == 9 || vec[j] == 9)) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }

    cout << "No" << endl;
    

}