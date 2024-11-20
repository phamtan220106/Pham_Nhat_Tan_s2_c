#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("tinh_tong_tich_thuong_hieu_hai_so_nguyen\n");
int a,b,tong,tich,hieu;//khai bao bien
float thuong;
    printf("nhap_a\n");
    scanf("%d",&a);
    printf("nhap_b\n");
    scanf("%d",&b);
    tong=a+b;
    hieu=a-b;
    tich=a*b;
    if(b==0){
            printf("khong_the_chia_cho_0: %f\n");
            }else{
                thuong =(float)a/b;
                printf("thuong_cua_a_va_b_la: %f\n",thuong);
                };
    printf("tong_cua_a_va_b_la: %d\n",tong);
    printf("tich_cua_a_va_b_la: %d\n",tich);
    printf("hieu_cua_a_va_b_la: %d\n",hieu);
    printf("\n");
    printf("pham_nhat_tan_s2_ex3\n");
    printf("Hello world!\n");
return 0;
}
