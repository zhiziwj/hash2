#include <iostream>
#include <string>
#define ull unsigned long long
using namespace std;
string str;
ull h(string s){
	ull cnt=0;
	cnt=s[0];
	for(int i=1;i<s.length();i++){
		cnt=cnt*131+s[i];
	}
	return cnt;
}
int main(){
	getline(cin,str);
	cout<<h(str);
	return 0;
}