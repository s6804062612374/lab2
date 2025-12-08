#include <stdio.h>

int main() {
	int n1,n2,n3,n4,m,s;
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	m = ((n1>n2 && n1>n3 && n1>n4)? n1:(n2>n1 && n2>n3 && n2>n4)? n2:(n3>n1 && n3>n2 && n3>n4)? n3:n4);
	
	(n1<m && n1>s)? s=n1:0;
	(n2<m && n2>s)? s=n2:0;
	(n3<m && n3>s)? s=n3:0;
	(n4<m && n4>s)? s=n4:0;
	
	printf("%d",s);
}
