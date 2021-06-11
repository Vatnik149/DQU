#include <iostream>
#include <deque>        // подключаем заголовочный файл деков
#include <iterator>     // заголовок итераторов
#include <string>       // заголовочный файл для работы со строками типа string
#include <locale>
using namespace std;

int main()
{
    setlocale(0,"");

    deque<string> myDeque;     // создаем пустой дек типа string
    myDeque.push_back(string("It is <deque>")); // добавили в дек один элемент типа string
    copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " "));
    cout << "Количество элементов в деке: " << myDeque.size() << endl;
    string firstword, secondword;
    cout << "Введите слово, которое будет стоять вначале:"<<endl;
    cin >> firstword;
    cout << endl;
    cout << "Введите слово, которое будет стоять в конце:" << endl;
    cin >> secondword;
    cout << endl;
    myDeque.push_front(firstword); // добавили в начало дека еще один элемент
    myDeque.push_back(secondword);           // добавили в конец дека элемент "coming!"
    cout << "Количество элементов в деке изменилось, теперь оно = " << myDeque.size() << endl;

    cout << "\nВведенный дек: ";
    if (!myDeque.empty()) { // если дек не пуст
        // вывод на экран элементов дека
        copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " ")); // вывод на экран элементов дека
    }

    myDeque.pop_front(); // удалили первый элемент
    myDeque.pop_back(); // удалили второй элемент
    myDeque.resize(4, "something"); // увеличиваем размер дека до 6 элементов, новые элементы заполняются словом "empty"

    cout << "\nБыли удалены первый и последний элементы дека, вот что осталось: ";
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;
    cout << "Удаление дека.." << endl;
    // 
    myDeque.clear();
    copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " "));

    return 0;
}