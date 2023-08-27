#include <iostream>
#include <string>
using namespace std;

struct UserInput {
    int report;
    int sleepTime;
    int doorOpen;
    int doorOpenAtNight;
    int ignoreMom;
};

int main() {
    while (true) {
        cout << "欢迎来到怪谈规则游戏！" << endl;
        cout << "您是否现在使用报告功能？ 1.是  2.否" << endl;

        UserInput userInput;
        cin >> userInput.report;

        if (userInput.report == 1) {
            cout << "请提供报告的相关信息：" << endl;
            // 处理报告逻辑
        }

        cout << "游戏正在加载..." << endl;
        cout << "游戏开始！您被困在一个神秘的地方，周围一片黑暗。" << endl;
        cout << "您需要遵守以下规则才能生存下去：" << endl;
        cout << "1. 晚上 " << userInput.sleepTime << " 点前必须入睡" << endl;
        cout << "2. 不要给陌生人开门" << endl;
        cout << "3. 晚上睡觉时，不能打开房门" << endl;
        cout << "4. 如果晚上听到妈妈在叫你，不要理会" << endl;
        cout << "5. 您如想结束游戏，关闭窗口即可" << endl;

        UserInput userRules;
        userRules.sleepTime = 23;  
        userRules.doorOpen = 2;    
        userRules.doorOpenAtNight = 3;  
        userRules.ignoreMom = 4;   

        // 检查用户是否违反规则
        if (userRules.sleepTime >= 23) {
            cout << "您入睡时间违反规则！您已经死亡。游戏结束。" << endl;
            break;
        }

        if (userRules.doorOpen == 1) {
            cout << "您给陌生人开门违反规则！您已经死亡。游戏结束。" << endl;
            break;
        }

        if (userRules.doorOpenAtNight == 1) {
            cout << "您晚上打开房门违反规则！您已经死亡。游戏结束。" << endl;
            break;
        }

        if (userRules.ignoreMom == 1) {
            cout << "您忽略妈妈的叫声违反规则！您已经死亡。游戏结束。" << endl;
            break;
        }

        cout << "您需要探索周围的环境，寻找线索和道具，以便在这个恐怖的地方生存下去。" << endl;

        bool isSleeping = false;

        while (!isSleeping) {
            string playerInput;
            cout << "请输入您的行动：";
            cin >> playerInput;
            if (playerInput == "入睡" || playerInput == "睡觉" || playerInput == "睡眠") {
                isSleeping = true;
                cout << "您正在入睡..." << endl;
                cout << "您已入睡。" << endl;
            } else {
                cout << "您还不能入睡，请继续探索周围的环境。" << endl;
            }
        }

