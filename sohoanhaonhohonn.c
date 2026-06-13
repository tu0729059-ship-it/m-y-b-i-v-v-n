#include <stdio.h>
int sohoanhao(int k){
    if(k<6)
    return 0;
    int tong = 1;
    for(int i =2;i*i<k;i++){
        if(k%i==0)(
            tong+=i;
            tong += k/i;
            )
        if(i*i == k)
        tong += i;
    }
    return tong == k;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int flag = 0;
    for(int = 1;i<=n;i++){
        if(sohoanhao(i)){
            if(flag ==1)
            printf(" ");
            printf("%d",i);
        flag = 1;
        }
        
    }
    printf("\n");
    return 0;
}
