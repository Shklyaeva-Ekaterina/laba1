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
    int effect;
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
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
};

void Menu() { // ������� ���� ��� ������ ��������
    cout << "........Choose.an.option........\n";
    cout << ".1.Create a pipe               .\n";
    cout << ".2.Create a compressor station .\n";
    cout << ".3.View the objects            .\n";
    cout << ".4.Edit the pipe               .\n";
    cout << ".5.Edit the compressor station .\n";
    cout << ".6.Save information to a file  .\n";
    cout << ".7.Read information from a file.\n";
    cout << ".0.Exit                        .\n";
    cout << "................................\n";
};

void Mistake() {
    cout << "Incorrect input(((\nPlease try again:\n";
}