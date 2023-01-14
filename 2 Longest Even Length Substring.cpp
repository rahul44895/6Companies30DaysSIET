#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    int m=0;
	    for(int x=0;x<str.length()-1;x++){
	        int a=x,b=x+1;
	        int s1=0,s2=0;
	        while(a>=0 && b<str.length()){
	            s1+=str[a]-'0';
	            s2+=str[b]-'0';
	            if(s1==s2){
	                m=max(m, b-a+1);
	            }
	            a--;
	            b++;
	        }
	    }
	    cout<<m<<endl;
	}
	return 0;
}