#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int T,COUNT,i;
    COUNT = 1;
    scanf("%d",&T);
    getchar();
    while(T-->0){
        char buf[51];
        gets(buf);
        for(i=0;i<strlen(buf);i++){
            if(buf[i]=='Z')buf[i]='A';
            else buf[i]++;
        }
        printf("String #%d\n",COUNT++);
        printf("%s\n",buf);
        printf("\n");
    }
    return 0;
}
