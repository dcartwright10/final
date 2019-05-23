#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;


    double t= [1,2,3,4,5,6,7,8,9,10];
    double dt = 0.1;
    double m = 7294.29;
    double q = 2;
    double x0 = (1,0);
    double v0 = (0,1);
    double tf = t[10];
    double *x;
    x=new double [10];
    double y;
    y =new double [10];
    double *v;
    v=new double [10];
int main(){
   
    leap(t,tf,dt,f,x,y);
    
    return 0;
}

double ac(x,y,v,m){
    a1 = -m*m*v;
    return a1;
}

double leap(t,tf,dt,f,x,y){
    vv = v0;
    xv = 1;
    yv = 0;
    ofstream file;
    file.open("datos.txt");
    while(t<tf){
        file << t<<" "<<x<<" "<<y<<endl;
        x+= 0.5*dt*ac;
        y+= 0.5*dt*ac;
        v += dt*ac;
        

    }
    file.close()
        

}