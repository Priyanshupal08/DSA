class Solution {
	public:
	int findXOR(int l, int r) {
		
		/* 
		    Must rember the trick:
		    
		    if n%4==0  then from XOR of 0 to n = n;
		       
		       n%4==1;  ans= 1
		       n%4==2;  ans= n+1
		       n%4==3;  ans= 0
		*/
		
		
		int x;
		if(r%4==0){
		    x=r;
		}
		else if(r%4==1){
		    x=1;
		}
		else if(r%4==2){
		    x=r+1;
		}
		else{
		    x=0;
		}
		
		
		int y;
		if((l-1)%4==0){
		    y=(l-1);
		}
		else if((l-1)%4==1){
		    y=1;
		}
		else if((l-1)%4==2){
		    y=l;
		}
		else{
		    y=0;
		}
		
		
		int ans=x^y;
		
		return ans;
		
	}
};
