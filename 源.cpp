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