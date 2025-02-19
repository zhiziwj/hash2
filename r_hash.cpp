#include <iostream>
#include <string>
#define ull unsigned long long
#define nullstr ""
using namespace std;
ull n;
string r_hash(ull hash){
	if(hash==0){
		return nullstr;
	}
	string ans=nullstr;
	while(hash>0){
		ull ch=hash%131;
		ans+=char(ch);
		hash=(hash-ch)/131;
	}
	int i=0,j=ans.size()-1;
	while(i<j){
		swap(ans[i],ans[j]);
		i++;
		j--;
	}
	return ans;
}
int main(){
	cin>>n;
	string ans=r_hash(n);
	cout<<ans;
	return 0;
}