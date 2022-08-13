//Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

//Help chef find which type of doll is missing..
#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int t;
	cin>>t;
	while(t--)
	{
	    int n,i,count,j;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        count=0;;
	        for(j=0;j<n;j++)
	        {
	            if(arr[i]==arr[j])
	            {
	                count++;
	            }
	        }
	        if(count%2!=0)
	        {
	            cout<<arr[i]<<endl;
	            break;
	        }
	        
	    }
	}
	return 0;
}
