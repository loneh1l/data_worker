#include<bits/stdc++.h>
using namespace std;

int n;
int a[1100];

int main() {
	
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a+1, a+n+1);
	int il = 1, ir = n;
	for(int i = 1; i <= n; i++) {
		if(i % 2 == 0) {
			cout << a[ir--];
		}
		else{
			cout << a[il++];
		}
		cout << " ";
	}
	
	return 0;
}