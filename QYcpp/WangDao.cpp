#include"WangDao.h"
#include<cmath>
#include<string.h>

void Trapezoid(){//1.�������
    int h;
    while(scanf("%d",&h)!=EOF)
    {
        int row=h;  //�к�Ϊh
        int col=h+(h-1)*2;  //��
        for(int i=0;i<row;++i)
        {
            for(int j=0;j<col;++j)
            {
                if(j<col-(h+2*i))
                {
                    cout<<" ";
                }else
                {
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
}

void DieK(){//2.����
    char matrix[80][80];    //��λ����
    int n;
    char a,b;
    bool firstcase=true;    //��һ�����ݱ�־
    while(scanf("%d %c %c",&n,&a,&b)!=EOF){
        if(firstcase==true){
            firstcase=false;
        }else{
            cout<<endl;
        }
        for(int i=0;i<=n/2;++i){    //(i,i)�����Ͻ����� (j,j)�����½�����
            int j=n-i-1;
            int length=n-2*i;   //��ǰȦ�ı߳�
            char c;     //�������ַ�
            if((n/2-i)%2==0){
                c=a;
            }else{
                c=b;
            }
            for(int k=0;k<length;++k){  //��ǰȦ��ֵ
                matrix[i][i+k] =c;
                matrix[i+k][i] =c;
                matrix[j][j-k] =c;
                matrix[j-k][j] =c;
            }
        }
        if(n!=1){   //�޳�4����
            matrix[0][0]= ' ';
            matrix[0][n-1] = ' ';
            matrix[n-1][0] = ' ';
            matrix[n-1][n-1] = ' ';
        }
        for(int i=0;i<n;++i){   //�������д�ӡ
            for(int j=0;j<n;++j){
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
}

int LS_Dessert(){   //�п�acm01
    int n,m;
    cin>>n>>m;
    int A[n],p=0,w=0;
    for(int j=0;j<n;j++){
        cin>>A[j];
    }
    for(int k=0;k<n;k++){
        if(p+A[k]>m){
            p=A[k];
            w++;
        }else{
            p+=A[k];
        }
    }
    cout<<w+1<<endl;
}

int Trans_people(){ //����02


    int tol,m,count=0;
    int i=1,sum=0;
    cin>>tol>>m;
    while(sum+pow(m,i)<tol){    ///pow(a,b);���ص���a��b�η�
        sum+=pow(m,i);
        count++;
        i++;
    }
    cout<<count+1;
}
string Is_Sane(){//����03
    string str;
    string Substr[4]={"azathoth","shubNiggurath","yogSothoth","nyarlathotep"};
    char S[10000];
    int i=0;
    char input;
    while((input=cin.get())!='\n'){ //���� cin.getline(S,100);�ӱ�׼����������10000���ַ�
        S[i++]=input;
    }
    str=S;  //���ַ�������ת�����ַ���
    //cout<<S<<endl;
    for(int i=0;i<4;i++){
        if(str.find(Substr[i])!=string::npos){   //str.find();���δ�ҵ��򷵻�string::npos
            //cout<<str.find(Substr[i])<<endl;
            return "INSANE";
        }
    }
    return "SANE";
/*
string s;
    cin >> s;

    if (s.find("azathoth") != string::npos || s.find("shubniggurath") != string::npos
    || s.find("yogsothoth") != string::npos || s.find("nyarlathotep") != string::npos)
       puts("INSANE");
    else puts("SANE");
*/
}
