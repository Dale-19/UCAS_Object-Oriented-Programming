//by:Dale
#include       <map>
#include       <set>
#include     <cmath>
#include     <queue>
#include     <stack>
#include    <cstdio>
#include    <vector>
#include   <cstring>
#include  <iostream>
#include <algorithm>
using namespace std;
/********************************************/

const long long maxn=1e7+5;

class Type
{
	private:
		int num;
	public:
		Type()
		{
			
		};
		void set(int x)
		{
			num=x;
		}
		int get()
		{
			return num;
		}
		
	Type(int a) {num=a;}
	bool operator<(const Type& a) const
	{
		return num < a.num;
	}
};
priority_queue<Type> pq;

int main()
{
	for(int i=1;i<=5;i++)
	{
		Type x;
		x.set(i);
		pq.push(x);
	}
	for(int i=1;i<=5;i++)
	{
		Type x=pq.top();
		cout<<x.get()<<" ";
		pq.pop();
	}

	return 0;
}

