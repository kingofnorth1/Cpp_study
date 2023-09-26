#include <vector>
#include <iostream>
using std::cout;
using std::vector;
using std::endl;

int UseVector()
{
    // 创建一个向量存储 int
    vector<int> vec;
    int i;

    // 显示 vec 的原始大小
    cout << "vector size = " << vec.size() << endl;

    // 推入 5 个值到向量中
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // 显示 vec 扩展后的大小
    cout << "extended vector size = " << vec.size() << endl;

    for (i = 0; i < 5; i++) {
        cout << "显示结果为：" << vec[i] << endl;
    }
    cout << "\n" << endl;
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        cout << "迭代器值：" << *v << endl;
        v++;
    }

    return 0;
}