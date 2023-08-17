//NIHAOplay站长管理系统
//未完善，你好还正在编写中
#include<iostream>
#include<cstdio>
using namespace std;
int adminspeak,more;
int adminastor;
int main(){
	cout<<"2023 NIHAOplay 1.0.0版本后台管理系统。欢迎站长到访"<<endl;
	cout<<"请问站长有何贵干1.查看更新日志 2.查看更多信息 3.系统管理(adminastor)"<<endl;
	cin>>adminspeak;
    if(adminspeak==1){
    	cout<<"@2023 NIHAOplay更新日志"<<endl;
    	cout<<"2023.8.16 该项目由你好提出"<<endl;
    	cout<<"2023.8.17 你好开始开发"<<endl;
    	cout<<"系统提示您：更改日志可在程序里更新"<<endl;
    }
    if(adminspeak==2){
    	cout<<"更多信息 请问您要看什么1. 系统权限 2.系统版本"<<endl;
        cin>>more;
        if(more==1){
            cout<<"NIHAOplay最新版系统权限"<<endl;
            cout<<"admin:stop,update"<<endl;
            cout<<"用户：report,game"<<endl;
        if(more==2){
            cout<<"@2023 NIHAOplay 1.0.0"<<endl;
            cout<<"已是最新版本"<<endl;
            }
        } 
    } 
    if(adminspeak==3){
        cout<<"站长命令 1.stop 2.update"<<endl;
    }
}
