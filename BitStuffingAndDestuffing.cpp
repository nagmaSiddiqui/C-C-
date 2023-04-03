#include <stdio.h>
int bitstream[50];
int size = 0;

/*Takes the input message from the user counts the number of digits 
  and stores it digit by digit into the bitstream array*/
void input()
{
    long int i,x;
    printf("Enter a bitstream message: ");
    scanf("%ld",&i);
    x = i;
    while(x!=0)  
    {  
       x=x/10;  
       size++;  
    }
    
    int c=size;
    int j [size];
    
    while(i != 0)
    {
        bitstream[--c] = i % 10;
        i /= 10;
    }
}

//Prints the bitstream array digit by digit
void print()
{
  printf("\nDATA: ");
  for (int i=0; i<size; i++)
    {
      printf ("%d ", bitstream[i]);
    }
    printf("\n");
}

//Adds a 3 digit header to the bitstream array
void AddHeader(int n)
{
    for (int i=size-1; i>=0; i--)
    {
      bitstream[i+3]=bitstream[i];
    }
    bitstream[0]=n/100;n=n%100;
    bitstream[1]=n/10;n=n%10;
    bitstream[2]=n;
    size+=3;
}

//Adds a 3 digit trailer to the bitstream array
void AddTrailer(int n)
{
    
    bitstream[size]=n/100;n=n%100;
    bitstream[size+1]=n/10;n=n%10;
    bitstream[size+2]=n;
    size+=3;
}

//Removes a 3 digit header from the bitstream array
void RemoveHeader()
{
    printf("\nHeader: %d %d %d", bitstream[0],bitstream[1],bitstream[2]);
    for (int i=1; i<=size-3; i++)
    {
      bitstream[i]=bitstream[i+3];
    }
    size-=3;
}

//Removes a 3 digit trailer from the bitstream array
void RemoveTrailer()
{
    printf("\nTrailer: %d %d %d", bitstream[size-3],bitstream[size-2],bitstream[size-1]);
    size-=3;
}

int main ()
{
  input();
  printf ("\nBit Stuffing (Sender Node): \n===============================");
  
  printf ("\nApplication Layer (Header:000 )");
  AddHeader(000);
  print();
  
  printf ("\n\nPresentation Layer (Header: 001)");
  AddHeader(001);
  print();
  
  printf ("\n\nSession Layer (Header: 010)");
  AddHeader(10);
  print();
  
  printf ("\n\nTransport Layer (Header: 011)");
  AddHeader(11);
  print();
  
  printf ("\n\nNetwork Layer (Header: 100)");
  AddHeader(100);
  print();
  
  printf ("\n\nData Link Layer (Header: 101 || Trailer: 111)");
  AddHeader(101);
  AddTrailer(111);
  print();
  printf ("\n\nPhysical Layer (Header: 110)");
  AddHeader(110);
  print();

  printf ("\n\nBit Destuffing (Receiver Node): \n==============================="); 
  printf ("\nPhysical Layer");
  RemoveHeader();
  print();
  
  printf ("\n\nData Link Layer");
  RemoveHeader();
  RemoveTrailer();
  print();
  
  printf ("\n\nNetwork Layer");
  RemoveHeader();
  print();
  
  printf ("\n\nTransport Layer");
  RemoveHeader();
  print();
  
  printf ("\n\nSession Layer");
  RemoveHeader();
  print();
  
  printf ("\n\nPresentation Layer");
  RemoveHeader();
  print();
  
  printf ("\n\nApplication Layer");
  RemoveHeader();
  print();
  return 0;
}

