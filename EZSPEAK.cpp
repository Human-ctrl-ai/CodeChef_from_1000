#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int cnt = 0;
	    for(int j=0; j<n; j++){
	        if(s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u'){
	            cnt += 1;
	            if (cnt >= 4){
	                break;
	            }
	        } else {
	            cnt = 0;
	        }
	    }
        if (cnt >= 4){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
	}
    return 0;
}
