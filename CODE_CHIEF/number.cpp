// Ishaan has been given a task by his teacher. He needs to find the Nth term of a series. His teacher gives him some examples to help him out (Refer examples below). He is a bit weak in pattern searching so to help him his teacher told him that the Nth term is related to prime numbers. The Nth term is the difference of N and the closest prime number to N. Help him find the Nth term for a given N.


bool isprime(int n)
	{
	    for(int i=2;i<n;i++)
	    {
	        if(n%i==0)
	        {
	            return false;
	        }
	    }
	    return true;
	}
		int NthTerm(int N){
		    
		    vector<int>v;
		    for(int i=2;i<2*N;i++)
		    {
		        if(isprime(i))
		        {
		            v.push_back(i);
		        }
		        
		    }
		    for(int i=0;i<v.size();i++)
		    {
		        if(v[i]>=N)
		        {
		            return abs( v[i]-N);
		        }
		        
		        
		    }
		    return -1;
		}
