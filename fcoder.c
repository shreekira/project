#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SCORE 1001
 
int bull[MAX_SCORE];
int coder[MAX_SCORE];
int prev[MAX_SCORE];
 
int main() {
 
	int n;
	
	scanf("%d",&n);
	int tmp;
	
	for(int i = 0; i < n; i++){
	    scanf("%d", &tmp);
	    bull[tmp]++;
	    coder[tmp]++;
	}
	
	int cur;
	tmp = -1;
	for(int i = 1; i <MAX_SCORE ; i++){
	    if(coder[i] != 0){
	        prev[i] = tmp;
	        cur = tmp;
	        tmp = i;
	        
	        while(cur != -1 && bull[i] != 0){
	            
	            if(bull[i] >= coder[cur]){
	                bull[i] -= coder[cur];
	                coder[cur] = 0;
	                prev[i] = prev[cur];
	            }
	            else{
	                coder[cur] -= bull[i];
	                bull[i] = 0;
	            }
	            
	            cur = prev[cur];
	        }
	        
	    }
	}
	int sum;
	
	cur= tmp;
	while(cur != -1){
	    sum += cur * coder[cur];
	    cur = prev[cur];
	}
	
	
	printf("%d",sum);
	
	return 0;
 
}
 
