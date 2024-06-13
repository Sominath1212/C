#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main( )
{
    printf( "----------------------------------------\n" );
    printf( "WELCOME TO FREE FIRE \n" );
    char choice;
    do
    {

        printf( "1.AR\n" );
        printf( "2.SMG\n" );
        printf( "3.Sniper\n" );
        printf( "4.Shotgun\n" );
        printf( "5.Subsniper\n" );
        printf( "6.Pistol\n" );
        printf( "7.Melle\n" );
        printf( "8.Grenede\n" );
        printf( "9.Other\n" );
        char type;
        fflush( stdin );
        printf( "What you want choice option=\n" );
        scanf( "%c" , &type );
        switch ( type )
        {
        case '1':
            printf( "YOUR ENTERED A ASOLT RIFEL SECTION\n" );
            char ar;
            printf( "list of asolt rifels\n" );
            printf( "1.AK-47\n" );
            printf( "2.Scar-L\n" );
            printf( "3.M4A1\n" );
            printf( "4.M60\n" );
            printf( "5.M14\n" );
            printf( "6.Groza\n" );
            printf( "7.Famas\n" );
            printf( "8.XM8\n" );
            printf( "9.AN94\n" );
            printf( "a.Aug\n" );
            printf( "b.Parafel\n" );
            printf( "c.Kingfisher\n" );
            printf( "d.G36\n" );
            printf( "e.Plasma\n" );
            printf( "enter right option=\n" );
            fflush( stdin );
            scanf( "%c" , &ar );
            switch ( ar )
            {
            case '1': //ak-47
                printf( "you have choose AK-47 gun\n" );

                printf( "you have 1600 coin\n" );
                printf( "you have 1600 coin to enter yes for (Y/y)=\n" );
                char a;
                fflush( stdin );
                scanf( "%c" , &a );
                if ( a == 'Y' || a == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET AK-47 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //scar-L
            case '2':printf( "you  have choose SCANR-L gun\n" );
                printf( "you have 1800 coin\n" );
                printf( "you have 1800 coin to enter yes for (Y/y)=\n" );
                char B;
                fflush( stdin );
                scanf( "%c" , &B );
                if ( B == 'Y' || B == 'y' )
                {
                    printf( "CONGRATULATION YOU GET SCAR-L GUN\n" );

                }
                else
                {
                    break;
                }

                break;
            //M4A1
            case '3':
                printf( "you choose M4A1 gun\n" );
                printf( "you have 1100 coin\n" );
                printf( "you have 1100 coin to enter yes for (Y/y)=\n" );
                char c;
                fflush( stdin );
                scanf( "%c" , &c );
                if ( c == 'Y' || c == 'y' )
                {
                    printf( "CONGRATULATION YOU GET M4A1 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //M60
            case '4':
                printf( "you choose M60 gun\n" );
                printf( "you have 1100 coin\n" );
                printf( "you have 1100 coin to enter yes for (Y/y)=\n" );
                char d;
                fflush( stdin );
                scanf( "%c" , &d );
                if ( d == 'Y' || d == 'y' )
                {
                    printf( "CONGRATULATION YOU GET M60 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //M14
            case '5':
                printf( "you choose M14 gun\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char e;
                fflush( stdin );
                scanf( "%c" , &e );
                if ( e == 'Y' || e == 'y' )
                {
                    printf( "CONGRATULATION YOU GET M14 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //Groza
            case '6':
                printf( "you choose Groza gun\n" );
                printf( "you have 1900 coin\n" );
                printf( "you have 1900 coin to enter yes for (Y/y)=\n" );
                char f;
                fflush( stdin );
                scanf( "%c" , &f );
                if ( f == 'Y' || f == 'y' )
                {
                    printf( "CONGRATULATION YOU GET Groza GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //Famas
            case '7':
                printf( "you choose Famas gun\n" );
                printf( "you have 1000 coin\n" );
                printf( "you have 1000 coin to enter yes for (Y/y)=\n" );
                char g;
                fflush( stdin );
                scanf( "%c" , &g );
                if ( g == 'Y' || g == 'y' )
                {
                    printf( "CONGRATULATION YOU GET Famas GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //XM8
            case '8':
                printf( "you choose XM8 gun\n" );
                printf( "you have 1600 coin\n" );
                printf( "you have 1600 coin to enter yes for (Y/y)=\n" );
                char h;
                fflush( stdin );
                scanf( "%c" , &h );
                if ( h == 'Y' || h == 'y' )
                {
                    printf( "CONGRATULATION YOU GET XM8 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            //AN94
            case '9':
                printf( "you choose AN94 gun\n" );
                printf( "you have 1100 coin\n" );
                printf( "you have 1100 coin to enter yes for (Y/y)=\n" );
                char i;
                fflush( stdin );
                scanf( "%c" , &i );
                if ( i == 'Y' || i == 'y' )
                {
                    printf( "CONGRATULATION YOU GET AN94 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //aug
            case 'a':
                printf( "you choose AUG gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char j;
                fflush( stdin );
                scanf( "%c" , &j );
                if ( j == 'Y' || j == 'y' )
                {
                    printf( "CONGRATULATION YOU GET AUG GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //parafel
            case 'b':
                printf( "you choose PARAFEL gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char k;
                fflush( stdin );
                scanf( "%c" , &k );
                if ( k == 'Y' || k == 'y' )
                {
                    printf( "CONGRATULATION YOU GET PARAFEL GUN\n" );

                }
                else
                {
                    break;
                }
                break;
//Kingfisher
            case 'c':
                printf( "you choose KINGFISHER gun\n" );
                printf( "you have 1100 coin\n" );
                printf( "you have 1100 coin to enter yes for (Y/y)=\n" );
                char l;
                fflush( stdin );
                scanf( "%c" , &l );
                if ( l == 'Y' || l == 'y' )
                {
                    printf( "CONGRATULATION YOU GET KINGFISHER GUN\n" );

                }
                else
                {
                    break;
                }
                break;
//G36
            case 'd':
                printf( "you choose G36 gun\n" );
                printf( "you have 1300 coin\n" );
                printf( "you have 1300 coin to enter yes for (Y/y)=\n" );
                char m;
                fflush( stdin );
                scanf( "%c" , &m );
                if ( m == 'Y' || m == 'y' )
                {
                    printf( "CONGRATULATION YOU GET G36 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
//Plasma
            case 'e':
                printf( "you choose PLASMA gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char n;
                fflush( stdin );
                scanf( "%c" , &n );
                if ( n == 'Y' || n == 'y' )
                {
                    printf( "CONGRATULATION YOU GET PLASMA GUN\n" );

                }
                else
                {
                    break;
                }
                break;


            default:printf( "you enter wrong option\n" );
                break;
            }//end of AR section

            break;

        case '5': printf( "YOUR ENTERED IN SUBSNIPER SECTION\n" );
            char subar;
            printf( "1.AC80\n" );
            printf( "2.Woodpeker\n" );
            printf( "3.SKS\n" );
            printf( "4.SVD\n" );
            printf( "Enter right option=\n" );
            fflush( stdin );
            scanf( "%c" , &subar );
            switch ( subar )
            {
                //ac80
            case '1':
                printf( "you choose AC80 gun\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char o;
                fflush( stdin );
                scanf( "%c" , &o );
                if ( o == 'Y' || o == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET  AC80 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //woodpeker
            case '2': printf( "you choose WOODPEKER gun\n" );
                printf( "you have 1900 coin\n" );
                printf( "you have 1900 coin to enter yes for (Y/y)=\n" );
                char n;
                fflush( stdin );
                scanf( "%c" , &n );
                if ( n == 'Y' || n == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET WOODPEKER GUN\n" );

                }
                else
                {
                    break;
                }
                break;

                //SKS
            case '3':
                printf( "you choose PLASMA gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char z;
                fflush( stdin );
                scanf( "%c" , &z );
                if ( z == 'Y' || z == 'y' )
                {
                    printf( "CONGRATULATION YOU GET PLASMA GUN\n" );

                }
                else
                {
                    break;
                }
                break;
                //SVD
            case '4':
                printf( "you choose SVD gun\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char p;
                fflush( stdin );
                scanf( "%c" , &p );
                if ( p == 'Y' || p == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET PLASMA GUN\n" );

                }
                else
                {
                    break;
                }
                break;


            default:printf( "your enter wrong option" );
                break;
            }//end of sunsniper section
            break;
        case '2': printf( "YOU HAVE ENTERED IN SUBMACHINE SECTION\n" );
            char smg;

            printf( "1.UMP\n" );
            printf( "2.MP40\n" );
            printf( "3.MP5\n" );
            printf( "4.VSS\n" );
            printf( "5.P90\n" );
            printf( "6.CG15\n" );
            printf( "7.THOMSON\n" );
            printf( "8.VECTOR\n" );
            printf( "9.MAC10\n" );
            printf( "0.BIZON\n" );
            printf( "enter right option=\n" );
            fflush( stdin );
            scanf( "%c" , &smg );
            switch ( smg )
            {
            case '1':
                printf( "you choose UMP gun\n" );
                printf( "you have 1500 coin\n" );
                printf( "you have 1500 coin to enter yes for (Y/y)=\n" );
                char q;
                fflush( stdin );
                scanf( "%c" , &q );
                if ( q == 'Y' || q == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET UMP GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '2':
                printf( "you choose MP40 gun\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char r;
                fflush( stdin );
                scanf( "%c" , &r );
                if ( r == 'Y' || r == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET MP40 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '3':
                printf( "you choose MP5 gun\n" );
                printf( "you have 1300 coin\n" );
                printf( "you have 1300 coin to enter yes for (Y/y)=\n" );
                char s;
                fflush( stdin );
                scanf( "%c" , &s );
                if ( s == 'Y' || s == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET MP5 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you choose VSS gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char t;
                fflush( stdin );
                scanf( "%c" , &t );
                if ( t == 'Y' || t == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET VSS GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '5':
                printf( "you choose P90 gun\n" );
                printf( "you have 1500 coin\n" );
                printf( "you have 1500 coin to enter yes for (Y/y)=\n" );
                char n;
                fflush( stdin );
                scanf( "%c" , &n );
                if ( n == 'Y' || n == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET P90 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '6':
                printf( "you choose CG15 gun\n" );
                printf( "you have 1200 coin\n" );
                printf( "you have 1200 coin to enter yes for (Y/y)=\n" );
                char u;
                fflush( stdin );
                scanf( "%c" , &u );
                if ( u == 'Y' || u == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET CG15 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '7':
                printf( "you choose THOMSON gun\n" );
                printf( "you have 1500 coin\n" );
                printf( "you have 1500 coin to enter yes for (Y/y)=\n" );
                char v;
                fflush( stdin );
                scanf( "%c" , &v );
                if ( v == 'Y' || v == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET THOMSON GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '8':
                printf( "you choose VECTOR gun\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char w;
                fflush( stdin );
                scanf( "%c" , &w );
                if ( w == 'Y' || w == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET VECTOR GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '9':
                printf( "you choose MAC10 gun\n" );
                printf( "you have 1400 coin\n" );
                printf( "you have 1400 coin to enter yes for (Y/y)=\n" );
                char x;
                fflush( stdin );
                scanf( "%c" , &x );
                if ( x == 'Y' || x == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET MAC10 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '0':
                printf( "you choose BIZON gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char y;
                fflush( stdin );
                scanf( "%c" , &y );
                if ( y == 'Y' || y == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET BIZON GUN\n" );

                }
                else
                {
                    break;
                }
                break;


            default:printf( "enter right option" );
                break;
            }//END OF SMG SECTION
            break;
        case '3':printf( "your entered in sniper section\n" );
            char sn;
            printf( "List of all snipers\n" );
            printf( "1.AWM\n" );
            printf( "2.M82B\n" );
            printf( "3.KAR98K\n" );
            printf( "4.M24\n" );
            printf( "5.HEAL SNIPER\n" );
            printf( "enter right option=\n" );
            scanf( "%c" , &sn );
            switch ( sn )
            {
            case '1':
                printf( "you choose AWM gun\n" );
                printf( "you have 2200 coin\n" );
                printf( "you have 2200 coin to enter yes for (Y/y)=\n" );
                char a;
                fflush( stdin );
                scanf( "%c" , &a );
                if ( a == 'Y' || a == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET AWM GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '2':
                printf( "you choose M82B gun\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char b;
                fflush( stdin );
                scanf( "%c" , &b );
                if ( b == 'Y' || b == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M82B GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '3':printf( "you choose KAR98K gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char C;
                fflush( stdin );
                scanf( "%c" , &C );
                if ( C == 'Y' || C == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET KAR98K GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you  have choose M24 gun\n" );
                printf( "you have 1900 coin\n" );
                printf( "you have 1900 coin to enter yes for (Y/y)=\n" );
                char D;
                fflush( stdin );
                scanf( "%c" , &D );
                if ( D == 'Y' || D == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M24 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '5':
                printf( "you have choose heal sniper gun\n" );
                printf( "you have 1300 coin\n" );
                printf( "you have 1300 coin to enter yes for (Y/y)=\n" );
                char e;
                fflush( stdin );
                scanf( "%c" , &e );
                if ( e == 'Y' || e == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET KAR98K GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            default:printf( "enter currect option\n" );
                break;
            }//end of sniper
            break;
//shotgun
        case '4':
            printf( "your entered in shotgun section\n" );
            printf( "List of all shotgun\n" );
            printf( "1.M1887\n" );
            printf( "2.SPAS12\n" );
            printf( "3.M1014\n" );
            printf( "4.MAG10\n" );
            printf( "5.CHRAGE BOOSTER\n" );
            printf( "6.TROGON\n" );
            char st;

            printf( "enter currect option=\n" );
            fflush( stdin );
            scanf( "%c" , &st );
            switch ( st )
            {
            case '1':
                printf( "you choose M1887 gun\n" );
                printf( "you have 1900 coin\n" );
                printf( "you have 1900 coin to enter yes for (Y/y)=\n" );
                char a;
                fflush( stdin );
                scanf( "%c" , &a );
                if ( a == 'Y' || a == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M1887 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '2':
                printf( "you choose SPAS12 gun\n" );
                printf( "you have 1500 coin\n" );
                printf( "you have 1500 coin to enter yes for (Y/y)=\n" );
                char B;
                fflush( stdin );
                scanf( "%c" , &B );
                if ( B == 'Y' || B == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET KAR98K GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '3':
                printf( "you choose M1014 gun\n" );
                printf( "you have 1600 coin\n" );
                printf( "you have 1600 coin to enter yes for (Y/y)=\n" );
                char C;
                fflush( stdin );
                scanf( "%c" , &C );
                if ( C == 'Y' || C == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M11014 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you have choose MAG10 gun\n" );
                printf( "you have 1700 coin\n" );
                printf( "you have 1700 coin to enter yes for (Y/y)=\n" );
                char D;
                fflush( stdin );
                scanf( "%c" , &D );
                if ( D == 'Y' || D == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET MAG10 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '5':
                printf( "you have choose CHRAGE BOOSTER gun\n" );
                printf( "you have 1900 coin\n" );
                printf( "you have 1900 coin to enter yes for (Y/y)=\n" );
                char e;
                fflush( stdin );
                scanf( "%c" , &e );
                if ( e == 'Y' || e == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET CHRAGE BOOSTER GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '6':
                printf( "you have choose TROGON gun\n" );
                printf( "you have 1100 coin\n" );
                printf( "you have 1100 coin to enter yes for (Y/y)=\n" );
                char f;
                fflush( stdin );
                scanf( "%c" , &f );
                if ( f == 'Y' || f == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET TROGON GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            default:printf( "enter right option\n" );
                break;
            }//end of shotgun section
            break;
        case '6':printf( "you has entered in PISTOL section\n" );
            printf( "List of pistols\n" );
            printf( "1.USP\n" );
            printf( "2.G18\n" );
            printf( "3.M500\n" );
            printf( "4.DESERT EAGLE\n" );
            printf( "5.M1873\n" );
            printf( "6.M1917\n" );
            printf( "7.MINI UZI\n" );
            printf( "8.HEAL PISTOL\n" );
            printf( "9.HAND CANNON\n" );
            printf( "a.ICE GUN \n" );

            printf( "enter currect option=\n" );
            char pi;
            fflush( stdin );
            scanf( "%c" , &pi );
            switch ( pi )
            {
            case '1':
                printf( "you have choose USP gun\n" );
                printf( "you have choose 100 coin\n" );
                printf( "you have 100 coin to enter yes for (Y/y)=\n" );
                char f;
                fflush( stdin );
                scanf( "%c" , &f );
                if ( f == 'Y' || f == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET USP GUN\n" );

                }
                else
                {
                    break;
                }
                break;

            case '2': printf( "you have choose G18 gun\n" );
                printf( "you have 500 coin\n" );
                printf( "you have 500 coin to enter yes for (Y/y)=\n" );
                char e;
                fflush( stdin );
                scanf( "%c" , &e );
                if ( e == 'Y' || e == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET G18 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '3': printf( "you have choose M500 gun\n" );
                printf( "you have 500 coin\n" );
                printf( "you have 500 coin to enter yes for (Y/y)=\n" );
                char g;
                fflush( stdin );
                scanf( "%c" , &g );
                if ( g == 'Y' || g == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M500 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you have choose DESERT EAGLE gun\n" );
                printf( "you have 800 coin\n" );
                printf( "you have 800 coin to enter yes for (Y/y)=\n" );
                char h;
                fflush( stdin );
                scanf( "%c" , &h );
                if ( h == 'Y' || h == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET DESERT EAGLE GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '5':
                printf( "you have choose M1873 gun\n" );
                printf( "you have 800 coin\n" );
                printf( "you have 800 coin to enter yes for (Y/y)=\n" );
                char i;
                fflush( stdin );
                scanf( "%c" , &i );
                if ( i == 'Y' || i == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M1873 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '6':
                printf( "you have choose M1917 gun\n" );
                printf( "you have 900 coin\n" );
                printf( "you have 900 coin to enter yes for (Y/y)=\n" );
                char j;
                fflush( stdin );
                scanf( "%c" , &j );
                if ( j == 'Y' || j == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET M1917 GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '7':
                printf( "you have choose MINI UZI gun\n" );
                printf( "you have 800 coin\n" );
                printf( "you have 800 coin to enter yes for (Y/y)=\n" );
                char k;
                fflush( stdin );
                scanf( "%c" , &k );
                if ( k == 'Y' || k == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET MINI UZI GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '8':
                printf( "you have choose HEAL PISTOL gun\n" );
                printf( "you have 300 coin\n" );
                printf( "you have 300 coin to enter yes for (Y/y)=\n" );
                char l;
                fflush( stdin );
                scanf( "%c" , &l );
                if ( l == 'Y' || l == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET HEAL PISTOL GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case '9':
                printf( "you have choose HAND CANNON gun\n" );
                printf( "you have 1300 coin\n" );
                printf( "you have 1300 coin to enter yes for (Y/y)=\n" );
                char n;
                fflush( stdin );
                scanf( "%c" , &n );
                if ( n == 'Y' || n == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET HAND CANNON GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            case 'a':
                printf( "you have choose ICE GUN gun\n" );
                printf( "you have 1200 coin\n" );
                printf( "you have 1200 coin to enter yes for (Y/y)=\n" );
                char p;
                fflush( stdin );
                scanf( "%c" , &p );
                if ( p == 'Y' || p == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET ICE GUN GUN\n" );

                }
                else
                {
                    break;
                }
                break;
            default:printf( "choose right option\n" );
                break;
            }//end of pistol section
            break;
        case '7':printf( "YOU HAVE ENTERED IN MELEE SECTION\n" );
            printf( "List of melee weapens\n" );
            printf( "1.PAN\n" );
            printf( "2.PARAG\n" );
            printf( "3.BAT\n" );
            printf( "4.KATANA\n" );
            printf( "5.SCYTE\n" );
            printf( "6.FF KNIFE\n" );
            printf( "enter currect option=\n" );
            char ml;
            scanf( "%c" , &ml );
            switch ( ml )
            {
            case '1':
                printf( "you have choose PAN \n" );
                printf( "you have 1200 coin\n" );
                printf( "you have 1200 coin to enter yes for (Y/y)=\n" );
                char p;
                fflush( stdin );
                scanf( "%c" , &p );
                if ( p == 'Y' || p == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET PAN \n" );

                }
                else
                {
                    break;
                }
                break;
            case '2':
                printf( "you have choose PARAG \n" );
                printf( "you have 1300 coin\n" );
                printf( "you have 1300 coin to enter yes for (Y/y)=\n" );
                char m;
                fflush( stdin );
                scanf( "%c" , &m );
                if ( m == 'Y' || m == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET PARAG \n" );

                }
                else
                {
                    break;
                }
                break;
            case '3':
                printf( "you have choose BAT \n" );
                printf( "you have 1400 coin\n" );
                printf( "you have 1400 coin to enter yes for (Y/y)=\n" );
                char n;
                fflush( stdin );
                scanf( "%c" , &n );
                if ( n == 'Y' || n == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET PARAG \n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you have choose KATANA \n" );
                printf( "you have 1500 coin\n" );
                printf( "you have 1500 coin to enter yes for (Y/y)=\n" );
                char o;
                fflush( stdin );
                scanf( "%c" , &o );
                if ( o == 'Y' || o == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET KATANA \n" );

                }
                else
                {
                    break;
                }
                break;
            case '5':
                printf( "you have choose SCYTE \n" );
                printf( "you have 1800 coin\n" );
                printf( "you have 1800 coin to enter yes for (Y/y)=\n" );
                char q;
                fflush( stdin );
                scanf( "%c" , &q );
                if ( q == 'Y' || q == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET SCYTE \n" );

                }
                else
                {
                    break;
                }
                break;
            case '6':
                printf( "you have choose FF KNIFE\n" );
                printf( "you have 800 coin\n" );
                printf( "you have 800 coin to enter yes for (Y/y)=\n" );
                char r;
                fflush( stdin );
                scanf( "%c" , &r );
                if ( r == 'Y' || r == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET FF KNIFE \n" );

                }
                else
                {
                    break;
                }
                break;
            default:printf( "enter currect option\n" );
                break;
            }//end of melee section
            break;


        case '8':printf( "YOU HAVE ENTERED IN GREANEDE SECTION\n" );
            printf( "List of greanedes\n" );
            printf( "1.GREANEDE\n" );
            printf( "2.SMOKE\n" );
            printf( "3.GLOOWALL\n" );
            printf( "4.GLOO MELTER\n" );
            printf( "enter option=\n" );
            char gd;
            scanf( "%c" , &gd );
            switch ( gd )
            {
            case '1':
                printf( "you have choose GREANEDE\n" );
                printf( "you have 200 coin\n" );
                printf( "you have 200 coin to enter yes for (Y/y)=\n" );
                char r;
                fflush( stdin );
                scanf( "%c" , &r );
                if ( r == 'Y' || r == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET GREANEDE \n" );

                }
                else
                {
                    break;
                }
                break;
            case '2':
                printf( "you have choose SMOKE\n" );
                printf( "you have 300 coin\n" );
                printf( "you have 300 coin to enter yes for (Y/y)=\n" );
                char p;
                fflush( stdin );
                scanf( "%c" , &p );
                if ( p == 'Y' || p == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET SMOKE \n" );

                }
                else
                {
                    break;
                }
                break;
            case '3':
                printf( "you have choose GLOOWALL\n" );
                printf( "you have 300 coin\n" );
                printf( "you have 300 coin to enter yes for (Y/y)=\n" );
                char q;
                fflush( stdin );
                scanf( "%c" , &q );
                if ( q == 'Y' || q == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET GLOOWALL \n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you have choose GLOOWALL MELTER\n" );
                printf( "you have 300 coin\n" );
                printf( "you have 300 coin to enter yes for (Y/y)=\n" );
                char s;
                fflush( stdin );
                scanf( "%c" , &s );
                if ( s == 'Y' || s == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET GLOOWALL MELTER \n" );

                }
                else
                {
                    break;
                }
                break;
            default:
                printf( "enter right option\n" );
                break;
            }//end of greanede section
            break;
            //other
        case '9':
            printf( "YOU HAVE CHOOSE OTHER OPTION\n" );
            printf( "List of other option\n" );
            printf( "1.CROSSBOW\n" );
            printf( "2.M796\n" );
            printf( "3.MGL140\n" );
            printf( "4.RGS-50\n" );
            printf( "5.GALING\n" );
            printf( "6.BAG\n" );
            printf( "7.HELMET\n" );
            printf( "8.VEST\n" );
            printf( "enter currect choise=\n" );
            char ot;
            scanf( "%c" , &ot );
            switch ( ot )
            {
            case '1':

                printf( "you have choose CROSSBOW\n" );
                printf( "you have 2000 coin\n" );
                printf( "you have 2000 coin to enter yes for (Y/y)=\n" );
                char s;
                fflush( stdin );
                scanf( "%c" , &s );
                if ( s == 'Y' || s == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET  CROSSBOW \n" );

                }
                else
                {
                    break;
                }
                break;
            case '2':
                printf( "you have choose M796\n" );
                printf( "you have 28000 coin\n" );
                printf( "you have 28000 coin to enter yes for (Y/y)=\n" );
                char M;
                fflush( stdin );
                scanf( "%c" , &M );
                if ( M == 'Y' || M == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET  M796 \n" );

                }
                else
                {
                    break;
                }
                break;
            case '3':
                printf( "you have choose MGL140\n" );
                printf( "you have 3300 coin\n" );
                printf( "you have 3300 coin to enter yes for (Y/y)=\n" );
                char N;
                fflush( stdin );
                scanf( "%c" , &N );
                if ( N == 'Y' || N == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET   MGL140 \n" );

                }
                else
                {
                    break;
                }
                break;
            case '4':
                printf( "you have choose RGS-50\n" );
                printf( "you have 5000 coin\n" );
                printf( "you have 5000 coin to enter yes for (Y/y)=\n" );
                char O;
                fflush( stdin );
                scanf( "%c" , &O );
                if ( O == 'Y' || O == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET RGS-50 \n" );

                }
                else
                {
                    break;
                }
                break;
            case '5':
                printf( "you have choose GALING\n" );
                printf( "you have 5500 coin\n" );
                printf( "you have 5500 coin to enter yes for (Y/y)=\n" );
                char Q;
                fflush( stdin );
                scanf( "%c" , &Q );
                if ( Q == 'Y' || Q == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET GALING\n" );

                }
                else
                {
                    break;
                }
                break;
            case '6':
                printf( "you have choose BAG\n" );
                printf( "you have 500 coin\n" );
                printf( "you have 500 coin to enter yes for (Y/y)=\n" );
                char R;
                fflush( stdin );
                scanf( "%c" , &R );
                if ( R == 'Y' || R == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET BAG\n" );

                }
                else
                {
                    break;
                }
                break;
            case '7':
                printf( "you have choose HELMET\n" );
                printf( "you have 200 coin\n" );
                printf( "you have 200 coin to enter yes for (Y/y)=\n" );
                char T;
                fflush( stdin );
                scanf( "%c" , &T );
                if ( T == 'Y' || T == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET HELMET\n" );

                }
                else
                {
                    break;
                }
                break;
            case '8':
                printf( "you have choose VEST\n" );
                printf( "you have 200 coin\n" );
                printf( "you have 200 coin to enter yes for (Y/y)=\n" );
                char W;
                fflush( stdin );
                scanf( "%c" , &W );
                if ( W == 'Y' || W == 'y' )
                {
                    printf( "CONGRATULATION YOU HAVE GET VEST\n" );

                }
                else
                {
                    break;
                }
                break;

            default:printf( "please enter right option\n" );
                break;
            }
            //END OF OTHER SECTION


        default:printf( "please choose right option\n" );
            break;
        }//end of all statements
        printf( "do want again shop \n" );
        fflush( stdin );
        scanf( "%c" , &choice );

    }
    while ( choice == 'Y' || choice == 'y' );




    return 0;
}