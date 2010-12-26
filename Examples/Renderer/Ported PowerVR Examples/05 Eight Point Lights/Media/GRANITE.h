/******************************************************************************

 @File         GRANITE.h

 @Title        

 @Copyright    Copyright (C) 2000 - 2007 by Imagination Technologies Limited.

 @Platform     

 @Description  

******************************************************************************/
#ifndef A32BIT 
 #define A32BIT static const unsigned long
#endif

A32BIT GRANITE[] = {

/* Header */
0x00000034,		/* dwHeaderSize */
0x00000080,		/* dwHeight */
0x00000080,		/* dwWidth */
0x00000007,		/* dwMipMapCount */
0x00000319,		/* dwpfFlags */
0x00002b00,		/* dwDataSize */
0x00000004,		/* dwBitCount */
0x00000000,		/* dwRBitMask */
0x00000000,		/* dwGBitMask */
0x00000000,		/* dwBBitMask */
0x00000001,		/* dwAlphaBitMask */
0x21525650,		/* dwPVR */
0x00000001,		/* dwNumSurfs */

/* Data */
0x2f7dbcfd,0xf7bdd6b4,0x7c68062e,0xf39ce316,0xf09146ab,0xfbdeeb58,0xb9bf9714,0xef7beb58,0xfefb072e,0xf7bdd6b4,0xf9f8eaba,0xffffbdee,0xe091a5a1,0xe318ca50,0x9bd297e8,0xffffdad4,0xd4e1f67f,0xfbdeeb58,0xad4f0694,0xef7bce72,0x0b0b6f7e,0xfbded294,0x7b627f7f,0xf39ce316,0xef8e97d0,0xf7bdef7a,0xaf4feafb,0xfbdece72,0x2fff41bf,0xf39cc210,0x6607c207,0xfbdedad4,
0xea0afafa,0xfffff39a,0x004090e5,0xef7bb9ce,0xf70fbfbf,0xfbdeeb58,0x075793d3,0xef7bc210,0x6fffff6a,0xfbdedef6,0xaa95552c,0xffffce72,0x4f839202,0xf7bde738,0xf9eb99a5,0xf39cce72,0xe50101aa,0xf7bdc630,0x4099fffe,0xffffdef6,0xbbeebeba,0xf39cce72,0xf6ab3a36,0xf7bddad4,0xbf5f4f99,0xffffe738,0xe39b4fae,0xf39cb9ce,0x590a9beb,0xffffeb58,0x6b9bd3fa,0xffffdef6,
0x4065bdb4,0xf7bdef7a,0xfe9a4680,0xf39cc210,0xafbeaaab,0xeb5aca52,0xebfaf982,0xfbdedad4,0x99ffffff,0xf7bddef6,0x59303664,0xf39cdef6,0xfffaf0aa,0xfbded292,0x0010fdfe,0xfbdeef7a,0x1f6ef8e2,0xf7bdb5ae,0xbfeba4a4,0xef7bdad4,0x6491977f,0xf7bdc630,0xbe7ff655,0xef7beb58,0xfefa5b3d,0xfbdeeb58,0xc1069fff,0xf39cd292,0xd2d0b8fc,0xfbdec630,0x0b2fbfbf,0xffffce72,
0xe0fabe6a,0xfbdece72,0x2aafa8a0,0xfbdeca52,0xff2f1a01,0xfbdec210,0x0695faff,0xf39cca50,0xaec1c1d1,0xf39ce316,0x293aabbf,0xef7bca50,0xfeffbaa5,0xffffe738,0xf4bd3ef4,0xf7bddad4,0xffd0f4e0,0xef7bce72,0x4095ffbf,0xf39ce738,0xaaae1a07,0xfbdedad6,0xfe0e5fff,0xffffdad4,0x15a5f5a4,0xfbdedef6,0xb4a46955,0xffffdad4,0x191abfff,0xfbdee316,0x5592a12c,0xf39cce72,
0x7f7dfdbf,0xef7bca52,0x55411f6f,0xf39cce72,0xe8a4fffc,0xffffdad4,0xbcf9e4f9,0xffffe738,0x56bc9054,0xf7bddad6,0xbf7fbfaa,0xf7bdb5ae,0x090357a9,0xffffca50,0x6af0e045,0xf39cdad4,0xfbfefad3,0xef7bca52,0x9a6fbfbb,0xfbdee738,0xbeba9112,0xfbded292,0xa1f5c6ea,0xf7bdd6b4,0xd6e8b0a1,0xf39cd294,0xa94a9feb,0xffffdef6,0x3fbba590,0xf7bdb9ce,0xfe362b2f,0xef7bce72,
0x1faff9f4,0xffffb9ce,0xff9b471f,0xfbded292,0xbafeff6b,0xef7bd294,0x63a7aab1,0xf39cca52,0x0b1e68ea,0xfbded6b4,0xe5871e41,0xfbdeeb58,0xaafaff3f,0xf39cdef6,0xfe6b6f0e,0xf7bde738,0xaeebebae,0xffffe316,0xf4fa6a1c,0xef7bc630,0xf2727aff,0xffffef7a,0x9b7f3d3d,0xf39cf39c,0xe2f7fff0,0xf7bdc630,0x6abd7ea6,0xffffe316,0x9f0b6f96,0xffffe738,0xbcfeb0fa,0xf39cca52,
0xfaf46a0d,0xf7bde738,0x6af2ff9f,0xfbdeeb58,0x87c3ebf9,0xf7bdca50,0xbd69ab2f,0xef7bd294,0xfdfeae6f,0xffffe738,0x7fbdf4f4,0xf39cb5ae,0xf9bf39bd,0xfffff39a,0xeea091d6,0xffffd6b4,0xfd9b82ba,0xfbdee738,0xffebf4f4,0xfbdedef6,0x4743e7e5,0xf7bdc630,0xbf9542a6,0xfbdeeb58,0x4342abfe,0xf39cce72,0xffaf4242,0xf39cd294,0x0095aabf,0xeb5ac20e,0x7c818040,0xeb5ad292,
0x87daf9b5,0xef7bc630,0xa5504585,0xfbdead6c,0x1a20a6ef,0xf7bddad6,0xd5aaeeef,0xf7bddef6,0xefe4402f,0xffffe738,0x1a2fbacb,0xef7bd6b4,0x2e1aebd0,0xfbdedef6,0xbdd4eebf,0xef7bce72,0x5f82d6ff,0xf7bdce72,0xbeae0b0b,0xef7bdad4,0x3fbffbfb,0xef7bdad4,0xff9702be,0xf7bdca50,0xffebc3be,0xfbdeca50,0xf9bfb9fe,0xef7bc630,0x92411a0a,0xf39cd294,0x091c55bf,0xfbdef39a,
0xae9e597c,0xffffdad6,0x9a187aab,0xffffe316,0xae7f2a18,0xf7bddad4,0x9ff9f485,0xfbdee738,0x0a5295ea,0xfbded6b4,0xe498984e,0xfbded6b4,0xbe382f4f,0xffffca52,0x9bab7fff,0xffffd294,0xfa4a0968,0xffffd6b4,0x42e0faf6,0xf39cc630,0xffdfca95,0xfbdedef6,0xcbdb7ffe,0xf7bdeb58,0xcaac540b,0xef7bd292,0x961a7dda,0xf7bdbdee,0xbf0f414e,0xfbdeef7a,0x8bf879bf,0xfbdee738,
0x0faa7cb8,0xe739c20e,0xab6e4e0b,0xf7bdce72,0xbaae1414,0xef7bbdee,0xa6e93b3b,0xfbdeeb58,0xf48049bf,0xf7bddad4,0x5dbd7934,0xfbdeef7a,0x4b0b1bba,0xf39cbdee,0x0e0fedec,0xf7bdd6b4,0xfffef0e0,0xf7bdca52,0xff11a8fc,0xfbdef39a,0x8387dbdb,0xf39cb9ce,0x2fafb4a1,0xf39cd6b4,0x2f7efdfe,0xf7bdb9ce,0xfebf3f2f,0xffffe316,0xfde9eaff,0xffffd292,0xffff9905,0xffffe738,
0xb0e0e62a,0xf7bddad4,0x9bebaf2e,0xffffeb58,0x0081f9bc,0xeb5ae738,0x43430700,0xfbdec631,0x1a05e65f,0xfbdedad4,0xafbefeff,0xfbdee316,0x9b2df86e,0xffffeb58,0x42b81f47,0xe318c630,0x45a6ba2f,0xf39cd292,0x9efae198,0xf39cef7a,0xffee98a8,0xf39cca50,0x6fbffe1a,0xfbdeca52,0x9a44ffea,0xffffd294,0x64eaf9ff,0xf7bdc630,0x6f6b261f,0xf39cc630,0xa427a6aa,0xf7bdce72,
0xbf3fffff,0xfbded6b4,0xfd1f0f1f,0xf39cc211,0xe1d0f856,0xef7bd6b4,0xfefa5141,0xf7bdd294,0x1f1f1f2e,0xf7bdd6b4,0x293e6af9,0xf39cd294,0xaee9e5eb,0xef7beb58,0xe0e4b874,0xf7bde738,0xffbf4b15,0xfbdee738,0x92ba7cbc,0xfbdece72,0xabe4bebc,0xf7bdd6b4,0xd1844050,0xf7bdbdee,0xfffb9707,0xfbded292,0x9e8efa7e,0xfbdef39a,0x8fa7b6ba,0xfbdee316,0xbfbfeb4e,0xffffe316,
0x47577f0b,0xffffe738,0xfae18086,0xfffff39a,0xaa40945c,0xfbdedad6,0x4ab2bfbf,0xffffe316,0x7fbfaeae,0xfbded292,0xbfbfb7b7,0xe739b18c,0xf8eefe9e,0xf7bdd294,0xf9f9e0e0,0xfbdeb5ac,0x7976afef,0xf7bdeb58,0x7af9fdbd,0xfbdef7bc,0x50408baf,0xf7bde316,0xe5d0baba,0xf7bde738,0xdb6f2f2f,0xf39cd6b4,0x570fabfa,0xfbdee738,0x96b4b8f8,0xfbdeca52,0xfec00207,0xef7bd6b4,
0xf8fd6f1f,0xfbdebdf0,0xbbe6a179,0xf7bdd292,0x7f1f99f8,0xffffe738,0xaddfcefc,0xfbdedad4,0x99d4e416,0xf7bde316,0xeefe000a,0xf7bdce72,0xabd3f788,0xfbdee738,0xe2af5e7e,0xffffd294,0x95f4aa9f,0xf7bddad6,0x7fbb4242,0xf39cca52,0x0b5bffff,0xfbded6b4,0xf4fafefe,0xffffdef6,0x0a07db26,0xfbdeca50,0xf69b6ade,0xfbdee738,0x3978f5e0,0xffffdad6,0x1a2aaf6b,0xf39cd6b4,
0x7eafaf1b,0xef7bbdee,0x9b1a567d,0xf7bdca52,0x696faea5,0xffffd294,0x7ffd1d14,0xf7bde736,0xfefef0e5,0xffffeb58,0xffc34054,0xf7bde317,0xd0c2821b,0xf7bdd294,0xbf6b2f69,0xf7bde316,0xf44157f6,0xf7bde738,0xf8e0f9fc,0xfbdeca52,0xaff9e0fa,0xffffdef6,0x1a363a1f,0xf7bddad4,0x0f7ffffd,0xf7bdca50,0xc594f99e,0xfbdeeb58,0xdb581f0f,0xf39cd294,0x037abaeb,0xef7bdad4,
0xdb4b1faf,0xf7bde738,0xc74b1f6b,0xffffe738,0x9595bebf,0xffffeb58,0x6e6964fc,0xef7bca50,0xa946afbf,0xf7bdeb58,0xf9e0a5f9,0xfbdec210,0x95406d7e,0xf7bdd6b4,0x5f0fbdff,0xfbdece72,0xd3d2b6ba,0xfbdeeb58,0xffba5084,0xf39cd6b4,0xfb4640e0,0xffffd6b4,0xe5e9beff,0xffffeb58,0xffae0964,0xf39cca52,0xebffffff,0xfbdece72,0xffaf9ef8,0xfbdeeb58,0x4f0babeb,0xf39cce72,
0x0547d7e5,0xfbfedef6,0x2da00404,0xef7cdef6,0x698502ae,0xfbdee318,0xabbdf9a9,0xfffedad6,0xfd1c82d3,0xfbdeeb58,0xf4d0c1f9,0xf7bdc630,0xafef6f2f,0xffffdad6,0xe6fbfffe,0xf7bdf39a,0x190f9e6a,0xffffc630,0xb94dae7a,0xf7bece92,0xbc0b1b65,0xfbddef7a,0x5affdfdc,0xf39dd71a,0xe6b2a0e4,0xe319c20e,0x55054eaf,0xf7bddad6,0x6fa0f0eb,0xffffdef6,0x8a1f3f7f,0xffffef7a,
0x1b5bebff,0xfbdeb5ae,0xeaffff1b,0xfbded294,0xf4fa0b57,0xe739c630,0xaf1fbe64,0xf39ce738,0x7e5fffaa,0xf7bde738,0xa9900019,0xffffdad6,0xebaa7fbf,0xfbdedef6,0xbfbf0e5e,0xdef7e738,0x8541b178,0xfbdedef6,0xea5190f9,0xffffeb58,0xf1f5e4e4,0xf7bdce72,0x86cebfe0,0xe739c630,0x621abcfd,0xfbdedad6,0x065f6e65,0xfbdebdee,0xf8787e3b,0xf7bdf39a,0x9d95d0e4,0xffffce72,
0xfed0b4a5,0xffdeef7a,0x602aa7eb,0xf39cca30,0xbfbf7ebe,0xf39cad6c,0xfe2d2f6f,0xf7bddad4,0x016ab5b0,0xdaf7b5ae,0xfff9e8d5,0xfbdedad4,0xb46e6fbe,0xf7bddad4,0x1b2f7ab0,0xffffc630,0xeae5f8f4,0xffffb9ce,0x2f6ea4aa,0xe739dad4,0x2fab9b06,0xf7bddad6,0xa4f8f47a,0xef7bd6b4,0x41b8b94b,0xf7bde738,0xa98687bd,0xfbdedad4,0x1f54969b,0xffffce72,0xafafae1e,0xffffc630,
0x7fbeffeb,0xf7bde316,0xe5d28096,0xf39cb9ce,0xfefad782,0xfbdee316,0x0bafefef,0xf7bddef6,0x7a64aa94,0xeb5ad292,0xa6aab1b1,0xe739ce72,0xb87dbe0a,0xfbdeeb58,0xf4811529,0xfbdece72,0xfe96c3eb,0xfffff7bc,0xfee580aa,0xffffef7a,0x0a68a8ff,0xffffd6b4,0xfffffe0a,0xf7bdc210,0x477cfefe,0xf39cd6b4,0xfa5a0b07,0xfbded294,0xa8e65abf,0xfbdee316,0xbea50004,0xffffc210,
0x9195bebe,0xef7bdef6,0xffff9682,0xf39cc210,0x51af6f26,0xf39cce72,0x6aebfeb9,0xffffd292,0x54eaffbf,0xf7bde316,0xd7874b2c,0xf39ce316,0xfefff9b8,0xfbdedef6,0x929b47ff,0xffffd6b4,0xe81b6e68,0xfbdebdee,0x5eabf6f4,0xfbdeef7a,0x2f79b0a5,0xf7bddef6,0xb9f9f5b5,0xf39cdef6,0x5efefeda,0xf7bddad4,0x7efbc30b,0xfbdee738,0xf0d1823f,0xfbdec630,0x4947abe0,0xf39cd6b4,
0x7ef8fff7,0xfbdedad6,0x0f0f2e2f,0xf7bdd294,0x50029641,0xf7bdce72,0xbbf44694,0xf7bdd294,0xf8944046,0xfbdef39a,0xff1f0ad1,0xffffca50,0x0b6f99a5,0xfbdebdee,0x5f7eaa07,0xfbdee738,0xfffa7f2a,0xfffffbdc,0x001a6bff,0xf7bdd294,0xabbfadad,0xef7bdef6,0x6a1d292a,0xfbdece72,0xfef9e281,0xf7bdca50,0x75808199,0xf7bdef7a,0x61fbf9f5,0xf7bde316,0x7dbaeaa6,0xfbdeef7a,
0x80e9ffef,0xf7bdbdee,0x1a5bebd5,0xfbdedad4,0xbf1f2fbd,0xf7bdd6b4,0xfcfefbe6,0xf7bdc630,0xfffffffc,0xffffe316,0x4646baff,0xfbdec210,0xfff974be,0xffffe316,0xf99550ff,0xffffef7a,0xa0f96f6f,0xfbdece72,0xa0f4f4a0,0xeb5ace72,0xe0e5fafe,0xf7bdce72,0x5feeae56,0xf7bedef6,0xb4b9b9f4,0xeb5aca52,0xa65664a4,0xeb5adad4,0xe0a42e2e,0xf7bdc210,0x1bbfa8d2,0xeb5ad6b4,
0x3df0fe9a,0xffffe318,0xeae4e47c,0xf7bdd6b4,0x1eaaa6f5,0xfbdeeb58,0xef0b870a,0xffffef7a,0x460787cb,0xf39cb9ce,0x8f1fbfea,0xf7bdd6b4,0x1faebfbf,0xffffc630,0x2ab9ea87,0xf7bdd292,0xe5194251,0xef7bce72,0xabd7afea,0xfbdee316,0x6e7fbf15,0xfbdedef6,0x54beffff,0xf39cca52,0xea79bebf,0xfbdece72,0x5aaafafa,0xffffdad4,0x6a541414,0xe739c630,0xf4f9ff6f,0xf7bdca52,
0xa42abead,0xffffd6b4,0xfffffef8,0xffffe316,0xf9f8fef2,0xffffdef6,0x322f5fef,0xfbdee316,0xf492a7fe,0xf39cdef6,0xfffbe1e0,0xf7bdc210,0x579eeeb6,0xffffd294,0x4b4e9a82,0xf39cc630,0xf6ebcbd6,0xfbdec210,0x04aeafbb,0xf39cb5ae,0x3e7eab5b,0xf7bdbdee,0xf9ffaf2a,0xf7bddad4,0x6ebfbb56,0xf7bde316,0xafbf6a75,0xfbded6b4,0xbea0e5f9,0xfffff39c,0x874b6ab4,0xf7bdce72,
0xe15a4be7,0xef7bdad4,0xafaf8f82,0xf7bdc630,0xe1d1faff,0xf39cd6b4,0x550157fb,0xf7bdd6b4,0xffaf0d0e,0xfbdedef6,0xbe0a01a5,0xffffdad4,0xbbba32ff,0xfbdef7bc,0x7a2de9e9,0xf39cd6b4,0xabfb9b83,0xf7bdd292,0x46787e1f,0xf39ce738,0x0586efaf,0xf39ce738,0x5ffefeb9,0xffffdef6,0xb0eabc4b,0xf7bde316,0x49b88b96,0xfbdedad6,0xaf57060b,0xf7bdd6b4,0xeafeffff,0xffffdef6,
0x3de946af,0xfffff39a,0x3e96c65a,0xf7bde316,0xfefb2bbf,0xf7bde738,0x3dabffff,0xf39cdef6,0x8b9beb6f,0xf7bdef7a,0x07c2d040,0xeb5ad292,0x0faff7a6,0xfbdece72,0xc29abeff,0xf7bde738,0xaba22ca9,0xfbdedad4,0xfcfeffaf,0xfbdece72,0x81c0444e,0xef7bd292,0xfaff5b46,0xffffca52,0x0f6f7f7d,0xef7bd292,0x1b2bbebe,0xfbdec630,0xaa710040,0xeb5aca52,0xfcd89526,0xfbdee318,
0xfea91541,0xf39cce72,0x0b6fc7ae,0xffffeb58,0xaba5e496,0xffffce72,0xd080bfff,0xef7bd6b4,0xeb7e3805,0xf7bde738,0xd2835baf,0xf39cd292,0x5580d1fa,0xfbdeeb58,0xffffa662,0xfbdeeb58,0x44945b2e,0xf7bdce72,0xffbe7e06,0xf7bdca52,0x8786eafd,0xfbdec210,0x5f11e5fb,0xfbdeeb58,0xfeffe2e7,0xf7bdb9ce,0x1e1fbcfc,0xf7bddad4,0xfffb81cb,0xf39cdad4,0x14f0a6ab,0xf7bdeb58,
0x0166bfff,0xffffb9ce,0xffffaa54,0xeb5ad6b4,0xd6e88a4b,0xf7bdce72,0x874faaf5,0xf7bdeb58,0x2f1d9895,0xffffca52,0xf4e1fbff,0xfbdeca50,0x7c1c4bbf,0xf7bddef6,0x014b9fea,0xfbdec630,0xfbf69b4b,0xf7bdd6b4,0xf5864baf,0xfbdedef6,0xffeb8281,0xef7bce72,0x1b1fbe79,0xf7bddad6,0x4084f9fe,0xffffdad4,0x65b6f1f1,0xffffe316,0x9b8742f5,0xffffc210,0x159a8b7f,0xf7bdd6b4,
0xa954babc,0xf7bddef6,0xe5aaabbb,0xfbdece72,0x7ef5fa10,0xffffe738,0xef82cf6f,0xfbdef39a,0xe4b5e0d0,0xeb5ac210,0xaeedebe7,0xf39cdad4,0x1b1d0e8f,0xef7bad6c,0xff42429b,0xf39cc630,0x9e4b8f49,0xfffff39a,0xfffff1e4,0xf7bdce72,0xbfbfaf00,0xf7bdeb58,0x0b5b9baf,0xf39cce72,0xeebcbdbf,0xf7bddad6,0x02ebffbf,0xfbdee738,0x027ebe6a,0xfbdedad4,0xa9e1e545,0xfbdeef7a,
0xffd0919a,0xffffe316,0xa4f9ffbf,0xf7bdc630,0x0f2969aa,0xffffd294,0xb9d6eb5f,0xfbdef7bc,0xf59550e0,0xfbdedef6,0xd082abb4,0xf7bdca52,0x4b0191e2,0xfbdeef7a,0xf8efebff,0xfbdee316,0x1e1d4a06,0xf7bde738,0x7dbea707,0xffffce72,0x6079fb97,0xeb5ae738,0xe8a05091,0xef7bca52,0xe1945de6,0xffffd294,0x1f0fffbf,0xf39cd6b4,0x065bff92,0xffffeb58,0x44a681f4,0xeb5ace72,
0x6a0b0bfc,0xf7bdeb58,0xaf1faef9,0xffffd294,0x805507a4,0xffffca52,0x7f7dfdd1,0xfbdedef7,0xb04090e5,0xef7bd6b4,0xe6ebffb9,0xfbdee738,0xf4e55f2f,0xf7bddef6,0xc1d6fffe,0xf7bde738,0x6f0b6e7e,0xef7bd6b4,0xfce2536b,0xe739b5ae,0xfdf9fb44,0xf39cd292,0x7fee8498,0xfbded6b4,0xe297a2f8,0xf7bdce72,0x03435f5f,0xf7bddad4,0xfa7a7e7e,0xf39ce316,0xfeaa9bdb,0xfbdeef7a,
0xfaa61115,0xffffdad6,0x84a0fff8,0xef7bd6b4,0xdbeae594,0xffffd292,0xbabeefc7,0xf7bdd6b4,0xb5b4b0de,0xf7bdc630,0x6e2cfab5,0xf39cd6b4,0x2fb979f6,0xf7bddef6,0xae8fa02a,0xeb5ac210,0x0b2fbaba,0xf39cdef6,0xaa0b1f5a,0xfbdedef6,0x06a9e594,0xfbded6b4,0xe9e4d143,0xf7bdd294,0x8182eab9,0xef7bbdee,0x7ebeffd5,0xf7bdd294,0xbf1fd6ea,0xf7bde316,0x9106ffff,0xef7bc630,
0x2abfe8e5,0xef7bd6b4,0x5f07060a,0xef7bce72,0x9f99cbef,0xf7bde738,0xfdfdf8bd,0xfbdeeb58,0xb6f5793e,0xffffd292,0xf4f47a3b,0xffffe738,0xe0e65e1d,0xf7bdc630,0x2f2a6464,0xeb5abdee,0xfeeb8b5b,0xfffff39a,0x6a5b56a5,0xfbdee316,0xe783aaf9,0xffffdef6,0x96e09047,0xf7bdce72,0xb0559ebe,0xffffe316,0x5e9f9bb4,0xeb5ac630,0xfb6e6e6f,0xf7bdd6b4,0x6fb9b8ab,0xf39cbdee,
0x7cbfbfff,0xfbdedad6,0xaf9b922c,0xfbdedef6,0x00052e7a,0xeb5ac630,0x46c1c448,0xeb5ace72,0xb8fcfeff,0xfbdeca50,0xae0f6f6a,0xffffd6b4,0x40faff0b,0xffffdad4,0xbafeb100,0xe318b9ce,0xeeae68b8,0xeb5ad292,0x9adbe7a1,0xffffc210,0xffaf0a05,0xfbdee316,0x7afffbbe,0xef7bb9ce,0x3faf9b56,0xf7bde738,0xe9ef882d,0xfffff39a,0xe9c21530,0xef7bc630,0xebfacb9e,0xf7bdd294,
0xa0806abf,0xeb5ace72,0xc1e6fffa,0xf7bddad6,0x06ffeda9,0xfbdedef6,0xc35bffab,0xffffeb58,0x40a9ef9b,0xf7bdd6b4,0xe5bf7f5b,0xf39cd6b4,0x02bfffa7,0xe739d292,0xef5e0c50,0xf7bde316,0x6eaf6fae,0xf7bdd6b4,0xbfbebe7f,0xf39ce738,0xa0d68080,0xf7bddad4,0xa4f4a540,0xf39cd6b4,0x849a6b99,0xfbdebdee,0x36ffffae,0xfbded6b4,0xfbefd990,0xfbded6b4,0x3c9acbfe,0xf7bddef6,
0x6151fffb,0xf7bde316,0xadac0c59,0xfbdec210,0xf995fa7a,0xf7bddef6,0xc68601a5,0xffffd294,0x7634b0a9,0xffffe316,0xfc4a9afa,0xfbdece72,0xae9d6996,0xffffe738,0x0b86efff,0xfbdee738,0x2bfafa1f,0xeb5ad292,0x3f6f470b,0xfbdeca50,0x56070f2f,0xffffce72,0xa9f9d1a5,0xf39cef7a,0xf04bea7e,0xf39cd294,0xb4651b65,0xf39cce72,0xf9d2692d,0xfbdeeb58,0xfa4619bc,0xffffdef6,
0x1fdfefbf,0xef7bdef6,0xf17f0fc7,0xef7bce72,0xbeb0a11f,0xf39cdad4,0x8b99b4ef,0xf7bddef6,0x8f4b6670,0xfbdedad6,0xa6fd7fbf,0xf7bddef6,0x2501c109,0xfbdee738,0x25bf90a5,0xfbded6b4,0x4195e6e5,0xffffdad6,0xd1c19b47,0xffffef7a,0xaaff6f1f,0xffffce72,0xeb9342a9,0xfbdbce76,0xeaf9ffbe,0xf39ddad4,0xf9fa429b,0xf7bdca52,0x1424be42,0xdef8c630,0x0079f9bf,0xef7bd6b4,
0xa5fdbd94,0xf39cdef6,0x5f98ea95,0xfbdee738,0xad4686eb,0xffffef7a,0xe2fbbbbd,0xf7bdd294,0x56e7bd7f,0xf7bdd6b4,0x2daf6b17,0xef7bdad6,0xe0f2e1d0,0xef7bbdee,0x05f2b8ac,0xf39cce72,0xfaf6af12,0xffffe316,0xbf3ffefe,0xfbdedad6,0x6abae538,0xfbdeb9ce,0xeafd8b47,0xfbded292,0x5f6a0f9f,0xef7bc650,0xbebda95b,0xf7bdf37a,0xeaeee592,0xf39ce316,0xe5a52a2a,0xfbdeca50,
0xff8b4659,0xffffef7a,0x7fc0c0ff,0xfbdffbdb,0x5f0f5f59,0xfbdfe738,0x045affbe,0xfbd9d6b4,0x45e5e65a,0xfbdee738,0xafe9ff0a,0xffffef7a,0x5aafaf98,0xffffe73a,0x9972ff5e,0xf7bdef7a,0x0faaa51a,0xf7bddad4,0x0a4fbfaa,0xe2f9c614,0xf83530f0,0xfbdedad6,0xeaa6aafe,0xfbdffff6,0x70a1afaf,0xef7bd6d2,0xaa546035,0xfffeca52,0xc0e5fffa,0xffffd294,0xfefe2e88,0xf7bddef6,
0x4040557d,0xef7bc210,0x74759251,0xf7bdd294,0x458bc785,0xf39ce738,0xe9d5e5e5,0xfbdee316,0x82efbd64,0xf39cd294,0xf6e0eb86,0xffffd6b4,0xf4fffffa,0xeb5ac630,0xfafabff8,0xf7bdca52,0x9a5b4383,0xf39cdef6,0xe7fbd3d3,0xf39cd294,0xe1e56874,0xef7bca52,0x5aaeae06,0xfbded6b4,0x55e2d181,0xfbdedad4,0x18faf868,0xf7bdd294,0x1e6a5357,0xf39ce738,0x5616ff6e,0xfbdedef6,
0x2f1f2fbf,0xffffce72,0xfe6f2f2e,0xffffd6b4,0xbeb8f9fa,0xf39ce738,0x1f6fadb9,0xffffef7a,0xa0f5ffff,0xef7bca50,0xbeab87c1,0xf39cd292,0xd6ebffbf,0xffffdad6,0x97aba642,0xfbdece72,0xfd0f0b04,0xf39cdad4,0x42eae7e6,0xfbdee318,0xd2ebeaa5,0xfbded294,0xa5e2fbfb,0xfbdebdee,0xab874a1e,0xef7bdef6,0xd591a1f5,0xf7bddef6,0xb1675ba9,0xf39cc630,0xfff9e481,0xf7bdbdee,
0xfabf6d68,0xf39cdef6,0xe14262ed,0xf7bde738,0x5691d0e9,0xfffedef6,0xafaaf4fa,0xffffdef6,0xa49d04f0,0xfbdee316,0x9404afaa,0xf39cca52,0x91bb397a,0xf39cd294,0x363e3f11,0xfbdedad6,0xa5eaebff,0xfffeca56,0x90e0fa20,0xef7ad294,0xfffffffb,0xfbdedef6,0x5a0f6fe9,0xffffef7a,0xfe9a409a,0xe73aca50,0xd9c099fe,0xf39cd6b4,0xdb46e9f9,0xffffeb58,0xaf6bafff,0xffffdef6,
0x2f1f96e6,0xef7bd294,0xae4e6a3f,0xef7bdad4,0xe0c9dba7,0xf39cdad4,0x6b6af4f0,0xfbded6b4,0xbcf4f1f9,0xf7bddad6,0x3f3feba3,0xfbdeeb58,0xf9fad6eb,0xf7bdce72,0x5deee6e0,0xf7bdb5ae,0xff1b6fff,0xf7bddef6,0x8f910056,0xfbdeeb58,0xd7e0a4aa,0xfbdec630,0xfff9aa9b,0xfbdee316,0x797a0642,0xef7be316,0xf9bf7f1f,0xf39cd6b4,0xf9f9f9ea,0xfbdee316,0xfaf4f0a4,0xffffdef6,
0xbd3e47ad,0xf39cdef6,0xc68241d1,0xf7bde738,0x0a559beb,0xffffd6b4,0x2f1fd20b,0xf7bdce72,0xffc7f5f5,0xeb5ac630,0xbafae9ee,0xf39cd294,0xbf2ff4f4,0xf7bdd294,0xf0bf0a06,0xf7bddef6,0xe5abfef9,0xfbdeeb58,0x6e3c2e64,0xf39cce72,0x4946ffff,0xffffef7a,0x0100a194,0xef7bce72,0xfe7cf9eb,0xf7bdce72,0xd2d282d6,0xeb5ac630,0xabe8fbe7,0xfbded6b4,0xf7bf4283,0xef7bd6b4,
0x1b3d99c3,0xfbdeca50,0x6f540006,0xf7deef3a,0x50faffba,0xf7bddad4,0xc3d2a8e0,0xf39dd292,0x070b9b5b,0xfbbdd6b4,0x2a1a0a42,0xf39cdad4,0x50e09047,0xf7bdc210,0xa0b8bc14,0xf7bdc630,0xe6d19081,0xffdfc230,0x69bdaffe,0xf3bcdef4,0xbfb6656e,0xffffe316,0x40825b3f,0xf7dcd6d6,0xeafae106,0xf39cdef6,0x19fd6e99,0xfbded6b4,0xebfba040,0xfbdeded4,0x92e6aae7,0xffffce72,
0x7a357fbb,0xf7bdd294,0x1944feff,0xfbdece72,0xe9e8fd46,0xfbded6b4,0xb442efff,0xf39cef7a,0xebfffbba,0xffffd6b4,0xafa50607,0xffffbdee,0xb23fbff9,0xef7bbdee,0xbad698a4,0xf39cdad6,0xfa762fa5,0xf39ce738,0x952fc6db,0xffffdef6,0x1b192df9,0xfbdee316,0xfaf9f96a,0xffffe316,0x8a2d2590,0xffffdef6,0x2e3fafdf,0xf7bde316,0x1a1969f9,0xf39dc630,0xa8809a6f,0xffffeb58,
0xb05054ae,0xffffdad4,0x5a52e1fc,0xf7dce2fc,0x10b9be6a,0xf7bedad4,0x8a453181,0xf3bce718,0xbfa650ea,0xffffdad4,0x0d3f0f1f,0xf39cdad5,0x85f9f936,0xf7bdce72,0xeefde040,0xf7bdb9ce,0xe4f9ea9a,0xfbdedad6,0x6f6fe9f5,0xffffe318,0xebc78b6e,0xffffdef6,0x90e0a93d,0xef7bca50,0xeb466fae,0xfffffffe,0x0b8bd7df,0xfbdedef6,0x3ebf96c3,0xeb5ac630,0xe0f45a2e,0xf39ce316,
0xdbe7a091,0xffffc210,0xaf9b5a9a,0xfbded6b4,0xef5b5a10,0xf39cca52,0xc196f0f5,0xf39cc210,0xff881d3f,0xfbdef39a,0x2f2fbff8,0xf7bdc630,0xfac38a59,0xffffdef6,0xd0d0d1d7,0xf39cca50,0xef4a8be5,0xffffe738,0x1a1fafff,0xf7bddad4,0xbffebd00,0xf7bde316,0x69eaf5fa,0xf39cc632,0xfffaf9aa,0xfbdeca52,0xfff9d1c3,0xfbded6b4,0xfe18196a,0xffffd292,0xc2d7ffff,0xffffe738,
0x67971baf,0xf39cd6b4,0x86e8af2f,0xf39ce316,0xe0c1c5d1,0xfbdee738,0x75faaae8,0xf39cc210,0x5b47efcb,0xffffe316,0xe8e5faff,0xf7bddef6,0xbe797630,0xf7bde316,0x6f470b2f,0xf7bdca52,0x6f0f8739,0xfffff39a,0x10a17eff,0xeb5ac210,0x190455aa,0xffffce72,0x14bebeff,0xfbded6b4,0xbea44114,0xf7bde316,0xe9a9091f,0xfbdee738,0xbe2c9500,0xfbdedef6,0x5b1a6eff,0xffffb5ae,
0x81fbffbf,0xef7bca52,0xbce9fa92,0xf7bdd292,0xae2a669a,0xf7bdc210,0x470bbbff,0xf7bddef6,0x2f2fb8f8,0xf39cdef6,0x7b7f6f6f,0xe739ce72,0x841d2981,0xf7bdd294,0xecfcf9e5,0xfbdece72,0xfef869aa,0xf7bdd292,0xffc4056f,0xfbdeef7a,0xaf82dafe,0xffffd294,0x662fbefe,0xf7bdd6b4,0xcf5c5d9f,0xfbdee738,0xf1424bff,0xfbded292,0xd1c6cb86,0xf7bdc630,0xb9650202,0xf39ce316,
0xf9f9babe,0xfbdec210,0xfbfae0fa,0xf7bdeb58,0xbfae9895,0xf39cdef6,0x6e766ebf,0xfbdeeb58,0xef5f0f96,0xf7bdeb58,0x697cbdaf,0xf39cca50,0x57f5020e,0xef7bca52,0xfa918107,0xfbdee318,0x3a765fbf,0xf7bdeb58,0xf8bc6d0f,0xfbdedef6,0xc0c0aaaa,0xf7bdd6b4,0xbffae0f9,0xfbded294,0x4a5f85e0,0xfbdeeb58,0xffffe190,0xf39cca52,0x2f7eefbf,0xfbdeca52,0xffdbab2f,0xfffff39a,
0xe4ef8b86,0xef7bc630,0xe7ce9ea6,0xfbdef39a,0x7f266a7f,0xf7bddad6,0x87bfea81,0xf7bdca50,0xf0707ff5,0xfbdee316,0x5abe6faf,0xfbdec210,0x964581d2,0xf39cca50,0xdacafad6,0xef7bca52,0x06fabfaf,0xf7bdce72,0xb9308182,0xeb5aeb5a,0x7c50a5ab,0xef7bdad4,0xbee6e6a9,0xf7bdd6b4,0x8281b9be,0xfbdedad6,0xefffbfbf,0xffffe738,0x9aa5a47e,0xf7bdd292,0xbe944645,0xf7bdeb58,
0xbf5be546,0xffffd292,0x2d5f0f6f,0xef7bbdee,0xba7f0f6f,0xef7bce72,0xb8305095,0xfbded6b4,0xff3ea060,0xfbdedef6,0xfafeefeb,0xffffd292,0x664e8fea,0xf39ce316,0x4b9fbab1,0xffffdef6,0xf4af2d9a,0xfbdec210,0xefdafff4,0xfbdeeb58,0x041fd7ff,0xf7bdca53,0x6fbebd10,0xf7bde738,0xe5e5292e,0xffffc210,0xffd54141,0xf39cc631,0x8247effe,0xf39ce316,0x1b075f7d,0xfbdee738,
0x9b878346,0xf7bdeb58,0x6405069b,0xf7bdc630,0xffff4e4e,0xffffd292,0xd1e1feff,0xfbdee318,0xfffffee4,0xf7bdad6a,0xd383abfb,0xffffef7a,0x9192e2f7,0xfbdeb5ae,0x9b4aaae1,0xffffd6b4,0xbf5fafff,0xf39ce316,0xfbe1e1fa,0xfbdee738,0x9090c1d6,0xef7bc630,0xafcb8791,0xffffd294,0x9affffff,0xffffce72,0xff9b4b4b,0xf39cb9ce,0x6f0b0b2f,0xffffce72,0x5b2fbfbf,0xfbdeef7a,
0x96ebd2d2,0xffffce72,0xc00dae95,0xf39cdad4,0x3f3fbfbf,0xf7bdbdee,0xf3bf0b1b,0xef7bdad4,0xbe7daad2,0xf39cd6b4,0x1d51e7ff,0xf7bde316,0xfce0a5f3,0xf7bddef6,0xd58066bf,0xffffe316,0xecfc8aff,0xf39cca52,0xea80a599,0xf7bdce72,0xb2a07f9a,0xe739ce72,0xcf6fbebf,0xf7bde738,0xb7aabebe,0xffffe738,0xb2fafebe,0xf39cc630,0xe0faefcf,0xffffd292,0x3dfffffe,0xef7bc630,
0x9a0bffbf,0xffffeb58,0xdb89daea,0xfbdee738,0xd1febfa4,0xfbdee738,0xe6ff7f56,0xf39cdef6,0x25a6fafa,0xf7bdb9ce,0xfffef969,0xef7bd6b4,0x59796581,0xf7bddad4,0x6f6ba5a4,0xf39cd292,0xfe7f6e09,0xe739c210,0xe6d2e1f9,0xffffce72,0xffbce092,0xfbdece72,0xbf0b82e3,0xffffdef6,0xe964e6e7,0xfbdef39a,0x1414069b,0xdef7b9ce,0x9fbdfeff,0xffffe738,0x1c1d0a0e,0xfbdec630,
0xbaba7dfa,0xf39cca52,0x6465fb3f,0xf39cdef6,0xfef9f8ff,0xffffce72,0xfff950a9,0xffffdad6,0xe8caeffa,0xf7bdeb58,0xff9b2a7c,0xfbdedad6,0xc3ffffff,0xf7bdd6b4,0xf9f42847,0xffffdad4,0xfbffffff,0xffffd294,0xaf0705a1,0xf7bde738,0xb93f0f0a,0xf39ce316,0xd2ae5594,0xfbded294,0x40abe7ff,0xfbded294,0xebebfe90,0xf7bdeb58,0xa6d1fee2,0xfbdeca52,0x4b6bffff,0xf7bdce72,
0x5f464a4a,0xf39cce72,0xfd3f3b7f,0xfbdedad6,0xbe1f2f6f,0xf39cca50,0xdb6c0d5e,0xf39cd272,0xeb191a6b,0xf39cbdee,0x0050fafa,0xffffd6b4,0xdfa8a4e9,0xffffd294,0xc95d5a8b,0xf7bdef7a,0xfea0d055,0xf39cc210,0x11bebfff,0xfbdec630,0xc1fa1641,0xfbdece72,0xf4fabed1,0xfbdee318,0x2f0a4612,0xf39cdef6,0x2555aa7f,0xfbdedef6,0x246edbd6,0xf39cdad4,0xa9e5d0d0,0xfffec210,
0xfdbd7aa5,0xffffdef6,0x0f6f3eba,0xf39cc210,0xf67abdfe,0xfbdee738,0xafbe4ce9,0xfbded6b4,0xf1ffd70f,0xef7bdef7,0xbfb0baf7,0xffffdef6,0xefff4b4b,0xf39cca52,0x2eb9feff,0xffffdad4,0xd0c0a074,0xf7bdd6b4,0xfeefcbf0,0xfbdedef6,0xeb47afaa,0xf39ce738,0xb99b82fa,0xf7bdb9ce,0xab8beffe,0xf7bdeb58,0xb8bae1e1,0xf7bdc210,0x7f6f1a38,0xfbdece72,0xdb46fabf,0xf7bdeb58,
0xbf0f5bfb,0xfffff39a,0xbac286bf,0xf7bddef6,0x0a69ffff,0xf7bdd6b4,0xe6ebef56,0xf7bde738,0xd595193c,0xf39cb9ce,0x6eaed6c2,0xef7bd6b4,0x051affff,0xef7bd6b4,0xfae6c1d5,0xfbdece72,0xbce0141d,0xf7bddad6,0x97e76614,0xffffce72,0xfeaaa455,0xfbdee738,0xfafab4b4,0xf39ce316,0xebea691e,0xffffce72,0xd1830b96,0xe739c630,0xcb4705a0,0xef7bdef6,0x6babf6fa,0xfbdeeb58,
0xe0d0ffbe,0xffffd292,0xeb0ab4f4,0xffffe738,0xa69082e6,0xef7bce72,0x901e8387,0xf7bde316,0x7abf2f2f,0xfbdedad4,0xbd9b0706,0xf39cdef6,0x55826d78,0xf39cd294,0xfaf9f9a9,0xfbdedad6,0x6e7d2e64,0xf39cef7a,0xb887e7eb,0xffffe738,0xfaf8445b,0xf7bdeb58,0x7e2f2bb7,0xf7bdc210,0xd1e7afbe,0xfbdee316,0xff8347ae,0xffffdef6,0x3a490929,0xeb5ad292,0xf6a55617,0xffffdef6,
0x8baf8041,0xfffff39a,0xbaaea8f4,0xf39cd294,0x2f6f060a,0xef7bdef6,0xea6a2a6f,0xf7bdc210,0xe3e68400,0xf7bdce72,0xa0f03ebb,0xfbdeef7a,0xffffa6b0,0xfbded294,0x7f05004f,0xfbdedef7,0xeee46428,0xffffd6b4,0xf6e4d49a,0xfbdeef7a,0x1b2f3874,0xfbdec630,0xa4faffaa,0xffffd6b4,0xf5f5fffe,0xf7bdeb58,0xbeb98b9b,0xf39cb9ce,0xd7bf2e1b,0xf7bdc630,0xdaaa6ac2,0xf7bdd6b4,
0xae8eef6a,0xffffeb5a,0x5cf8f8f8,0xf7bdd292,0xcfffbfbe,0xfbdedef6,0xc161bb8f,0xef7bce72,0x9c5ba6a8,0xffffd6b4,0x52569190,0xffffdef6,0x0f4582c2,0xef7bef7a,0x7d05066f,0xfbdedef6,0x7ff0a09b,0xf39cca50,0xfbf9a93f,0xf39cdef6,0xae701aaa,0xf7bdef7a,0x50d1e5ef,0xf39cc210,0xd5c3daff,0xf7bdce72,0xc6eafdf9,0xffffc630,0x9b2fffaa,0xfbdedef6,0x02ebaa1a,0xf39cb9ce,
0xaaa3dbfd,0xef7ce736,0xad9e4f47,0xfbdece72,0x92b13ebf,0xf39cdad6,0x171e7e19,0xf7bddef6,0x20a9bffe,0xfbdec210,0x95516b5a,0xffffdef6,0xf96fa1a1,0xf39cdef6,0xb0e2bffb,0xf7bddef6,0xf690ba6e,0xef7bdad6,0x44e4eacf,0xffffe316,0xfba843bc,0xef7bd292,0x30bb8eeb,0xfbded6b4,0x17e87c1a,0xf7bdd292,0xc1ebfae8,0xf39cdef6,0x74fba418,0xf7bde738,0x0c5565fd,0xf7bde316,
0xe0d3c6da,0xfbdedad4,0xcb9b29a4,0xf39cce72,0xcbafea08,0xf39cdef6,0xab3f7948,0xf7bdce72,0x5f82e7bc,0xf39cdad4,0xfe31e278,0xf39ce738,0xfcf5ffff,0xef7bd6b4,0xabc67cfc,0xf7bde316,0x5e2f0dd2,0xf7bde738,0xc6ccffef,0xf7bde316,0xffac2f9a,0xf7bdce72,0x9f4102bf,0xe739ce72,0xa0f156e9,0xf39cce72,0x42a63fd2,0xf7bde738,0xbb13b6ff,0xf39cd6b4,0xadfd4f2a,0xef7bd6b4,
0xfa8fbb2d,0xf7bde738,0xb8b69139,0xfbded6b4,0xa0fdfaa5,0xf7bddad6,0xa1e5b5a1,0xfbded6b4,0xfbf3a205,0xeb5ac210,0x3eaa39bb,0xf7bdca50,0x7f9f1fac,0xf7bdce72,0xff57d2ff,0xfbdedef6,0x2f1b5c9a,0xf39cdad4,0x0f2fb6ef,0xf39cdad4,0xba69a586,0xfffed294,0x585e252f,0xfbdedad4,0xea438b5f,0xf7bdd294,0xc2dea3e3,0xef7bdef6,0x4a0eafe6,0xf39cca52,0xfb7fbfa2,0xfbdeeb58,
0xaff9075b,0xfbdef39a,0xdbceefff,0xef7bb9ce,0xdffe09bf,0xf39ceb58,0x571f47c7,0xf7bddad5,0xaa94bdd3,0xffffe316,0xefb2f995,0xf39cdad4,0xd6e029fb,0xffffdad4,0x2eba92c6,0xfbded294,0xf355b6e3,0xef7bd6b4,0xba694f6c,0xfbdedef6,0x1c6ee9db,0xfbdedad6,0x2abe433f,0xef7be316,0x1b87abfb,0xf39ce738,0x3cfd4a7f,0xf39cdad4,0xeaf4ae4f,0xfbdedad4,0x3fbffbe0,0xf7bdd292,
0xe5d0926d,0xf7bde316,0xe8f8be7a,0xfbdedad6,0xfafff3bb,0xeb7bc630,0xb1b294d4,0xf7dee316,0xbf9b832f,0xf7bdce72,0x2921fbff,0xf39ce316,0x2f8ec5cd,0xef7bdef6,0x91c6e9bf,0xf39cd294,0xa57fbfae,0xf7bdca50,0x3f8480a4,0xfbdedad4,0x8244787c,0xf7bde316,0xb63a2966,0xf7bddef6,0xb8f4ffaf,0xf39cca50,0x8554e5a5,0xf7bddad4,0xff2e2fef,0xffffe318,0xee03e6af,0xf39cce72,
0xafd0041b,0xf7bde316,0x5671f4cf,0xf7bdeb58,0xefdc70c1,0xf39cdef6,0x2f968b6e,0xfbded294,0xe3570e0f,0xf7bdd6b4,0xfb793e5a,0xf7bcce72,0x201bbfaf,0xf7bddef6,0xfee99ed4,0xf7bddef6,0xe7eeb4ab,0xf7bdce72,0xe1eeffee,0xfbded294,0xb8bccdfb,0xef7bd292,0x66858979,0xef7bd6b4,0xf9b8bdee,0xf7bde316,0xa7ab71f1,0xf7bdca50,0x5ffff5b1,0xf39cd6b4,0xdabf0a0f,0xf7bdd6b4,
0x2f7dc4da,0xffffef7a,0x3f6cbdee,0xef7bca50,0xe0222966,0xf7bddef6,0x2b9aebd6,0xffffd6b4,0x4bf1d9f7,0xeb5ad6b4,0x5795fff2,0xfbdedef6,0xfae75fb6,0xf7bddef6,0xe5f66e2a,0xfbdedef6,0x66b5febb,0xf7bdef7a,0x90f43bdb,0xf39cdef6,0xfd2f4a19,0xf7bdd6b4,0xd35a5306,0xffffd292,0x4bbbaa80,0xf7bddad4,0xf0925ae5,0xfbdee738,0xafe110e3,0xf39cdad6,0xc398ff48,0xf39ceb58,
0xabd5801f,0xf7bddad4,0x1cbf53b4,0xf7bddad6,0x3aa7ae02,0xf7bddad6,0x6e7c245e,0xfbded6b4,0xf9fffa9e,0xf7bdd292,0xbf6e2838,0xeb5ac210,0x2f7dff6b,0xf7bddef6,0xeaaf6eaa,0xffffd294,0xe8ff2da5,0xf7bddef6,0xe4f9a9e8,0xfbdedad4,0x8f475bb6,0xef7bd6b4,0x038fb9fb,0xf39cdad6,0xb7ee4b1a,0xf7bdd6b4,0x9feac078,0xf7bde738,0xa441d246,0xffffd6b4,0xf1f3a5a8,0xf39cdef6,
0xf4bdfd81,0xf39cdef6,0x364dbce8,0xeb5adad4,0xd75313da,0xf39ce316,0x1bffb0e9,0xf39cce72,0xe2e2f7b9,0xf39cdad6,0x2d0a8d66,0xfbded294,0x470aafab,0xffffe316,0x5288bc7f,0xef7bdef6,0x1b090f6f,0xf7bdd6b4,0x570b9dbf,0xfbdece72,0xbbf9fa28,0xef7bc630,0xfe7a5f0a,0xf39cdad4,0xa8faa096,0xf7bddef6,0xfa0714ab,0xf39cdef6,0x8b4b8b4b,0xf7bddef6,0xaffff085,0xf39cd6b4,
0xaa51e9af,0xf39cd292,0x25f9f9ac,0xfbdee738,0xe7d22632,0xf7bdd6b4,0x9491d5aa,0xffffdef6,0x69d2875b,0xf39be316,0xae8b5799,0xf7bddef6,0x6d07b038,0xf7bee738,0x5ea60e1f,0xf39cce72,0xebfefef8,0xf39cd294,0x4bd68a8f,0xef7bd694,0xeb2f6f4b,0xfbdedad6,0xdf3ff283,0xe73ae316,0x2ebe7f7a,0xfbdde316,0xafbfbdbe,0xf7bddef6,0xe1e5d7ca,0xfffdd274,0xe55084e6,0xffffdef6,
0xece5a0a5,0xf39cd292,0xecdac6f9,0xef7bdef6,0xbf2a8756,0xef7bdef6,0x69fcbda8,0xf39cd294,0xbb9393db,0xffffe316,0xaa40e8fe,0xf39cdef6,0x8afed6e1,0xf39cdef6,0xe9495616,0xffffd292,0xb9d99ed9,0xfbdee316,0xa06b5e69,0xf39cdad4,0xb4f8fdff,0xf7bdd294,0xb4f5a5e0,0xf7bee316,0xa6c683a5,0xf7bddad6,0x2b8eedac,0xf39cd6b4,0xfab98b9b,0xf39cdad4,0xd987d5e6,0xffffdef6,
0x39641ab5,0xf7bddef6,0xde2a76c8,0xf7bdd6b4,0x0696befe,0xf3bcce72,0xe414edfe,0xef7bd6b4,0xaf8293f5,0xef5bdef6,0xc656831b,0xeb5aca52,0x4a7ffca0,0xf7ddd6d6,0x9afffe8a,0xf37cd6b4,0x80ffc65b,0xf7bdeb58,0x9a422faf,0xf7bdd292,0xfbfa2aa5,0xf39ce316,0xdbbb1694,0xf7bddef6,0x6a4d48ba,0xf39de738,0xe7479fe9,0xf39cce72,0x4b6dadba,0xffffd292,0xc32f2f1f,0xf7bde316,
0x5fcabb18,0xef7bce72,0x87aefe7b,0xf39cce72,0x43dfff9e,0xf39cdef6,0x9ef44f0a,0xffffeb58,0x9a979a97,0xffffce72,0x393fe75b,0xf7bddad6,0xa4fa1baa,0xfbdeca52,0x3ef7fe51,0xef7bd6b4,0x28f8141f,0xf39ce316,0xc6c2135c,0xf39cdef6,0x6ff66ce5,0xf7bddef6,0x940b4b1b,0xf7bddef6,0xfffdbd8a,0xf39cdad4,0xe41b5b2b,0xf39cdad4,0xfec74aab,0xf7bddef6,0xff7437bd,0xf7bde738,
0x3f4aa9a1,0xf39ce316,0x56870c0f,0xfbdedef6,0xf89445af,0xef7bdef6,0xff6f909d,0xf39ce316,0xc283bb35,0xef7bd292,0x7fdf6fb8,0xfbdedad6,0xbf4e1df2,0xf7bddef6,0x7eb06cf2,0xf39cdad4,0x80f1fb35,0xfbdedef6,0x7fef4fdc,0xf39cc210,0xbe6e4b8b,0xf7bdce72,0xbbf27f3f,0xf7bdce72,0x91253abd,0xfbdedef6,0x96ffca99,0xf39cdef6,0xb4a44866,0xfbded6b4,0x69ffcfbf,0xf39ce316,
0xfa7efbff,0xf39ceb58,0x7e99908e,0xef7bd292,0xbd98e682,0xffffd294,0x1036feff,0xf39cc630,0xe446d9d9,0xffffe316,0xcb0599ea,0xfbdee738,0x9745bf6f,0xf7bddef6,0x2ff844de,0xf7bde316,0xab2b7232,0xf39cd6b4,0xe4bea2c2,0xf7bde316,0xe5dfc804,0xf39cdad6,0xeacfa7f5,0xeb5ad292,0xb3aafffe,0xf7bdce72,0xbdfee923,0xf7bddef6,0x6f4eb8bd,0xf39cdef6,0xa9e8bb1f,0xfbded6b4,
0xfabf2fff,0xf39cdad4,0xea8514f1,0xef7bd6b4,0xeec5fc91,0xf39ce316,0xf0e27e42,0xf39cd6b4,0x5b2d4c4f,0xf7bddef6,0xeae10f97,0xf39cdef6,0x3f7feea5,0xf39ce316,0xef6b1d1f,0xf7bdd6b4,0x5a2d7f29,0xf7bddad4,0x7e2bf980,0xfbded6b4,0xedfd3e85,0xf7bdd6b4,0xa6027d3f,0xf7bddef6,0x48bcffff,0xf7bdd6b4,0x6a78b659,0xf39cdef6,0x4eebeda4,0xef7bd292,0x161eb5fe,0xfbdedad4,
0x7b629abe,0xf39cdef6,0xd9f7a08f,0xf39cdad6,0xcc3f880a,0xef7beb58,0x6aeef546,0xef7bdef6,0x6340bc5a,0xf7bde316,0xbeedc5fa,0xef7bdef6,0x292ffb7a,0xf39cd6b4,0xaa7face9,0xef7bd6b4,0xccc8dfea,0xf39cdef6,0xfbe27950,0xf39cdef6,0x637ea356,0xef7bdef6,0xfaaa25a7,0xfbded294,0x316fffbb,0xf39ce316,0x7e8edefd,0xef7be316,0x693364e9,0xf39be738,0x79c3c37f,0xf7bde738,
0xdc8eedea,0xf39cdef6,0x44ff7b91,0xef7bdef6,0xa654599b,0xffffd6b4,0x24fdfcbb,0xef7bdad4,0x692aa941,0xfbdee316,0xeed655b3,0xef7bdef6,0x5d0f8ea9,0xf39cdef6,0xbb3cfedf,0xef7bd6b4,0x61ea8f6e,0xf39ce316,0xd52ed199,0xf7bde738,0xa82bbe1f,0xf39cd6b4,0xadaa9744,0xf39ce738,0x62145511,0xf7bde738,0xf2a07efa,0xf39cdef6,0x3cec3ea9,0xef7bdef6,0xdf884f52,0xf39ce316,
0x61885959,0xfbdedef6,0x43f67cb9,0xef7bdef6,0xf23be293,0xef7bd6b4,0xb6857e79,0xf39cdef6,0x9ead901a,0xf39ce316,0x6b35b9e6,0xf39cdad4,0x62427e7d,0xf7bde316,0x8fdecb5b,0xf39cdef6,0xdedebc68,0xeb5adef6,0x551ebf9f,0xf39ce316,0xd9cacefa,0xf39cdef6,0xe3d9e979,0xf39cdef6,0x46a915f5,0xf7bddad4,0xa1a2b6c9,0xef7bdef6,0xf457feaa,0xef7be316,0x617636e9,0xf7bde316,
0xe27b62b5,0xf39cdef6,0x6747c676,0xf39ce316,0x1531e996,0xf39ce738,0xe5f3ff76,0xef7be316,0xb6539768,0xf39cdef6,0x8b99b055,0xf7bde316,0xc772b83e,0xf7bde316,0xfafac51a,0xef7bdef6,0x06f5ef5f,0xf39cd294,0xa71f197e,0xf7bdeb58,0x2959a704,0xf39ce316,0xce30388f,0xf39ceb58,0xc564ae9b,0xf39cdad4,0xbd37bbe2,0xf39cdef6,0x0778e202,0xf39ce738,0x29d5258f,0xf39ce316,
0x6d54a55a,0xf39ce316,0xaf4e34aa,0xef7be316,0xdd5466aa,0xf39ce316,0xe6fe659f,0xef7beb58,0x86e59b6a,0xef7be316,0x59b93b65,0xf39ce316,0xff6d2d77,0xef7be316,0xac6fa979,0xef7be316,0x94be544a,0xeb5ae738,0x76795bf5,0xf39ce316,0x928741e0,0xf39ce738,0xd8f581e5,0xeb5ae738,0xe7fa5ed8,0xef7be316,0xfb6cedaa,0xef7be316,0xbf7b0007,0xef7be738,0x4a3d509b,0xef7be738,
0xe3a59666,0xef7be738,0x6a92b9b2,0xeb5aeb58,0x8dd9f9c0,0xeb5ae738,0x6959fd16,0xef7be738,0xaafebeda,0xeb5ae738,0xaafebeda,0xeb5ae738,0xaafebeda,0xeb5ae738,0xaafebeda,0xeb5ae738,0xaabbaabb,0xeb5ae738,0xaabbaabb,0xeb5ae738,0xaabbaabb,0xeb5ae738,0xaabbaabb,0xeb5ae738,0xaaaaaaaa,0xeb5aeb58,0xaaaaaaaa,0xeb5aeb58,0xaaaaaaaa,0xeb5aeb58,0xaaaaaaaa,0xeb5aeb58,
0 };
