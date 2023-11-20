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
           (redoslijed[0] == 1 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
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

    int snaga2FH(int nekiFH[5], float tajFH){
        if(tajFH==1.3){
            return nekiFH[4];
        }
        else{
            return nekiFH[0];
        }
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

    float kojiTP(int nekiTP[5]){
        float tajTP;
        if(nekiTP[0] == nekiTP[1] && nekiTP[2] == nekiTP[3]){
            tajTP = 1.234;
        }
        else if(nekiTP[0] == nekiTP[1] && nekiTP[3] == nekiTP[4]){
            tajTP = 1.245;
        }
        else{
            tajTP = 2.345;
        }
        return tajTP;
    }

    int snaga1TP(int nekiTP[5], float tajTP){
        if(tajTP == 1.234){
            return nekiTP[3];
        }
        else if(tajTP == 1.245){
            return nekiTP[4];
        }
        else{
            return nekiTP[4];
        }
    }

    int snaga2TP(int nekiTP[5], float tajTP){
        if(tajTP == 1.234){
            return nekiTP[1];
        }
        if(tajTP == 1.245){
            return nekiTP[1];
        }
        else{
            return nekiTP[2];
        }
    }

    int snaga3TP(int nekiTP[5], float tajTP){
        if(tajTP == 1.234){
            return nekiTP[4];
        }
        if(tajTP == 1.245){
            return nekiTP[2];
        }
        else{
            return nekiTP[0];
        }
    }

    float kojiP(int nekiP[5]){
        float tajP;
        if(nekiP[0]==nekiP[1]){
            tajP=1.2;
        }
        if(nekiP[1]==nekiP[2]){
            tajP=2.3;
        }
        if(nekiP[2]==nekiP[3]){
            tajP=3.4;
        }
        if(nekiP[3]==nekiP[4]){
            tajP=4.5;
        }
        return tajP;
    }

    int snaga1P(int nekiP[5], float tajP){
        if(tajP==1.2){
            return nekiP[1];
        }
        if(tajP==2.3){
            return nekiP[2];
        }
        if(tajP==3.4){
            return nekiP[3];
        }
        if(tajP==4.5){
            return nekiP[4];
        }
    }

    int snaga2P(int nekiP[5], float tajP){
        if(tajP==1.2){
            return nekiP[4];
        }
        if(tajP==2.3){
            return nekiP[4];
        }
        if(tajP==3.4){
            return nekiP[4];
        }
        if(tajP==4.5){
            return nekiP[2];
        }
    }

    int snaga3P(int nekiP[5], float tajP){
        if(tajP==1.2){
            return nekiP[3];
        }
        if(tajP==2.3){
            return nekiP[3];
        }
        if(tajP==3.4){
            return nekiP[1];
        }
        if(tajP==4.5){
            return nekiP[1];
        }
    }

    int snaga4P(int nekiP[5], float tajP){
        if(tajP==1.2){
            return nekiP[2];
        }
        if(tajP==2.3){
            return nekiP[0];
        }
        if(tajP==3.4){
            return nekiP[0];
        }
        if(tajP==4.5){
            return nekiP[0];
        }
    }

    // fje fullhouse, TOAK, two pair i pair trebaju da kazu gdje se nalazi ta kombinacija (koja je velicina)
