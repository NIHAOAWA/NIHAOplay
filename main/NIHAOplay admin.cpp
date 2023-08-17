#include<iostream>
#include<cstdio>
using namespace std;
int adminspeak,more;
int adminastor;
int admin_user;
int specialthank;
int friendlist;
int main(){
	cout<<"2023 NIHAOplay 1.0.0版本后台管理站长系统。欢迎站长到访"<<endl;
	cout<<"请问站长有何贵干1.查看更新日志 2.查看更多信息 3.系统管理(adminastor)4.版权协议 5.代码贡献者 6.友情链接"<<endl;
    cout<<"注意事项：请牢记版权协议谨防用户侵权！！！"<<endl;
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
            cout<<"用户：report"<<endl;
        if(more==2){
            cout<<"@2023 NIHAOplay 1.0.0"<<endl;
            cout<<"已是最新版本"<<endl;
            }
        } 
    } 
    if(adminspeak==3){
        cout<<"站长命令 1.lock 2.update"<<endl;
        if(adminastor==1){
            cout<<"站长系统提示：如您想锁定游戏，请在GitHub平台上发布发布锁定代码"<<endl;
        }
        if(adminastor==2){
            cout<<"站长，欢迎更新NIHAOplay"<<endl;
            cout<<"您是要更新什么1.用户端 2.站长系统"<<endl;
            cin>>admin_user;
            if(admin_user==1){
                cout<<"请在文件夹内找到NIHAOplay，并记住更新完成后将最新版发布到GitHub"<<endl;
            }
            if(admin_user==1){
                cout<<"请在文件夹内找到NIHAOplay admin，并记住更新完成后将最新版发布到GitHub"<<endl;
            }
        }
    }
    if(adminspeak==4){
        cout<<"版权提示：本产品本项目许可证为 Apache-2.0，如果用户要使用或改编，请在首页明确标注“本网站基于NIHAOplay”，注意要注明本仓库的链接"<<endl;
    }
    if(adminspeak==5){
        cout<<"代码贡献者：你好 是否查看查看特殊感谢？1.是2.否"<<endl;
        cin>>specialthank;
        if(specialthank==1){
            cout<<"PiationESL与质子对本产品提供了支持，感谢他们！"<<endl;
        }
        if(specialthank==2){
            cout<<"好的，本系统会完全遵照于您-站长的决定"<<endl;
        }
    }
    if(adminspeak==6){
        cout<<"友情链接由于牵涉其他链接 所以系统在这里跳转提示是否查看？1.查看 2.不查看"<<endl;
        cin>>friendlist;
        if(friendlist==1){
            cout<<"友情链接"<<endl;
            cout<<"你好的GitHub地址：https://github.com/NIHAOAWA"<<endl;
            cout<<"PiationESL的GitHub地址：https://github.com/thepiationesl"<<endl;
            cout<<"质子的GitHub地址：https://github.com/zhiziqixingdeng"<<endl;
        }
        if(friendlist==2){
            cout<<"好的，我将继续遵照您-站长的意愿，您的意愿是本系统服务的宗旨"<<endl;
        }
    }
}
