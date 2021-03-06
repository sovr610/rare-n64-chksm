#include <stdio.h>

// Banjo-Kazooie test vector. Checksum: 32C9A1E6
unsigned char BK_example[] = { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00
};

// Goldeneye test vector. Checksum: 8924383387527848
unsigned char GE_example[] = { 
    0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Perfect Dark test vector. Checksum: FA0920D9
unsigned char PD_example[] = { 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80
};

// Banjo-Tooie test vector. Checksum: 004A49F0955CF65E
unsigned char BT_example[] = { 
 0x4B, 0x48, 0x4A, 0x43, 0x01, 0x02, 0x1E, 0x00, 0x02, 0x01, 0x01, 0x03, 0x1C, 0x00, 0x00, 0x0F, 0x92,
 0x0F, 0x1B, 0x00, 0x00, 0x14, 0x60, 0x05, 0x15, 0x13, 0x70, 0x1B, 0x31, 0x2A, 0x61, 0x25, 0xF7, 0x22,
 0xAB, 0x07, 0x77, 0x12, 0xAB, 0x00, 0x00, 0x04, 0x2A, 0x00, 0x34, 0x00, 0x64, 0x00, 0x64, 0x00, 0x32,
 0x00, 0x10, 0x00, 0x00, 0x00, 0xC8, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x05, 0x2E, 0x00, 0x3B, 0x00, 0x41, 0x00, 0x00, 0x00, 0x34, 0x00, 0x64, 0x00, 0x72, 0x00, 0x40, 0x00,
 0x3E, 0x00, 0x3E, 0x00, 0x29, 0x00, 0x52, 0x00, 0x4E, 0x00, 0x39, 0x02, 0x27, 0x00, 0x0C, 0x00, 0x0C,
 0x00, 0x03, 0x3E, 0x84, 0x3E, 0x9D, 0x3E, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xB0, 0xFE,
 0x2F, 0xFE, 0xF9, 0xE7, 0xE3, 0xFE, 0xD0, 0xFF, 0x3F, 0x60, 0x7D, 0xFF, 0xFA, 0xFF, 0xB7, 0x3E, 0xFF,
 0xFF, 0xFF, 0xFB, 0xFD, 0xFF, 0xBD, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0x00, 0xFC, 0x7F, 0x80,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xFE, 0xFF, 0x87, 0xFF, 0x79, 0xC0, 0xFF, 0x41, 0xFB, 0xFF, 0xDF, 0xFF,
 0xBF, 0x7F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xEF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF7, 0x98, 0xFF, 0xFB, 0xEF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFE, 0xAF,
 0xF4, 0xC3, 0xFF, 0x97, 0xFF, 0xFF, 0xFF, 0xFF, 0x2C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x31, 0xB6, 0xD4,
 0xF7, 0xF1, 0x01, 0xF8, 0xD3, 0x97, 0xFE, 0x1F, 0xDE, 0xF8, 0xFF, 0xD3, 0x83, 0xFF, 0xFF, 0xFF, 0xFF,
 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x17, 0xF8,
 0xBF, 0xFB, 0xFF, 0xFF, 0x7F, 0x7F, 0x02, 0xFC, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFA, 0x3F, 0xC8, 0xF5,
 0x7F, 0xC6, 0xEB, 0xFE, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

long long unsigned rarechksm(unsigned char data[], int size, int type) {
    unsigned long long value, value2, checksum1, checksum2;
    int bp, sd;
    value = 0x13108B3C1, sd = 0, checksum1 = 0, checksum2 = 0;
    
    for(bp = 0; bp < size; bp++, sd = (sd + 7) & 0xF) {
        value     = value + (data[bp] << (sd & 0x0F)) & 0x1FFFFFFFF;
        value2    = (value >> 1 | value << 32) ^ (value << 44) >> 32;
        value     = value2 ^ (value2 >> 20) & 0x0FFF;
        checksum1 = (value ^ checksum1) & 0xFFFFFFFF;
    }
    for(bp--; bp >= 0; bp--, sd = (sd + 3) & 0xF) {
        value     = value + (data[bp] << (sd & 0x0F)) & 0x1FFFFFFFF;
        value2    = (value >> 1 | value << 32) ^ (value << 44) >> 32;
        value     = value2 ^ (value2 >> 20) & 0x0FFF;
        checksum2 = (value ^ checksum2) & 0xFFFFFFFF;
    }
    if(type == 2) { return (unsigned int) (checksum1 << 16) | (checksum2 & 0xFFFF); }
    return type ?  checksum1 ^ checksum2 : (checksum1 << 32) + checksum2;
}

int main(void) {
    // Calculate checksum for BT test vector
    printf("BT Checksum: %016llX\n", rarechksm(BT_example, sizeof(BT_example), 0));
    // Calculate checksum for GE test vector
    printf("GE Checksum: %016llX\n", rarechksm(GE_example, sizeof(GE_example), 0));
    // Calculate checksum for BK test vector
    printf("BK Checksum: %08llX\n",  rarechksm(BK_example, sizeof(BK_example), 1));
    // Calculate checksum for PD test vector
    printf("PD Checksum: %08llX\n",  rarechksm(PD_example, sizeof(PD_example), 2));
    return 0;
}
