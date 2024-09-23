#include <iostream>
using namespace std;
void Menu();
void Mistake();

struct Pipe {
    string name;
    int length;
    int diametr;
    bool repair;
};

struct CompressStation {
    string name;
    int workshop;
    int realworkshop;
    double effect;
};

int main()
{
    Pipe P;
    CompressStation C;
    while (1) {
        int choice;
        Menu();//
        while (1) {
            cin >> choice; // ��������� �����
            // ���������, ��������� �� ������� �����
            if (choice >= 0 && choice < 8 && cin.good() && cin.peek() == '\n') {
                // ���� �� � �������, ������� �� �����
                break;
            }
            else {
                Mistake();//������� ��������� �� ������
                // ���������� ��������� ������ � ������� ������� �����
                cin.clear(); // ���������� ���� ������
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
            }
        }
        if (choice == 1) {
            cout << "\nCreation of a pipe.\n";
            cout << "Name the pipe:\n";
            while (1) {
                cin >> P.name; // ��������� �����
                // ���������, ���� �� ������� �����
                if (cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            cout << "Specify the lenght:\n";
            while (1) {
                cin >> P.length; // ��������� �����
                // ���������, ��������� �� ������� �����
                if (P.length > 0 && cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            cout << "Specify the diametr:\n";
            while (1) {
                cin >> P.diametr; // ��������� �����
                // ���������, ��������� �� ������� �����
                if (P.diametr > 0 && cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            cout << "Is it under repair?(y/n)\n";
            string answer;
            while (1) {
                cin >> answer; // ��������� �����
                // ���������, ��������� �� ������ �����
                if ((answer == "y" || answer == "n") && cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            if (answer == "y") {
                P.repair = true;
            }
            else if (answer == "n") {
                P.repair = false;
            }
        }
        if (choice == 2) {
            cout << "\nCreation of a compressor station.\n";
            cout << "Name the compressor station:\n";
            while (1) {
                cin >> C.name; // ��������� �����
                // ���������, ���� �� ������� �����
                if (cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            cout << "Specify the amount of workshops:\n";
            while (1) {
                cin >> C.workshop; // ��������� �����
                // ���������, ��������� �� ������� �����
                if (C.workshop > 0 && cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            cout << "Specify the amount of working workshops:\n";
            while (1) {
                cin >> C.realworkshop; // ��������� �����
                // ���������, ��������� �� ������� �����
                if (C.realworkshop >= 0 && C.realworkshop <= C.workshop && cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
            cout << "Specify the effectiveness:\n";
            while (1) {
                cin >> C.effect; // ��������� �����
                // ���������, ��������� �� ������� �����
                if (cin.good() && cin.peek() == '\n') {
                    // ���� �� � �������, ������� �� �����
                    break;
                }
                else {
                    Mistake();//������� ��������� �� ������
                    // ���������� ��������� ������ � ������� ������� �����
                    cin.clear(); // ���������� ���� ������
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ���������� ������������ ����
                }
            }
        }
        if (choice == 3) {
            if (P.length > 0) {
                cout << "\nPipe\n";
                cout << "Name: " << P.name;
                cout << "\nLength: " << P.length;
                cout << "\nDiametr: " << P.diametr;
                if (P.repair) {
                    cout << "\nUnder repair" << "\n";
                }
                else {
                    cout << "\nNot under repair" << "\n";
                }
            }
            if (C.workshop > 0) {
                cout << "\nCompressor Station\n";
                cout << "Name: " << C.name;
                cout << "\nAmount of workshops: " << C.workshop;
                cout << "\nAmount of working workshops: " << C.realworkshop;
                cout << "\nEffectiveness: " << C.effect << "\n";
            }
            if (P.length < 0 && C.workshop < 0) {
                cout << "\nYou don't have any objects\n";
            }
        }
    }
};

void Menu() { // ������� ���� ��� ������ ��������
    cout << "\n...........Choose.an.option...........\n";
    cout << ".  1.Create a pipe                   .\n";
    cout << ".  2.Create a compressor station     .\n";
    cout << ".  3.View the objects                .\n";
    cout << ".  4.Edit the pipe                   .\n";
    cout << ".  5.Edit the compressor station     .\n";
    cout << ".  6.Save the information to a file  .\n";
    cout << ".  7.Read the information from a file.\n";
    cout << ".  0.Exit                            .\n";
    cout << "......................................\n";
};

void Mistake() {
    cout << "Incorrect input(((\nPlease try again:\n";
};