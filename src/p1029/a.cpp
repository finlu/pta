#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s1,s2;
	int len1,len2;
	bool flag[256]={false};//flag数组根据字符的ASCII来确定存储位置，从而筛选掉重复字符
	cin>>s1>>s2;
	len1=s1.length();
	len2=s2.length();
	for(int i=0;i<len2;i++){
		s2[i]=towupper(s2[i]);
		flag[s2[i]]=true;
	}
	for(int i=0;i<len1;i++){
		s1[i]=towupper(s1[i]);
		if(flag[s1[i]]==false)
			cout<<s1[i];
		flag[s1[i]]=true;
	}
	return 0;
}
