#include <iostream>
#include <string>

/**
 * @title: �Ƚ������ַ�������ͬ
 * @author : dewey
 * @time : 2018-10-22
 * @param : word1 string Ӣ���ַ���1
 * @param : word2 string Ӣ���ַ���2
 **/
using namespace std;

int main()
{
    string word1;
    string word2;
    int length1;//�ַ���1����
    int length2;//�ַ���2����
    int tag = 0;//�����ַ����ȽϺ�Ľ��״̬
START:
    cout << "�������ַ���1:" << endl;
    getline(cin, word1);
    cout << "�������ַ���2:�����롮exit�� �˳�����" << endl;
    getline(cin, word2);
    length1 = word1.length();
    length2 = word2.length();
    if(length1 > 10 || length2 > 10){
        cout << "�ַ�������Ӧ��10����" << endl;
        return 0;
    }
    cout << "�ַ������ȷֱ�Ϊ:" << endl;
    cout << word1 << ":" << length1 << endl;
    cout << word2 << ":" <<length2 << endl;

    if(length1 == length2){//�ַ����������
        for(int i=0;i<length1;i++){
            if(word1[i] != word2[i]){
                if((int)word1[i] != (int)word2[i]+32 && (int)word1[i]+32 != (int)word2[i]){
                    tag = 4;//��ͬ�ַ���

                }
                if((int)word1[i] == (int)word2[i]+32 || (int)word1[i]+32 == (int)word2[i]){
                    tag = (tag == 0) ? 3 : tag;//�ַ�����ͬ����Сд��ͬ

                }
            }
        }
        tag = (tag == 0) ? 2 : tag;//��ȫ��ͬ
    }else{
        tag = 1;//�ַ������Ȳ����

    }
    cout << tag << endl;
    if(word2 == "exit" ){
        return 0;
    }else{
        tag = 0;
        goto START;
    }

}
