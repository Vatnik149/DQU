#include <iostream>
#include <deque>        // ���������� ������������ ���� �����
#include <iterator>     // ��������� ����������
#include <string>       // ������������ ���� ��� ������ �� �������� ���� string
#include <locale>
using namespace std;

int main()
{
    setlocale(0,"");

    deque<string> myDeque;     // ������� ������ ��� ���� string
    myDeque.push_back(string("It is <deque>")); // �������� � ��� ���� ������� ���� string
    copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " "));
    cout << "���������� ��������� � ����: " << myDeque.size() << endl;
    string firstword, secondword;
    cout << "������� �����, ������� ����� ������ �������:"<<endl;
    cin >> firstword;
    cout << endl;
    cout << "������� �����, ������� ����� ������ � �����:" << endl;
    cin >> secondword;
    cout << endl;
    myDeque.push_front(firstword); // �������� � ������ ���� ��� ���� �������
    myDeque.push_back(secondword);           // �������� � ����� ���� ������� "coming!"
    cout << "���������� ��������� � ���� ����������, ������ ��� = " << myDeque.size() << endl;

    cout << "\n��������� ���: ";
    if (!myDeque.empty()) { // ���� ��� �� ����
        // ����� �� ����� ��������� ����
        copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " ")); // ����� �� ����� ��������� ����
    }

    myDeque.pop_front(); // ������� ������ �������
    myDeque.pop_back(); // ������� ������ �������
    myDeque.resize(4, "something"); // ����������� ������ ���� �� 6 ���������, ����� �������� ����������� ������ "empty"

    cout << "\n���� ������� ������ � ��������� �������� ����, ��� ��� ��������: ";
    for (int i = 0; i < myDeque.size(); i++) {
        cout << myDeque[i] << " ";
    }
    cout << endl;
    cout << "�������� ����.." << endl;
    // 
    myDeque.clear();
    copy(myDeque.begin(), myDeque.end(), ostream_iterator<string>(cout, " "));

    return 0;
}