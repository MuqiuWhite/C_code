#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int backspaceCompare(const char* s, const char* t) {
    int i = strlen(s) - 1, j = strlen(t) - 1;
    int ss = 0, tt = 0;//����Ƿ���#

    while (i >= 0 || j >= 0)
    {
        while (i >= 0)
        {
            if (s[i] == '#')
            {
                ss++;
                i--;
            }
            else
            {
                if (ss > 0)
                {
                    ss--;
                    i--;
                }
                else//û��#�Ͳ��ü�������ǰ�ַ��ˣ���������Ĵ���
                    break;
            }

        }

        while (j >= 0)
        {

            if (t[j] == '#')
            {
                tt++;
                j--;
            }
            else
            {
                if (tt > 0)
                {
                    tt--;
                    j--;
                }
                else
                    break;
            }

        }


        if (i >= 0 && j >= 0)
        {
            if (s[i] != t[j])
                return -1;

        }
        else if (i >= 0 || j >= 0)
            // ������һ���Ѿ������������ַ���, ������һ��û�б����������ַ���, ֱ�ӷ���false
        {
            return -1;
        }

        i--;
        j--;
    }

    return 1;


}


int main()
{
    const char *s = "ab#t";
    const char*t = "ad#c";
    backspaceCompare(s, t);
}