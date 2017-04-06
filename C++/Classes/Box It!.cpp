/*
   Contributer : github.com/jaswal72
   Email : shubhamjaswal772@gmail.com
*/
class Box{
    int l,b,h;
    public:
    Box(){
        l=0;
        b=0;
        h=0;
     }
    Box(int length, int breadth, int height){
        l=length;
        b=breadth;
        h=height;
    }
    Box(const Box &q){
        l=q.l;
        b=q.b;
        h=q.h;
     }


    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }

    long long CalculateVolume(){
        return((long long)l*b*h);
    }


    bool operator<(Box& d){
        if(l < d.l || b < d.b && l == d.l || h < d.h && l == d.l && b == d.b){
        return true;
        }
       else return false;
    }
    friend ostream& operator<<(ostream& out, Box& B);
};
    ostream& operator<<(ostream& out, Box& B){
         out<< B.l<<" "<< B.b<< " " << B.h;
         return out;
    }
