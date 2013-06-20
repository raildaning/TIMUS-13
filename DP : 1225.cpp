#include <stdio.h>
#include <string.h>
using namespace std;

long long memo[45];

int main(){
    int N;
    scanf("%d",&N);
    
    memo[0]=0;
    memo[1]=2;
    for(int i=2;i<=45;i++)
        memo[i]=memo[i-1]+memo[i-2];
    printf("%lld\n",memo[N]);
    
}
