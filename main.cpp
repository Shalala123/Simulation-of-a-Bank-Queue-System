#include <iostream>
#include <queue>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){
    srand(time(NULL));
    queue<string> a,b,c,d,e,f,gec;
    int sayi,aa=1,bb=1,cc=1,dd=1,ee=1,ff=1,num=1,random;
    string ce="C",temp,temp2;
cout<<"Counter Sayisi giriniz: ";
cin>>sayi;

for(int q=0;q<100;q++){
    random=1+rand()%2;
    if(random == 1){
        cout<<"Incoming Transaction : Append"<<endl;
        random=1+rand()%sayi;
        cout<<"Counter No:"<<random<<endl;
        if(random == 1){
            temp.push_back(aa+'0');
            ce=ce+temp;
            a.push(ce);
             ce="C";
            aa++;
            temp.clear();
        }
        else if(random == 2){
            temp.push_back(bb+'0');
            ce=ce+temp;
            b.push(ce);
             ce="C";
            bb++;
            temp.clear();
        }
        else if(random == 3){
            temp.push_back(cc+'0');
            ce=ce+temp;
            c.push(ce);
            ce="C";
            cc++;
            temp.clear();
        }
        else if(random == 4){
            temp.push_back(dd+'0');
            ce=ce+temp;
            d.push(ce);
             ce="C";
            dd++;
            temp.clear();
        }
        else if(random == 5){
            temp.push_back(ee+'0');
            ce=ce+temp;
            e.push(ce);
             ce="C";
            ee++;
            temp.clear();
        }
        else if(random == 6){
            temp.push_back(ff+'0');
            ce=ce+temp;
            f.push(ce);
             ce="C";
            ff++;
            temp.clear();
        }
    }
    else if(random == 2){
          cout<<"Incoming Transaction : Serve"<<endl;
        random=1+rand()%sayi;
        cout<<"Counter No:"<<random<<endl;
          if(random == 1 && !a.empty()){
            a.pop();
        }
        else if(random == 2 && !b.empty()){
            b.pop();
        }
        else if(random == 3 && !c.empty()){
           c.pop();
        }
        else if(random == 4 && !d.empty()){
            d.pop();
        }
        else if(random == 5 && !e.empty()){
            e.pop();
        }
        else if(random == 6 && !f.empty()){
            f.pop();
        }

    }
        while(num<=sayi){
            if(num == 1){
                    cout<<"o|";
                while(!a.empty()){
                    cout<<a.front();
                    temp2=a.front();
                    gec.push(temp2);
                    temp2.clear();
                    a.pop();
                }
                while(!gec.empty()){
                        temp2=gec.front();
                    a.push(temp2);
                    temp2.clear();
                    gec.pop();
                }
                cout<<endl;
            }
            if(num == 2){
                    cout<<"o|";
              while(!b.empty()){
                    cout<<b.front();
                    temp2=b.front();
                    gec.push(temp2);
                    temp2.clear();
                    b.pop();
                }
                while(!gec.empty()){
                        temp2=gec.front();
                    b.push(temp2);
                    temp2.clear();
                    gec.pop();
                }
                cout<<endl;
            }
            if(num == 3){
                    cout<<"o|";
               while(!c.empty()){
                    cout<<c.front();
                    temp2=c.front();
                    gec.push(temp2);
                    temp2.clear();
                    c.pop();
                }
                while(!gec.empty()){
                        temp2=gec.front();
                    c.push(temp2);
                    temp2.clear();
                    gec.pop();
                }
                cout<<endl;
            }
            if(num == 4){
                    cout<<"o|";
                while(!d.empty()){
                    cout<<d.front();
                    temp2=d.front();
                    gec.push(temp2);
                    temp2.clear();
                    d.pop();
                }
                while(!gec.empty()){
                        temp2=gec.front();
                    d.push(temp2);
                    temp2.clear();
                    gec.pop();
                }
                cout<<endl;
            }
            if(num == 5){
                cout<<"o|";
                while(!e.empty()){
                    cout<<e.front();
                    temp2=e.front();
                    gec.push(temp2);
                    temp2.clear();
                    e.pop();
                }
                while(!gec.empty()){
                        temp2=gec.front();
                    e.push(temp2);
                    temp2.clear();
                    gec.pop();
                }
                cout<<endl;
            }
            if(num == 6){
                cout<<"o|";
                while(!f.empty()){
                    cout<<f.front();
                    temp2=f.front();
                    gec.push(temp2);
                    temp2.clear();
                    f.pop();
                }
                while(!gec.empty()){
                        temp2=gec.front();
                    f.push(temp2);
                    temp2.clear();
                    gec.pop();
                }
                cout<<endl;
            }
            num++;
        }
        num=1;
    cout<<"----------"<<endl<<"Time is: "<<q*5<<endl;
    Sleep(5000);
    system("cls");

}


system("pause");
return 0;
}
