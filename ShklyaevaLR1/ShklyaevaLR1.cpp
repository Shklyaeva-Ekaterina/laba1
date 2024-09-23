#include <iostream>
#include <fstream>
#include <string>

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
            cin >> choice; // Считываем число
            // Проверяем, правильно ли введено число
            if (choice >= 0 && choice < 8 && cin.good() && cin.peek() == '\n') {
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
        if (choice == 1) {
            cout << "\nCreation of a pipe.\n";
            cout << "Name the pipe:\n";
            while (1) {
                cin >> P.name; // Считываем число
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
            cout << "Specify the lenght:\n";
            while (1) {
                cin >> P.length; // Считываем число
                // Проверяем, правильно ли введено число
                if (P.length > 0 && cin.good() && cin.peek() == '\n') {
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
            cout << "Specify the diametr:\n";
            while (1) {
                cin >> P.diametr; // Считываем число
                // Проверяем, правильно ли введено число
                if (P.diametr > 0 && cin.good() && cin.peek() == '\n') {
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
            cout << "Is it under repair?(y/n)\n";
            string answer;
            while (1) {
                cin >> answer; // Считываем ответ
                // Проверяем, правильно ли введен ответ
                if ((answer == "y" || answer == "n") && cin.good() && cin.peek() == '\n') {
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
                cin >> C.name; // Считываем число
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
            cout << "Specify the amount of workshops:\n";
            while (1) {
                cin >> C.workshop; // Считываем число
                // Проверяем, правильно ли введено число
                if (C.workshop > 0 && cin.good() && cin.peek() == '\n') {
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
            cout << "Specify the amount of working workshops:\n";
            while (1) {
                cin >> C.realworkshop; // Считываем число
                // Проверяем, правильно ли введено число
                if (C.realworkshop >= 0 && C.realworkshop <= C.workshop && cin.good() && cin.peek() == '\n') {
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
            cout << "Specify the effectiveness:\n";
            while (1) {
                cin >> C.effect; // Считываем число
                // Проверяем, правильно ли введено число
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
        if (choice == 4) {
            if (P.length > 0) {
                cout << "\n.What.do.you.want.to.edit?.\n";
                cout << ".  1.Name                 .\n";
                cout << ".  2.Length               .\n";
                cout << ".  3.Diametr              .\n";
                cout << ".  4.Repair               .\n";
                cout << "...........................\n";
                int edit;
                while (1) {
                    cin >> edit; // Считываем число
                    // Проверяем, правильно ли введено число
                    if (edit > 0 && edit < 5 && cin.good() && cin.peek() == '\n') {
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
                if (edit == 1) {
                    cout << "Name the pipe again:\n";
                    while (1) {
                        cin >> P.name; // Считываем число
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
                }
                if (edit == 2) {
                    cout << "Specify the lenght again:\n";
                    while (1) {
                        cin >> P.length; // Считываем число
                        // Проверяем, правильно ли введено число
                        if (P.length > 0 && cin.good() && cin.peek() == '\n') {
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
                }
                if (edit == 3) {
                    cout << "Specify the diametr again:\n";
                    while (1) {
                        cin >> P.diametr; // Считываем число
                        // Проверяем, правильно ли введено число
                        if (P.diametr > 0 && cin.good() && cin.peek() == '\n') {
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
                }
                if (edit == 4) {
                    cout << "Is it under repair?(y/n)\n";
                    string answer;
                    while (1) {
                        cin >> answer; // Считываем ответ
                        // Проверяем, правильно ли введен ответ
                        if ((answer == "y" || answer == "n") && cin.good() && cin.peek() == '\n') {
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
                    if (answer == "y") {
                        P.repair = true;
                    }
                    else if (answer == "n") {
                        P.repair = false;
                    }
                }
            }
            else {
                cout << "You don't have a pipe to edit";
            }
        }
        if (choice == 5) {
            if (P.length > 0) {
                cout << "\n....What.do.you.want.to.edit?....\n";
                cout << ".  1.Name                       .\n";
                cout << ".  2.Amount of workshops        .\n";
                cout << ".  3.Amount of working workshops.\n";
                cout << ".  4.Effectiveness              .\n";
                cout << ".................................\n";
                int edit;
                while (1) {
                    cin >> edit; // Считываем число
                    // Проверяем, правильно ли введено число
                    if (edit > 0 && edit < 5 && cin.good() && cin.peek() == '\n') {
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
                if (edit == 1) {
                    cout << "Name the compressor station again:\n";
                    while (1) {
                        cin >> C.name; // Считываем число
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
                }
                if (edit == 2) {
                    cout << "Specify the amount of workshops again:\n";
                    while (1) {
                        cin >> C.workshop; // Считываем число
                        // Проверяем, правильно ли введено число
                        if (C.workshop > 0 && cin.good() && cin.peek() == '\n') {
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
                }
                if (edit == 3) {
                    cout << "Specify the amount of working workshops again:\n";
                    while (1) {
                        cin >> C.realworkshop; // Считываем число
                        // Проверяем, правильно ли введено число
                        if (C.realworkshop >= 0 && C.realworkshop <= C.workshop && cin.good() && cin.peek() == '\n') {
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
                }
                if (edit == 4) {
                    cout << "Specify the effectiveness:\n";
                    while (1) {
                        cin >> C.effect; // Считываем число
                        // Проверяем, правильно ли введено число
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
                }
            }
            else {
                cout << "You don't have a compressor station to edit";
            }
        }
        if (choice == 6) {
            if (P.length > 0) {
                // Создаем объект ofstream для записи в файл
                ofstream outFile("pipe.txt");
                // Запись данных в файл
                outFile << endl << P.name << endl << P.length << endl << P.diametr << endl << P.repair; // Записываем строку в файл
                // Закрываем файл
                outFile.close();
            }
            if (C.workshop > 0) {
                // Создаем объект ofstream для записи в файл
                ofstream outFile("compress.txt");
                // Запись данных в файл
                outFile << endl << C.name << endl << C.workshop << endl << C.realworkshop << endl << C.effect; // Записываем строку в файл
                // Закрываем файл
                outFile.close();
            }
        }
        if (choice == 7) {
            ifstream inFile("pipe.txt");
            // Проверяем, удалось ли открыть файл
            if (inFile) {
                string line;
                // Чтение строк из файла
                int lineNumber = 0; // Счетчик строк
                string fromfile; //
                while (getline(inFile, line)) {
                    lineNumber++;
                    // Проверяем, является ли это строка с возрастом
                    if (lineNumber == 1) { // Если это первая строка
                        // Извлекаем значение имени
                        inFile >> P.name;
                    }
                    if (lineNumber == 2) {
                        // Извлекаем значение имени
                        inFile >> fromfile;
                        P.length = stoi(fromfile);
                    }
                    if (lineNumber == 3){
                        inFile >> fromfile;
                        P.diametr = stoi(fromfile);
                    }
                    if (lineNumber == 4) {
                        inFile >> fromfile;
                        if (fromfile == "1") {
                            P.repair = 1;
                        }
                        else{
                            P.repair = 0;
                        }
                    }
                }
                // Закрываем файл
                inFile.close();
                ifstream inFile("compress.txt");
                // Проверяем, удалось ли открыть файл
                if (inFile) {
                    string line;
                    // Чтение строк из файла
                    int lineNumber = 0; // Счетчик строк
                    string fromfile; //ПЕременная куда будут считываться данные из файла до их преобразования
                    while (getline(inFile, line)) {
                        lineNumber++;
                        // Проверяем, является ли это строка с возрастом
                        if (lineNumber == 1) { // Если это первая строка
                            // Извлекаем значение имени
                            inFile >> C.name;
                        }
                        if (lineNumber == 2) {
                            // Извлекаем значение имени
                            inFile >> fromfile;
                            C.workshop = stoi(fromfile);
                        }
                        if (lineNumber == 3) {
                            inFile >> fromfile;
                            C.realworkshop = stoi(fromfile);
                        }
                        if (lineNumber == 4) {
                            inFile >> fromfile;
                            C.effect = stod(fromfile);
                        }
                    }
                    // Закрываем файл
                    inFile.close();

                }
            }
        }
        if (choice == 0) {
            break;
        }
    }
};

void Menu() { // создаем меню для выбора действий
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