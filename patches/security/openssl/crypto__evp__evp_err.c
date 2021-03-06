$NetBSD$

--- crypto/evp/evp_err.c.orig	2008-09-15 22:21:41.000000000 +0000
+++ crypto/evp/evp_err.c
@@ -70,6 +70,7 @@
 
 static ERR_STRING_DATA EVP_str_functs[]=
 	{
+{ERR_FUNC(EVP_F_AESNI_INIT_KEY),	"AESNI_INIT_KEY"},
 {ERR_FUNC(EVP_F_AES_INIT_KEY),	"AES_INIT_KEY"},
 {ERR_FUNC(EVP_F_ALG_MODULE_INIT),	"ALG_MODULE_INIT"},
 {ERR_FUNC(EVP_F_CAMELLIA_INIT_KEY),	"CAMELLIA_INIT_KEY"},
