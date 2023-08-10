#include <stdio.h>
#include <assert.h>
int main(){
    FILE *p=fopen("generate.txt","wb");
    assert(p!=NULL);
    char a[6]="b bb\n";
    for(int i=0; i<10; i++){
        fwrite(a,5,1,p);
        a[0]++;
        a[2]++;
        a[3]++;
    }
    return 0;
}
