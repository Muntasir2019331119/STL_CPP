#include<bits/stdc++.h>
using namespace std;
//if we use structure
struct node
{
	int x, y, z;

};
//comperator function(in general):
bool cmp(pair<int, int>a, pair<int, int>b)
{
	return a.second > b.second //if we use pair<string,int>p....bla bla
}
//comperator function(for structure)
bool cmp(node a, node b)
{
	if (a.x == b.x) //for x
	{
		if (a.y == b.y) //for y
		{
			return a.z > b.z;
		} return a.y > b.y;
	} return a.x > b.x;
}

int main()
{
	int m, k;

//data type:
	//pair <data_type1, data_type2> Pair_name;
	pair<int, int> a, b; //pair fast
	pair<int, pair< int, int> > pp;   {1, {2, 3}}
// 1=pp.first();
// 2=pp.second.first();
// 3=pp.second.second();
	pp = make_pair(1, {2, 3});
	vector<pair<int, int> >v;
	for (int i = 0; i < 5; i++)
	{
		cin >> m >> k;
		//v.push_back(make_pair(m,k));
		v.push_back({m, k});
	}

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << endl;

//sorting:
	cout << "after sorting " << endl;

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << endl;


//node:

	int n, k, a, b;
	vector<node> v;
	cin >> n;
	node p;
	for (int i = 0; i < n; ++i )
	{
		cin >> a >> b >> k;
		p.x = a, p.y = b, p.z = k;
		v.push_back(p);

	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < n; ++i )
	{
		cout << v[i].x << " " << v[i].y << " " << v[i].z << endl;
	}


}
