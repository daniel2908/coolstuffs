#include <fstream>
#include <math.h>
using namespace std;

const int width= 1920, height = 1080;

// this checks if the number in question is a prime.
bool isPrime(int num)
{
    for(int i = 2; i <= num / 2; i++) 
    {
       if(num % i == 0) 
       {
            return false;
       }
    }
    return true
}




void drawimage()
{

bool prime;
    ofstream img("picture.ppm");
    img << "P3" << endl;
    img << width << " " << height << endl;
    img << "255" << endl;

    for (int y = 0; y < height; y++)
    { 
        for ( int x=0 ; x < width; x++ )
        {

            int num = x*y;
            prime = isPrime(num);
            if (num % 2 == 0 && num !=2)
            {
            int r=0;
            int g=0;
            int b=0;
            img << r << " " << g  << " " << b << endl;
            }            
            else if (num % 3 == 0 && num !=3)
            {
            int r=0;
            int g=0;
            int b=0;
            img << r << " " << g  << " " << b << endl;
            }
            else if(prime == true)
            {
                int r = 255;
                int g = 255;
                int b = 255;
                img << r << " " << g  << " " << b << endl;

                
            }
            int r=0;
            int g=0;
            int b=0;
            img << r << " " << g  << " " << b << endl;
            

        }
    }
    system("xdg-open picture.ppm");
}

int main ()
{

    drawimage();    
   return 0;
}
