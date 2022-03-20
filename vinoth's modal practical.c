#include <stdio.h>
#include<stdlib.h>
#define sort(arr, n){\
    int i,j;\
    for(i=0;i<n;i++){\
        for(j=i+i;j<n;j++){\
            if(arr[i]>arr[j]){\
                int temp = arr[i];\
                arr[i] = arr[j];\
                arr[j] = temp;\
            }\
        }\
    }\
}
int main()
{ int n, h, cnt=0,i;
scanf("%d%d",&n,&h);
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
sort(arr,n);
int ans = 0;
i=0;
while((cnt+=arr[i])<=h){
        ans++;
    i++;
}
printf("%d",ans);
	return 0;
}
