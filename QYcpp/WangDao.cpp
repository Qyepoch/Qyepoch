#include"WangDao.h"
#include<cmath>
#include<string.h>

void Trapezoid(){//1.输出梯形
    int h;
    while(scanf("%d",&h)!=EOF)
    {
        int row=h;  //行号为h
        int col=h+(h-1)*2;  //列
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

void DieK(){//2.叠框
    char matrix[80][80];    //二位数组
    int n;
    char a,b;
    bool firstcase=true;    //第一组数据标志
    while(scanf("%d %c %c",&n,&a,&b)!=EOF){
        if(firstcase==true){
            firstcase=false;
        }else{
            cout<<endl;
        }
        for(int i=0;i<=n/2;++i){    //(i,i)是左上角坐标 (j,j)是右下角坐标
            int j=n-i-1;
            int length=n-2*i;   //当前圈的边长
            char c;     //待填充的字符
            if((n/2-i)%2==0){
                c=a;
            }else{
                c=b;
            }
            for(int k=0;k<length;++k){  //当前圈赋值
                matrix[i][i+k] =c;
                matrix[i+k][i] =c;
                matrix[j][j-k] =c;
                matrix[j-k][j] =c;
            }
        }
        if(n!=1){   //剔除4个角
            matrix[0][0]= ' ';
            matrix[0][n-1] = ' ';
            matrix[n-1][0] = ' ';
            matrix[n-1][n-1] = ' ';
        }
        for(int i=0;i<n;++i){   //逐行逐列打印
            for(int j=0;j<n;++j){
                cout<<matrix[i][j];
            }
            cout<<endl;
        }
    }
}

int LS_Dessert(){   //中矿acm01
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

int Trans_people(){ //误差传递02


    int tol,m,count=0;
    int i=1,sum=0;
    cin>>tol>>m;
    while(sum+pow(m,i)<tol){    ///pow(a,b);返回的是a的b次方
        sum+=pow(m,i);
        count++;
        i++;
    }
    cout<<count+1;
}
string Is_Sane(){//疯子03
    string str;
    string Substr[4]={"azathoth","shubNiggurath","yogSothoth","nyarlathotep"};
    char S[10000];
    int i=0;
    char input;
    while((input=cin.get())!='\n'){ //或者 cin.getline(S,100);从标准输入最多读入10000个字符
        S[i++]=input;
    }
    str=S;  //将字符串数组转化成字符串
    //cout<<S<<endl;
    for(int i=0;i<4;i++){
        if(str.find(Substr[i])!=string::npos){   //str.find();如果未找到则返回string::npos
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
