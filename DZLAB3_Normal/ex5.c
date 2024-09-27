#include <stdio.h>
//Made by Kailexi/Alexander Soldatov lmao
//https://github.com/Kailexi/C_DZ_Sem3
//Normal

//WARNING:
//У меня АНГЛИЙСКАЯ ВИНДА у меня в кодировке UTF-8 нету русского поэтому всё на английском

int main()
{

    float download_speed_MBITS, size_MBytes, MBytes_to_Mbits, time;

    printf_s("Enter your internet connection speed in mega bits (Mbps):\n");
    scanf_s("%f", &download_speed_MBITS);

    printf_s("Enter file size in mega bytes (MB):\n");
    scanf_s("%f", &size_MBytes);

    MBytes_to_Mbits = size_MBytes * 8;
    time = MBytes_to_Mbits / download_speed_MBITS;

    printf_s("Your speed is %.2f Mbps, file size is:%.2f MB."
           "\nIt would be downloaded in %.2f seconds"
           ,download_speed_MBITS, size_MBytes, time);


    return 0;

}