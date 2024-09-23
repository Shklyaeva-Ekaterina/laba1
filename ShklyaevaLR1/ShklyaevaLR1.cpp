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
            cin >> choice; // Считываем число
            // Проверяем, было ли введено число
            if (cin.good() && cin.peek() == '\n') {
                // Если всё в порядке, выходим из цикла
                break;
            }
            else {
                Mistake();//выводим сообщение об ошибке
                // Сбрасываем состояние потока и очищаем входной буфер
                cin.clear(); // Сбрасываем флаг ошибки
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Игнорируем неправильный ввод
            }
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
};

void Menu() { // создаем меню для выбора действий
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