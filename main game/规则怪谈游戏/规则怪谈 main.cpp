//定义头文件
#include<iostream>
#include <chrono>
#include <thread>
#include <unistd.h>//这个我Mac我这么写，你们windows用cstdlib就行啦
using namespace std;
int user;
int main(){
    cout<<"欢迎来到NIHAOPlay-规则怪谈"<<endl;
    cout<<"您要干什么 1.商店（开发中） 2.开始游戏"<<endl;
//最近你好在构思咋写外挂
    cin>>user;
//shi山代码
    if(user==1){
        cout<<"你好正在写游戏，现在不写这个"<<endl;
    }
    if(user==2){
        while(true){
            cout<<"游戏开始 game looading..."<<endl;
            cout<<"你醒来，发现桌子上有一张纸条，你要打开吗 1.开 2.不开"<<endl;
            cin>>user;
            if(user==2){
                cout<<"规则里有，必须打开，违反规则将会在5秒后被抹杀，请等待5秒后的s时间..."<<endl;
                this_thread::sleep_for(chrono::seconds(5));
                cout<<"你s了，快等待你好开发完商店后买复活机会吧... 或者重新开始？"<<endl;
                cout<<"广告（每次s时都有）：https://githubfast.com/zhiziqixingdeng"<<endl;
                break;
            }
            if(user==1){
                cout<<"[1.请在上午9点时喂猫]"<<endl;
                cout<<"[2.必须打开本纸条]"<<endl;
                cout<<"[3.更多规则你好构思中，请等待]"<<endl;
                cout<<"温馨提示 是否清屏（只有一个哦）1.清屏 除了1外的其他数字就是继续运行awa"<<endl;
                cin>>user;
                if(user==1){
                    system("clear");//我Mac的写法，你们windows就用system("cls")就行
                    cout<<"你真傻，待会规则忘记了可别来找你好"<<endl;
                }
            }
            cout<<"现在你要看一下闹钟时间吗 1.要 2.不要"<<endl;
            cin>>user;
            if(user==1){
                cout<<"现在的时间是上午9点钟..."<<endl;
                cout<<"你要干什么？1.愣着 2.喂猫"<<endl;
                cin>>user;
                if(user==1){
                    cout<<"猫咪扑了过来。你被它弄s了。因为它是zhizi猫，不是普通猫"<<endl;
                    cout<<"请等待5秒后的s时间"<<endl;
                    this_thread::sleep_for(chrono::seconds(5));
                    cout<<"你s了，快等待你好开发完商店后买复活机会吧... 或者重新开始？"<<endl;
                    cout<<"广告（每次s时都有）：https://githubfast.com/zhiziqixingdeng/zhizi-game"<<endl;
                    break;
                }
                if(user==2){
                    cout<<"你喂了猫，游戏继续"<<endl;
                }
            }
            if(user==2){
                cout<<"你没有看闹钟，你不知道现在是上午9点，你没有喂猫"<<endl;
                cout<<"这时猫咪冲向了你，要把你咬死。你问它你这只猫怎么能杀人呢"<<endl;
                cout<<"原来这不是一只普通的猫，这时zhizi猫，它杀死了你"<<endl;
                this_thread::sleep_for(chrono::seconds(5));
                cout<<"你s了，快等待你好开发完商店后买复活机会吧... 或者重新开始？"<<endl;
                cout<<"广告（每次s时都有）：https://githubfast.com/zhiziqixingdeng/zhizi-game"<<endl;
                break;
            }            
        }
    }
}
