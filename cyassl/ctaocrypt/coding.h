/* coding.h
 *
 * Copyright (C) 2006-2014 wolfSSL Inc.
 *
 * This file is part of wolfSSL. (formerly known as CyaSSL)
 *
 * wolfSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * wolfSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */


#ifndef CTAO_CRYPT_CODING_H
#define CTAO_CRYPT_CODING_H

#ifndef HAVE_FIPS
    #include <wolfssl/wolfcrypt/coding.h>
#else

#include <cyassl/ctaocrypt/types.h>

#ifdef __cplusplus
    extern "C" {
#endif


/* decode needed by CyaSSL */
CYASSL_LOCAL int Base64_Decode(const byte* in, word32 inLen, byte* out,
                               word32* outLen);

#if defined(OPENSSL_EXTRA) || defined(SESSION_CERTS) || defined(CYASSL_KEY_GEN)  || defined(CYASSL_CERT_GEN) || defined(HAVE_WEBSERVER)
    /* encode isn't */
    CYASSL_API
    int Base64_Encode(const byte* in, word32 inLen, byte* out,
                                  word32* outLen);
    CYASSL_API
    int Base64_EncodeEsc(const byte* in, word32 inLen, byte* out,
                                  word32* outLen);
#endif

#if defined(OPENSSL_EXTRA) || defined(HAVE_WEBSERVER) || defined(HAVE_FIPS)
    CYASSL_API
    int Base16_Decode(const byte* in, word32 inLen, byte* out, word32* outLen);
#endif


#ifdef __cplusplus
    } /* extern "C" */
#endif

#endif /* HAVE_FIPS */
#endif /* CTAO_CRYPT_CODING_H */

