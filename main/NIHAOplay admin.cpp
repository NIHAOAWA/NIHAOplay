#include<iostream>
using namespace std;
int adminspeak,more;
int main(){
	cout<<"2023 NIHAOplay 1.0.0版本后台管理系统。欢迎站长到访"<<endl;
	cout<<"请问站长有何贵干1.查看更新日志 2.系统管理，查看更多信息"<<endl;
	cin>>adminspeak;
    if(adminspeak==1){
    	cout<<"@2023 NIHAOplay更新日志"<<endl;
    	cout<<"2023.8.16 该项目由你好提出"<<endl;
    	cout<<"2023.8.17 你好开始开发"<<endl;
    	cout<<"系统提示您：改日可在程序里更新"<<endl;
    }
    if(adminspeak==2){
    	cout<<"更多信息 请问您要看什么1. 系统权限 2.系统版本"<<endl;    
    }
}
