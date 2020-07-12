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