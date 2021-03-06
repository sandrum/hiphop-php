/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_php_classes_iterator_fws_h683af361__
#define __GENERATED_php_classes_iterator_fws_h683af361__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

// 1. Static Strings
extern StaticStringProxy s_sys_ssp4b63ab9f;
#ifndef s_sys_ss4b63ab9f
#define s_sys_ss4b63ab9f (*(StaticString *)(&s_sys_ssp4b63ab9f))
#endif
extern StaticStringProxy s_sys_ssp1c30fc04;
#ifndef s_sys_ss1c30fc04
#define s_sys_ss1c30fc04 (*(StaticString *)(&s_sys_ssp1c30fc04))
#endif
extern StaticStringProxy s_sys_ssp4152806c;
#ifndef s_sys_ss4152806c
#define s_sys_ss4152806c (*(StaticString *)(&s_sys_ssp4152806c))
#endif
extern StaticStringProxy s_sys_ssp4501171a;
#ifndef s_sys_ss4501171a
#define s_sys_ss4501171a (*(StaticString *)(&s_sys_ssp4501171a))
#endif
extern StaticStringProxy s_sys_ssp295951fc;
#ifndef s_sys_ss295951fc
#define s_sys_ss295951fc (*(StaticString *)(&s_sys_ssp295951fc))
#endif
extern StaticStringProxy s_sys_ssp24f77622;
#ifndef s_sys_ss24f77622
#define s_sys_ss24f77622 (*(StaticString *)(&s_sys_ssp24f77622))
#endif
extern StaticStringProxy s_sys_ssp41a4cd6d;
#ifndef s_sys_ss41a4cd6d
#define s_sys_ss41a4cd6d (*(StaticString *)(&s_sys_ssp41a4cd6d))
#endif
extern StaticStringProxy s_sys_ssp728a74b5;
#ifndef s_sys_ss728a74b5
#define s_sys_ss728a74b5 (*(StaticString *)(&s_sys_ssp728a74b5))
#endif
extern StaticStringProxy s_sys_ssp194bd51f;
#ifndef s_sys_ss194bd51f
#define s_sys_ss194bd51f (*(StaticString *)(&s_sys_ssp194bd51f))
#endif
extern StaticStringProxy s_sys_ssp235e0738;
#ifndef s_sys_ss235e0738
#define s_sys_ss235e0738 (*(StaticString *)(&s_sys_ssp235e0738))
#endif
extern StaticStringProxy s_sys_ssp0e589fb8;
#ifndef s_sys_ss0e589fb8
#define s_sys_ss0e589fb8 (*(StaticString *)(&s_sys_ssp0e589fb8))
#endif
extern StaticStringProxy s_sys_ssp706602bd;
#ifndef s_sys_ss706602bd
#define s_sys_ss706602bd (*(StaticString *)(&s_sys_ssp706602bd))
#endif
extern StaticStringProxy s_sys_ssp2a749397;
#ifndef s_sys_ss2a749397
#define s_sys_ss2a749397 (*(StaticString *)(&s_sys_ssp2a749397))
#endif
extern StaticStringProxy s_sys_ssp784a8bc6;
#ifndef s_sys_ss784a8bc6
#define s_sys_ss784a8bc6 (*(StaticString *)(&s_sys_ssp784a8bc6))
#endif
extern StaticStringProxy s_sys_ssp200ebd6e;
#ifndef s_sys_ss200ebd6e
#define s_sys_ss200ebd6e (*(StaticString *)(&s_sys_ssp200ebd6e))
#endif
extern StaticStringProxy s_sys_ssp61ac99ad;
#ifndef s_sys_ss61ac99ad
#define s_sys_ss61ac99ad (*(StaticString *)(&s_sys_ssp61ac99ad))
#endif
extern StaticStringProxy s_sys_ssp29c832de;
#ifndef s_sys_ss29c832de
#define s_sys_ss29c832de (*(StaticString *)(&s_sys_ssp29c832de))
#endif
extern StaticStringProxy s_sys_ssp4c1223ea;
#ifndef s_sys_ss4c1223ea
#define s_sys_ss4c1223ea (*(StaticString *)(&s_sys_ssp4c1223ea))
#endif
extern StaticStringProxy s_sys_ssp55e2caa5;
#ifndef s_sys_ss55e2caa5
#define s_sys_ss55e2caa5 (*(StaticString *)(&s_sys_ssp55e2caa5))
#endif
extern StaticStringProxy s_sys_ssp2eef78e8;
#ifndef s_sys_ss2eef78e8
#define s_sys_ss2eef78e8 (*(StaticString *)(&s_sys_ssp2eef78e8))
#endif
extern StaticStringProxy s_sys_ssp78b9f0f7;
#ifndef s_sys_ss78b9f0f7
#define s_sys_ss78b9f0f7 (*(StaticString *)(&s_sys_ssp78b9f0f7))
#endif
extern StaticStringProxy s_sys_ssp713117b7;
#ifndef s_sys_ss713117b7
#define s_sys_ss713117b7 (*(StaticString *)(&s_sys_ssp713117b7))
#endif
extern StaticStringProxy s_sys_ssp07389a45;
#ifndef s_sys_ss07389a45
#define s_sys_ss07389a45 (*(StaticString *)(&s_sys_ssp07389a45))
#endif
extern StaticStringProxy s_sys_ssp2998aebe;
#ifndef s_sys_ss2998aebe
#define s_sys_ss2998aebe (*(StaticString *)(&s_sys_ssp2998aebe))
#endif
extern StaticStringProxy s_sys_ssp5a4888db;
#ifndef s_sys_ss5a4888db
#define s_sys_ss5a4888db (*(StaticString *)(&s_sys_ssp5a4888db))
#endif
extern StaticStringProxy s_sys_ssp1d47b860;
#ifndef s_sys_ss1d47b860
#define s_sys_ss1d47b860 (*(StaticString *)(&s_sys_ssp1d47b860))
#endif
extern StaticStringProxy s_sys_ssp3d49bf9a;
#ifndef s_sys_ss3d49bf9a
#define s_sys_ss3d49bf9a (*(StaticString *)(&s_sys_ssp3d49bf9a))
#endif
extern StaticStringProxy s_sys_ssp5077c5eb;
#ifndef s_sys_ss5077c5eb
#define s_sys_ss5077c5eb (*(StaticString *)(&s_sys_ssp5077c5eb))
#endif
extern StaticStringProxy s_sys_ssp3aeddfcb;
#ifndef s_sys_ss3aeddfcb
#define s_sys_ss3aeddfcb (*(StaticString *)(&s_sys_ssp3aeddfcb))
#endif
extern StaticStringProxy s_sys_ssp011d3ebc;
#ifndef s_sys_ss011d3ebc
#define s_sys_ss011d3ebc (*(StaticString *)(&s_sys_ssp011d3ebc))
#endif
extern StaticStringProxy s_sys_ssp684cdb44;
#ifndef s_sys_ss684cdb44
#define s_sys_ss684cdb44 (*(StaticString *)(&s_sys_ssp684cdb44))
#endif
extern StaticStringProxy s_sys_ssp58b335fe;
#ifndef s_sys_ss58b335fe
#define s_sys_ss58b335fe (*(StaticString *)(&s_sys_ssp58b335fe))
#endif
extern StaticStringProxy s_sys_ssp5cb8b2cb;
#ifndef s_sys_ss5cb8b2cb
#define s_sys_ss5cb8b2cb (*(StaticString *)(&s_sys_ssp5cb8b2cb))
#endif
extern StaticStringProxy s_sys_ssp21c5edcb;
#ifndef s_sys_ss21c5edcb
#define s_sys_ss21c5edcb (*(StaticString *)(&s_sys_ssp21c5edcb))
#endif
extern StaticStringProxy s_sys_ssp15374bf0;
#ifndef s_sys_ss15374bf0
#define s_sys_ss15374bf0 (*(StaticString *)(&s_sys_ssp15374bf0))
#endif
extern StaticStringProxy s_sys_ssp3663d779;
#ifndef s_sys_ss3663d779
#define s_sys_ss3663d779 (*(StaticString *)(&s_sys_ssp3663d779))
#endif
extern StaticStringProxy s_sys_ssp0b4ac0f6;
#ifndef s_sys_ss0b4ac0f6
#define s_sys_ss0b4ac0f6 (*(StaticString *)(&s_sys_ssp0b4ac0f6))
#endif
extern StaticStringProxy s_sys_ssp042d32ef;
#ifndef s_sys_ss042d32ef
#define s_sys_ss042d32ef (*(StaticString *)(&s_sys_ssp042d32ef))
#endif
extern StaticStringProxy s_sys_ssp745e29f6;
#ifndef s_sys_ss745e29f6
#define s_sys_ss745e29f6 (*(StaticString *)(&s_sys_ssp745e29f6))
#endif
extern StaticStringProxy s_sys_ssp26555cea;
#ifndef s_sys_ss26555cea
#define s_sys_ss26555cea (*(StaticString *)(&s_sys_ssp26555cea))
#endif
extern StaticStringProxy s_sys_ssp4e18665c;
#ifndef s_sys_ss4e18665c
#define s_sys_ss4e18665c (*(StaticString *)(&s_sys_ssp4e18665c))
#endif
extern StaticStringProxy s_sys_ssp79a9f831;
#ifndef s_sys_ss79a9f831
#define s_sys_ss79a9f831 (*(StaticString *)(&s_sys_ssp79a9f831))
#endif
extern StaticStringProxy s_sys_ssp43d178ad;
#ifndef s_sys_ss43d178ad
#define s_sys_ss43d178ad (*(StaticString *)(&s_sys_ssp43d178ad))
#endif
extern StaticStringProxy s_sys_ssp42622ae8;
#ifndef s_sys_ss42622ae8
#define s_sys_ss42622ae8 (*(StaticString *)(&s_sys_ssp42622ae8))
#endif
extern StaticStringProxy s_sys_ssp39dad1af;
#ifndef s_sys_ss39dad1af
#define s_sys_ss39dad1af (*(StaticString *)(&s_sys_ssp39dad1af))
#endif

// 2. Static Arrays
extern StaticArray s_sys_sa00000000;

// 3. Static Variants
extern const VarNR &s_sys_svif01bca90;
extern const VarNR &s_sys_svib794f8ce;
extern const VarNR &s_sys_svi90d5f98c;
extern const VarNR &s_sys_svi86af027e;





///////////////////////////////////////////////////////////////////////////////
}


#endif // __GENERATED_php_classes_iterator_fws_h683af361__
