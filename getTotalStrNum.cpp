#include <iostream>
#include<cstring>
using namespace std;

/**
 * @title ����Ƴ�����ʾ�û�����һ���ַ�������ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
 * @author : dewey
 * @param : str
 **/
int main(){
    char str[300];
    int length = 0;//�ַ�������
    int wordUpper = 0;//��д�ַ���
    int wordLower = 0;//Сд�ַ���
    int space = 0;//�ո���
    int num = 0;//������
    int otherChar = 0;
    cout << "������һ���ַ���" << endl;
    //cin >> str;
    cin.getline(str,512);
    length = strlen(str);
    if(length > 300){
        cout << "�ַ����������������ַ�������" << endl;
        return 0;
    }
    cout << length << endl;
    for(int i=0; i<length;i++ ){
        if((int)str[i]>64 && (int)str[i]<91 ){//ͳ�ƴ�д��ĸ����
            wordUpper++;
        }else if((int)str[i]>96 && (int)str[i]<123){//ͳ��Сд��ĸ����
            wordLower++;
        }else if(str[i] == 32){//ͳ�ƿո���
            space++;
        }else if((int)str[i]>47 && (int)str[i]<58){//ͳ�����ָ���
            num++;
        }else{//ͳ�������ַ�
            otherChar++;
        }
    }

    cout << "��������ַ�������Ϊ" << length << endl;
    cout << "��д��ĸ����Ϊ��" << wordUpper
         << "��Сд��ĸ����Ϊ��" << wordLower
         << "�����ָ���Ϊ��" << num
         << "���ո����Ϊ��" << space
         << "�������ַ�����Ϊ��" << otherChar
    << endl;
}
