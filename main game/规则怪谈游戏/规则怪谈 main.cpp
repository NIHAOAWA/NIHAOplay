#include <iostream>
#include <chrono>
#include <thread>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
    int user;
    cout << "欢迎来到NIHAOPlay-规则怪谈" << endl;
    cout << "您要干什么? 1.商店（开发中） 2.开始游戏" << endl;
    cin >> user;

    if (user == 1) {
        cout << "你好正在写游戏，现在不写这个" << endl;
    }
    else if (user == 2) {
        cout << "游戏开始 game loading..." << endl;
        cout << "你醒来，发现桌子上有一张纸条，你要打开吗? 1.开 2.不开" << endl;
        cin >> user;

        if (user == 2) {
            cout << "规则里有，必须打开，违反规则将在5秒后被抹杀，请稍候..." << endl;
            this_thread::sleep_for(chrono::seconds(5));
            cout << "你跳过了规则，等待你好开发完商店后买复活机会吧，或者重新开始游戏？" << endl;
            cout << "广告（每次游戏结束都会出现）：https://githubfast.com/zhiziqixingdeng" << endl;
        }
        else if (user == 1) {
            cout << "[1.请在上午9点时喂猫]" << endl;
            cout << "[2.必须打开本纸条]" << endl;
            cout << "[3.更多规则正在构思中，请等待]" << endl;
            
            cout << "温馨提示 是否清屏（只有一个哦）1.清屏 除了1外的其他数字表示继续运行" << endl;
            cin >> user;
            
            if (user == 1) {
                #ifdef _WIN32
                    system("cls");
                #else
                    system("clear");
                #endif
            }

            cout << "现在你要看一下闹钟时间吗? 1.要 2.不要" << endl;
            cin >> user;

            if (user == 1) {
                cout << "现在的时间是上午9点钟..." << endl;
                cout << "你要干什么？1.愣着 2.喂猫" << endl;
                cin >> user;

                if (user == 1) {
                    cout << "猫咪扑过来了。你被它攻击了，因为它是zhizi猫，不是普通猫" << endl;
                    cout << "请等待5秒后的时间" << endl;
                    this_thread::sleep_for(chrono::seconds(5));
                    cout << "你死了，快等待你好开发完商店后买复活机会吧，或者重新开始游戏？" << endl;
                    cout << "广告（每次游戏结束都会出现）：https://githubfast.com/zhiziqixingdeng/zhizi-game" << endl;
                }
                else if (user == 2) {
                    cout << "你喂了猫，游戏继续" << endl;
                    cout << "这时，电话响了起来" << endl;
                    cout << "他说这有一份高薪工作，你要去吗？1.去 2.不去" << endl;
                    cin >> user;

                    if (user == 1) {
                        cout << "你死了" << endl;
                        this_thread::sleep_for(chrono::seconds(5));
                        cout << "公益广告：他们是缅北诈骗犯，防诈骗从我做起" << endl;
                    }
                }
            }
            else if (user == 2) {
                cout << "你没有看闹钟，你不知道现在是上午9点，你没有喂猫" << endl;
                cout << "这时猫咪冲向了你，要把你咬死。你问它你这只猫怎么能杀人呢" << endl;
                cout << "原来这不是一只普通的猫，这是zhizi猫，它将你杀死了" << endl;
                this_thread::sleep_for(chrono::seconds(5));
                cout << "你死了，快等待你好开发完商店后买复活机会吧，或者重新开始游戏？" << endl;
                cout << "广告（每次游戏结束都会出现）：https://githubfast.com/zhiziqixingdeng/zhizi-game" << endl;
            }
        }
    }

    return 0;
}
