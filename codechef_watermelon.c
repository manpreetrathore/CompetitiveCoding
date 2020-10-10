#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,x,sum=0;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    sum=0;
	    for(i=0;i<n;i++){
            scanf("%d",&x);
            sum = sum+x;
	    }
	    if(sum>=0)
	        printf("YES\n");
	    else 
	        printf("NO\n");
	}
	return 0;
}

