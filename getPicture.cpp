#include<stdio.h>
#include <iostream>

using namespace std;
/**
 * @explain:打印菱形图案
 * @arthor: dewey
 * @time :2018-09-25
 * @param : n  int 图案行数
 **/
int main (){
    int n,j,i;  /*i为行数,j为每行中的项数*/
    printf("（n为奇数）输入图案高度n:\n");
    scanf("%d",&n);
    if (n<=0||n%2==0)                        /*判断n输入正误*/
        printf("输入错误！");
    else{
        for(i=1;i<=n/2+1;i++){               /*打印上三角，（包括中间行）*/
            for(j=1;j<=n/2+i;j++){
                if(j>=n/2-i+2){
                    if(j==n/2+i || j==n/2-i+2 ){
                        printf(" *");
                    }else{
                        printf("  ");
                    }

                }else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        for(i=n/2;i>=1;i--) {         /*打印下三角，（不包括中间行）*/
            if(j>=n/2-i+2){            /*将i改为倒序，这样就不必再次考虑每行中项的打印，下个for循环可以直接复制上三角部分*/
                for(j=1;j<=n/2+i;j++){         /*这个for循环与上三角一致 */
                    if(j==n/2-i+2 || j==n/2+i){
                        printf(" *");
                    }else{
                        printf("  ");
                    }
                }
            }else
                printf("  ");
            printf("\n");
        }
        cout << endl;
        cout << endl;
        for(i=1;i<=n/2+1;i++){               /*打印箭头*/
            for(j=1;j<=n/2+i;j++){
                if(j>=n/2-i+2){
                    if(j==n/2+i || j==n/2-i+2 || j==n/2+1 ){
                        printf(" *");
                    }else{
                        printf("  ");
                    }

                }else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
return 0;
}
