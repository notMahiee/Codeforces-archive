#include <stdio.h>
#include <math.h>

int main()
{
	int T;
	scanf("%d", &T);
	while (T--){
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		long long sum = 0;
		for (int i = 0; i < n; i++){
			sum += a[i];
		}
		long long s = round(sqrt(sum*1.0));
		if (s*s == sum){
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;
}