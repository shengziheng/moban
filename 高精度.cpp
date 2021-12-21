#include<bits/stdc++.h>
using namespace std;
long long a[1010],lena,b[1010],lenb,ans[1010],lenan;
int bb;
void read(long long *a,long long &lena){
	string str;
	cin>>str;
	lena=str.length();
	for(int i=0;i<lena;i++){
		a[i]=str[i]-'0';
	}reverse(a,a+lena);
}
int main(){
	char c;
	cin>>c;
	read(a,lena);
	
	if(c=='+'){
		read(b,lenb);
		lenan=max(lena,lenb);
		for(int i=0;i<lenan;i++){
			ans[i]=a[i]+b[i];
		}for(int i=0;i<lenan;i++){
			if(ans[i]>9){
				ans[i]-=10;
				ans[i+1]++;
			}
		}if(ans[lenan]>0){
			lenan++;
		}
		for(int i=lenan-1;i>=0;i--){
			cout<<ans[i];
		}return 0;
	}else if(c=='*'){
		cin>>bb;
		lenan=lena+10;
		for(int i=0;i<lena;i++){
			ans[i]=a[i]*bb;
		}for(int i=0;i<lenan;i++){
			if(ans[i]>9){
				ans[i+1]+=ans[i]/10;
				ans[i]%=10;
			}
		}while(ans[lenan-1]==0){
			lenan--;
		}for(int i=lenan-1;i>=0;i--){
					cout<<ans[i];
				}return 0;
	}else if(c=='-'){
		
	}
}
