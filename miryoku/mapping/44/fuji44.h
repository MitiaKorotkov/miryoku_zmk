// Copyright 2026 Manna Harbour
// https://github.com/manna-harbour/miryoku
//
// Fuji44: same layout as corne (3x6 per side) plus one extra thumb key per
// side (44 keys total instead of 42). The extra thumb keys are not part of
// Miryoku's core 3-thumb layer definitions, so they are left unbound (XXX),
// the same convention used by the other 44-key mappings (jian, klor,
// technikable).

#if !defined (MIRYOKU_LAYOUTMAPPING_FUJI44)

#define XXX &none

#define MIRYOKU_LAYOUTMAPPING_FUJI44( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  XXX \
          N30  K32  K33  K34       K35  K36  K37  N39

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_FUJI44
