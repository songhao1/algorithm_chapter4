#define _CRT_SECURE_NO_WARNINGS

////P236
//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//
//int main() {
//	int a[6] = { 9,4,2,5,6,-1 };
//
//	sort(a, a + 4);//��a[0]-a[3]��С��������
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
//	return str1.length() < str2.length();//��string�ĳ��ȴ�С��������
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
//	char id[15];	//׼��֤��
//	int score;	//����
//	int location_number;	//������
//	int local_rank;	//����������
//}stu[30010];
//
//bool cmp(Student a, Student b) {
//	if (a.score != b.score) return a.score > b.score;	//�Ȱ������Ӹߵ�������
//	else return strcmp(a.id, b.id) < 0;	//������ͬ��׼��֤�Ŵ�С��������
//}
//
//int main() {
//	int n, k, num = 0;	//numΪ�ܿ�����
//	scanf("%d", &n);	//nΪ������
//	for (int i = 1; i <= n; i++) {
//		scanf("%d", &k);	//�ÿ���������
//		for (int j = 0; j < k; j++) {
//			scanf("%s %d", stu[num].id, &stu[num].score);
//			stu[num].location_number = i;	//�ÿ����Ŀ�����Ϊi
//			num++;	//�ܿ�������1
//		}
//
//		sort(stu + num - k, stu + num, cmp);	//���ÿ����Ŀ�������
//		stu[num - k].local_rank = 1;	//�ÿ�����1����local_rank��Ϊ1
//
//		for (int j = num - k + 1; j < num; j++) {	//�Ըÿ���ʣ��Ŀ���
//			if (stu[j].score == stu[j - 1].score) {	//�����ǰһλ����ͬ��,local_rankҲ��ͬ
//				stu[j].local_rank = stu[j - 1].local_rank;
//			}
//			else {	//�����ǰһλ������ͬ��,local_rankΪ�ÿ���ǰ������
//				stu[j].local_rank = j + 1 - (num - k);
//			}
//		}
//	}
//
//	printf("%d\n", num);	//����ܿ�����
//	sort(stu, stu + num, cmp);	//�����п�������
//	int r = 1;	//��ǰ����������
//
//	for (int i = 0; i < num; i++) {
//		if (i > 0 && stu[i].score != stu[i - 1].score) {
//			r = i + 1;	//��ǰ��������һ������������ͬʱ,��r����Ϊ����+1
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
//		hashTable[x] = true;	//����x���ֹ�
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
//	if (n == 0) return 1;	//������ݹ�߽�F(0)ʱ,����F(0)==1
//	else return F(n - 1) * n;	//û�е���ݹ�߽�ʱ,ʹ�õݹ�ʽ�ݹ���ȥ
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
////PΪ��ǰ����,hashTable��¼����x�Ƿ��Ѿ���P��
//int n, P[maxn], hashTable[maxn] = { false };
////��ǰ�������еĵ�index��λ
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
//	double store;	//�����
//	double sell;	//���ۼ�
//	double price;	//����
//}cake[1010];
//
//bool cmp(mooncake a, mooncake b) {	//�����۴Ӹߵ�������
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
//		cake[i].price = cake[i].sell / cake[i].store;	//���㵥��
//	}
//
//	sort(cake, cake + n, cmp);	//�����۴Ӹߵ�������
//	double ans = 0;	//����
//	for (int i = 0; i < n; i++) {
//		if (cake[i].store <= D) {	//��������������±������
//			D -= cake[i].store;	//��i���±�ȫ������
//			ans += cake[i].sell;
//		}
//		else {	//����±����������������
//			ans += cake[i].price * D;	//ֻ����ʣ�����������±�
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
//	int count[10];	//��¼����0-9�ĸ���
//
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &count[i]);
//	}
//
//	for (int i = 1; i < 10; i++) {	//��1-9��ѡ��count��Ϊ0����С������
//		if (count[i] > 0) {
//			printf("%d", i);
//			count[i]--;
//			break;	//�ҵ�һ��֮����ж�
//		}
//	}
//
//	for (int i = 0; i < 10; i++) {	//��0-9�����Ӧ����������
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
//	int x, y;	//���������Ҷ˵�
//}I[maxn];
//
//bool cmp(Inteval a, Inteval b) {
//	if (a.x != b.x) return a.x > b.x;	//�Ȱ���˵�Ӵ�С����
//	else return a.y < b.y;	//��˵���ͬ�İ��Ҷ˵��С��������
//}
//
//int main() {
//	int n;
//	while (scanf("%d", &n), n != 0) {
//		for (int i = 0; i < n; i++) {
//			scanf("%d%d", &I[i].x, &I[i].y);
//		}
//
//		sort(I, I + n, cmp);	//����������
//		//ans��¼���ཻ�������,lastX��¼��һ����ѡ���������˵�
//		int ans = 1, lastX = I[0].x;
//		for (int i = 1; i < n; i++) {
//			if (I[i].y <= lastX) {	//����������Ҷ˵���lastX���
//				lastX = I[i].x;	//��I[i]��Ϊ��ѡ�е�����
//				ans++;	//���ཻ���������1
//			}
//		}
//		printf("%d\n", ans);
//	}
//	return 0;
//}


////P126
//#include<cstdio>
////A[]Ϊ�ϸ��������,leftΪ�����½�,rightΪ�����Ͻ�,xΪ����ѯ����
////��������Ϊ����ұյ�[left,right],����ĳ�ֵΪ[0,n-1]
//int binarySearch(int A[], int left, int right, int x) {
//	int mid;	//midΪleft��right���е�
//	while (left <= right) {	//���left>right��û�취�γɱ�������
//		mid = (left + right) / 2;	//ȡ�е�
//		if (A[mid] == x) return mid;	//�ҵ�x,�����±�
//		else if (A[mid] > x) {	//�м��������x
//			right = mid - 1;	//����������[left,mid-1]����
//		}
//		else {	//�м����С��x
//			left = mid + 1;	//����������[mid+1,right]����
//		}
//	}
//
//	return -1;	//����ʧ��,����-1
//}
//
//int main() {
//	const int n = 10;
//	int A[n] = { 1,3,4,6,7,8,10,11,12,15 };
//	printf("%d %d\n", binarySearch(A, 0, n - 1, 6), binarySearch(A, 0, n - 1, 9));
//
//	return 0;
//}