#ifndef __SOUNDSH__
#define __SOUNDSH__

//#include "soundst.h"

/*
 *  Identifiers for all music in game.
 */
#if 0
typedef enum
{
  mus_None,
  mus_e1m1,
  mus_e1m2,
  mus_e1m4,
  mus_e1m6,
  mus_e2m1,
  mus_e2m2,
  mus_e2m3,
  mus_e2m6,
  mus_e2m8,
  mus_e3m2,
  mus_intro,
  NUMMUSIC
} musicenum_t;
#endif


extern int CD_TRACK[8];//80073c78

/*
 *  Identifiers for all sfx in game.
 */

typedef enum
{
	sfx_None,
	sfx_sgcock,
	sfx_punch,
	sfx_itmbk,
	sfx_firsht2,
	sfx_barexp,
	sfx_firxpl,
	sfx_pistol,
	sfx_shotgn,
	sfx_plasma,
	sfx_bfg,
	sfx_sawup,
	sfx_sawidl,
	sfx_sawful,
	sfx_sawhit,
	sfx_rlaunc,
	sfx_rxplod,
	sfx_pstart,
	sfx_pstop,
	sfx_doropn,
	sfx_dorcls,
	sfx_stnmov,
	sfx_swtchn,
	sfx_swtchx,
	sfx_itemup,
	sfx_wpnup,
	sfx_oof,
	sfx_telept,
	sfx_noway,
	sfx_dshtgn,
	sfx_dbopn,
	sfx_dbload,
	sfx_dbcls,
	sfx_plpain,
	sfx_pldeth,
	sfx_slop,
	sfx_posit1,
	sfx_posit2,
	sfx_posit3,
	sfx_podth1,
	sfx_podth2,
	sfx_podth3,
	sfx_posact,
	sfx_popain,
	sfx_dmpain,
	sfx_dmact,
	sfx_claw,
	sfx_bgsit1,
	sfx_bgsit2,
	sfx_bgdth1,
	sfx_bgdth2,
	sfx_bgact,
	sfx_sgtsit,
	sfx_sgtatk,
	sfx_sgtdth,
	sfx_brssit,
	sfx_brsdth,
	sfx_cacsit,
	sfx_cacdth,
	sfx_sklatk,
	sfx_skldth,
	sfx_kntsit,
	sfx_kntdth,
	sfx_pesit,
	sfx_pepain,
	sfx_pedth,
	sfx_bspsit,
	sfx_bspdth,
	sfx_bspact,
	sfx_bspwlk,
	sfx_manatk,
	sfx_mansit,
	sfx_mnpain,
	sfx_mandth,
	sfx_firsht,
	sfx_skesit,
	sfx_skedth,
	sfx_skeact,
	sfx_skeatk,
	sfx_skeswg,
	sfx_skepch,
	sfx_cybsit,
	sfx_cybdth,
	sfx_hoof,
	sfx_metal,
	sfx_spisit,
	sfx_spidth,
	sfx_bdopn,
	sfx_bdcls,
	sfx_getpow,
	NUMSFX
} sfxenum_t;

#if 0
extern musicinfo_t S_music[];
extern sfxinfo_t   S_sfx[];
#endif // 0

#endif

