#include <bits/stdc++.h> 
using namespace std;
int main(){
	int n, tmp, i=0;
	cin >> n;
	vector<int> v;
	v.resize(n);
	while(n--){
		cin >> tmp;
		v[i++] = tmp;
	}
	sort(v.begin(), v.end());
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\n";
}