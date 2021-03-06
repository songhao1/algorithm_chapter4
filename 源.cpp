#define _CRT_SECURE_NO_WARNINGS

////P236
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int a[6] = { 9,4,2,5,6,-1 };
//
//	sort(a, a + 4);//将a[0]-a[3]从小到大排序
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	sort(a, a + 6);
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


////P236
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	double a[] = { 1.4,-2.1,9 };
//	sort(a, a + 3);
//	for (int i = 0; i < 3; i++) {
//		printf("%.1f ", a[i]);
//	}
//	return 0;
//}


////P236
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	char c[] = { 'T','W','A','K' };
//	sort(c, c + 4);
//	for (int i = 0; i < 4; i++) {
//		printf("%c ", c[i]);
//	}
//	return 0;
//}


////P237
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	int a[] = { 3,1,4,2 };
//	sort(a, a + 4, cmp);
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


////P239
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	int x, y;
//}ssd[10];
//
//bool cmp(node a, node b) {
//	return a.x > b.x;
//}
//
//int main() {
//	ssd[0].x = 2;
//	ssd[0].y = 2;
//
//	ssd[1].x = 1;
//	ssd[1].y = 3;
//
//	ssd[2].x = 3;
//	ssd[2].y = 1;
//
//	sort(ssd, ssd + 3, cmp);
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d %d\n", ssd[i].x, ssd[i].y);
//	}
//	return 0;
//}


////P240
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//struct node {
//	int x, y;
//}ssd[10];
//
//bool cmp(node a, node b) {
//	if (a.x != b.x) return a.x > b.x;
//	else return a.y < b.y;
//}
//
//int main() {
//	ssd[0].x = 2;
//	ssd[0].y = 2;
//
//	ssd[1].x = 1;
//	ssd[1].y = 3;
//
//	ssd[2].x = 2;
//	ssd[2].y = 1;
//
//	sort(ssd, ssd + 3, cmp);
//
//	for (int i = 0; i < 3; i++) {
//		printf("%d %d\n", ssd[i].x, ssd[i].y);
//	}
//	return 0;
//}


////P241
//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//bool cmp(int a, int b) {
//	return a > b;
//}
//
//int main() {
//	vector<int> vi;
//	vi.push_back(3);
//	vi.push_back(1);
//	vi.push_back(2);
//	sort(vi.begin(), vi.end(), cmp);
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", vi[i]);
//	}
//	return 0;
//}


////P241
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	string str[3] = { "bbbb","cc","aaa" };
//	sort(str, str + 3);
//	for (int i = 0; i < 3; i++) {
//		cout << str[i] << endl;
//	}
//	return 0;
//}


////P242
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//bool cmp(string str1, string str2) {
//	return str1.length() < str2.length();//按string的长度从小到大排序
//}
//
//int main() {
//	string str[3] = { "bbbb","cc","aaa" };
//	sort(str, str + 3, cmp);
//	for (int i = 0; i < 3; i++) {
//		cout << str[i] << endl;
//	}
//	return 0;
//}


////P103
////PAT A1025
//#include<cstdio>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//
//struct Student {
//	char id[15];	//准考证号
//	int score;	//分数
//	int location_number;	//考场号
//	int local_rank;	//考场内排名
//}stu[30010];
//
//bool cmp(Student a, Student b) {
//	if (a.score != b.score) return a.score > b.score;	//先按分数从高到低排序
//	else return strcmp(a.id, b.id) < 0;	//分数相同按准考证号从小到大排序
//}
//
//int main() {
//	int n, k, num = 0;	//num为总考生数
//	scanf("%d", &n);	//n为考场数
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &k);	//该考场内人数
//		for (int j = 0; j < k; j++) {
//			scanf("%s %d", stu[num].id, &stu[num].score);
//			stu[num].location_number = i;	//该考生的考场号为i
//			num++;	//总考生数加1
//		}
//
//		sort(stu + num - k, stu + num, cmp);	//将该考场的考生排序
//		stu[num - k].local_rank = 1;	//该考场第1名的local_rank记为1
//
//		for (int j = num - k + 1; j < num; j++) {	//对该考场剩余的考生
//			if (stu[j].score == stu[j - 1].score) {	//如果与前一位考生同分,local_rank也相同
//				stu[j].local_rank = stu[j - 1].local_rank;
//			}
//			else {	//如果与前一位考生不同分,local_rank为该考生前的人数
//				stu[j].local_rank = j + 1 - (num - k);
//			}
//		}
//	}
//
//	printf("%d\n", num);	//输出总考生数
//	sort(stu, stu + num, cmp);	//将所有考生排序
//	int r = 1;	//当前考生的排名
//
//	for (int i = 0; i < num; i++) {
//		if (i > 0 && stu[i].score != stu[i - 1].score) {
//			r = i + 1;	//当前考生与上一个考生分数不同时,让r更新为人数+1
//		}
//		printf("%s ", stu[i].id);
//		printf("%d %d %d\n", r, stu[i].location_number, stu[i].local_rank);
//	}
//	return 0;
//}


////P107
//#include<cstdio>
//const int maxn = 100010;
//bool hashTable[maxn] = { false };
//
//int main() {
//	int n, m, x;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &x);
//		hashTable[x] = true;	//数字x出现过
//	}
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &x);
//		if (hashTable[x] == true) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}


////P107
//#include<cstdio>
//const int maxn = 100010;
//int hashTable[maxn] = { 0 };
//
//int main() {
//	int n, m, x;
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &x);
//		hashTable[x]++;
//	}
//
//	for (int i = 0; i < m; i++) {
//		scanf("%d", &x);
//		printf("%d\n", hashTable[x]);
//	}
//
//	return 0;
//}


////P112
//#include<cstdio>
//int F(int n) {
//	if (n == 0) return 1;	//当到达递归边界F(0)时,返回F(0)==1
//	else return F(n - 1) * n;	//没有到达递归边界时,使用递归式递归下去
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", F(n));
//
//	return 0;
//}


////P113
//#include<cstdio>
//int F(int n) {
//	if (n == 0 || n == 1) return 1;
//	else return F(n - 1) + F(n - 2);
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", F(n));
//
//	return 0;
//}


////P115
//#include<cstdio>
//const int maxn = 11;
////P为当前排列,hashTable记录整数x是否已经在P中
//int n, P[maxn], hashTable[maxn] = { false };
////当前处理排列的第index号位
//void generateP(int index) {
//	if (index == n + 1) {
//		for (int i = 1; i <= n; i++) {
//			printf("%d", P[i]);
//		}
//		printf("\n");
//		return;
//	}
//
//	for (int x = 1; x <= n; x++) {
//		if (hashTable[x] == false) {
//			P[index] = x;
//			hashTable[x] = true;
//			generateP(index + 1);
//			hashTable[x] = false;
//		}
//	}
//}
//
//int main() {
//	n = 4;
//	generateP(1);
//
//	return 0;
//}


////P118
////PAT B1020
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//
//struct mooncake {
//	double store;	//库存量
//	double sell;	//总售价
//	double price;	//单价
//}cake[1010];
//
//bool cmp(mooncake a, mooncake b) {	//按单价从高到低排序
//	return a.price > b.price;
//}
//
//int main() {
//	int n;
//	double D;
//	scanf("%d%lf", &n, &D);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%lf", &cake[i].store);
//	}
//
//	for (int i = 0; i < n; i++) {
//		scanf("%lf", &cake[i].sell);
//		cake[i].price = cake[i].sell / cake[i].store;	//计算单价
//	}
//
//	sort(cake, cake + n, cmp);	//按单价从高到低排序
//	double ans = 0;	//收益
//	for (int i = 0; i < n; i++) {
//		if (cake[i].store <= D) {	//如果需求量高于月饼库存量
//			D -= cake[i].store;	//第i种月饼全部卖出
//			ans += cake[i].sell;
//		}
//		else {	//如果月饼库存量高于需求量
//			ans += cake[i].price * D;	//只卖出剩余需求量的月饼
//			break;
//		}
//	}
//
//	printf("%.2f\n", ans);
//
//	return 0;
//}


////P121
////PAT B1023
//#include<cstdio>
//int main() {
//	int count[10];	//记录数字0-9的个数
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &count[i]);
//	}
//
//	for (int i = 1; i < 10; i++) {	//从1-9中选择count不为0的最小的数字
//		if (count[i] > 0) {
//			printf("%d", i);
//			count[i]--;
//			break;	//找到一个之后就中断
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {	//从0-9输出对应个数的数字
//		for (int j = 0; j < count[i]; j++) {
//			printf("%d", i);
//		}
//	}
//
//	return 0;
//}


////P122
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//
//const int maxn = 110;
//
//struct Inteval {
//	int x, y;	//开区间左右端点
//}I[maxn];
//
//bool cmp(Inteval a, Inteval b) {
//	if (a.x != b.x) return a.x > b.x;	//先按左端点从大到小排序
//	else return a.y < b.y;	//左端点相同的按右端点从小到大排序
//}
//
//int main() {
//	int n;
//	while (scanf("%d", &n), n != 0) {
//		for (int i = 0; i < n; i++) {
//			scanf("%d%d", &I[i].x, &I[i].y);
//		}
//
//		sort(I, I + n, cmp);	//按区间排序
//		//ans记录不相交区间个数,lastX记录上一个被选中区间的左端点
//		int ans = 1, lastX = I[0].x;
//		for (int i = 1; i < n; i++) {
//			if (I[i].y <= lastX) {	//如果该区间右端点在lastX左边
//				lastX = I[i].x;	//以I[i]作为新选中的区间
//				ans++;	//不相交区间个数加1
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}


////P126
//#include<cstdio>
////A[]为严格递增序列,left为二分下界,right为二分上界,x为欲查询的数
////二分区间为左闭右闭的[left,right],传入的初值为[0,n-1]
//int binarySearch(int A[], int left, int right, int x) {
//	int mid;	//mid为left和right的中点
//	while (left <= right) {	//如果left>right就没办法形成闭区间了
//		mid = (left + right) / 2;	//取中点
//		if (A[mid] == x) return mid;	//找到x,返回下标
//		else if (A[mid] > x) {	//中间的数大于x
//			right = mid - 1;	//往左子区间[left,mid-1]查找
//		}
//		else {	//中间的数小于x
//			left = mid + 1;	//往右子区间[mid+1,right]查找
//		}
//	}
//
//	return -1;	//查找失败,返回-1
//}
//
//int main() {
//	const int n = 10;
//	int A[n] = { 1,3,4,6,7,8,10,11,12,15 };
//	printf("%d %d\n", binarySearch(A, 0, n - 1, 6), binarySearch(A, 0, n - 1, 9));
//
//	return 0;
//}