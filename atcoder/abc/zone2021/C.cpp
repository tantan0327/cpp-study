#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using ll = long long;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector A(N, array<int, 5>{});
	for(auto& a : A) for(int& i : a) cin >> i;
	int ok = 0, ng = 1000000001;

	//　関数
	auto check = [&](int x) -> bool {
		set<int> s;
        for(auto& a : A){
            int bit = 0;
            for(int i : a){
                bit <<= 1;
                bit |= i >= x;
            }
            s.insert(bit);
        }
		for(int x : s) for(int y : s) for(int z : s){
            if((x | y | z) == 31) return 1;
        }
		return 0;
    };

	// 二分探索
    while(abs(ok - ng) > 1){
        int cen = (ok + ng) / 2;
        (check(cen) ? ok : ng) = cen;
    }

	cout << ok << endl;
	
}