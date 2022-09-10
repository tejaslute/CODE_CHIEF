/*Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 44 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters \{a, e, i, o, u\}{a,e,i,o,u} and the consonants are the other 2121 characters.*/
#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t,i,j;
	cin>>t;
	for(i=1;i<=t;i++){
	    int n,count=0;
	    string s;
	    cin>>n;
	    cin>>s;
	    
	    for(j=0;j<n;j++){
	        
	         
	        if(s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'||s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
	            count=0;
	        }
	        else{
	            count+=1;
	       
	        }
	        if(count>=4){
	            break;
	        }
	    
	    }
	    
	    if(count>=4){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
