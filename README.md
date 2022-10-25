# 2022cce
## <week06>
## 畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("i:%d¬P¬P\n",i);
    }
}
```
## 等腰三角形畫星星
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i, star=2*i-1;
        for(int k=0;k<space;k++) printf(" ");
        for(int k=0;k<star;k++) printf("*");
        printf("\n");
    }
}
```
##暴力迴圈法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    printf("ans: %d 可約分",ans);
}
```
## 輾轉相除法
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d", &a, &b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if( c==0) break;
        a=b;
        b=c;
    }
    printf("答案b: %d",b);
}
```
##week08
##質數判別
```cpp
    #include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數",n);
    else printf("%d 不好,不是質數",n);
}
```
##實習講解-[for2] 以*輸出直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
        if(k<=n-i) printf(" ");
        else printf("*");
        }
    printf("\n");
    }
}
```                             
##實習講解-[while2] 以*輸出直角三角形
```cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);

	int i=1;
	while(i<=n){
	int k=1;
	while(k<=n){
		if(k<=n-i) printf(" ");
		else printf("*");
		k++;
	}
	printf("\n");
	i++;
	}
}
```                  
