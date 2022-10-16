#include <stdio.h>
#include <windows.h>
#include <math.h>
void gotoxy (int x, int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
float s, t, v, Vo, a, vt, ep, m, g, h, ek, w, wh;
int pil, pilihan, option;
char reply;
int main()
{
	label:
	system("cls");
	gotoxy(30, 0);printf("Welcome to the Program\n");
	printf("Masukkan Pilihan Anda\n");
	printf("1. Energi Potensial\n");
	printf("2. Energi Kinetik\n");
	printf("3. GLB\n");
	printf("4. GLBB\n");
	printf("Tentukan Pilihan Anda : ");scanf("%d", &pil);
	system("cls");
	if(pil==1){
		printf("1. EP = mgh\n");
	    printf("2. EP = wh\n");
    	printf("Masukkan pilihan anda : "); scanf("%d", &pil);
    	system("cls");
  	switch (pil) {
  	case 1:
    	  {
      	printf("1. Mencari EP\n");
      	printf("2. mencari m\n");
      	printf("3. Mencari g\n");
      	printf("4. Mencari h\n");
      	printf("Pilih salah satu [1/2/3]: "); scanf("%d", &pil);
      	system("cls");
	        switch(pil)
    	    {case 1:
        	    printf("Masukkan nilai m : "); scanf("%f", &m);
            	printf("Masukkan nilai g : "); scanf("%f", &g);
            	printf("Masukkan nilai h : "); scanf("%f", &h);
            	ep = m * g * h;
            	printf("Hasil : %0.2f Joule", ep);
            	break;
        	case 2:
            	printf("Masukkan nilai EP : "); scanf("%f", &ep);
            	printf("Masukkan nilai g  : "); scanf("%f", &g);
            	printf("Masukkan nilai h  : "); scanf("%f", &h);
            	m = ep / (g * h);
            	printf("Hasil : %0.2f kg", m);
	            break;
    	    case 3:
        	    printf("Masukkan nilai EP : "); scanf("%f", &ep);
            	printf("Masukkan nilai m  : "); scanf("%f", &m);
	            printf("Masukkan nilai h  : "); scanf("%f", &h);
    	        g = ep / (m * h);
        	    printf("Hasil : %0.2f m/s^2", g);
            	break;
	        case 4:
    	        printf("Masukkan nilai EP : "); scanf("%f", &ep);
        	    printf("Masukkan nilai m  : "); scanf("%f", &m);
            	printf("Masukkan nilai g  : "); scanf("%f", &g);
            	h = ep / (m * g);
	            printf("Hasil : %0.2f m", h);
    	        break;
        	default:
            	printf("salah input");
            	break;}
        	break;}
  	{case 2:
  		reply2:
	    printf("1. Mencari EP\n");
    	printf("2. Mencari w\n");
    	printf("3. Mencari h\n");
    	printf("Pilih salah satu [1/2/3]: "); scanf("%d", &pil);
    	system("cls");
	        switch(pil)
	        {case 1:
    	        printf("Masukkan nilai w : "); scanf("%f", &w);
        	    printf("Masukkan nilai h : "); scanf("%f", &h);
            	ep = w * h;
	            printf("Hasil : %0.2f Joule", ep);
    	        break;
        	case 2:
	            printf("Masukkan nilai EP : "); scanf("%f", &ep);
    	        printf("Masukkan nilai h  : "); scanf("%f", &h);
        	    w = ep / h;
            	printf("Hasil : %0.2f N", w);
	            break;
    	    case 3:
        	    printf("Masukkan nilai EP : "); scanf("%f", &ep);
            	printf("Masukkan nilai h  : "); scanf("%f", &h);
	            h = ep / w;
    	        break;
        	default:
            	goto reply2;
            	break;}}}
	} else if (pil==2){
			printf("Ek = 1/2mv^2\n");
	    printf("1. Mencari Energi Kinetik\n");
	    printf("2. Mencari massa\n");
	    printf("3. Mencari Kecepatan\n");
	    printf("Masukkan pilihan anda : "); scanf("%d", &pil);
	    system("cls");
  	switch (pil) {
  	case 1:
	    {
    	printf("Mencari Energi Kinetik\n");
    	printf("Masukkan nilai m : "); scanf("%f", &m);
    	printf("Masukkan nilai v : "); scanf("%f", &v);
    	ek = (m * (v * v)) / 2;
    	printf("Hasil : %0.2f Joule", ek);
    	break;
  	case 2:
	    printf("Mencari Massa\n");
	    printf("Masukkan nilai Ek : "); scanf("%f", &ek);
	    printf("Masukkan nilai v  : "); scanf("%f", &v);
	    m = (ek * 2) / (v * v);
	    printf("Hasil : %0.2f kg", m);
	    break;
  	case 3:
	    printf("Mencari Kecepatan\n");
	    printf("Masukkan nilai Ek : "); scanf("%f", &ek);
	    printf("Masukkan nilai m  : "); scanf("%f", &m);
	    v = sqrt (ek * 2 / m);
	    printf("Hasil : %0.2f m/s", v);
	    break;}}
	} else if (pil==3){
		printf("Rumus GLB : s = vt\n");
	    printf("1. Mencari Jarak (s) \n");
	    printf("2. Mencari Kecepatan (v)\n");
	    printf("3. Mencari Waktu (t)\n");
	    printf("Masukkan pilihan anda : "); scanf("%d", &pil);
	    system("cls");
  	switch (pil) {
  	case 1:
    	{
    	printf("Mencari Jarak\n");
    	printf("Masukkan nilai v : "); scanf("%f", &v);
    	printf("Masukkan nilai t : "); scanf("%f", &t);
    	s = v * t;
    	printf("Hasil : %0.2f meter", s);
    	break;
  	case 2:
	    printf("Mencari Kecepatan\n");
	    printf("Masukkan nilai s : "); scanf("%f", &s);
	    printf("Masukkan nilai t : "); scanf("%f", &t);
	    v = s / t;
    	printf("Hasil : %0.2f m/s", v);
	    break;
  	case 3:
	    printf("Mencari Jarak\n");
	    printf("Masukkan nilai s : "); scanf("%f", &s);
	    printf("Masukkan nilai v : "); scanf("%f", &v);
	    t = s / v;
	    printf("Hasil : %0.2f secon", t);
	    break;}}
	} else if (pil==4) {
		reply3:
		printf("Masukkan pilihan Anda\n");
		printf("1. Mencari s  (jarak (m)\n");
		printf("2. Mencari Vt (kecepatan saat waktu tertentu) (m/s)\n");
		printf("3. Mencari V0 (kecepatan awal) (m/s)\n");
		printf("4. Mencari t  (waktu) (s)\n");
		printf("5. Mencari a  (percepatan) (m/s^2)\n");
		printf("Tentukan pilihanmu: ");scanf("%d", &pilihan);
		system ("cls");
		switch (pilihan){
			case 1:
				{
				printf("s = V0*t+1/2a*t^2\n");
				printf("Masukkan V0 : "); scanf("%f", &Vo);
				printf("Masukkan t  : "); scanf("%f", &t);
				printf("Masukkan a  : "); scanf("%f", &a);
				s = Vo * t + a/2 * t * t;
				printf("Hasil : %0.2f m", s);
			break;
			case 2:
				printf("Vt = V0+a*t\n");
				printf("Masukkan V0 : "); scanf("%f", &Vo);
				printf("Masukkan a  : "); scanf("%f", &a);
				printf("Masukkan t  : "); scanf("%f", &t);
				vt = Vo + a * t;
				printf("Hasil : %0.2f m/s", vt);
				break;
			case 3:
				printf("V0 = a*t/vt\n");
				printf("Masukkan Vt : "); scanf("%f", &vt);
				printf("Masukkan a  : "); scanf("%f", &a);
				printf("Masukkan t  : "); scanf("%f", &t);
				Vo = a * t / vt;
				printf("Hasil : %0.2f m/s", Vo);
				break;
			case 4:
				printf("t = V0-vt/a\n");
				printf("Masukkan a  : "); scanf("%f", &a);
				printf("Masukkan V0 : "); scanf("%f", &Vo);
				printf("Masukkan Vt : "); scanf("%f", &vt);
				t = (vt - Vo) / a;
				printf("Hasil : %0.2f s", t);
				break;
			case 5:
				printf("a = V0-vt/t\n");
				printf("Masukkan V0 : "); scanf("%f", &Vo);
				printf("Masukkan vt : "); scanf("%f", &vt);
				printf("Masukkan t  : "); scanf("%f", &t);
				a = (vt - Vo) / t;
				printf("Hasil : %0.2f m/s^2", a);
				break;
			default:
				goto reply3;
				break;
				}}
		} else {
        	gotoxy(0, 11);printf("Kode yang Anda masukkan salah\n");
        	gotoxy(0, 12);printf("Silahkan input ulang\n");
        	goto label;
    	}
	balik:
    gotoxy(0, 10); printf("Ulangi? [Y/T]: ");
    gotoxy(14, 10);printf("   ");
    gotoxy(14, 10);scanf("%c", &reply);
    if((reply=='Y')||(reply=='y'))
    {
        gotoxy(0,10); printf("                                            ");
        goto label;
    } else if((reply=='T')||(reply=='t'))
    {
        system("cls");
		gotoxy(30,5);printf("Terima Kasih Telah Menggunakan Program Ini");
        gotoxy(0,10);system("pause");
    } else
    {
        goto balik;
        printf("                        ");
    }
	return 0;
}
