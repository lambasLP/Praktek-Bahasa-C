#include <stdio.h>
#include <conio.h>
main()
{

    int nilai;
    char *ket,*ket2;

    printf("Inputkan Nilai Ujian [0...100] : ");scanf("%d",&nilai);

    if (nilai >= 90 && nilai <= 100)
    {
      ket = "A";
      ket2 = "Sangat Baik";
    }
    else if (nilai >= 80 && nilai < 90)
    {
      ket = "B";
      ket2 = "Baik";
    }
    else if (nilai >= 70 && nilai < 80)
     {
      ket = "C";
      ket2 = "Cukup";
    }
    else if (nilai >= 60 && nilai < 70)
      {
      ket = "D";
      ket2 = "Kurang";
    }
    else if (nilai >= 0 && nilai < 60)
      {
      ket = "E";
      ket2 = "Jelek";
    }
    else
    {
      ket = "Range Nilai Hanya Boleh 0...100";
      ket2 = "Silahkan Mengulang Lagi";
    }

    printf("Keterangan : %s",ket);
    printf("\nPenilaian  : %s",ket2);
    getch();
}
