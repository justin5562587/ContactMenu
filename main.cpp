#include <iostream>
#include "Person.h"
#include "ContactMenu.h"

using namespace std;

// show menu
void showMenu () {
    cout << "***** 1.添加联系人 *****" << endl;
    cout << "***** 2.显示联系人 *****" << endl;
    cout << "***** 3.删除联系人 *****" << endl;
    cout << "***** 4.查找联系人 *****" << endl;
    cout << "***** 5.修改联系人 *****" << endl;
    cout << "***** 6.清空联系人 *****" << endl;
    cout << "***** 0.退出通讯录 *****" << endl;
}

int main() {

    int select = 0;

    ContactMenu contactMenu;

    while(true) {
        showMenu();

        cin >> select;

        switch(select) {
            case 1: // 添加联系人
                contactMenu.addPerson();
                break;
            case 2: // 显示联系人
                contactMenu.showPersons();
                break;
            case 3: // 删除联系人
                contactMenu.removePerson();
                break;
            case 4: // 查找联系人
                contactMenu.searchPerson();
                break;
            case 5: // 修改联系人
                contactMenu.modifyPerson();
                break;
            case 6: // 清空联系人
                contactMenu.clearPersons();
                break;
            case 0: // 退出通讯录
                cout << "欢迎下次使用通讯录" << endl;
                system("pause");
                return 0;
            default:
                break;
        }
    }

    return 0;
}
