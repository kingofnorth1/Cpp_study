#include <vector>
#include <iostream>
using std::cout;
using std::vector;
using std::endl;

int UseVector()
{
    // ����һ�������洢 int
    vector<int> vec;
    int i;

    // ��ʾ vec ��ԭʼ��С
    cout << "vector size = " << vec.size() << endl;

    // ���� 5 ��ֵ��������
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // ��ʾ vec ��չ��Ĵ�С
    cout << "extended vector size = " << vec.size() << endl;

    for (i = 0; i < 5; i++) {
        cout << "��ʾ���Ϊ��" << vec[i] << endl;
    }
    cout << "\n" << endl;
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        cout << "������ֵ��" << *v << endl;
        v++;
    }

    return 0;
}