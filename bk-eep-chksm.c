#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint64_t A1, A2, A3=0x13108B3C1, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, S1, V0, AT;
    uint64_t S3;
    int i;

    unsigned char bytes[28] = {
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00
    };

    for (i = 0; i < sizeof(bytes); i++)
    {
        T8 = bytes[i]; // LBU
        T5 = A3 & 0xFFFFFFFF; // LW
        T9 = S1 & 0x000F;
        T0 = T8 << T9;
        T4 = A3 >> 32 ; // LW
        T7 = T0 + T5;
        T2 = T0 >> 0x1F;
        if (T7 < T5){ AT = 1; } else { AT = 0; }
        T6 = AT + T2;
        T6 = T6 + T4;
        // After JAL
        A3 = (T6 << 32 ) + T7; // LD
        A2 = A3 << (0x1F + 32);
        A1 = A3 << 0x1F;
        A2 = A2 >> 0x1F;
        A1 = A1 >> (0x0 + 32);
        A3 = A3 << (0xC + 32);
        A2 = A2 | A1;
        A3 = A3 >> (0x0 + 32);
        A2 = A2 ^ A3;
        A3 = A2 >> 0x14;
        A3 = A3 & 0xFFF;
        A3 = A3 ^ A2;
        V0 = A3 << (0x0 + 32);
        // After JR
        V0 = V0 >> (0x0 + 32); 
        S1 += 0x7;
        // After BNE
        S3 = S3 ^ V0;
    
    }

    for (i = sizeof(bytes)-1; i >= 0; i--)
    {
        T1 = bytes[i]; // LBU
        T3 = A3 & 0xFFFFFFFF; // LW
        T8 = S1 & 0x000F;
        T9 = T1 << T8;
        T2 = A3 >> 32 ; // LW
        T5 = T9 + T3;
        T0 = T9 >> 0x1F;
        if (T5 < T3){ AT = 1; } else { AT = 0; }
        T4 = AT + T0;
        T4 = T4 + T2;
        // After JAL
        A3 = (T4 << 32) + T5; // LD
        A2 = A3 << (0x1F + 32);
        A1 = A3 << 0x1F;
        A2 = A2 >> 0x1F;
        A1 = A1 >> (0x0 + 32);
        A3 = A3 << (0xC + 32);
        A2 = A2 | A1;
        A3 = A3 >> (0x0 + 32);
        A2 = A2 ^ A3;
        A3 = A2 >> 0x14;
        A3 = A3 & 0xFFF;
        A3 = A3 ^ A2;
        V0 = A3 << (0x0 + 32);
        // After JR
        V0 = V0 >> (0x0 + 32);
        S1 += 0x3;
        // After BNE
        S3 = S3 ^ V0;
    }
    printf("Checksum: %lX\n", S3);
    return 0;
}
