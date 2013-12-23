#ifndef LANGUAGE_H
#define LANGUAGE_H

/* REMEMBER INCLUDE YOUR NEW STRIGNS
   IN language.c - lang_strings */

enum lang_codes 
{
    //MAIN
    //VIDEO - ADJUST
    VIDEOADJUST_POSITION,
    VIDEOADJUST_SCALEINFO,
    VIDEOADJUST_EXITINFO,
    VIDEOADJUST_DEFAULTS,

    // SELECT - GAME FOLDER
    GAMEFOLDER_WANTUSE,
    GAMEFOLDER_TOINSTALLNTR,
    GAMEFOLDER_USING,
    GAMEFOLDER_TOINSTALL,
    
    //DRAW SCREEN1
    DRAWSCREEN_FAVSWAP,
    DRAWSCREEN_FAVINSERT,
    DRAWSCREEN_FAVORITES,
    DRAWSCREEN_PAGE,
    DRAWSCREEN_GAMES,
    DRAWSCREEN_PLAY,
    DRAWSCREEN_SOPTIONS,
    DRAWSCREEN_SDELETE,
    DRAWSCREEN_STGLOPT,
    DRAWSCREEN_EXITXMB,
    DRAWSCREEN_CANRUNFAV,
    DRAWSCREEN_MARKNOTEXEC,
    DRAWSCREEN_MARKNOTEX4G,
    DRAWSCREEN_GAMEINOFMNT,
    DRAWSCREEN_GAMEIASKDIR,
    DRAWSCREEN_GAMEICANTFD,
    DRAWSCREEN_GAMEIWLAUNCH,
    DRAWSCREEN_EXTEXENOTFND,
    DRAWSCREEN_EXTEXENOTCPY,
    DRAWSCREEN_REQBR,

    //DRAW OPTIONS
    DRAWGMOPT_OPTS,
    DRAWGMOPT_CFGGAME,
    DRAWGMOPT_CPYGAME,
    DRAWGMOPT_DELGAME,
    DRAWGMOPT_FIXGAME,
    DRAWGMOPT_TSTGAME,
    DRAWGMOPT_CPYEBOOTGAME,
    DRAWGMOPT_CPYTOFAV,
    DRAWGMOPT_DELFMFAV,
    DRAWGMOPT_EXTRACTISO,
    DRAWGMOPT_BUILDISO,
    DRAWGMOPT_MKISO,
    DRAWGMOPT_XTISO,
    DRAWGMOPT_CPYISO,

    DRAWGMOPT_FIXCOMPLETE,
    DRAWGMOPT_CPYOK,
    DRAWGMOPT_CPYERR,
    DRAWGMOPT_CPYNOTFND,

    //DRAW CONFIGS
    DRAWGMCFG_CFGS,
    DRAWGMCFG_DSK,
    DRAWGMCFG_NO,
    DRAWGMCFG_YES,
    DRAWGMCFG_UPD,
    DRAWGMCFG_ON,
    DRAWGMCFG_OFF,
    DRAWGMCFG_EXTBOOT,
    DRAWGMCFG_BDEMU,
    DRAWGMCFG_EXTHDD0GAME,
    DRAWGMCFG_SAVECFG,

    //DRAW GLOBAL OPTIONS
    DRAWGLOPT_OPTS,
    DRAWGLOPT_SCRADJUST,
    DRAWGLOPT_CHANGEGUI,
    DRAWGLOPT_CHANGEBCK,
    DRAWGLOPT_CHANGEDIR,
    DRAWGLOPT_SWMUSICOFF,
    DRAWGLOPT_SWMUSICON,
    DRAWGLOPT_INITFTP,
    DRAWGLOPT_TOOLS,
    DRAWGLOPT_CREDITS,
    DRAWGLOPT_FTPINITED,
    DRAWGLOPT_FTPARINITED,
    DRAWGLOPT_FTPSTOPED,

    //DRAW TOOLS
    DRAWTOOLS_TOOLS,
    DRAWTOOLS_DELCACHE,
    DRAWTOOLS_SECDISABLE,
    DRAWTOOLS_SECENABLE,
    DRAWTOOLS_PKGTOOLS,
    DRAWTOOLS_ARCHIVEMAN,
    DRAWTOOLS_COPYFROM,
    DRAWTOOLS_WITHBDVD,
    DRAWTOOLS_NOBDVD,
    DRAWTOOLS_NOBDVD2,

    //MAIN - OTHERS
    DRAWCACHE_CACHE,
    DRAWCACHE_ERRNEEDIT,
    DRAWCACHE_ASKTODEL,
    PATCHBEMU_ERRNOUSB,
    MOVEOBEMU_ERRSAVE,
    MOVEOBEMU_ERRMOVE,
    MOVEOBEMU_MOUNTOK,
    MOVETBEMU_ERRMOVE,

    //MAIN - GLOBAL
    GLOBAL_RETURN,
    GLOBAL_SAVED,


    //UTILS
    //FAST COPY ADD
    FASTCPADD_FAILED,
    FASTCPADD_ERRTMFILES,
    FASTCPADD_FAILEDSTAT,
    FASTCPADD_ERROPEN,
    FASTCPADD_COPYING,
    FASTCPADD_FAILFASTFILE,

    //FAST COPY PROCESS
    FASTCPPRC_JOINFILE,
    FASTCPPRC_COPYFILE,
    FASTCPPTC_OPENERROR,

    //GAME TEST FILES
    GAMETESTS_FOUNDINSTALL,
    GAMETESTS_BIGFILE,
    GAMETESTS_TESTFILE,
    GAMETESTS_CHECKSIZE,

    //GAME DELETE FILES
    GAMEDELFL_DELETED,
    GAMEDELFL_DELETING,

    //GAME COPY
    GAMECPYSL_GSIZEABCNTASK,
    GAMECPYSL_STARTED,
    GAMECPYSL_SPLITEDHDDNFO,
    GAMECPYSL_SPLITEDUSBNFO,
    GAMECPYSL_DONE,
    GAMECPYSL_FAILDELDUMP,

    //GAME CACHE COPY
    GAMECHCPY_ISNEEDONEFILE,
    GAMECHCPY_NEEDMORESPACE,
    GAMECHCPY_NOSPACE,
    GAMECHCPY_CACHENFOSTART,
    GAMECHCPY_FAILDELFROM,

    //GAME DELETE
    GAMEDELSL_WANTDELETE,
    GAMEDELSL_STARTED,
    GAMEDELSL_DONE,

    //GAME TEST
    GAMETSTSL_FINALNFO,
    GAMETSTSL_FINALNFO2,
    GAMETSTSL_TESTED,

    //GLOBAL UTILS
    GLUTIL_SPLITFILE,
    GLUTIL_WROTE,
    GLUTIL_TIME,
    GLUTIL_TIMELEFT,
    GLUTIL_HOLDTRIANGLEAB,
    GLUTIL_HOLDTRIANGLESK,
    GLUTIL_ABORTEDUSER,
    GLUTIL_ABORTED,
    GLUTIL_XEXIT,
    GLUTIL_WANTCPYFROM,
    GLUTIL_WTO,
    
    //DRAW_PSX
    DRAWPSX_EMULATOR,
    DRAWPSX_VIDEOPS,
    DRAWPSX_SAVEASK,
    DRAWPSX_SAVED,
    DRAWPSX_VIDEOTHER,
    DRAWPSX_VIDEOMODE,
    DRAWPSX_VIDEOASP,
    DRAWPSX_FULLSCR,
    DRAWPSX_SMOOTH,
    DRAWPSX_EXTROM,
    DRAWPSX_FORMAT,
    DRAWPSX_ASKFORMAT,
    DRAWPSX_ERRWRITING,
    DRAWPSX_BUILDISO,
    DRAWPSX_ASKCHEATS,
    DRAWPSX_ERRCHEATS,
    DRAWPSX_ERRSECSIZE,
    DRAWPSX_ERRUNKSIZE,
    DRAWPSX_DISCEJECT,
    DRAWPSX_DISCORDER,
    DRAWPSX_PRESSOB,
    DRAWPSX_PRESSXB,
    DRAWPSX_CHEATMAKE,
    DRAWPSX_COPYMC,
    DRAWPSX_ERRCOPYMC,
    DRAWPSX_PUTFNAME,
    DRAWPSX_FMUSTB,
    DRAWPSX_PUTADISC,
    DRAWPSX_UNREC,
    DRAWPSX_ERROPENING,
    DRAWPSX_ASKEFOLDER,
    DRAWPSX_ISOEXITS,

    // Language

    DRAWTOOLS_LANGUAGE_1,
    DRAWTOOLS_LANGUAGE_2,
    DRAWTOOLS_LANGUAGE_3,
    DRAWTOOLS_LANGUAGE_4,
    DRAWTOOLS_LANGUAGE_5,
    DRAWTOOLS_LANGUAGE_6,
    DRAWTOOLS_LANGUAGE_7,
    DRAWTOOLS_LANGUAGE_8,
    DRAWTOOLS_LANGUAGE_9,
    DRAWTOOLS_LANGUAGE_10,
    DRAWTOOLS_LANGUAGE_11,

    // Install .PKG
    PKG_HEADER,
    PKG_INSERTUSB,
    PKG_ERRTOBIG,
    PKG_WANTINSTALL,
    PKG_ERRALREADY,
    PKG_ERRFULLSTACK,
    PKG_ERRBUILD,
    PKG_COPYING,
    PKG_ERROPENING,
    PKG_ERRCREATING,
    PKG_ERRREADING,
    PKG_ERRLICON,
    PKG_ERRMOVING,
       
    //generic
    OUT_OFMEMORY,
    OPERATION_DONE,
    PLUG_STORAGE1,
    PLUG_STORAGE2,
 
    //END
    LANGSTRINGS_COUNT,
 
};

extern char * language[];

int open_language (int lang, char * filename);
void close_language(void);

#endif
