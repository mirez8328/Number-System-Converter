#include<stdio.h>
#include<math.h>
#include<string.h>
int decimalf(),binaryf(),octalf(),hexadecimalf(),d2b(),d2o(),d2hd(),b2d(),b2o(),b2hd(),o2d(),o2b(),o2hd(),hd2d(),hd2b(),hd2o();

int main()
{
    int x;
    printf("\tWelcome to you our Number System.\n\t\tSelect your correct option and convert as your wish.\n");
    printf("\n\t1. Convert Decimal to Other Number System\n");
    printf("\n\t2. Convert Binary to Other Number System\n");
    printf("\n\t3. Convert Octal to Other Number System\n");
    printf("\n\t4. Convert Hexadecimal to Other Number System\n");
    printf("\n\tPress Any wrong key for close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { decimalf(); }
    else if(x==2) { binaryf(); }
    else if(x==3) { octalf(); }
    else if(x==4) { hexadecimalf(); }
    else { return 0; }
}

int decimalf()
{
    int x;
    printf("\n\tSelect your correct option and convert as your wish.\n");
    printf("\n\t1. Convert Decimal to Binary.\n");
    printf("\n\t2. Convert Decimal to Octal.\n");
    printf("\n\t3. Convert Decimal to Hexadecimal.\n");
    printf("\n\t4. Go to Home.\n");
    printf("\n\tPress Any wrong key to close Application.\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { d2b(); }
    else if(x==2) { d2o(); }
    else if(x==3) { d2hd(); }
    else if(x==4) { main(); }
    else { return 0;}
}

int binaryf()
{
    int x;
    printf("\n\tSelect your correct option and convert as your wish.\n");
    printf("\n\t1. Convert Binary to Decimal.\n");
    printf("\n\t2. Convert Binary to Octal.\n");
    printf("\n\t3. Convert Binary to Hexadecimal.\n");
    printf("\n\t4. Go to Home.\n");
    printf("\n\tPress Any wrong key to close Application.\n\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { b2d(); }
    else if(x==2) { b2o(); }
    else if(x==3) { b2hd(); }
    else if(x==4) { main(); }
    else { return 0;}
}

int octalf()
{
    int x;
    printf("\n\tSelect your correct option and convert as your wish.\n");
    printf("\n\t1. Convert Octal to Decimal.\n");
    printf("\n\t2. Convert Octal to Binary.\n");
    printf("\n\t3. Convert Octal to Hexadecimal.\n");
    printf("\n\t4. Go to Home.\n");
    printf("\n\tPress Any wrong key to close Application.\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { o2d(); }
    else if(x==2) { o2b(); }
    else if(x==3) { o2hd(); }
    else if(x==4) { main(); }
    else { return 0;}
}

int hexadecimalf()
{
    int x;
    printf("\n\tSelect your correct option and convert as your wish.\n");
    printf("\n\t1. Convert Hexadecimal to Decimal.\n");
    printf("\n\t2. Convert Hexadecimal to Binary.\n");
    printf("\n\t3. Convert Hexadecimal to Octal.\n");
    printf("\n\t4. Go to Home.\n");
    printf("\n\tPress Any wrong key to close Application.\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { hd2d(); }
    else if(x==2) { hd2b(); }
    else if(x==3) { hd2o(); }
    else if(x==4) { main(); }
    else { return 0;}
}

int d2b()
{
    int decimal,i=0,remainder,quotient,binary[20],count=0,m,x;
    printf("\nEnter a Decimal Number: ");
    scanf("%d",&decimal);
    m=decimal;

    while(decimal!=0)
    {
        count++;
        remainder=decimal%2;
        binary[i]=remainder;
        /*printf("%d",remainder);*/
        quotient=decimal/2;
        decimal=quotient;
        i++;
    }

    printf("\nBinay number of %d is: ",m);
    for(i=count-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Decimal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1){ d2b(); }
    else if(x==2) { decimalf(); }
    else if(x==3) { main(); }
    else { return 0; }
}

int d2o()
{
    int decimal,i=0,remainder,quotient,octal[20],count=0,m,x;
    printf("\nEnter a Decimal Number: ");
    scanf("%d",&decimal);
    m=decimal;

    while(decimal!=0)
    {
        count++;
        remainder=decimal%8;
        octal[i]=remainder;
        /*printf("%d",remainder);*/
        quotient=decimal/8;
        decimal=quotient;
        i++;
    }

    printf("\nOctal number of %d is: ",m);
    for(i=count-1;i>=0;i--)
    {
        printf("%d",octal[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Decimal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { d2o(); }
    else if(x==1) { decimalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int d2hd()
{
    int decimal,i=0,remainder,quotient,hexadecimal[20],count=0,m,temp,x;
    printf("\nEnter a Decimal Number: ");
    scanf("%d",&decimal);
    m=decimal;

    while(decimal!=0)
    {
        count++;
        remainder=decimal%16;
        if( remainder<10) { temp=(48+remainder); }
        else { temp=(55+remainder); }
        hexadecimal[i]=temp;
        /*printf("%d",remainder);*/
        quotient=decimal/16;
        decimal=quotient;
        i++;
    }


    printf("\nHexadecimal number of %d is: ",m);
    for(i=count-1;i>=0;i--)
    {
        printf("%c",hexadecimal[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Decimal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { d2hd(); }
    else if(x==1) { decimalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int b2d()
{
    int binary,remainder,quotient,n,sum=0,power=0,x;
    printf("\nEnter a Binary Number: ");
    scanf("%d",&binary);
    n=binary;

    while(binary!=0)
    {
        remainder=binary%10;
        if(remainder>1)
        {
            printf("\n\tYou Enter a wrong Binary Number.\n");
            b2d();
        }
        sum=sum+(remainder*pow(2,power));
        quotient=binary/10;
        binary=quotient;
        power++;
    }
    printf("\nDecimal number of %d is: %d\n",n,sum);

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Binary Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { b2d(); }
    else if(x==1) { binaryf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int b2o()
{
    int binary,remainder,remainder2,quotient,quotient2,n,sum=0,sum2=0,i=1,power=0,x;
    printf("\nEnter a Binary Number: ");
    scanf("%d",&binary);
    n=binary;

    while(binary!=0)
    {
        remainder=binary%10;
        if(remainder>1)
        {
            printf("\n\tYou Enter a wrong Binary Number.\n");
            b2o();
        }
        sum=sum+(remainder*pow(2,power));
        quotient=binary/10;
        binary=quotient;
        power++;
    }

    while(sum!=0)
    {
        remainder2=sum%8;
        sum2=sum2+(remainder2*i);
        quotient2=sum/8;
        sum=quotient2;
        i*=10;
    }
    printf("\nOctal Number of %d is: %d\n",n,sum2);

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Binary Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { b2o(); }
    else if(x==1) { binaryf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int b2hd()
{
    int binary,remainder,remainder2,quotient,quotient2,n,sum=0,sum2=0,i=0,power=0,temp=0,count=0,hexadecimal[i],x;
    printf("\nEnter a Binary Number: ");
    scanf("%d",&binary);
    n=binary;

    while(binary!=0)
    {
        remainder=binary%10;
        if(remainder>1)
        {
            printf("\n\tYou Enter a wrong Binary Number.\n");
            b2hd();
        }
        sum=sum+(remainder*pow(2,power));
        quotient=binary/10;
        binary=quotient;
        power++;
    }

    while(sum!=0)
    {
        count++;
        remainder2=sum%16;
        if( remainder2<10) { temp=(48+remainder2); }
        else { temp=(55+remainder2); }
        hexadecimal[i]=temp;
        /*printf("%d",remainder);*/
        quotient2=sum/16;
        sum=quotient2;
        i++;
    }
    printf("\nHexadecimal number of %d is: ",n);
    for(i=count-1;i>=0;i--)
    {
        printf("%c",hexadecimal[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Binary Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { b2hd(); }
    else if(x==1) { binaryf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int o2d()
{
    int octal,remainder,quotient,n,sum=0,power=0,x;
    printf("\nEnter a Octal Number: ");
    scanf("%d",&octal);
    n=octal;

    while(octal!=0)
    {
        remainder=octal%10;
        if(remainder>7)
        {
            printf("\n\tYou Enter a wrong Octal Number.\n");
            o2d();
        }
        sum=sum+(remainder*pow(8,power));
        quotient=octal/10;
        octal=quotient;
        power++;
    }
    printf("\nDecimal number of %d is: %d\n",n,sum);

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Octal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { o2d(); }
    else if(x==1) { octalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int o2b()
{
    int octal,remainder,quotient,remainder2,quotient2,n,power=0,decimal=0,count=0,i=0,binary[20],x;
    printf("\nEnter a Octal Number: ");
    scanf("%d",&octal);
    n=octal;

    while(octal!=0)
    {
        remainder=octal%10;
        if(remainder>7)
        {
            printf("\n\tYou Enter a wrong Octal Number.\n");
            o2b();
        }
        decimal=decimal+(remainder*pow(8,power));
        quotient=octal/10;
        octal=quotient;
        power++;
    }

    while(decimal!=0)
    {
        count++;
        remainder2=decimal%2;
        binary[i]=remainder2;
        /*printf("%d",remainder);*/
        quotient2=decimal/2;
        decimal=quotient2;
        i++;
    }

    printf("\nBinay number of %d is: ",n);
    for(i=count-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Octal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { o2b(); }
    else if(x==1) { octalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int o2hd()
{
    int octal,remainder,quotient,remainder2,quotient2,n,decimal=0,power=0,count=0,i=0,hexadecimal[20],temp,x;
    printf("\nEnter a Octal Number: ");
    scanf("%d",&octal);
    n=octal;

    while(octal!=0)
    {
        remainder=octal%10;
        if(remainder>7)
        {
            printf("\n\tYou Enter a wrong Octal Number.\n");
            o2hd();
        }
        decimal=decimal+(remainder*pow(8,power));
        quotient=octal/10;
        octal=quotient;
        power++;
    }

    while(decimal!=0)
    {
        count++;
        remainder2=decimal%16;
        if( remainder2<10) { temp=(48+remainder2); }
        else { temp=(55+remainder2); }
        hexadecimal[i]=temp;
        /*printf("%d",remainder);*/
        quotient2=decimal/16;
        decimal=quotient2;
        i++;
    }
    printf("\nHexadecimal number of %d is: ",n);
    for(i=count-1;i>=0;i--)
    {
        printf("%c",hexadecimal[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Octal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { o2hd(); }
    else if(x==1) { octalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int hd2d()
{
    int decimal=0,n,power=0,i=0,value,len,x;
    char hexadecimal[20];
    printf("\nEnter a Hexadecimal Number: ");

    //gets(hexadecimal);
    scanf("%s",&hexadecimal);
    len=strlen(hexadecimal);

    for(i=len-1;i>=0;i--)
    {
        if(hexadecimal[i]>='0' && hexadecimal[i]<='9' )
        {
            value=hexadecimal[i]-48;
        }
        else if(hexadecimal[i]>='A' && hexadecimal[i]<='F' )
        {
            value=hexadecimal[i]-65+10;
        }
        else if(hexadecimal[i]>='a' && hexadecimal[i]<='f' )
        {
            value=hexadecimal[i]-97+10;
        }
        else
        {
            printf("\n\tYou Enter a wrong Hexadecimal Number.\n");
            hd2d();
        }

        decimal=decimal+value*pow(16,power);
        power++;
    }
    printf("\nDecimal number of %s is: %d",hexadecimal,decimal);

    level1:
    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Hexadecimal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { hd2d(); }
    else if(x==1) { hexadecimalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int hd2b()
{
    int decimal=0,remainder,quotient,power=0,count=0,i=0,j=0,value,len,binary[20],x;
    char hexadecimal[20];
    printf("\nEnter a Hexadecimal Number: ");
    //gets(hexadecimal);
    scanf("%s",&hexadecimal);
    len=strlen(hexadecimal);

    for(i=len-1;i>=0;i--)
    {
        if(hexadecimal[i]>='0' && hexadecimal[i]<='9' )
        {
            value=hexadecimal[i]-48;
        }
        else if(hexadecimal[i]>='A' && hexadecimal[i]<='F' )
        {
            value=hexadecimal[i]-65+10;
        }
        else if(hexadecimal[i]>='a' && hexadecimal[i]<='f' )
        {
            value=hexadecimal[i]-97+10;
        }
        else
        {
            printf("\n\tYou Enter a wrong Hexadecimal Number.\n");
            hd2b();
        }
        decimal=decimal+value*pow(16,power);
        power++;
    }

    while(decimal!=0)
    {
        count++;
        remainder=decimal%2;
        binary[j]=remainder;
        /*printf("%d",remainder);*/
        quotient=decimal/2;
        decimal=quotient;
        j++;
    }

    printf("\nBinay number of %s is: ",hexadecimal);
    for(i=count-1;i>=0;i--)
    {
        printf("%d",binary[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Hexadecimal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { hd2b(); }
    else if(x==1) { hexadecimalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}

int hd2o()
{
    int decimal=0,remainder,quotient,power=0,count=0,i=0,j=0,value,len,octal[20],x;
    char hexadecimal[20];
    printf("\nEnter a HexaDecimal Number: ");
    //gets(hexadecimal);
    scanf("%s",&hexadecimal);
    len=strlen(hexadecimal);

    for(i=len-1;i>=0;i--)
    {
        if(hexadecimal[i]>='0' && hexadecimal[i]<='9' )
        {
            value=hexadecimal[i]-48;
        }
        else if(hexadecimal[i]>='A' && hexadecimal[i]<='F' )
        {
            value=hexadecimal[i]-65+10;
        }
        else if(hexadecimal[i]>='a' && hexadecimal[i]<='f' )
        {
            value=hexadecimal[i]-97+10;
        }
        else
        {
            printf("\n\tYou Enter a wrong Hexadecimal Number.\n");
            hd2o();
        }
        decimal=decimal+value*pow(16,power);
        power++;
    }

    while(decimal!=0)
    {
        count++;
        remainder=decimal%8;
        octal[j]=remainder;
        quotient=decimal/8;
        decimal=quotient;
        j++;
    }

    printf("\nOctal number of %s is: ",hexadecimal);
    for(i=count-1;i>=0;i--)
    {
        printf("%d",octal[i]);
    }

    printf("\n\n\tSelect your correct option.\n");
    printf("\n\t1. Continue.\n");
    printf("\n\t2. Back to Hexadecimal Convert System.\n");
    printf("\n\t3. Go to Main Menu.\n");
    printf("\n\tPress Any wrong key to close Application\n");
    printf("\nEnter your choice: ");
    scanf("%d",&x);
    if(x==1) { hd2o(); }
    else if(x==1) { hexadecimalf(); }
    else if(x==2) { main(); }
    else { return 0; }
}
