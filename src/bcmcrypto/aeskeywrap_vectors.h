/*
 * aeskeywrap_vectors.h
 * AES keywrap test vectors
 *
 * Copyright (C) 2014, Broadcom Corporation
 * All Rights Reserved.
 * 
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior
 * written permission of Broadcom Corporation.
 *
 * $Id: aeskeywrap_vectors.h 241182 2011-02-17 21:50:03Z $
 */

#include <typedefs.h>
#include <bcmcrypto/aeskeywrap.h>

/* Test vector data from:
 * RFC3394 Advanced Encryption Standard (AES) Key Wrap Algorithm
 * Copyright (C) The Internet Society (2002).  All Rights Reserved.
 */

/* 4.1 Wrap 128 bits of Key Data with a 128-bit KEK */
uint8 key_00[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_00[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_00[] = {
	0x1F, 0xA6, 0x8B, 0x0A, 0x81, 0x12, 0xB4, 0x47,
	0xAE, 0xF3, 0x4B, 0xD8, 0xFB, 0x5A, 0x7B, 0x82,
	0x9D, 0x3E, 0x86, 0x23, 0x71, 0xD2, 0xCF, 0xE5
	};

/* 4.2 Wrap 128 bits of Key Data with a 192-bit KEK */
uint8 key_01[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
	};

uint8 input_01[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_01[] = {
	0x96, 0x77, 0x8B, 0x25, 0xAE, 0x6C, 0xA4, 0x35,
	0xF9, 0x2B, 0x5B, 0x97, 0xC0, 0x50, 0xAE, 0xD2,
	0x46, 0x8A, 0xB8, 0xA1, 0x7A, 0xD8, 0x4E, 0x5D
	};

/* 4.3 Wrap 128 bits of Key Data with a 256-bit KEK */
uint8 key_02[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	};

uint8 input_02[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_02[] = {
	0x64, 0xE8, 0xC3, 0xF9, 0xCE, 0x0F, 0x5B, 0xA2,
	0x63, 0xE9, 0x77, 0x79, 0x05, 0x81, 0x8A, 0x2A,
	0x93, 0xC8, 0x19, 0x1E, 0x7D, 0x6E, 0x8A, 0xE7
	};

/* 4.4 Wrap 192 bits of Key Data with a 192-bit KEK */
uint8 key_03[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17
	};

uint8 input_03[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
	};

uint8 ref_03[] = {
	0x03, 0x1D, 0x33, 0x26, 0x4E, 0x15, 0xD3, 0x32,
	0x68, 0xF2, 0x4E, 0xC2, 0x60, 0x74, 0x3E, 0xDC,
	0xE1, 0xC6, 0xC7, 0xDD, 0xEE, 0x72, 0x5A, 0x93,
	0x6B, 0xA8, 0x14, 0x91, 0x5C, 0x67, 0x62, 0xD2
	};

/* 4.5 Wrap 192 bits of Key Data with a 256-bit KEK */
uint8 key_04[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	};

uint8 input_04[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07
	};

uint8 ref_04[] = {
	0xA8, 0xF9, 0xBC, 0x16, 0x12, 0xC6, 0x8B, 0x3F,
	0xF6, 0xE6, 0xF4, 0xFB, 0xE3, 0x0E, 0x71, 0xE4,
	0x76, 0x9C, 0x8B, 0x80, 0xA3, 0x2C, 0xB8, 0x95,
	0x8C, 0xD5, 0xD1, 0x7D, 0x6B, 0x25, 0x4D, 0xA1
	};

/* 4.6 Wrap 256 bits of Key Data with a 256-bit KEK */
uint8 key_05[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
	0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	};

uint8 input_05[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 ref_05[] = {
	0x28, 0xC9, 0xF4, 0x04, 0xC4, 0xB8, 0x10, 0xF4,
	0xCB, 0xCC, 0xB3, 0x5C, 0xFB, 0x87, 0xF8, 0x26,
	0x3F, 0x57, 0x86, 0xE2, 0xD8, 0x0E, 0xD3, 0x26,
	0xCB, 0xC7, 0xF0, 0xE7, 0x1A, 0x99, 0xF4, 0x3B,
	0xFB, 0x98, 0x8B, 0x9B, 0x7A, 0x02, 0xDD, 0x21
	};

/* Test vectors generated at Broadcom */
/* Wrap 256 bits of Key Data with a 128-bit KEK */
uint8 key_06[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_06[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 ref_06[] = {
	0x11, 0x82, 0x68, 0x40, 0x77, 0x4D, 0x99, 0x3F,
	0xF9, 0xC2, 0xFA, 0x02, 0xCC, 0xA3, 0xCE, 0xA0,
	0xE9, 0x3B, 0x1E, 0x1C, 0xF9, 0x63, 0x61, 0xF9,
	0x3E, 0xA6, 0xDC, 0x2F, 0x34, 0x51, 0x94, 0xE7,
	0xB3, 0x0F, 0x96, 0x4C, 0x79, 0xF9, 0xE6, 0x1D
	};

/* aes_wrap failure test 1: input too long */
uint8 key_10[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_10[AKW_MAX_WRAP_LEN+1];

uint8 ref_10[] = "";

/* aes_wrap failure test 1: input length not multiple of block length */
uint8 key_11[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_11[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00
	};

uint8 ref_11[] = "";

/* aes_unwrap failure test 0: input too long */
uint8 key_20[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_20[AKW_MAX_WRAP_LEN+1];

uint8 ref_20[] = "";

/* aes_unwrap failure test 1: input length not multiple of block length */
uint8 key_21[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_21[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF,
	0x00
	};

uint8 ref_21[] = "";

/* aes_unwrap failure test 2: unwraped data incorrect */
uint8 key_22[] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
	0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
	};

uint8 input_22[] = {
	0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
	0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF
	};

uint8 ref_22[] = "";


typedef struct {
    int kl;
    uint8 *key;
    int il;
    uint8 *input;
    uint8 *ref;
} akw_vector_t;

#define AKW_VECTOR_ENTRY(x)    \
	{ sizeof(key_##x), key_##x, sizeof(input_##x), input_##x, ref_##x }

akw_vector_t akw_vec[] = {
    AKW_VECTOR_ENTRY(00),
    AKW_VECTOR_ENTRY(01),
    AKW_VECTOR_ENTRY(02),
    AKW_VECTOR_ENTRY(03),
    AKW_VECTOR_ENTRY(04),
    AKW_VECTOR_ENTRY(05),
    AKW_VECTOR_ENTRY(06)
    };

akw_vector_t akw_wrap_fail_vec[] = {
    AKW_VECTOR_ENTRY(10),
    AKW_VECTOR_ENTRY(11)
    };

akw_vector_t akw_unwrap_fail_vec[] = {
    AKW_VECTOR_ENTRY(20),
    AKW_VECTOR_ENTRY(21),
    AKW_VECTOR_ENTRY(22)
    };
