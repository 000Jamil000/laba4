#include "myfuncs.h"
#include "constants.h"

bool inputMenu()
{
    int enter;
    bool isConsoleInput = false ;
    while (true)
    {
        cout << "������ ����� ������?" << endl << " 1 - � �������; 2 - � �����" << endl;
        cin >> enter;
        if (!cin or (enter != 1 and enter != 2))
        {
            cout << "������������ ���� ������!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }

    if (enter == 1)
        isConsoleInput = true;
    return isConsoleInput;

}

bool outputMenu()
{
    int enter;
    bool isConsoleOutput{ false };
    while (true)
    {
        cout << "���� �������?. 1 - �������;  2 - ����" << endl;
        cin >> enter;
        if (!cin or (enter != 1 and enter != 2))
        {
            cout << "������������ ���� ������!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    if (enter == 1)
        isConsoleOutput = true;
    return isConsoleOutput;
}



string fileInput()
{
    string path, line;
    cout << "������� ���� � �����. ���� ������ Enter, �� ������ ����� ����� ���� input.txt\n";
    cin.ignore();
    getline(cin, path);
    if (path.length() == 0)
    {
        path = INPUT_FILE_NAME;
    }
    ifstream fIn(path);
    getline(fIn, line);
    return line;

}

void fileOutput(string answer)
{

    string path;
    cout << "������� ���� � �����. ���� ������ Enter, �� ������ ������ ����� ���� output.txt\n";
    getline(cin, path);
    if (path.length() == 0)
    {
        path = OUTPUT_FILE_NAME;
    }
    ofstream fOut(path);
    fOut << answer;
    fOut.close();

}

string answer2(string c)
{
    string newS{};
    bool flag = true;
    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == '(')
        {
            flag = false;
        }
        if (c[i] == ')')
        {
            flag = true;
        }
        if (flag && c[i] != ')')
        {
            newS += c[i];
        }

    }
    if (flag == false)
    {
        cout << "�� �� ������� ������!!!!!!!!!!!!!" <<endl; 
    }
    return newS;
}


double stringToNum(string str)
{
    double num = atof(str.c_str());
    return num;
}


bool repeat()
{
    int enter;
    while (true)
    {


        cout << "������ ���, 1 - ��, 2 - ���" << endl;
        cin >> enter;
        if (!cin or (enter != 1 and enter != 2))
        {
            cout << "������������ ���� ������!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    if (enter == 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}








