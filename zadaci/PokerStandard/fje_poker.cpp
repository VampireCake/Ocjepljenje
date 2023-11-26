#include <bits/stdc++.h>

using namespace std;

    int brojIgraca(){
        int igraci;
        bool jedanIgrac = true;
        while(jedanIgrac){
            cin>>igraci;
            if (igraci<=6 && igraci>=2){
                jedanIgrac = false;
            }
            else{
                cout<<"Nije dovoljno igrača za igru ili ih je previše!"<<endl;
            }
        }
        return igraci;
    }

    int unosBrojaKarte(){
        int brojKarte;
        bool dobarBroj = true;
        while(dobarBroj){
            cin>>brojKarte;
            if (brojKarte>=1 && brojKarte<=14 && brojKarte!=11){
                dobarBroj = false;
            }
            else{
                cout<<"Ovaj broj ne može biti na karti"<<endl;
            }
        }
        return brojKarte;
    }

    char unosZnakaKarte(){
        char znakKarte;
        bool dobarZnak = true;
        while(dobarZnak){
            cin>>znakKarte;
            if (znakKarte!='c' || znakKarte!='d' || znakKarte!='h' || znakKarte!='s'){
                dobarZnak = false;
            }
            else{
                cout<<"Ovaj znak ne može biti na karti"<<endl;
            }
        }
        return znakKarte;
    }

    
    bool sviZnakoviIsti (char ruka[5]) {
        bool JesteSZI;
        if (ruka[0]==ruka[1] && ruka[0]==ruka[2] && ruka[0]==ruka[3] && ruka[0]==ruka[4]){
            JesteSZI = true;
        }
        else{
            JesteSZI = false;
        }
        return JesteSZI;
    }

    bool royalFlush (int redoslijed[5]){
        bool jesteRF;
        if(redoslijed[0] == 1 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14){
            jesteRF = true;
        }
        else{
            jesteRF = false;
        }
        return jesteRF;
    }

    bool straightFlush(int redoslijed[5]){
        bool jesteSF;
        int prvaKarta = redoslijed[0];
        if((redoslijed[0] == prvaKarta && redoslijed[1] == prvaKarta + 1 && redoslijed[2] == prvaKarta + 2 && redoslijed[3] == prvaKarta + 3 && redoslijed[4] == prvaKarta + 4)||
        (redoslijed[0] == 7 && redoslijed[1] == 8 && redoslijed[2] == 9 && redoslijed[3] == 10 && redoslijed[4] == 12)||
        (redoslijed[0] == 8 && redoslijed[1] == 9 && redoslijed[2] == 10 && redoslijed[3] == 12 && redoslijed[4] == 13)||
        (redoslijed[0] == 9 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
            jesteSF = true;
        }
        else{
            jesteSF = false;
        }
        return jesteSF;
    }
    
    bool fourOfAKind(int redoslijed[5]){
        bool jesteFOAK;
        if(redoslijed[0]==redoslijed[3] || redoslijed[1]==redoslijed[4]){
            jesteFOAK = true;
        }
        else{
            jesteFOAK = false;
        }
        return jesteFOAK;
    }

    bool fullHouse(int redoslijed[5]){
        bool jesteFH;
        if((redoslijed[0] == redoslijed[2] && redoslijed[3]==redoslijed[4]) || (redoslijed[0]==redoslijed[1] && redoslijed[2]==redoslijed[4])){
            jesteFH = true;
        }
        else{
            jesteFH = false;
        }
        return jesteFH;
    }

    bool straight(int redoslijed[5]){
        bool jesteS;
        int prvaKarta = redoslijed[0];
        if((redoslijed[0] == prvaKarta && redoslijed[1] == prvaKarta + 1 && redoslijed[2] == prvaKarta + 2 && redoslijed[3] == prvaKarta + 3 && redoslijed[4] == prvaKarta + 4)||
           (redoslijed[0] == 7 && redoslijed[1] == 8 && redoslijed[2] == 9 && redoslijed[3] == 10 && redoslijed[4] == 12)||
           (redoslijed[0] == 8 && redoslijed[1] == 9 && redoslijed[2] == 10 && redoslijed[3] == 12 && redoslijed[4] == 13)||
           (redoslijed[0] == 9 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)||
           (redoslijed[0] == 15 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
            jesteS = true;
        }
        else{
            jesteS = false;
        }
        return jesteS;
    }

    bool threeOfAKind(int redoslijed[5]){
        bool jesteTOAK;
        if(redoslijed[0] == redoslijed[2] || redoslijed[1] == redoslijed[3] || redoslijed[2] == redoslijed[4]){
            jesteTOAK = true;
        }
        else{
            jesteTOAK = false;
        }
        return jesteTOAK;
    }

    bool twoPair(int redoslijed[5]){
        bool jesteTP;
        if((redoslijed[0]==redoslijed[1] && redoslijed[2]==redoslijed[3])||
           (redoslijed[0]==redoslijed[1] && redoslijed[3]==redoslijed[4])||
           (redoslijed[1]==redoslijed[2] && redoslijed[3]==redoslijed[4])){
            jesteTP = true;
        }
        else{
            jesteTP = false;
        }
        return jesteTP;
    }

    bool onePair(int redoslijed[5]){
        bool jesteOP;
        if(redoslijed[0]==redoslijed[1] || redoslijed[1]==redoslijed[2] || redoslijed[2]==redoslijed[3] || redoslijed[3]==redoslijed[4]){
            jesteOP = true;
        }
        else{
            jesteOP = false;
        }
        return jesteOP;
    }

    int highCard(int redoslijed[5]){
        return redoslijed[4];
    }

    int snagaSF(int nekiSF[5]){
        return nekiSF[4];        
    }

    float kojiFOAK(int nekiFOAK[5]){
        float tajFOAK;
        if(nekiFOAK[0]==nekiFOAK[3]){
            tajFOAK=1.4;
        }
        if(nekiFOAK[1]==nekiFOAK[4]){
            tajFOAK=2.5;
        }
        return tajFOAK;
    }

    int snagaFOAK(int nekiFOAK[5]){
        return nekiFOAK[2];
    }

    int snaga2FOAK(int nekiFOAK[5], float tajFOAK){
        if(tajFOAK==2.5){
            return nekiFOAK[0];
        }
        else{
            return nekiFOAK[4];
        }
    }

    float kojiFH(int nekiFH[5]){
        float tajFH;
        if(nekiFH[0]==nekiFH[2]){
            tajFH = 1.3;
        }
        if(nekiFH[2]==nekiFH[4]){
            tajFH = 3.5;
        }
        return tajFH;
    }

    int snagaFH(int nekiFH[5]){
        return nekiFH[2];
    }

    int snaga1F(int nekiF[5]){
        return nekiF[4];
    }

    int snaga2F(int nekiF[5]){
        return nekiF[3];
    }

    int snaga3F(int nekiF[5]){
        return nekiF[2];
    }

    int snaga4F(int nekiF[5]){
        return nekiF[1];
    }

    int snaga5F(int nekiF[5]){
        return nekiF[0];
    }

    int snagaS(int nekiS[5]){
        return nekiS[4];        
    }

    int snagaTOAK(int nekiTOAK[5]){
        return nekiTOAK[2];
    }

    int kojiTP(int nekiTP[5]){
        int tajTP;
        if(nekiTP[0] == nekiTP[1] && nekiTP[2] == nekiTP[3]){
            tajTP = 1234;
        }
        else if(nekiTP[0] == nekiTP[1] && nekiTP[3] == nekiTP[4]){
            tajTP = 1245;
        }
        else{
            tajTP = 2345;
        }
        return tajTP;
    }

    int snaga1TP(int nekiTP[5]){
        return nekiTP[3];
    }

    int snaga2TP(int nekiTP[5]){
        return nekiTP[1];
    }

    int snaga3TP(int nekiTP[5], int tajTP){
        if(tajTP == 1234){
            return nekiTP[4];
        }
        else if(tajTP == 1245){
            return nekiTP[2];
        }
        else{
            return nekiTP[0];
        }
    }

    int kojiP(int nekiP[5]){
        int tajP;
        if(nekiP[0]==nekiP[1]){
            tajP=12;
        }
        if(nekiP[1]==nekiP[2]){
            tajP=23;
        }
        if(nekiP[2]==nekiP[3]){
            tajP=34;
        }
        if(nekiP[3]==nekiP[4]){
            tajP=45;
        }
        return tajP;
    }

    int snaga1P(int nekiP[5], int tajP){
        int s1P;
        if(tajP==12){
            s1P=nekiP[1];
        }
        if(tajP==23){
            s1P=nekiP[2];
        }
        if(tajP==34){
            s1P=nekiP[3];
        }
        if(tajP==45){
            s1P=nekiP[4];
        }
        return s1P;
    }

    int snaga2P(int nekiP[5], int tajP){
        int s2P;
        if(tajP==12){
            s2P=nekiP[4];
        }
        if(tajP==23){
            s2P=nekiP[4];
        }
        if(tajP==34){
            s2P=nekiP[4];
        }
        if(tajP==45){
            s2P=nekiP[2];
        }
        return s2P;
    }

    int snaga3P(int nekiP[5], int tajP){
        int s3P;
        if(tajP==12){
            s3P=nekiP[3];
        }
        if(tajP==23){
            s3P=nekiP[3];
        }
        if(tajP==34){
            s3P=nekiP[1];
        }
        if(tajP==45){
            s3P=nekiP[1];
        }
        return s3P;
    }

    int snaga4P(int nekiP[5], int tajP){
        int s4P;
        if(tajP==12){
            s4P=nekiP[2];
        }
        if(tajP==23){
            s4P=nekiP[0];
        }
        if(tajP==34){
            s4P=nekiP[0];
        }
        if(tajP==45){
            s4P=nekiP[0];
        }
        return s4P;
    }

    int* acesInFront(int nekiRedoslijed[5]){
        for(int i=0; i<=4; i++){
            if(nekiRedoslijed[i]==1){
                nekiRedoslijed[i]=15;
            }
        }
        sort(nekiRedoslijed, nekiRedoslijed+5);
        return nekiRedoslijed;
    }

    long double evaluacija(long double sansa[6]){
        long double a=4, b=36, c=624, d=3744, e=5108, f=10200, g=54912, h=123552, x=1098240, y=1302540, O=2598960;
        if(sansa[0]=10){
            return 1-a/O;
        }
        if(sansa[0]=9){
            return 1-(a+b)/O;
        }
        if(sansa[0]=8){
            return 1-(a+b+c)/O;
        }
        if(sansa[0]=7){
            return 1-(a+b+c+d)/O;
        }
        if(sansa[0]=6){
            return 1-(a+b+c+d+e)/O;
        }
        if(sansa[0]=5){
            return 1-(a+b+c+d+e+f)/O;
        }
        if(sansa[0]=4){
            return 1-(a+b+c+d+e+f+g)/O;
        }
        if(sansa[0]=3){
            return 1-(a+b+c+d+e+f+g+h)/O;
        }
        if(sansa[0]=2){
            return 1-(a+b+c+d+e+f+g+h+x)/O;
        }
        if(sansa[0]=1){
            return 1-(a+b+c+d+e+f+g+h+x+y)/O;
        }
                    // ne valja evaluacija, treba napraviti fju da valja(vazda vraca 0.999998)
    }

