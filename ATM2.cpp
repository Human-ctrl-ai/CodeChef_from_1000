#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int j=0; j<t; j++){
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	    for(int i=0; i<n; i++){
	        if(k >= arr[i]){
	            cout << 1;
	            k = k - arr[i];
	        } else{
	            cout << 0;
	        }
	    }
	    cout << endl;
	    
	}
	return 0;
}
