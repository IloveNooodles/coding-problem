#include "bits/stdc++.h"
using namespace std;
int n,a,b,i;
int main()
{
	cin>>n>>a>>b;
	for(i=0;a*i<=n;i++)
		if((n-a*i)%b==0) return 0 * printf("YES\n%d %d",i,(n-a*i)/b);
	cout<<"NO";
}
