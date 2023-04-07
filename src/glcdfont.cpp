#include "glcdfont.h"
// ascii 5x8 LCD font (256 characters)
// 5 bytes, each byte is a column of data, MSB top LSB bottom.

const unsigned char font[] = {

// byte 000 hex 00 char ' '
// #_#_#
// _#_#_
// #_#_#
// _#_#_
// #_#_#
// _#_#_
// #_#_#
// _#_#_
0xAA,0x55,0xAA,0x55,0xAA,
// byte 001 hex 01 char ' '
// _###_
// #####
// #_#_#
// #####
// ##_##
// #___#
// _###_
// _____
0x7C,0xDA,0xF2,0xDA,0x7C,
// byte 002 hex 02 char ' '
// _###_
// #####
// #_#_#
// #####
// #___#
// ##_##
// _###_
// _____
0x7C,0xD6,0xF2,0xD6,0x7C,
// byte 003 hex 03 char ' '
// _____
// _#_#_
// #####
// #####
// #####
// _###_
// __#__
// _____
0x38,0x7C,0x3E,0x7C,0x38,
// byte 004 hex 04 char ' '
// _____
// __#__
// _###_
// #####
// #####
// _###_
// __#__
// _____
0x18,0x3C,0x7E,0x3C,0x18,
// byte 005 hex 05 char ' '
// _###_
// _#_#_
// #####
// #_#_#
// #####
// __#__
// _###_
// _____
0x38,0xEA,0xBE,0xEA,0x38,
// byte 006 hex 06 char ' '
// __#__
// _###_
// #####
// #####
// #####
// __#__
// _###_
// _____
0x38,0x7A,0xFE,0x7A,0x38,
// byte 007 hex 07 char ' '
// _____
// _____
// __#__
// _###_
// _###_
// __#__
// _____
// _____
0x00,0x18,0x3C,0x18,0x00,
// byte 008 hex 08 char ' '
// #####
// #####
// ##_##
// #___#
// #___#
// ##_##
// #####
// #####
0xFF,0xE7,0xC3,0xE7,0xFF,
// byte 009 hex 09 char ' '
// _____
// _____
// __#__
// _#_#_
// _#_#_
// __#__
// _____
// _____
0x00,0x18,0x24,0x18,0x00,
// byte 010 hex 0A char ' '
// #####
// #####
// ##_##
// #_#_#
// #_#_#
// ##_##
// #####
// #####
0xFF,0xE7,0xDB,0xE7,0xFF,
// byte 011 hex 0B char ' '
// _____
// __###
// ___##
// _##_#
// #_#__
// #_#__
// _#___
// _____
0x0C,0x12,0x5C,0x60,0x70,
// byte 012 hex 0C char ' '
// _###_
// #___#
// #___#
// _###_
// __#__
// #####
// __#__
// _____
0x64,0x94,0x9E,0x94,0x64,
// byte 013 hex 0D char ' '
// _####
// _#__#
// _####
// _#___
// _#___
// _#___
// ##___
// _____
0x02,0xFE,0xA0,0xA0,0xE0,
// byte 014 hex 0E char ' '
// _####
// _#__#
// _####
// _#__#
// _#__#
// _#_##
// ##___
// _____
0x02,0xFE,0xA0,0xA4,0xFC,
// byte 015 hex 0F char ' '
// __#__
// #_#_#
// _###_
// ##_##
// ##_##
// _###_
// #_#_#
// __#__
0x5A,0x3C,0xE7,0x3C,0x5A,
// byte 016 hex 10 char ' '
// #____
// ##___
// ####_
// #####
// ####_
// ##___
// #____
// _____
0xFE,0x7C,0x38,0x38,0x10,
// byte 017 hex 11 char ' '
// ____#
// ___##
// _####
// #####
// _####
// ___##
// ____#
// _____
0x10,0x38,0x38,0x7C,0xFE,
// byte 018 hex 12 char ' '
// __#__
// _###_
// #_#_#
// __#__
// #_#_#
// _###_
// __#__
// _____
0x28,0x44,0xFE,0x44,0x28,
// byte 019 hex 13 char ' '
// ##_##
// ##_##
// ##_##
// ##_##
// ##_##
// _____
// ##_##
// _____
0xFA,0xFA,0x00,0xFA,0xFA,
// byte 020 hex 14 char ' '
// _####
// #_#_#
// #_#_#
// _##_#
// __#_#
// __#_#
// __#_#
// _____
0x60,0x90,0xFE,0x80,0xFE,
// byte 021 hex 15 char ' '
// __##_
// _#__#
// _#_#_
// __#_#
// ___#_
// _#__#
// _#__#
// __##_
0x00,0x66,0x91,0xA9,0x56,
// byte 022 hex 16 char ' '
// _____
// _____
// _____
// _____
// _____
// #####
// #####
// _____
0x06,0x06,0x06,0x06,0x06,
// byte 023 hex 17 char ' '
// __#__
// _###_
// #_#_#
// __#__
// #_#_#
// _###_
// __#__
// #####
0x29,0x45,0xFF,0x45,0x29,
// byte 024 hex 18 char ' '
// _____
// __#__
// _###_
// #_#_#
// __#__
// __#__
// __#__
// _____
0x10,0x20,0x7E,0x20,0x10,
// byte 025 hex 19 char ' '
// _____
// __#__
// __#__
// __#__
// #_#_#
// _###_
// __#__
// _____
0x08,0x04,0x7E,0x04,0x08,
// byte 026 hex 1A char ' '
// _____
// __#__
// ___#_
// #####
// ___#_
// __#__
// _____
// _____
0x10,0x10,0x54,0x38,0x10,
// byte 027 hex 1B char ' '
// _____
// __#__
// _#___
// #####
// _#___
// __#__
// _____
// _____
0x10,0x38,0x54,0x10,0x10,
// byte 028 hex 1C char ' '
// _____
// #____
// #____
// #____
// #####
// _____
// _____
// _____
0x78,0x08,0x08,0x08,0x08,
// byte 029 hex 1D char ' '
// _____
// _#_#_
// #####
// #####
// _#_#_
// _____
// _____
// _____
0x30,0x78,0x30,0x78,0x30,
// byte 030 hex 1E char ' '
// _____
// __#__
// __#__
// _###_
// #####
// #####
// _____
// _____
0x0C,0x1C,0x7C,0x1C,0x0C,
// byte 031 hex 1F char ' '
// _____
// #####
// #####
// _###_
// __#__
// __#__
// _____
// _____
0x60,0x70,0x7C,0x70,0x60,
// byte 032 hex 20 char ' '
// _____
// _____
// _____
// _____
// _____
// _____
// _____
// _____
0x00,0x00,0x00,0x00,0x00,
// byte 033 hex 21 char '!'
// __#__
// __#__
// __#__
// __#__
// __#__
// _____
// __#__
// _____
0x00,0x00,0xFA,0x00,0x00,
// byte 034 hex 22 char '"'
// _#_#_
// _#_#_
// _#_#_
// _____
// _____
// _____
// _____
// _____
0x00,0xE0,0x00,0xE0,0x00,
// byte 035 hex 23 char '#'
// _#_#_
// _#_#_
// #####
// _#_#_
// #####
// _#_#_
// _#_#_
// _____
0x28,0xFE,0x28,0xFE,0x28,
// byte 036 hex 24 char '$'
// __#__
// _####
// #_#__
// _###_
// __#_#
// ####_
// __#__
// _____
0x24,0x54,0xFE,0x54,0x48,
// byte 037 hex 25 char '%'
// ##___
// ##__#
// ___#_
// __#__
// _#___
// #__##
// ___##
// _____
0xC4,0xC8,0x10,0x26,0x46,
// byte 038 hex 26 char '&'
// _#___
// #_#__
// #_#__
// _#___
// #_#_#
// #__#_
// _##_#
// _____
0x6C,0x92,0x6A,0x04,0x0A,
// byte 039 hex 27 char '''
// __##_
// __##_
// __#__
// _#___
// _____
// _____
// _____
// _____
0x00,0x10,0xE0,0xC0,0x00,
// byte 040 hex 28 char '('
// ___#_
// __#__
// _#___
// _#___
// _#___
// __#__
// ___#_
// _____
0x00,0x38,0x44,0x82,0x00,
// byte 041 hex 29 char ')'
// _#___
// __#__
// ___#_
// ___#_
// ___#_
// __#__
// _#___
// _____
0x00,0x82,0x44,0x38,0x00,
// byte 042 hex 2A char '*'
// __#__
// #_#_#
// _###_
// #####
// _###_
// #_#_#
// __#__
// _____
0x54,0x38,0xFE,0x38,0x54,
// byte 043 hex 2B char '+'
// _____
// __#__
// __#__
// #####
// __#__
// __#__
// _____
// _____
0x10,0x10,0x7C,0x10,0x10,
// byte 044 hex 2C char ','
// _____
// _____
// _____
// _____
// __##_
// __##_
// __#__
// _#___
0x00,0x01,0x0E,0x0C,0x00,
// byte 045 hex 2D char '-'
// _____
// _____
// _____
// #####
// _____
// _____
// _____
// _____
0x10,0x10,0x10,0x10,0x10,
// byte 046 hex 2E char '.'
// _____
// _____
// _____
// _____
// _____
// __##_
// __##_
// _____
0x00,0x00,0x06,0x06,0x00,
// byte 047 hex 2F char '/'
// _____
// ____#
// ___#_
// __#__
// _#___
// #____
// _____
// _____
0x04,0x08,0x10,0x20,0x40,
// byte 048 hex 30 char '0'
// _###_
// #___#
// #__##
// #_#_#
// ##__#
// #___#
// _###_
// _____
0x7C,0x8A,0x92,0xA2,0x7C,
// byte 049 hex 31 char '1'
// __#__
// _##__
// __#__
// __#__
// __#__
// __#__
// _###_
// _____
0x00,0x42,0xFE,0x02,0x00,
// byte 050 hex 32 char '2'
// _###_
// #___#
// ____#
// _###_
// #____
// #____
// #####
// _____
0x4E,0x92,0x92,0x92,0x62,
// byte 051 hex 33 char '3'
// #####
// ____#
// ___#_
// __##_
// ____#
// #___#
// _###_
// _____
0x84,0x82,0x92,0xB2,0xCC,
// byte 052 hex 34 char '4'
// ___#_
// __##_
// _#_#_
// #__#_
// #####
// ___#_
// ___#_
// _____
0x18,0x28,0x48,0xFE,0x08,
// byte 053 hex 35 char '5'
// #####
// #____
// ####_
// ____#
// ____#
// #___#
// _###_
// _____
0xE4,0xA2,0xA2,0xA2,0x9C,
// byte 054 hex 36 char '6'
// __###
// _#___
// #____
// ####_
// #___#
// #___#
// _###_
// _____
0x3C,0x52,0x92,0x92,0x8C,
// byte 055 hex 37 char '7'
// #####
// ____#
// ____#
// ___#_
// __#__
// _#___
// #____
// _____
0x82,0x84,0x88,0x90,0xE0,
// byte 056 hex 38 char '8'
// _###_
// #___#
// #___#
// _###_
// #___#
// #___#
// _###_
// _____
0x6C,0x92,0x92,0x92,0x6C,
// byte 057 hex 39 char '9'
// _###_
// #___#
// #___#
// _####
// ____#
// ___#_
// ###__
// _____
0x62,0x92,0x92,0x94,0x78,
// byte 058 hex 3A char ':'
// _____
// _____
// __#__
// _____
// __#__
// _____
// _____
// _____
0x00,0x00,0x28,0x00,0x00,
// byte 059 hex 3B char ';'
// _____
// _____
// __#__
// _____
// __#__
// __#__
// _#___
// _____
0x00,0x02,0x2C,0x00,0x00,
// byte 060 hex 3C char '<'
// ____#
// ___#_
// __#__
// _#___
// __#__
// ___#_
// ____#
// _____
0x00,0x10,0x28,0x44,0x82,
// byte 061 hex 3D char '='
// _____
// _____
// #####
// _____
// #####
// _____
// _____
// _____
0x28,0x28,0x28,0x28,0x28,
// byte 062 hex 3E char '>'
// _#___
// __#__
// ___#_
// ____#
// ___#_
// __#__
// _#___
// _____
0x00,0x82,0x44,0x28,0x10,
// byte 063 hex 3F char '?'
// _###_
// #___#
// ____#
// __##_
// __#__
// _____
// __#__
// _____
0x40,0x80,0x9A,0x90,0x60,
// byte 064 hex 40 char '@'
// _###_
// #___#
// ____#
// _##_#
// #_#_#
// #_#_#
// _###_
// _____
0x4C,0x92,0x9E,0x82,0x7C,
// byte 065 hex 41 char 'A'
// __#__
// _#_#_
// #___#
// #___#
// #####
// #___#
// #___#
// _____
0x3E,0x48,0x88,0x48,0x3E,
// byte 066 hex 42 char 'B'
// ####_
// #___#
// #___#
// ####_
// #___#
// #___#
// ####_
// _____
0xFE,0x92,0x92,0x92,0x6C,
// byte 067 hex 43 char 'C'
// _###_
// #___#
// #____
// #____
// #____
// #___#
// _###_
// _____
0x7C,0x82,0x82,0x82,0x44,
// byte 068 hex 44 char 'D'
// ####_
// #___#
// #___#
// #___#
// #___#
// #___#
// ####_
// _____
0xFE,0x82,0x82,0x82,0x7C,
// byte 069 hex 45 char 'E'
// #####
// #____
// #____
// ####_
// #____
// #____
// #####
// _____
0xFE,0x92,0x92,0x92,0x82,
// byte 070 hex 46 char 'F'
// #####
// #____
// #____
// ####_
// #____
// #____
// #____
// _____
0xFE,0x90,0x90,0x90,0x80,
// byte 071 hex 47 char 'G'
// _####
// #___#
// #____
// #____
// #__##
// #___#
// _####
// _____
0x7C,0x82,0x82,0x8A,0xCE,
// byte 072 hex 48 char 'H'
// #___#
// #___#
// #___#
// #####
// #___#
// #___#
// #___#
// _____
0xFE,0x10,0x10,0x10,0xFE,
// byte 073 hex 49 char 'I'
// _###_
// __#__
// __#__
// __#__
// __#__
// __#__
// _###_
// _____
0x00,0x82,0xFE,0x82,0x00,
// byte 074 hex 4A char 'J'
// __###
// ___#_
// ___#_
// ___#_
// ___#_
// #__#_
// _##__
// _____
0x04,0x02,0x82,0xFC,0x80,
// byte 075 hex 4B char 'K'
// #___#
// #__#_
// #_#__
// ##___
// #_#__
// #__#_
// #___#
// _____
0xFE,0x10,0x28,0x44,0x82,
// byte 076 hex 4C char 'L'
// #____
// #____
// #____
// #____
// #____
// #____
// #####
// _____
0xFE,0x02,0x02,0x02,0x02,
// byte 077 hex 4D char 'M'
// #___#
// ##_##
// #_#_#
// #_#_#
// #_#_#
// #___#
// #___#
// _____
0xFE,0x40,0x38,0x40,0xFE,
// byte 078 hex 4E char 'N'
// #___#
// #___#
// ##__#
// #_#_#
// #__##
// #___#
// #___#
// _____
0xFE,0x20,0x10,0x08,0xFE,
// byte 079 hex 4F char 'O'
// _###_
// #___#
// #___#
// #___#
// #___#
// #___#
// _###_
// _____
0x7C,0x82,0x82,0x82,0x7C,
// byte 080 hex 50 char 'P'
// ####_
// #___#
// #___#
// ####_
// #____
// #____
// #____
// _____
0xFE,0x90,0x90,0x90,0x60,
// byte 081 hex 51 char 'Q'
// _###_
// #___#
// #___#
// #___#
// #_#_#
// #__#_
// _##_#
// _____
0x7C,0x82,0x8A,0x84,0x7A,
// byte 082 hex 52 char 'R'
// ####_
// #___#
// #___#
// ####_
// #_#__
// #__#_
// #___#
// _____
0xFE,0x90,0x98,0x94,0x62,
// byte 083 hex 53 char 'S'
// _###_
// #___#
// #____
// _###_
// ____#
// #___#
// _###_
// _____
0x64,0x92,0x92,0x92,0x4C,
// byte 084 hex 54 char 'T'
// #####
// #_#_#
// __#__
// __#__
// __#__
// __#__
// __#__
// _____
0xC0,0x80,0xFE,0x80,0xC0,
// byte 085 hex 55 char 'U'
// #___#
// #___#
// #___#
// #___#
// #___#
// #___#
// _###_
// _____
0xFC,0x02,0x02,0x02,0xFC,
// byte 086 hex 56 char 'V'
// #___#
// #___#
// #___#
// #___#
// #___#
// _#_#_
// __#__
// _____
0xF8,0x04,0x02,0x04,0xF8,
// byte 087 hex 57 char 'W'
// #___#
// #___#
// #___#
// #_#_#
// #_#_#
// #_#_#
// _#_#_
// _____
0xFC,0x02,0x1C,0x02,0xFC,
// byte 088 hex 58 char 'X'
// #___#
// #___#
// _#_#_
// __#__
// _#_#_
// #___#
// #___#
// _____
0xC6,0x28,0x10,0x28,0xC6,
// byte 089 hex 59 char 'Y'
// #___#
// #___#
// _#_#_
// __#__
// __#__
// __#__
// __#__
// _____
0xC0,0x20,0x1E,0x20,0xC0,
// byte 090 hex 5A char 'Z'
// #####
// ____#
// ___#_
// _###_
// _#___
// #____
// #####
// _____
0x86,0x9A,0x92,0xB2,0xC2,
// byte 091 hex 5B char '['
// _####
// _#___
// _#___
// _#___
// _#___
// _#___
// _####
// _____
0x00,0xFE,0x82,0x82,0x82,
// byte 092 hex 5C char '\'
// _____
// #____
// _#___
// __#__
// ___#_
// ____#
// _____
// _____
0x40,0x20,0x10,0x08,0x04,
// byte 093 hex 5D char ']'
// _####
// ____#
// ____#
// ____#
// ____#
// ____#
// _####
// _____
0x00,0x82,0x82,0x82,0xFE,
// byte 094 hex 5E char '^'
// __#__
// _#_#_
// #___#
// _____
// _____
// _____
// _____
// _____
0x20,0x40,0x80,0x40,0x20,
// byte 095 hex 5F char '_'
// _____
// _____
// _____
// _____
// _____
// _____
// #####
// _____
0x02,0x02,0x02,0x02,0x02,
// byte 096 hex 60 char '`'
// _##__
// _##__
// __#__
// ___#_
// _____
// _____
// _____
// _____
0x00,0xC0,0xE0,0x10,0x00,
// byte 097 hex 61 char 'a'
// _____
// _____
// _##__
// ___#_
// _###_
// #__#_
// _####
// _____
0x04,0x2A,0x2A,0x1E,0x02,
// byte 098 hex 62 char 'b'
// #____
// #____
// #_##_
// ##__#
// #___#
// ##__#
// #_##_
// _____
0xFE,0x14,0x22,0x22,0x1C,
// byte 099 hex 63 char 'c'
// _____
// _____
// _###_
// #___#
// #____
// #___#
// _###_
// _____
0x1C,0x22,0x22,0x22,0x14,
// byte 100 hex 64 char 'd'
// ____#
// ____#
// _##_#
// #__##
// #___#
// #__##
// _##_#
// _____
0x1C,0x22,0x22,0x14,0xFE,
// byte 101 hex 65 char 'e'
// _____
// _____
// _###_
// #___#
// #####
// #____
// _###_
// _____
0x1C,0x2A,0x2A,0x2A,0x18,
// byte 102 hex 66 char 'f'
// ___#_
// __#_#
// __#__
// _###_
// __#__
// __#__
// __#__
// _____
0x00,0x10,0x7E,0x90,0x40,
// byte 103 hex 67 char 'g'
// _____
// _____
// _###_
// #__##
// #__##
// _##_#
// ____#
// _###_
0x18,0x25,0x25,0x39,0x1E,
// byte 104 hex 68 char 'h'
// #____
// #____
// #_##_
// ##__#
// #___#
// #___#
// #___#
// _____
0xFE,0x10,0x20,0x20,0x1E,
// byte 105 hex 69 char 'i'
// __#__
// _____
// _##__
// __#__
// __#__
// __#__
// _###_
// _____
0x00,0x22,0xBE,0x02,0x00,
// byte 106 hex 6A char 'j'
// ___#_
// _____
// ___#_
// ___#_
// ___#_
// #__#_
// _##__
// _____
0x04,0x02,0x02,0xBC,0x00,
// byte 107 hex 6B char 'k'
// #____
// #____
// #__#_
// #_#__
// ##___
// #_#__
// #__#_
// _____
0xFE,0x08,0x14,0x22,0x00,
// byte 108 hex 6C char 'l'
// _##__
// __#__
// __#__
// __#__
// __#__
// __#__
// _###_
// _____
0x00,0x82,0xFE,0x02,0x00,
// byte 109 hex 6D char 'm'
// _____
// _____
// ##_#_
// #_#_#
// #_#_#
// #_#_#
// #_#_#
// _____
0x3E,0x20,0x1E,0x20,0x1E,
// byte 110 hex 6E char 'n'
// _____
// _____
// #_##_
// ##__#
// #___#
// #___#
// #___#
// _____
0x3E,0x10,0x20,0x20,0x1E,
// byte 111 hex 6F char 'o'
// _____
// _____
// _###_
// #___#
// #___#
// #___#
// _###_
// _____
0x1C,0x22,0x22,0x22,0x1C,
// byte 112 hex 70 char 'p'
// _____
// _____
// #_##_
// ##__#
// ##__#
// #_##_
// #____
// #____
0x3F,0x18,0x24,0x24,0x18,
// byte 113 hex 71 char 'q'
// _____
// _____
// _##_#
// #__##
// #__##
// _##_#
// ____#
// ____#
0x18,0x24,0x24,0x18,0x3F,
// byte 114 hex 72 char 'r'
// _____
// _____
// #_##_
// ##__#
// #____
// #____
// #____
// _____
0x3E,0x10,0x20,0x20,0x10,
// byte 115 hex 73 char 's'
// _____
// _____
// _####
// #____
// _###_
// ____#
// ####_
// _____
0x12,0x2A,0x2A,0x2A,0x24,
// byte 116 hex 74 char 't'
// __#__
// __#__
// #####
// __#__
// __#__
// __#_#
// ___#_
// _____
0x20,0x20,0xFC,0x22,0x24,
// byte 117 hex 75 char 'u'
// _____
// _____
// #___#
// #___#
// #___#
// #__##
// _##_#
// _____
0x3C,0x02,0x02,0x04,0x3E,
// byte 118 hex 76 char 'v'
// _____
// _____
// #___#
// #___#
// #___#
// _#_#_
// __#__
// _____
0x38,0x04,0x02,0x04,0x38,
// byte 119 hex 77 char 'w'
// _____
// _____
// #___#
// #___#
// #_#_#
// #_#_#
// _#_#_
// _____
0x3C,0x02,0x0C,0x02,0x3C,
// byte 120 hex 78 char 'x'
// _____
// _____
// #___#
// _#_#_
// __#__
// _#_#_
// #___#
// _____
0x22,0x14,0x08,0x14,0x22,
// byte 121 hex 79 char 'y'
// _____
// _____
// #___#
// #___#
// _####
// ____#
// #___#
// _###_
0x32,0x09,0x09,0x09,0x3E,
// byte 122 hex 7A char 'z'
// _____
// _____
// #####
// ___#_
// __#__
// _#___
// #####
// _____
0x22,0x26,0x2A,0x32,0x22,
// byte 123 hex 7B char '{'
// ___#_
// __#__
// __#__
// _#___
// __#__
// __#__
// ___#_
// _____
0x00,0x10,0x6C,0x82,0x00,
// byte 124 hex 7C char '|'
// __#__
// __#__
// __#__
// _____
// __#__
// __#__
// __#__
// _____
0x00,0x00,0xEE,0x00,0x00,
// byte 125 hex 7D char '}'
// _#___
// __#__
// __#__
// ___#_
// __#__
// __#__
// _#___
// _____
0x00,0x82,0x6C,0x10,0x00,
// byte 126 hex 7E char '~'
// _#___
// #_#_#
// ___#_
// _____
// _____
// _____
// _____
// _____
0x40,0x80,0x40,0x20,0x40,
// byte 127 hex 7F char ' '
// __#__
// _###_
// ##_##
// #___#
// #___#
// #####
// _____
// _____
0x3C,0x64,0xC4,0x64,0x3C,
// byte 128 hex 80 char ' '
// _###_
// #___#
// #____
// #____
// #___#
// _###_
// ___#_
// _##__
0x78,0x85,0x85,0x86,0x48,
// byte 129 hex 81 char ' '
// _____
// #___#
// _____
// #___#
// #___#
// #__##
// _##_#
// _____
0x5C,0x02,0x02,0x04,0x5E,
// byte 130 hex 82 char ' '
// ___##
// _____
// _###_
// #___#
// #####
// #____
// _####
// _____
0x1C,0x2A,0x2A,0xAA,0x9A,
// byte 131 hex 83 char ' '
// #####
// _____
// _##__
// ___#_
// _###_
// #__#_
// _####
// _____
0x84,0xAA,0xAA,0x9E,0x82,
// byte 132 hex 84 char ' '
// _____
// #___#
// _##__
// ___#_
// _###_
// #__#_
// _####
// _____
0x44,0x2A,0x2A,0x1E,0x42,
// byte 133 hex 85 char ' '
// ##___
// _____
// _##__
// ___#_
// _###_
// #__#_
// _####
// _____
0x84,0xAA,0x2A,0x1E,0x02,
// byte 134 hex 86 char ' '
// __##_
// _____
// _##__
// ___#_
// _###_
// #__#_
// _####
// _____
0x04,0x2A,0xAA,0x9E,0x02,
// byte 135 hex 87 char ' '
// _____
// _####
// ##___
// ##___
// _####
// ___#_
// __##_
// _____
0x30,0x78,0x4A,0x4E,0x48,
// byte 136 hex 88 char ' '
// #####
// _____
// _###_
// #___#
// #####
// #____
// _####
// _____
0x9C,0xAA,0xAA,0xAA,0x9A,
// byte 137 hex 89 char ' '
// #___#
// _____
// _###_
// #___#
// #####
// #____
// _####
// _____
0x9C,0x2A,0x2A,0x2A,0x9A,
// byte 138 hex 8A char ' '
// ##___
// _____
// _###_
// #___#
// #####
// #____
// _####
// _____
0x9C,0xAA,0x2A,0x2A,0x1A,
// byte 139 hex 8B char ' '
// __#_#
// _____
// __##_
// ___#_
// ___#_
// ___#_
// __###
// _____
0x00,0x00,0xA2,0x3E,0x82,
// byte 140 hex 8C char ' '
// __##_
// _#__#
// __##_
// ___#_
// ___#_
// ___#_
// __###
// _____
0x00,0x40,0xA2,0xBE,0x42,
// byte 141 hex 8D char ' '
// _##__
// _____
// __##_
// ___#_
// ___#_
// ___#_
// __###
// _____
0x00,0x80,0xA2,0x3E,0x02,
// byte 142 hex 8E char ' '
// #_#_#
// _#_#_
// #___#
// #___#
// #####
// #___#
// #___#
// _____
0xBE,0x48,0x88,0x48,0xBE,
// byte 143 hex 8F char ' '
// __#__
// _____
// __#__
// _#_#_
// #___#
// #####
// #___#
// #___#
0x0F,0x14,0xA4,0x14,0x0F,
// byte 144 hex 90 char ' '
// __##_
// _____
// ####_
// #____
// ###__
// #____
// ####_
// _____
0x3E,0x2A,0xAA,0xA2,0x00,
// byte 145 hex 91 char ' '
// _____
// _____
// _####
// ___#_
// _####
// #__#_
// _####
// _____
0x04,0x2A,0x2A,0x3E,0x2A,
// byte 146 hex 92 char ' '
// __###
// _#_#_
// #__#_
// #####
// #__#_
// #__#_
// #__##
// _____
0x3E,0x50,0x90,0xFE,0x92,
// byte 147 hex 93 char ' '
// _###_
// #___#
// _____
// _###_
// #___#
// #___#
// _###_
// _____
0x4C,0x92,0x92,0x92,0x4C,
// byte 148 hex 94 char ' '
// _____
// #___#
// _###_
// #___#
// #___#
// #___#
// _###_
// _____
0x5C,0x22,0x22,0x22,0x5C,
// byte 149 hex 95 char ' '
// _____
// ##___
// _____
// _###_
// #___#
// #___#
// _###_
// _____
0x4C,0x52,0x12,0x12,0x0C,
// byte 150 hex 96 char ' '
// _###_
// #___#
// _____
// #___#
// #___#
// #__##
// _##_#
// _____
0x5C,0x82,0x82,0x84,0x5E,
// byte 151 hex 97 char ' '
// _____
// ##___
// _____
// #___#
// #___#
// #__##
// _##_#
// _____
0x5C,0x42,0x02,0x04,0x1E,
// byte 152 hex 98 char ' '
// _#__#
// _____
// _#__#
// _#__#
// _#__#
// __###
// ____#
// _###_
0x00,0xB9,0x05,0x05,0xBE,
// byte 153 hex 99 char ' '
// #___#
// _###_
// #___#
// #___#
// #___#
// #___#
// _###_
// _____
0xBC,0x42,0x42,0x42,0xBC,
// byte 154 hex 9A char ' '
// #___#
// _____
// #___#
// #___#
// #___#
// #___#
// _###_
// _____
0xBC,0x02,0x02,0x02,0xBC,
// byte 155 hex 9B char ' '
// __#__
// __#__
// #####
// #_#__
// #_#__
// #####
// __#__
// __#__
0x3C,0x24,0xFF,0x24,0x24,
// byte 156 hex 9C char ' '
// __##_
// _#_##
// _#__#
// ###__
// _#___
// _#__#
// #####
// _____
0x12,0x7E,0x92,0xC2,0x66,
// byte 157 hex 9D char ' '
// ##_##
// ##_##
// _###_
// #####
// __#__
// #####
// __#__
// __#__
0xD4,0xF4,0x3F,0xF4,0xD4,
// byte 158 hex 9E char ' '
// ###__
// #__#_
// #__#_
// ###__
// #__#_
// #_###
// #__#_
// #__#_
0xFF,0x90,0x94,0x6F,0x04,
// byte 159 hex 9F char ' '
// ___##
// __#_#
// __#__
// _###_
// __#__
// __#__
// #_#__
// ##___
0x03,0x11,0x7E,0x90,0xC0,
// byte 160 hex A0 char ' '
// ___##
// _____
// _##__
// ___#_
// _###_
// #__#_
// _####
// _____
0x04,0x2A,0x2A,0x9E,0x82,
// byte 161 hex A1 char ' '
// ___##
// _____
// __##_
// ___#_
// ___#_
// ___#_
// __###
// _____
0x00,0x00,0x22,0xBE,0x82,
// byte 162 hex A2 char ' '
// _____
// ___##
// _____
// _###_
// #___#
// #___#
// _###_
// _____
0x0C,0x12,0x12,0x52,0x4C,
// byte 163 hex A3 char ' '
// _____
// ___##
// _____
// #___#
// #___#
// #__##
// _##_#
// _____
0x1C,0x02,0x02,0x44,0x5E,
// byte 164 hex A4 char ' '
// _____
// _####
// _____
// _###_
// _#__#
// _#__#
// _#__#
// _____
0x00,0x5E,0x50,0x50,0x4E,
// byte 165 hex A5 char ' '
// #####
// _____
// ##__#
// ###_#
// #_###
// #__##
// #___#
// _____
0xBE,0xB0,0x98,0x8C,0xBE,
// byte 166 hex A6 char ' '
// _###_
// #__#_
// #__#_
// _####
// _____
// #####
// _____
// _____
0x64,0x94,0x94,0xF4,0x14,
// byte 167 hex A7 char ' '
// _###_
// #___#
// #___#
// _###_
// _____
// #####
// _____
// _____
0x64,0x94,0x94,0x94,0x64,
// byte 168 hex A8 char ' '
// __#__
// _____
// __#__
// _##__
// #____
// #___#
// _###_
// _____
0x0C,0x12,0xB2,0x02,0x04,
// byte 169 hex A9 char ' '
// _____
// _____
// _____
// #####
// #____
// #____
// _____
// _____
0x1C,0x10,0x10,0x10,0x10,
// byte 170 hex AA char ' '
// _____
// _____
// _____
// #####
// ____#
// ____#
// _____
// _____
0x10,0x10,0x10,0x10,0x1C,
// byte 171 hex AB char ' '
// #____
// #___#
// #__#_
// #_###
// _#__#
// #__##
// __#__
// __###
0xF4,0x08,0x13,0x35,0x5D,
// byte 172 hex AC char ' '
// #____
// #___#
// #__#_
// #_#_#
// _#_##
// #_###
// ____#
// ____#
0xF4,0x08,0x14,0x2C,0x5F,
// byte 173 hex AD char ' '
// __#__
// __#__
// _____
// __#__
// __#__
// __#__
// __#__
// _____
0x00,0x00,0xDE,0x00,0x00,
// byte 174 hex AE char ' '
// _____
// __#_#
// _#_#_
// #_#__
// _#_#_
// __#_#
// _____
// _____
0x10,0x28,0x54,0x28,0x44,
// byte 175 hex AF char ' '
// _____
// #_#__
// _#_#_
// __#_#
// _#_#_
// #_#__
// _____
// _____
0x44,0x28,0x54,0x28,0x10,
// byte 176 hex B0 char ' '
// #_#_#
// _____
// #_#_#
// _____
// #_#_#
// _____
// #_#_#
// _____
0xAA,0x00,0xAA,0x00,0xAA,
// byte 177 hex B1 char ' '
// _#_#_
// #_#_#
// _#_#_
// #_#_#
// _#_#_
// #_#_#
// _#_#_
// #_#_#
0x55,0xAA,0x55,0xAA,0x55,
// byte 178 hex B2 char ' '
// #####
// #_#_#
// #####
// #_#_#
// #####
// #_#_#
// #####
// #_#_#
0xFF,0xAA,0xFF,0xAA,0xFF,
// byte 179 hex B3 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// ___#_
// ___#_
// ___#_
// ___#_
0x00,0x00,0x00,0xFF,0x00,
// byte 180 hex B4 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// ####_
// ___#_
// ___#_
// ___#_
0x08,0x08,0x08,0xFF,0x00,
// byte 181 hex B5 char ' '
// ___#_
// ___#_
// ####_
// ___#_
// ####_
// ___#_
// ___#_
// ___#_
0x28,0x28,0x28,0xFF,0x00,
// byte 182 hex B6 char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// ###_#
// __#_#
// __#_#
// __#_#
0x08,0x08,0xFF,0x00,0xFF,
// byte 183 hex B7 char ' '
// _____
// _____
// _____
// _____
// #####
// __#_#
// __#_#
// __#_#
0x08,0x08,0x0F,0x08,0x0F,
// byte 184 hex B8 char ' '
// _____
// _____
// ####_
// ___#_
// ####_
// ___#_
// ___#_
// ___#_
0x28,0x28,0x28,0x3F,0x00,
// byte 185 hex B9 char ' '
// __#_#
// __#_#
// ###_#
// ____#
// ###_#
// __#_#
// __#_#
// __#_#
0x28,0x28,0xEF,0x00,0xFF,
// byte 186 hex BA char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
0x00,0x00,0xFF,0x00,0xFF,
// byte 187 hex BB char ' '
// _____
// _____
// #####
// ____#
// ###_#
// __#_#
// __#_#
// __#_#
0x28,0x28,0x2F,0x20,0x3F,
// byte 188 hex BC char ' '
// __#_#
// __#_#
// ###_#
// ____#
// #####
// _____
// _____
// _____
0x28,0x28,0xE8,0x08,0xF8,
// byte 189 hex BD char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// #####
// _____
// _____
// _____
0x08,0x08,0xF8,0x08,0xF8,
// byte 190 hex BE char ' '
// ___#_
// ___#_
// ####_
// ___#_
// ####_
// _____
// _____
// _____
0x28,0x28,0x28,0xF8,0x00,
// byte 191 hex BF char ' '
// _____
// _____
// _____
// _____
// ####_
// ___#_
// ___#_
// ___#_
0x08,0x08,0x08,0x0F,0x00,
// byte 192 hex C0 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// ___##
// _____
// _____
// _____
0x00,0x00,0x00,0xF8,0x08,
// byte 193 hex C1 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// #####
// _____
// _____
// _____
0x08,0x08,0x08,0xF8,0x08,
// byte 194 hex C2 char ' '
// _____
// _____
// _____
// _____
// #####
// ___#_
// ___#_
// ___#_
0x08,0x08,0x08,0x0F,0x08,
// byte 195 hex C3 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// ___##
// ___#_
// ___#_
// ___#_
0x00,0x00,0x00,0xFF,0x08,
// byte 196 hex C4 char ' '
// _____
// _____
// _____
// _____
// #####
// _____
// _____
// _____
0x08,0x08,0x08,0x08,0x08,
// byte 197 hex C5 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// #####
// ___#_
// ___#_
// ___#_
0x08,0x08,0x08,0xFF,0x08,
// byte 198 hex C6 char ' '
// ___#_
// ___#_
// ___##
// ___#_
// ___##
// ___#_
// ___#_
// ___#_
0x00,0x00,0x00,0xFF,0x28,
// byte 199 hex C7 char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
// __#_#
0x00,0x00,0xFF,0x00,0xFF,
// byte 200 hex C8 char ' '
// __#_#
// __#_#
// __#_#
// __#__
// __###
// _____
// _____
// _____
0x00,0x00,0xF8,0x08,0xE8,
// byte 201 hex C9 char ' '
// _____
// _____
// __###
// __#__
// __#_#
// __#_#
// __#_#
// __#_#
0x00,0x00,0x3F,0x20,0x2F,
// byte 202 hex CA char ' '
// __#_#
// __#_#
// ###_#
// _____
// #####
// _____
// _____
// _____
0x28,0x28,0xE8,0x08,0xE8,
// byte 203 hex CB char ' '
// _____
// _____
// #####
// _____
// ###_#
// __#_#
// __#_#
// __#_#
0x28,0x28,0x2F,0x20,0x2F,
// byte 204 hex CC char ' '
// __#_#
// __#_#
// __#_#
// __#__
// __#_#
// __#_#
// __#_#
// __#_#
0x00,0x00,0xFF,0x00,0xEF,
// byte 205 hex CD char ' '
// _____
// _____
// #####
// _____
// #####
// _____
// _____
// _____
0x28,0x28,0x28,0x28,0x28,
// byte 206 hex CE char ' '
// __#_#
// __#_#
// ###_#
// _____
// ###_#
// __#_#
// __#_#
// __#_#
0x28,0x28,0xEF,0x00,0xEF,
// byte 207 hex CF char ' '
// ___#_
// ___#_
// #####
// _____
// #####
// _____
// _____
// _____
0x28,0x28,0x28,0xE8,0x28,
// byte 208 hex D0 char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// #####
// _____
// _____
// _____
0x08,0x08,0xF8,0x08,0xF8,
// byte 209 hex D1 char ' '
// _____
// _____
// #####
// _____
// #####
// ___#_
// ___#_
// ___#_
0x28,0x28,0x28,0x2F,0x28,
// byte 210 hex D2 char ' '
// _____
// _____
// _____
// _____
// #####
// __#_#
// __#_#
// __#_#
0x08,0x08,0x0F,0x08,0x0F,
// byte 211 hex D3 char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// __###
// _____
// _____
// _____
0x00,0x00,0xF8,0x08,0xF8,
// byte 212 hex D4 char ' '
// ___#_
// ___#_
// ___##
// ___#_
// ___##
// _____
// _____
// _____
0x00,0x00,0x00,0xF8,0x28,
// byte 213 hex D5 char ' '
// _____
// _____
// ___##
// ___#_
// ___##
// ___#_
// ___#_
// ___#_
0x00,0x00,0x00,0x3F,0x28,
// byte 214 hex D6 char ' '
// _____
// _____
// _____
// _____
// __###
// __#_#
// __#_#
// __#_#
0x00,0x00,0x0F,0x08,0x0F,
// byte 215 hex D7 char ' '
// __#_#
// __#_#
// __#_#
// __#_#
// #####
// __#_#
// __#_#
// __#_#
0x08,0x08,0xFF,0x08,0xFF,
// byte 216 hex D8 char ' '
// ___#_
// ___#_
// #####
// ___#_
// #####
// ___#_
// ___#_
// ___#_
0x28,0x28,0x28,0xFF,0x28,
// byte 217 hex D9 char ' '
// ___#_
// ___#_
// ___#_
// ___#_
// ####_
// _____
// _____
// _____
0x08,0x08,0x08,0xF8,0x00,
// byte 218 hex DA char ' '
// _____
// _____
// _____
// _____
// ___##
// ___#_
// ___#_
// ___#_
0x00,0x00,0x00,0x0F,0x08,
// byte 219 hex DB char ' '
// #####
// #####
// #####
// #####
// #####
// #####
// #####
// #####
0xFF,0xFF,0xFF,0xFF,0xFF,
// byte 220 hex DC char ' '
// _____
// _____
// _____
// _____
// #####
// #####
// #####
// #####
0x0F,0x0F,0x0F,0x0F,0x0F,
// byte 221 hex DD char ' '
// ###__
// ###__
// ###__
// ###__
// ###__
// ###__
// ###__
// ###__
0xFF,0xFF,0xFF,0x00,0x00,
// byte 222 hex DE char ' '
// ___##
// ___##
// ___##
// ___##
// ___##
// ___##
// ___##
// ___##
0x00,0x00,0x00,0xFF,0xFF,
// byte 223 hex DF char ' '
// #####
// #####
// #####
// #####
// _____
// _____
// _____
// _____
0xF0,0xF0,0xF0,0xF0,0xF0,
// byte 224 hex E0 char ' '
// _____
// _____
// _##_#
// #__#_
// #__#_
// #__#_
// _##_#
// _____
0x1C,0x22,0x22,0x1C,0x22,
// byte 225 hex E1 char ' '
// _____
// _###_
// #___#
// ####_
// #___#
// #___#
// ####_
// #____
0x3F,0x52,0x52,0x52,0x2C,
// byte 226 hex E2 char ' '
// _____
// #####
// #__##
// #____
// #____
// #____
// #____
// _____
0x7E,0x40,0x40,0x60,0x60,
// byte 227 hex E3 char ' '
// _____
// #####
// _#_#_
// _#_#_
// _#_#_
// _#_#_
// _#_#_
// _____
0x40,0x7E,0x40,0x7E,0x40,
// byte 228 hex E4 char ' '
// #####
// #___#
// _#___
// __#__
// _#___
// #___#
// #####
// _____
0xC6,0xAA,0x92,0x82,0xC6,
// byte 229 hex E5 char ' '
// _____
// _____
// _####
// #__#_
// #__#_
// #__#_
// _##__
// _____
0x1C,0x22,0x22,0x3C,0x20,
// byte 230 hex E6 char ' '
// _____
// _#_#_
// _#_#_
// _#_#_
// _#_#_
// _##_#
// ##___
// _____
0x02,0x7E,0x04,0x78,0x04,
// byte 231 hex E7 char ' '
// _____
// #####
// #_#__
// __#__
// __#__
// __#__
// __#__
// _____
0x60,0x40,0x7E,0x40,0x40,
// byte 232 hex E8 char ' '
// #####
// __#__
// _###_
// #___#
// #___#
// _###_
// __#__
// #####
0x99,0xA5,0xE7,0xA5,0x99,
// byte 233 hex E9 char ' '
// __#__
// _#_#_
// #___#
// #####
// #___#
// _#_#_
// __#__
// _____
0x38,0x54,0x92,0x54,0x38,
// byte 234 hex EA char ' '
// __#__
// _#_#_
// #___#
// #___#
// _#_#_
// _#_#_
// ##_##
// _____
0x32,0x4E,0x80,0x4E,0x32,
// byte 235 hex EB char ' '
// __##_
// _#___
// __##_
// _###_
// #___#
// #___#
// _###_
// _____
0x0C,0x52,0xB2,0xB2,0x0C,
// byte 236 hex EC char ' '
// _____
// _____
// _____
// _###_
// #_#_#
// #_#_#
// _###_
// _____
0x0C,0x12,0x1E,0x12,0x0C,
// byte 237 hex ED char ' '
// ____#
// _###_
// #__##
// #_#_#
// #_#_#
// ##__#
// _###_
// #____
0x3D,0x46,0x5A,0x62,0xBC,
// byte 238 hex EE char ' '
// _###_
// #____
// #____
// ####_
// #____
// #____
// _###_
// _____
0x7C,0x92,0x92,0x92,0x00,
// byte 239 hex EF char ' '
// _###_
// #___#
// #___#
// #___#
// #___#
// #___#
// #___#
// _____
0x7E,0x80,0x80,0x80,0x7E,
// byte 240 hex F0 char ' '
// _____
// #####
// _____
// #####
// _____
// #####
// _____
// _____
0x54,0x54,0x54,0x54,0x54,
// byte 241 hex F1 char ' '
// __#__
// __#__
// #####
// __#__
// __#__
// _____
// #####
// _____
0x22,0x22,0xFA,0x22,0x22,
// byte 242 hex F2 char ' '
// _#___
// __#__
// ___#_
// __#__
// _#___
// _____
// #####
// _____
0x02,0x8A,0x52,0x22,0x02,
// byte 243 hex F3 char ' '
// ___#_
// __#__
// _#___
// __#__
// ___#_
// _____
// #####
// _____
0x02,0x22,0x52,0x8A,0x02,
// byte 244 hex F4 char ' '
// __###
// __#_#
// __#__
// __#__
// __#__
// __#__
// __#__
// __#__
0x00,0x00,0xFF,0x80,0xC0,
// byte 245 hex F5 char ' '
// __#__
// __#__
// __#__
// __#__
// __#__
// #_#__
// #_#__
// ###__
0x07,0x01,0xFF,0x00,0x00,
// byte 246 hex F6 char ' '
// __##_
// __##_
// _____
// #####
// _____
// __##_
// __##_
// _____
0x10,0x10,0xD6,0xD6,0x10,
// byte 247 hex F7 char ' '
// _____
// ###_#
// #_###
// _____
// ###_#
// #_###
// _____
// _____
0x6C,0x48,0x6C,0x24,0x6C,
// byte 248 hex F8 char ' '
// _###_
// ##_##
// ##_##
// _###_
// _____
// _____
// _____
// _____
0x60,0xF0,0x90,0xF0,0x60,
// byte 249 hex F9 char ' '
// _____
// _____
// _____
// __##_
// __##_
// _____
// _____
// _____
0x00,0x00,0x18,0x18,0x00,
// byte 250 hex FA char ' '
// _____
// _____
// _____
// _____
// __##_
// _____
// _____
// _____
0x00,0x00,0x08,0x08,0x00,
// byte 251 hex FB char ' '
// __###
// __#__
// __#__
// __#__
// #_#__
// #_#__
// _##__
// __#__
0x0C,0x02,0xFF,0x80,0x80,
// byte 252 hex FC char ' '
// _###_
// _#__#
// _#__#
// _#__#
// _#__#
// _____
// _____
// _____
0x00,0xF8,0x80,0x80,0x78,
// byte 253 hex FD char ' '
// _###_
// ___##
// __##_
// _##__
// _####
// _____
// _____
// _____
0x00,0x98,0xB8,0xE8,0x48,
// byte 254 hex FE char ' '
// _____
// _____
// _####
// _####
// _####
// _####
// _____
// _____
0x00,0x3C,0x3C,0x3C,0x3C,
// byte 255 hex FF char ' '
// _____
// _____
// _____
// _____
// _____
// _____
// _____
// _____
0x00,0x00,0x00,0x00,0x00,
};
