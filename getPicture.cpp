#include<stdio.h>
#include <iostream>

using namespace std;
/**
 * @explain:��ӡ����ͼ��
 * @arthor: dewey
 * @time :2018-09-25
 * @param : n  int ͼ������
 **/
int main (){
    int n,j,i;  /*iΪ����,jΪÿ���е�����*/
    printf("��nΪ����������ͼ���߶�n:\n");
    scanf("%d",&n);
    if (n<=0||n%2==0)                        /*�ж�n��������*/
        printf("�������");
    else{
        for(i=1;i<=n/2+1;i++){               /*��ӡ�����ǣ��������м��У�*/
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
        for(i=n/2;i>=1;i--) {         /*��ӡ�����ǣ����������м��У�*/
            if(j>=n/2-i+2){            /*��i��Ϊ���������Ͳ����ٴο���ÿ������Ĵ�ӡ���¸�forѭ������ֱ�Ӹ��������ǲ���*/
                for(j=1;j<=n/2+i;j++){         /*���forѭ����������һ�� */
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
        for(i=1;i<=n/2+1;i++){               /*��ӡ��ͷ*/
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
