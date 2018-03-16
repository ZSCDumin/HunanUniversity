#include<iostream>
using namespace std;
int main()
{
	//第一题
	int i,a[4]={2,4,6,8},*pa;
	pa=a;
	for(int i=0;i<4;i++)
	{
		*pa*=*pa;
		printf("a[%d]=%d\n",i,*pa);
		pa++;
	}
}

5.输出"*"图案

#include<iostream>
using namespace std;

int main()
{
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= 2 * i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (int k = 0; k <= 4 - 2 * i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
int sum(int array[],int len);
int main()
{
	static int a[5]={1,2,3,4,5},result;
	result=sum(a,5);
	printf("result=%d\n",result);
}
int sum(int array[],int len)
{
	int sum=0;
	for(int i=0;i<len;i<++)
		sum=sum+array[i];
	return sum;
}

#include<iostream>
using namespace std;
int i=0;
int fun(int n)
{
	static int a=2; //只执行一次
	a++;
	return a+n;
}
int main()
{
	int k=5;
	{
		int i=2;
		k+=fun(i);
	}
	k+=fun(i);
	printf("k=%d\n",k);// k=14
}


void addsub(int m,int n)
{
	int temp=m;
	m=m*n;
	n=temp-n;
}



int main()
{
	int i,j,x=0;
	for(int i=0;i<2;i++)
	{
		x++;
		for(j=0;j<=3;j++)
		{
			if(j%2) continue;
			x++;
		}
		x++;
	}
	printf("x=%d\n",x);
}


int x=1,y=0,a=0,b=0;
switch(x)
{
	case 1:
	switch(y)
	{
		case 0:a++;break;
		case 1:b++;break;
	}
	case 2:a++;b++;break;
	case 3:a++;b++;
}
printf("a=%d,b=%d\n",a,b);



5、找最大最小值：
int max, min;
void findmax(int *p, int n)
{
	int *q;
	max = min = *p;
	for (q = p + 1; q < p + n; q++)
	if (*q > max)
		max = *q;
	else if (*q < min)
		min = *q;
}
int main()
{
	int a[10] = { 1, 2, 3, 9, 6, 3, 6, 7, 7, 8 };
	findmax(a, 10);
	cout << max << min;
}

/*结构体数据的处理*/
#include<iostream>
using namespace std;
#define LEN sizeof(struct Student)
struct Student
{
	long num;
	float score;
	struct Student *next;
};
int n;
struct Student* creat()
{
	struct Student *head;
	struct Student *p1, *p2;
	n = 0;
	p1 = p2 = (struct Student*)malloc(LEN);
	cin >> p1->num >> p1->score;
	head = NULL;
	while (p1->num != 0)
	{
		n = n + 1;
		if (n == 1)
			head = p1;
		else 
			p2->next = p1;
		p2 = p1;
		p1 = (struct Student *)malloc(LEN);
		cin >> p1->num >> p1->score;
	}
	p2->next = NULL;
	return(head);
}
void print(struct Student *head)
{
	struct Student *p;
	cout << n << endl;
	p = head;
	while (p != NULL){
		cout << p->num <<","<< p->score << endl;
		p = p->next;
	}
}
int main()
{
	struct Student *head;
	head = creat();
	print(head);
}

冒泡排序（升序）：//每一趟按顺序将数组的元素两个两个比较，最后依次将其放置在数组的末尾，即最大或最小的依次排在数组的开头或结尾。
void sort(int *a,int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (a[j]>a[j + 1])//改为<表示降序
			{
				int t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}

		}
	}
}

选择排序：//每趟找出最小的或最大的数依次与数组前n-1项交换
void sort(int array[], int n)
{
	int i, j, k, t;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}

插入排序：
void insertion_sort(int *a, int n)//a为数组，n为数组个数  
{
	int i, j, key;
	for (j = 1; j < n; j++) {
		key = a[j];
		i = j - 1;
		while (i >= 0 && a[i] > key) {
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
}

二分查找：
int binary_research(int arr[],int left,int right,int element)  
{  
    while(left<=right)  
    {     
        int mid = (left+right)/2;  
        if(arr[mid]>element)  
        {  
            right = mid - 1;  
        }  
        else if(arr[mid]<element)  
        {  
            left = mid + 1;  
        }  
        else   
        {  
            return mid;  
        }  
    }  
    return -1;  
}
3、
#include<iostream>
using namespace std;
int main()
{
	enum lang{A=1,B,C,D=6,E,F};//后面的元素自动加一
	cout << A << B << C << D << E << F;
}
4、
#include<stdio.h>
int main()
{
	FILE *f;
	f = fopen("a.txt","w");//覆盖写入
	fprintf(f,"abc");
	fclose(f);
}
5、
#include<iostream>
using namespace std;
int a = 5;
void fun(int b)
{
	static int a = 10;
	a += b++;
	printf("%d", a);

}
int main()
{
	int c = 20;
	fun(c);
	a += c++;
	printf("%d\n", a);
}

6、
#include<iostream>
using namespace std;

int main()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int b[3] = { 0 }, i, j;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			b[i] = b[i] + a[i][j] * a[j][i];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << " " << b[i];
	}

}

2014年考研真题

四、编程题

1、进制转换
void trans(int m, int k)
{
	int result[50];
	int n = 0;
	while (m > 0)
	{
		result[n++] = m%k;
		m /= k;
	}
	for (int i = n - 1; i >= 0; i--)
		printf("%d", result[i]);
}
2、
void fun(int a[], int b[], int n)
{
	for (int i = 0; i < 6; i++)
		b[i] = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 1 && a[i] <= 9)
			b[0]++;
		else if (a[i] >= 10 && a[i] <= 19)
			b[1]++;
		else if (a[i] >= 20 && a[i] <= 29)
			b[2]++;
		else if (a[i] >= 30 && a[i] <= 39)
			b[3]++;
		else if (a[i] >= 40 && a[i] <= 49)
			b[4]++;
		else if (a[i] > 50)
			b[5]++;
	}
	
}
3、求阶乘
double fact(int k)
{
	double result;
	if (k < 0)
		printf("n<0,data error!");
	else if (k == 0 || k == 1)
		result = 1;
	else
		result = fact(k - 1) * k;
	return result;
}

4、去除在s中不在t中的字符
void fun(char *s,char *t,char *u)
{
	int n=0;
	for (int i = 0; i < strlen(s); i++)
	{
		int flag = 0;
		for (int j = 0; j < strlen(t); j++)
		{
			if (s[i] == t[j])
				flag=1;
		}
		if (flag == 0)
		{
			u[n++] = s[i];
		}
	}
	u[n++] = '\0';
}

5、求最大公约数最小公倍数
int gcd(int a,int b)
{
	if(a<b)
	{
       int t;
       t=b;
       b=a;
       a=t;
	}
	while(( r = a % b )!= 0)
	{
		a=b;
		b=r;
	}
}
int lcd(int a,int b)
{
	return (a * b / gcd(a,b));
}
//判断素数
int prime(int n)
{
	if (n == 1)
		return 0;
	for (int i = 2; i*i <= n; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
//递归法将一个整数n转换成字符串,若是负数则人为的变成正数，在最前面输出"-"即可.
void convert(int n)
{
	int i;
	if((i=n/10)!=0)
	{
		convert(i);
	}
	putchar(n%10+'0');
	putchar(32);
}

//判断最长单词，P85
int longest(char string[])
{
	int len = 0, i, length = 0, flag = 1, place = 0, point; 
	for (i = 0; i < strlen(string); i++)
	{
		if (isalpha(string[i]))
		{
			if (flag)
			{
				point = i;
				flag = 0;
			}
			else
			{
				len++;
			}
		}
		else
		{
			flag = 1;
			if (len >= length)
			{
				length = len;
				place = point;
				len = 0;
			}
		}
	}
	return place;
}

//链表的相关操作：
(1)创建链表：
struct Student *creat(void)
//定义函数。此函数返回一个指向链表头的指针
{	struct Student *head;
	struct Student *p1,*p2;
	n=0;
	p1=p2=(struct Student*) malloc(LEN);  //开辟一个新单元
	scanf("%ld,%f",&p1->num,&p1->score);
	//输入第1个学生的学号和成绩
	head=NULL;
	while(p1->num!=0)
	{	n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(struct Student*)malloc(LEN);
		//开辟动态存储区，把起始地址赋给p1
		scanf("%ld,%f",&p1->num,&p1->score);
		//输入其他学生的学号和成绩
	}
	p2->next=NULL;
	return(head);
}
(2)输出链表：
void print(struct Student*head)	//定义print函数 
{	struct Student*p;			//在函数中定义struct Student类型的变量p
	printf("\nNow,These %d records are:\n",n);
	p=head;					//使p指向第1个结点
	if(head!=NULL)			//若不是空表
		do
		{	printf("%ld %5.1f\n",p->num,p->score);	//输出一个结点中的学号与成绩
			p=p->next;		//p指向下一个结点
		}while(p!=NULL);		//当p不是"空地址"
}
(3)查找链表：
int search(struct Student*head,int number)
{
	while(head)
	{
		if(head->num==number)
		{
			return 1;
		}
		head=head->next;
	}
	return 0;
}
(4)删除节点
struct student* del(struct student* head,int num)
{
	struct student*p1,*p2;
	if(head==NULL)
	{
		printf("List null.");
		return head;
	}
	p1=head;
	while(num!=p1->num&&p1->next)
	{
		p2=p1;
		p1=p1->next;
	}
	if(num==p1->num)
	{
		if(p1==head)
			head=p1->next;
		else 
			p2->next=p1->next;
		printf("delete: %d\n",num);
		free(p1);
	}
	else 
		printf("Not found.");
	return head;
}
(4)链表插入：
struct student* insert(struct student* head,struct student*ps)
{
  struct student *p1=head,*p2;
  if(head==NULL)//空链表
  {
	  head=ps;
	  ps->next=NULL;//ps作为头结点
  }
  else
  {
	  //查找要插入的位置
	  while(ps->num > p1->num && p1->next)
	  {
		 p2=p1;p1=p1->next;		 
	  }
	  
	  if(ps->num <= p1->num)//结束的第一种情况：找到了插入位置，且不是在末尾
	  {
		 if(head==p1) //若插入点在第一个位置
            head=ps;
		 else //插入点不在第一个位置
			p2->next=ps;
		 ps->next=p1;
	  }
	  else //插入位置在末尾
	  {
		 p1->next=ps;
		 ps->next=NULL;
	  }
  }
  return head;
}	



void main(){
	int n, max = 0;
	scanf("%d", &n);
	if (n % 11 == 0){
		printf("n=:%d\n", n);
	}
	else{
		FILE* fp = fopen("output.dat", "w+");
		if (fp == NULL){
			printf("file open failure!\n");
			return;
		}
		else{
			int num[4];
			for (int i = 0; i < 4; i++)
			{
				num[3 - i] = n % 10;
				n /= 10;
			}
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					for (int k = 0; k < 4; k++)
					{
						for (int p = 0; p < 4; p++)
						{
							if (i == j || i == k || i == p || j == k || j == p || k == p)
							{
								continue;
							}
							else
							{
								int temp = num[i] * 1000 + num[j] * 100 + num[k] * 10 + num[p] * 1;
								if (temp % 11 == 0)
								{
									if (max < temp)
										max = temp;
									fprintf(fp, "%d ", temp);
								}
							}
						}
					}
				}
			}
		}
		fclose(fp);
		printf("max=:%d\n", max);
	}
}
//选择法排序
#include<iostream>
using namespace std;
void func(int *a, int n)
{
	int i, m, t, k;
	for (i = 0; i < 2; i++)
	{
		m = i;
		for (k = m + 1; k < n; k++)
		    if (a[k]>a[m])
			    m = k;
		t = a[i];
		a[i] = a[m];
		a[m] = t;
	}
}
void main(){
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 2, 2, 0 };
	func(a, 10);
	cout << a[0] << a[1];
}


/*统计字符个数*/
void main(){
	char string[81];
	int num = 0, word = 0;
	char c;
	gets(string);
	for (int i = 0; (c = string[i]) != '\0'; i++)
	{
		if (c == ' ') word = 0;
		else if (word == 0)
		{
			word = 1;
			num++;
		}
	}
	printf("%d\n", num);
}
