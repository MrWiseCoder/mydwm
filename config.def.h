/* See LICENSE file for copyright and license details. */

#include <X11/XF86keysym.h>

/* +------------------------+
 * |         TERMS          |
 * +------------------------+ */
/* Constants */
#define TERMINAL        "/home/yourusernamehere/.local/bin/alacritty"
#define TERMINAL2       "st"
#define TERMCLASS       "St"
// #define NUMCOLORS       21   // In a different build this variable was relevant.

/* +------------------------+
 * |         LOOKS          |
 * +------------------------+ */
/* appearance */
// *** Luke ***
static int swallowfloating    = 0;              /* 1 means swallow floating windows by default */

// *** Chad ***
static const unsigned int default_border = 0;   /* to switch back to default border after dynamic border resizing via keybinds */

/* --- me:chad's systray config --- */
static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails,display systray on the 1st monitor,False: display systray on last monitor*/
static const int showsystray        = 1;        /* 0 means no systray */

/* --- me:chad's tab config --- */
static const int showtab            = showtab_auto;
static const int toptab             = 0;        /* 0 means bottom tab */
static const int vertpadtab         = 33;
static const int horizpadtabi       = 15;
static const int horizpadtabo       = 30;

/* --- me:chad's bar config --- */
static const int horizpadbar        = 0;
static const int vertpadbar         = 0;
// *** Those 2 below are also common with Luke's config ***
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */

/* --- me:chad's tag config --- */
static const int scalepreview       = 4;
static const int tag_preview        = 1;        /* 1 means enable, 0 is off */
static const int colorfultag        = 1;        /* 0 means use SchemeSel for selected non vacant tag */

// *** Common ***
static const unsigned int borderpx  = 0;        /* border pixel of windows */
static const unsigned int snap      = 16;       /* snap pixel */

/* --- me:chad's gap config --- */
static const unsigned int gappih    = 8;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 8;       /* vert inner gap between windows */
static const unsigned int gappoh    = 6;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 0;       /* vert outer gap between windows and screen edge */
static const int smartgaps          = 0;       /* 1 means no outer gap when there is only one window */


/* +------------------------+
 * |         FONTS          |
 * +------------------------+ */
// *** Me ***
static char *fonts[]            = { 
                                    // *** Me ***
                                    "Fira Code Retina:size=10",
                                    "VictorMono Nerd Font Italic:size=10",
                                    "FantasqueSansMono Nerd Font:size=10",
                                    "CaskaydiaCove Nerd Font Mono:size=10",
                                    "DejaVu Sans Mono:size=10",
                                    "Hasklug Nerd Font Mono:size=10",
                                    "Meslo LG S DZ:size=10",
                                    "VictorMono Nerd Font:size=10",
                                    "Hack Nerd Font:size=10", 
                                    "Ubuntu Mono:size=10",
                                    // *** Luke ***
                                    "monospace:size=10",
                                    "JoyPixels:pixelsize=10:antialias=true:autohint=true",
                                    // *** Chad ***
                                    "JetBrainsMono Nerd Font:style:medium:size=10",
                                    "Material Design Icons-Regular:size=10"
                                  };
static const char spfont[]      = "CaskaydiaCove Nerd Font Mono:size=10";
static const char dmenufont[]   = "DejaVu Sans Mono:size=10";
// static const char font[]            = "-*-terminus-medium-r-normal-*-14-*-*-*-*-*-*-*";


/* +------------------------+
 * |         COLORS         |
 * +------------------------+ */
// theme
#include "themes/onedark.h"

// Some colors (can be useful in the future)
// ---------------------------------------------------------
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#005577";
static const char col_black[]       = "#000000";
static const char col_red[]         = "#ff0000";
static const char col_yellow[]      = "#ffff00";
static const char col_white[]       = "#ffffff";
// ---------------------------------------------------------
static char normbgcolor[]           = "#222222";
static char normbordercolor[]       = "#444444";
static char normfgcolor[]           = "#bbbbbb";
static char selfgcolor[]            = "#eeeeee";
static char selbordercolor[]        = "#770000";
static char selbgcolor[]            = "#005577";
// ---------------------------------------------------------
static char termcol0[]              = "#000000"; /* black   */
static char termcol1[]              = "#ff0000"; /* red     */
static char termcol2[]              = "#33ff00"; /* green   */
static char termcol3[]              = "#ff0099"; /* yellow  */
static char termcol4[]              = "#0066ff"; /* blue    */
static char termcol5[]              = "#cc00ff"; /* magenta */
static char termcol6[]              = "#00ffff"; /* cyan    */
static char termcol7[]              = "#d0d0d0"; /* white   */
static char termcol8[]              = "#808080"; /* black   */
static char termcol9[]              = "#ff0000"; /* red     */
static char termcol10[]             = "#33ff00"; /* green   */
static char termcol11[]             = "#ff0099"; /* yellow  */
static char termcol12[]             = "#0066ff"; /* blue    */
static char termcol13[]             = "#cc00ff"; /* magenta */
static char termcol14[]             = "#00ffff"; /* cyan    */
static char termcol15[]             = "#ffffff"; /* white   */
static char *termcolor[] = {
  termcol0,
  termcol1,
  termcol2,
  termcol3,
  termcol4,
  termcol5,
  termcol6,
  termcol7,
  termcol8,
  termcol9,
  termcol10,
  termcol11,
  termcol12,
  termcol13,
  termcol14,
  termcol15,
};
// ------------------- MY COLORS: prefixed with a keyword ---------------------------
static char adocyan0[]              = "#2aa198";
static char adomix[]                = "#12c3e2";
// ****** synthwave ******
static char adored[]                = "#f6188f";
static char adogreen[]              = "#1ebb2b";
static char adoblue[]               = "#2186ec";
static char adoyellow[]             = "#fdf834";
static char adopurple[]             = "#f85a21";
static char adocyan[]               = "#12c3e2";
// ---------------------------------------------------------

static const char *colors[][3] = {
    // *** Chad Orig ***
    /*                     fg             bg            border */
    [SchemeNorm]       = { gray3,         black,        gray2 },
    [SchemeSel]        = { gray4,         blue,         blue  },
    [TabSel]           = { blue,          gray2,        black },
    [TabNorm]          = { gray3,         black,        black },
    [SchemeTag]        = { gray3,         black,        black },
    [SchemeTag1]       = { blue,          black,        black },
    [SchemeTag2]       = { red,           black,        black },
    [SchemeTag3]       = { orange,        black,        black },
    [SchemeTag4]       = { green,         black,        black },
    [SchemeTag5]       = { pink,          black,        black },
    [SchemeLayout]     = { green,         black,        black },
    [SchemeBtnPrev]    = { green,         black,        black },
    [SchemeBtnNext]    = { yellow,        black,        black },
    [SchemeBtnClose]   = { red,           black,        black },
    // *** statuscolors2 ***
    [SchemeWarn]       = { col_black,     col_yellow,   col_red },
    [SchemeUrgent]     = { col_white,     col_red,      col_red },
    // *** colorbar ***
    [SchemeStatus]     = { green,         col_gray1,    "#addb0b"  }, // Statusbar right {text,background,not used but cannot be empty}
    [SchemeTagsSel]    = { blue,          col_cyan,     "#20fdf0"  }, // Tagbar left selected {text,background,not used but cannot be empty}
    [SchemeTagsNorm]   = { orange,        col_gray1,    "#f99514"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
    [SchemeInfoSel]    = { pink,          col_cyan,     "#d7c5ed"  }, // infobar middle  selected {text,background,not used but cannot be empty}
    [SchemeInfoNorm]   = { yellow,        col_gray1,    "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
    // *** Me ***
    [Ado0]             = { gray3,         black,        col_borderbar },
    [Ado1]             = { red,           black,        col_borderbar },
    [Ado2]             = { blue,          black,        col_borderbar },
    [Ado3]             = { green,         black,        col_borderbar },
    [Ado4]             = { yellow,        black,        col_borderbar },
    [Ado5]             = { pink,          black,        col_borderbar },
    [Ado6]             = { adomix,        black,        col_borderbar },
    [Ado7]             = { black,         black,        col_borderbar },
    [Ado8]             = { col_white,     black,        col_borderbar },
    [Ado9]             = { orange,        black,        col_borderbar },
    // *** Me2 ***
    [AdoNormColor]     = { normfgcolor,   normbgcolor,  normbordercolor },
    [AdoSelColor]      = { selfgcolor,    selbgcolor,   selbordercolor },
    [AdoStatusColor]   = { blue,          gray4,        black },
    [AdoSpecColor]     = { blue,          col_white,    col_cyan },
    // ****** Me3: synthwave ******
    [AdoRed]           = { adored,        black,        col_gray1 },
    [AdoGreen]         = { adogreen,      black,        col_gray1 },
    [AdoBlue]          = { adoblue,       black,        col_gray1 },
    [AdoYellow]        = { adoyellow,     black,        col_gray1 },
    [AdoPurple]        = { adopurple,     black,        col_gray1 },
    [AdoCyan]          = { adocyan,       black,        col_gray1 },
};

static const int tagschemes[] = {
    SchemeTag1, SchemeTag2, SchemeTag3, SchemeTag4, SchemeTag5
};


/* +------------------------+
 * |          TAGS          |
 * +------------------------+ */
/* tagging */
// static char *tags[] = ...
// spare symbols => " ", " ", " ", "", ""
static const char *tags[] = { "", "", "", "", "", "", "𝅘𝅥𝅯", "☯", "✍" };

/* +------------------------+
 * |        LAUNCHERS       |
 * +------------------------+ */
/* launchers from Chad and me :) FIXME: I don't quite understand what is the objective of this. */
static const char* bpy[] = { "bpython", NULL };
static const char* eww[] = { "eww", "open" , "eww", NULL };

static const Launcher launchers[] = {
    /* command     name to display */
    { eww,         "{}" },
    { bpy,         "bpy" },
};

/* +------------------------+
 * |       TAG DETAILS      |
 * +------------------------+ */
static const unsigned int ulinepad      = 5; /* horizontal padding between the underline and tag */
static const unsigned int ulinestroke   = 2; /* thickness / height of the underline */
static const unsigned int ulinevoffset  = 1; /* how far above the bottom of the bar the line should appear */
static const int ulineall               = 0; /* 1 to show underline on all tags, 0 for just the active ones */

/* +------------------------+
 * |       SCRATCHPADS      |
 * +------------------------+ */
/* Me: SP from Luke */
typedef struct {
    const char *name;
    const void *cmd;
} Sp;
const char *spcmd1[] = {TERMINAL2, "-n", "spterm", "-g", "120x34", NULL };
const char *spcmd2[] = {TERMINAL2, "-n", "spcalc", "-f", spfont, "-g", "50x20", "-e", "bc", "-lq", NULL };
static Sp scratchpads[] = {
	/* name          cmd  */
    {"spterm",      spcmd1},
    {"spcalc",      spcmd2},
};

/* +------------------------+
 * |          RULES         |
 * +------------------------+ */
static const Rule rules[] = {
    /* xprop(1):
     *	WM_CLASS(STRING) = instance, class
     *	WM_NAME(STRING) = title
     */
    // *** Chad Orig ***
    /* class      instance    title       tags mask     iscentered   isfloating   monitor */
    { "Gimp",     NULL,       NULL,       0,            0,           1,           -1 },
    { "Firefox",  NULL,       NULL,       1 << 8,       0,           0,           -1 },
    { "eww",      NULL,       NULL,       0,            0,           1,           -1 },
    // *** Me:test ***
    { "Krita",    NULL,       NULL,       0,            0,           0,           -1 },
    { NULL,     "spterm",     NULL,       SPTAG(0),     1,           1,           -1 },
    { NULL,     "spcalc",     NULL,       SPTAG(1),     1,           1,           -1 },
    /* -------------------------------------------------------------------------------------------------------- */
    // *** Me: Mixture (Different struct is used, it can end up with a seg fault. TL;DR; They're incompatible)***
    /* class      instance    title             tags mask     iscentered    isfloating   isterminal    noswallow   monitor */
    // *** From Chad ***
    // { "Gimp",     NULL,       NULL,             0,            0,            1,            0,            0,          -1 },
    // { "Firefox",  NULL,       NULL,             1 << 8,       0,            0,            0,            0,          -1 },
    // { "eww",      NULL,       NULL,             0,            0,            1,            0,            0,          -1 },
    // *** From Luke ***
    // { "Gimp",     NULL,       NULL,             1 << 8,       0,            0,            0,            0,          -1 },
	// { "Krita",    NULL,       NULL,       	    1 << 8,       0,            0,            0,            0,          -1 },
	// { "Inkscape", NULL,       NULL,       	    1 << 8,       0,            0,            0,            0,          -1 },
	// { TERMCLASS,  NULL,       NULL,       	    0,            0,            0,            1,            0,          -1 },
	// { NULL,       NULL,       "Event Tester",   0,            0,            0,            0,            1,          -1 },
	// { NULL,      "spterm",    NULL,       	    SPTAG(0),     0,            1,            1,            0,          -1 },
	// { NULL,      "spcalc",    NULL,       	    SPTAG(1),     0,            1,            1,            0,          -1 },
};

/* +------------------------+
 * |         LAYOUTS        |
 * +------------------------+ */
/* layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */

#include "functions.h"

static const Layout layouts[] = {
    /* symbol     arrange function */
    // *** Common ***
    { "[]=",      tile },    /* first entry is default */
    { "TTT",      bstack },

    { "[@]",      spiral },
    { "[\\]",     dwindle },

    { "H[]",      deck },
    { "[M]",      monocle },

    { "|M|",      centeredmaster },
    { ">M>",      centeredfloatingmaster },

    // *** Chad ***
    { "===",      bstackhoriz },
    { "HHH",      grid },
    { "###",      nrowgrid },
    { "---",      horizgrid },
    { ":::",      gaplessgrid },
    { "><>",      NULL },    /* no layout function means floating behavior */
};

/* +------------------------+
 * |         MACROS         |
 * +------------------------+ */
/* key definitions */
#define MODKEY Mod4Mask

#define TAGKEYS(KEY,TAG) \
    { MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
    { MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
    { MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

// *** Me from Luke ***
#define STACKKEYS(MOD,ACTION) \
    { MOD,	XK_j,	ACTION##stack2,	{.i = INC(+1) } }, \
    { MOD,	XK_k,	ACTION##stack2,	{.i = INC(-1) } }, \
    { MOD,  XK_v,   ACTION##stack2,  {.i = 0 } },
	/* { MOD, XK_grave, ACTION##stack, {.i = PREVSEL } }, \ */
	/* { MOD, XK_a,     ACTION##stack, {.i = 1 } }, \ */
	/* { MOD, XK_z,     ACTION##stack, {.i = 2 } }, \ */
	/* { MOD, XK_x,     ACTION##stack, {.i = -1 } }, */


/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* +------------------------+
 * |        COMMANDS        |
 * +------------------------+ */
/* commands */
// *** Chad ***
static const char *term[]  = {  "st", NULL }; // change this to your term
static const char *rofi[] = {"rofi", "-show", "drun", NULL };
static const char *xi[] = {"xbacklight", "-inc", "7", NULL};
static const char *xd[] = {"xbacklight", "-dec", "7", NULL};

// *** Luke ***
static const char *termcmd[]  = { TERMINAL, NULL };
// ---------------------------------------------------------

// *** Dmenu ***
static char dmenumon[2]       = "0"; //  component of dmenucmd, manipulated in spawn()
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
// static const char *dmenucmd[] = { "dmenu_run", "-fn", dmenufont, "-nb", colors[0][ColBG], "-nf", colors[0][ColFG], "-sb", colors[1][ColBG], "-sf", colors[1][ColFG], NULL };
// ---------------------------------------------------------

/* +------------------------+
 * |       Xresources       |
 * +------------------------+ */
// *** Luke ***
/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
        // *** Me ***
        { "color12",			STRING,		&normbordercolor },
        { "color6",				STRING,		&selbordercolor },
        { "color0",				STRING,		&normbgcolor },
        { "color11",			STRING,		&normfgcolor },
        { "color10",			STRING,		&selbgcolor },
        { "color8",				STRING,		&selfgcolor },
        { "color7",				STRING,		&adomix },
        // *** Luke ***
        // { "color0",				STRING,		&normbordercolor },
        // { "color8",				STRING,		&selbordercolor },
        // { "color0",				STRING,		&normbgcolor },
        // { "color4",				STRING,		&normfgcolor },
        // { "color0",				STRING,		&selfgcolor },
        // { "color4",				STRING,		&selbgcolor },
        // { "borderpx",			INTEGER, 	&borderpx },
        // { "snap",				INTEGER, 	&snap },
        // { "showbar",			INTEGER, 	&showbar },
        // { "topbar",				INTEGER, 	&topbar },
        // { "nmaster",			INTEGER, 	&nmaster },
        // { "resizehints",		INTEGER, 	&resizehints },
        // { "mfact",				FLOAT,		&mfact },
        // { "gappih",				INTEGER, 	&gappih },
        // { "gappiv",				INTEGER, 	&gappiv },
        // { "gappoh",				INTEGER, 	&gappoh },
        // { "gappov",				INTEGER, 	&gappov },
        // { "swallowfloating",	INTEGER, 	&swallowfloating },
        // { "smartgaps",			INTEGER, 	&smartgaps },
};
// ---------------------------------------------------------


/* +------------------------+
 * |          KEYS          |
 * +------------------------+ */
static Key keys[] = {
    /* modifier                         key             function        argument */
    STACKKEYS(MODKEY,                                   focus)
    STACKKEYS(MODKEY|ShiftMask,                         push)
	/* ------------------------------------  ?:Luke  --------------------------------------- */
	// { MODKEY|ShiftMask,		            XK_Escape,	    spawn,			SHCMD("") },
	{ MODKEY|ShiftMask,		            XK_Escape,	    spawn,			{.v = dmenucmd } },
	{ MODKEY,				            XK_grave,	    spawn,			SHCMD("dmenuunicode") },
	/* ------------------------------------  Tags:Common  --------------------------------------- */
    TAGKEYS(                            XK_1,                           0)
    TAGKEYS(                            XK_2,                           1)
    TAGKEYS(                            XK_3,                           2)
    TAGKEYS(                            XK_4,                           3)
    TAGKEYS(                            XK_5,                           4)
    TAGKEYS(                            XK_6,                           5)
    TAGKEYS(                            XK_7,                           6)
    TAGKEYS(                            XK_8,                           7)
    TAGKEYS(                            XK_9,                           8)
	/* ------------------------------------  0:Common  --------------------------------------- */
	{ MODKEY,				            XK_0,		    view,			{.ui = ~0 } },
	{ MODKEY|ShiftMask,		            XK_0,		    tag,			{.ui = ~0 } },
	/* ------------------------------------  Q-Tab:Fixed  --------------------------------------- */
	{ MODKEY,				            XK_q,		    killclient,		{0} },
	{ MODKEY,				            XK_Tab,		    view,			{0} },
    { MODKEY|ControlMask,               XK_q,           quit,           {0} },
    { MODKEY|ControlMask,               XK_r,           quit,           {1} },
	/* ------------------------------------  Layouts:Fixed  --------------------------------------- */
    // *** Luke ***
	{ MODKEY,				            XK_t,		    setlayout,		{.v = &layouts[0]} }, /* tile */
	{ MODKEY|ShiftMask,		            XK_t,		    setlayout,		{.v = &layouts[1]} }, /* bstack */
	{ MODKEY,				            XK_y,		    setlayout,		{.v = &layouts[2]} }, /* spiral */
	{ MODKEY|ShiftMask,		            XK_y,		    setlayout,		{.v = &layouts[3]} }, /* dwindle */
	{ MODKEY,				            XK_u,		    setlayout,		{.v = &layouts[4]} }, /* deck */
	{ MODKEY|ShiftMask,		            XK_u,		    setlayout,		{.v = &layouts[5]} }, /* monocle */
	{ MODKEY,				            XK_i,		    setlayout,		{.v = &layouts[6]} }, /* centeredmaster */
	{ MODKEY|ShiftMask,		            XK_i,		    setlayout,		{.v = &layouts[7]} }, /* centeredfloatingmaster */
    // *** Chad ***
    { MODKEY|ControlMask|ShiftMask,     XK_t,           setlayout,      {.v = &layouts[13]} },/* NULL */
    { MODKEY|ControlMask|ShiftMask,     XK_f,           setlayout,      {.v = &layouts[8]} }, /* bstackhoriz */
    { MODKEY|ControlMask|ShiftMask,     XK_m,           setlayout,      {.v = &layouts[9]} }, /* grid */
    { MODKEY|ControlMask,               XK_g,           setlayout,      {.v = &layouts[10]} },/* nrowgrid */
    { MODKEY|ControlMask|ShiftMask,     XK_g,           setlayout,      {.v = &layouts[11]} },/* horizgrid */
	{ MODKEY|ControlMask|ShiftMask,		XK_u,		    setlayout,		{.v = &layouts[12]} },/* gaplessgrid */
    { MODKEY|ControlMask,               XK_space,       setlayout,      {0} },
    { MODKEY|ControlMask,               XK_comma,       cyclelayout,    {.i = -1 } },
    { MODKEY|ControlMask,               XK_period,      cyclelayout,    {.i = +1 } },
	/* ------------------------------------  Space:Common  --------------------------------------- */
	{ MODKEY,				            XK_space,	    zoom,			{0} },
	{ MODKEY|ShiftMask,		            XK_space,	    togglefloating,	{0} },
	/* ------------------------------------  Gaps:Fixed  --------------------------------------- */
    // *** Luke ***
	{ MODKEY,				            XK_backslash,   view,			{0} },
    { MODKEY,				            XK_a,		    togglegaps,		{0} },
	{ MODKEY|ShiftMask,		            XK_a,		    defaultgaps,	{0} },
    { MODKEY,				            XK_s,		    togglesticky,	{0} },
	{ MODKEY,				            XK_z,			incrgaps,		{.i = +3 } },
	{ MODKEY,				            XK_x,			incrgaps,		{.i = -3 } },
    // *** Chad ***
    // inner gaps
    { MODKEY|ControlMask,               XK_i,           incrigaps,      {.i = +1 } },
    { MODKEY|ControlMask|ShiftMask,     XK_i,           incrigaps,      {.i = -1 } },

    // outer gaps
    { MODKEY|ControlMask,               XK_o,           incrogaps,      {.i = +1 } },
    { MODKEY|ControlMask|ShiftMask,     XK_o,           incrogaps,      {.i = -1 } },

    // more granular gap adjusting: u really gonna need this?
    // { MODKEY|ControlMask,               XK_6,           incrihgaps,     {.i = +1 } },
    // { MODKEY|ControlMask|ShiftMask,     XK_6,           incrihgaps,     {.i = -1 } },
    // { MODKEY|ControlMask,               XK_7,           incrivgaps,     {.i = +1 } },
    // { MODKEY|ControlMask|ShiftMask,     XK_7,           incrivgaps,     {.i = -1 } },
    // { MODKEY|ControlMask,               XK_8,           incrohgaps,     {.i = +1 } },
    // { MODKEY|ControlMask|ShiftMask,     XK_8,           incrohgaps,     {.i = -1 } },
    // { MODKEY|ControlMask,               XK_9,           incrovgaps,     {.i = +1 } },
    // { MODKEY|ControlMask|ShiftMask,     XK_9,           incrovgaps,     {.i = -1 } },
	/* ------------------------------------  o:Luke  --------------------------------------- */
	{ MODKEY,				            XK_o,		    incnmaster,     {.i = +1 } },
	{ MODKEY|ShiftMask,		            XK_o,		    incnmaster,     {.i = -1 } },
	/* ------------------------------------  Mix:Fixed  --------------------------------------- */
	{ MODKEY,				            XK_f,		    togglefullscr,	{0} },
	{ MODKEY,				            XK_h,		    setmfact,		{.f = -0.05} },
    { MODKEY|ShiftMask,                 XK_h,           setcfact,       {.f = +0.25} },
	{ MODKEY,				            XK_l,		    setmfact,      	{.f = +0.05} },
    { MODKEY|ShiftMask,                 XK_l,           setcfact,       {.f = -0.25} },
    { MODKEY|ControlMask|ShiftMask,     XK_l,           setcfact,       {.f =  0.00} },
	/* J and K are automatically bound above in STACKEYS */
    { MODKEY,				            XK_semicolon,   shiftview,		{ .i = 1 } },
    { MODKEY|ShiftMask,		            XK_semicolon,   shifttag,		{ .i = 1 } },
	/* ------------------------------------  Spawn  --------------------------------------- */
    // *** Luke ***
	{ MODKEY,				            XK_Return,		spawn,			{.v = termcmd } },
    { MODKEY|ShiftMask,		            XK_Return,		togglescratch,	{.ui = 0} },
    { MODKEY|ControlMask|ShiftMask,		XK_Return,		togglescratch,	{.ui = 1} },
	{ MODKEY,				            XK_b,			togglebar,		{0} },
    // *** Chad ***
    { MODKEY,                           XK_c,           spawn,          {.v = rofi } },
	/* ------------------------------------  Monitor  --------------------------------------- */
	{ MODKEY,				            XK_Left,		focusmon,		{.i = -1 } },
	{ MODKEY|ShiftMask,		            XK_Left,		tagmon,			{.i = -1 } },
	{ MODKEY,				            XK_Right,		focusmon,		{.i = +1 } },
	{ MODKEY|ShiftMask,		            XK_Right,		tagmon,			{.i = +1 } },
	/* ------------------------------------  Shift view  --------------------------------------- */
    { MODKEY,				            XK_Page_Up,		shiftview,		{ .i = -1 } },
    { MODKEY|ShiftMask,		            XK_Page_Up,		shifttag,		{ .i = -1 } },
    { MODKEY,				            XK_Page_Down,	shiftview,		{ .i = +1 } },
    { MODKEY|ShiftMask,		            XK_Page_Down,	shifttag,		{ .i = +1 } },
	/* ------------------------------------  Stacks  --------------------------------------- */
    { MODKEY|ControlMask,               XK_j,           focusstack,     {.i = +1 } },
    { MODKEY|ControlMask,               XK_k,           focusstack,     {.i = -1 } },
    { MODKEY|ControlMask|ShiftMask,     XK_j,           movestack,      {.i = +1 } },
    { MODKEY|ControlMask|ShiftMask,     XK_k,           movestack,      {.i = -1 } },
	/* ------------------------------------  Add new keys yeay!  --------------------------------------- */
	{ MODKEY|ControlMask|ShiftMask,		XK_d,			spawn,          SHCMD("dmenuwallpaper") },
	// { MODKEY,				        XK_g,		    somefunction,	{ .i = -1 } },
	// { MODKEY|ShiftMask,		        XK_g,		    somefunction,	{ .i = -1 } },
    // { MODKEY|ControlMask,            XK_t,           togglegaps,     {0} },
    // { MODKEY,				        XK_apostrophe,  togglescratch,	{.ui = 1} },
	/* ------------------------------------  Screnshot with P:Fixed  --------------------------------------- */
    {MODKEY|ShiftMask,                  XK_p,           spawn,          SHCMD("maim | xclip -selection clipboard -t image/png")},
    {MODKEY,                            XK_p,           spawn,          SHCMD("maim --select | xclip -selection clipboard -t image/png")},
	/* ------------------------------------  XF86XK:Fixed  --------------------------------------- */
    // *** Chad ***
    { 0,                    XF86XK_MonBrightnessDown,   spawn,          {.v = xd}},
    { 0,                    XF86XK_MonBrightnessUp,     spawn,          {.v = xi}},
    // *** Luke ***
	{ 0, 					XF86XK_AudioMute,			spawn,		    SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)") },
	{ 0, 					XF86XK_AudioRaiseVolume,	spawn,		    SHCMD("pamixer --allow-boost -i 3; kill -44 $(pidof dwmblocks)") },
	{ 0, 					XF86XK_AudioLowerVolume,	spawn,		    SHCMD("pamixer --allow-boost -d 3; kill -44 $(pidof dwmblocks)") },
	{ 0, 					XF86XK_AudioPrev,			spawn,		    SHCMD("mpc prev") },
	{ 0, 					XF86XK_AudioNext,			spawn,		    SHCMD("mpc next") },
	{ 0, 					XF86XK_AudioPause,			spawn,		    SHCMD("mpc pause") },
	{ 0, 					XF86XK_AudioPlay,			spawn,		    SHCMD("mpc play") },
	{ 0, 					XF86XK_AudioStop,			spawn,		    SHCMD("mpc stop") },
	{ 0, 					XF86XK_AudioRewind,			spawn,		    SHCMD("mpc seek -10") },
	{ 0, 					XF86XK_AudioForward,		spawn,		    SHCMD("mpc seek +10") },
	{ 0, 					XF86XK_AudioMedia,			spawn,		    SHCMD(TERMINAL " -e ncmpcpp") },
	{ 0, 					XF86XK_AudioMicMute,		spawn,		    SHCMD("pactl set-source-mute @DEFAULT_SOURCE@ toggle") },
	{ 0, 					XF86XK_PowerOff,			spawn,		    SHCMD("sysact") },
	{ 0, 					XF86XK_Calculator,			spawn,		    SHCMD(TERMINAL " -e bc -l") },
	{ 0, 					XF86XK_Sleep,				spawn,		    SHCMD("sudo -A zzz") },
	{ 0, 					XF86XK_WWW,					spawn,		    SHCMD("$BROWSER") },
	{ 0, 					XF86XK_DOS,					spawn,		    SHCMD(TERMINAL) },
	{ 0, 					XF86XK_ScreenSaver,			spawn,		    SHCMD("slock & xset dpms force off; mpc pause; pauseallmpv") },
	{ 0, 					XF86XK_TaskPane,			spawn,		    SHCMD(TERMINAL " -e htop") },
	{ 0, 					XF86XK_Mail,				spawn,		    SHCMD(TERMINAL " -e neomutt ; pkill -RTMIN+12 dwmblocks") },
	{ 0, 					XF86XK_MyComputer,			spawn,		    SHCMD(TERMINAL " -e lf /") },
	/* { 0, 				XF86XK_Battery,				spawn,		    SHCMD("") }, */
	{ 0, 					XF86XK_Launch1,				spawn,		    SHCMD("xset dpms force off") },
	{ 0, 					XF86XK_TouchpadToggle,		spawn,		    SHCMD("(synclient | grep 'TouchpadOff.*1' && synclient TouchpadOff=0) || synclient TouchpadOff=1") },
	{ 0, 					XF86XK_TouchpadOff,			spawn,		    SHCMD("synclient TouchpadOff=1") },
	{ 0, 					XF86XK_TouchpadOn,			spawn,		    SHCMD("synclient TouchpadOff=0") },
	{ 0, 					XF86XK_MonBrightnessUp,		spawn,		    SHCMD("xbacklight -inc 15") },
	{ 0, 					XF86XK_MonBrightnessDown,	spawn,		    SHCMD("xbacklight -dec 15") },
	/* ------------------------------------  Chad Special  --------------------------------------- */
    // { MODKEY|ControlMask,               XK_w,           tabmode,        { +1 } },
    { MODKEY|ControlMask|ShiftMask,     XK_w,           tabmode,        { -1 } },

    { MODKEY|ControlMask|ShiftMask,     XK_minus,       setborderpx,    {.i = -1 } },
    { MODKEY|ControlMask|ShiftMask,     XK_p,           setborderpx,    {.i = +1 } },
    { MODKEY|ShiftMask,                 XK_w,           setborderpx,    {.i = default_border } },

    { MODKEY,                           XK_e,           hidewin,        {0} },
    { MODKEY|ShiftMask,                 XK_e,           restorewin,     {0} },
	/* ------------------------------------  Dmenu  --------------------------------------- */
	{ MODKEY,				            XK_d,			spawn,          SHCMD("dmenu_run") },
	{ MODKEY|ShiftMask,		            XK_d,			spawn,			SHCMD("passmenu") },
	/* ------------------------------------  Pamixer  --------------------------------------- */
	{ MODKEY,				            XK_minus,		spawn,			SHCMD("pamixer --allow-boost -d 5; kill -44 $(pidof dwmblocks)") },
	{ MODKEY|ShiftMask,		            XK_minus,		spawn,			SHCMD("pamixer --allow-boost -d 15; kill -44 $(pidof dwmblocks)") },
	{ MODKEY,				            XK_equal,		spawn,			SHCMD("pamixer --allow-boost -i 5; kill -44 $(pidof dwmblocks)") },
	{ MODKEY|ShiftMask,		            XK_equal,		spawn,			SHCMD("pamixer --allow-boost -i 15; kill -44 $(pidof dwmblocks)") },
	/* ------------------------------------  Sysact  --------------------------------------- */
	{ MODKEY,				            XK_BackSpace,	spawn,			SHCMD("sysact") },
	{ MODKEY|ShiftMask,		            XK_BackSpace,	spawn,			SHCMD("sysact") },
	{ MODKEY|ShiftMask,		            XK_q,			spawn,			SHCMD("sysact") },
	/* ------------------------------------  Terminal  --------------------------------------- */
	{ MODKEY,		                    XK_w,			spawn,			SHCMD(TERMINAL " -e sudo nmtui") },
    { MODKEY|ControlMask,				XK_e,			spawn,			SHCMD(TERMINAL " -e neomutt ; pkill -RTMIN+12 dwmblocks; rmdir ~/.abook") },
    { MODKEY|ControlMask|ShiftMask,		XK_e,			spawn,			SHCMD(TERMINAL " -e abook -C ~/.config/abook/abookrc --datafile ~/.config/abook/addressbook") },
	{ MODKEY,				            XK_r,			spawn,			SHCMD(TERMINAL " -e ranger") },
    { MODKEY|ControlMask|ShiftMask,		XK_r,			spawn,			SHCMD(TERMINAL " -e lf") },
	{ MODKEY|ShiftMask,		            XK_r,			spawn,			SHCMD(TERMINAL " -e htop") },
	/* V is automatically bound above in STACKKEYS */
	// { MODKEY,			            XK_n,			spawn,			SHCMD(TERMINAL " -e nvim -c VimwikiIndex") },
	{ MODKEY,				            XK_n,			spawn,			SHCMD(TERMINAL " -e nvim") },
	{ MODKEY|ShiftMask,		            XK_n,			spawn,			SHCMD(TERMINAL " -e newsboat; pkill -RTMIN+6 dwmblocks") },
	{ MODKEY,				            XK_m,			spawn,			SHCMD(TERMINAL " -e ncmpcpp") },
	{ MODKEY|ShiftMask,		            XK_m,			spawn,			SHCMD("pamixer -t; kill -44 $(pidof dwmblocks)") },
	/* ------------------------------------  MPC  --------------------------------------- */
	{ MODKEY|ControlMask,				XK_m,			spawn,			SHCMD("mpc toggle") },
	{ MODKEY|ControlMask,		        XK_p,			spawn,			SHCMD("mpc pause ; pauseallmpv") },
	{ MODKEY,				            XK_bracketleft,	spawn,			SHCMD("mpc seek -10") },
	{ MODKEY|ShiftMask,		            XK_bracketleft,	spawn,			SHCMD("mpc seek -60") },
	{ MODKEY,				            XK_bracketright,spawn,			SHCMD("mpc seek +10") },
	{ MODKEY|ShiftMask,		            XK_bracketright,spawn,			SHCMD("mpc seek +60") },
	/* ------------------------------------  MPC2  --------------------------------------- */
	{ MODKEY,				            XK_comma,		spawn,			SHCMD("mpc prev") },
	{ MODKEY|ShiftMask,		            XK_comma,		spawn,			SHCMD("mpc seek 0%") },
	{ MODKEY,				            XK_period,		spawn,			SHCMD("mpc next") },
	{ MODKEY|ShiftMask,		            XK_period,		spawn,			SHCMD("mpc repeat") },
	/* ------------------------------------  XDoTool  --------------------------------------- */
	{ MODKEY,				            XK_Insert,		spawn,			SHCMD("xdotool type $(grep -v '^#' ~/.local/share/larbs/snippets | dmenu -i -l 50 | cut -d' ' -f1)") },
	/* ------------------------------------  Function Buttons  --------------------------------------- */
	{ MODKEY,				            XK_F1,			spawn,			SHCMD("groff -mom /usr/local/share/dwm/larbs.mom -Tpdf | zathura -") },
    { MODKEY,				            XK_F2,			spawn,			SHCMD("tutorialvids") },
	{ MODKEY,				            XK_F3,			spawn,			SHCMD("displayselect") },
	{ MODKEY,				            XK_F4,			spawn,			SHCMD(TERMINAL " -e pulsemixer; kill -44 $(pidof dwmblocks)") },
    { MODKEY,				            XK_F5,			spawn,			SHCMD("$BROWSER") },
	/* This section is about torrents, u need tremc but it is not in the ubuntu repo */
	{ MODKEY,				            XK_F6,			spawn,			SHCMD("torwrap") },
	{ MODKEY,				            XK_F7,			spawn,			SHCMD("td-toggle") },
	/* what is mw, cannot find it! */
	{ MODKEY,				            XK_F8,			spawn,			SHCMD("mw -Y") },
	/* Easy mounting and unmounting */
	{ MODKEY,				            XK_F9,			spawn,			SHCMD("dmenumount") },
	{ MODKEY,				            XK_F10,			spawn,			SHCMD("dmenuumount") },
	{ MODKEY,				            XK_F11,			spawn,			SHCMD("mpv --no-cache --no-osc --no-input-default-bindings --profile=low-latency --input-conf=/dev/null --title=webcam $(ls /dev/video[0,2,4,6,8] | tail -n 1)") },
	{ MODKEY,				            XK_F12,			spawn,			SHCMD("remaps & notify-send \\\"⌨️ Keyboard remapping...\\\" \\\"Re-running keyboard defaults for any newly plugged-in keyboards.\\\"") },
	/* ------------------------------------  Maim:Luke  --------------------------------------- */
	{ 0,					            XK_Print,		spawn,			SHCMD("maim pic-full-$(date '+%y%m%d-%H%M-%S').png") },
	{ ShiftMask,			            XK_Print,		spawn,			SHCMD("maimpick") },
	/* ------------------------------------  Dmenusome  --------------------------------------- */
	{ MODKEY,				            XK_Print,		spawn,			SHCMD("dmenurecord") },
	{ MODKEY|ShiftMask,		            XK_Print,		spawn,			SHCMD("dmenurecord kill") },
	{ MODKEY,				            XK_Delete,		spawn,			SHCMD("dmenurecord kill") },
	{ MODKEY,				            XK_Scroll_Lock,	spawn,			SHCMD("killall screenkey || screenkey &") },
};

/* +------------------------+
 * |         CLICKS         |
 * +------------------------+ */
/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
    /* click                event mask      button          function        argument */
    // *** Luke ***
#ifndef __OpenBSD__
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
    { ClkStatusText,        0,              Button1,        sigdwmblocks,   {.i = 1} },
    { ClkStatusText,        0,              Button2,        sigdwmblocks,   {.i = 2} },
    { ClkStatusText,        0,              Button3,        sigdwmblocks,   {.i = 3} },
    { ClkStatusText,        0,              Button4,        sigdwmblocks,   {.i = 4} },
    { ClkStatusText,        0,              Button5,        sigdwmblocks,   {.i = 5} },
    { ClkStatusText,        ShiftMask,      Button1,        sigdwmblocks,   {.i = 6} },
#endif
    // *** Chad ***
    { ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
    { ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
    { ClkWinTitle,          0,              Button2,        zoom,           {0} },
    // { ClkStatusText,        0,              Button2,        spawn,          {.v = term } },

    /* Keep movemouse? */
    /* { ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} }, */

    /* placemouse options, choose which feels more natural:
    *    0 - tiled position is relative to mouse cursor
    *    1 - tiled postiion is relative to window center
    *    2 - mouse pointer warps to window center
    *
    * The moveorplace uses movemouse or placemouse depending on the floating state
    * of the selected client. Set up individual keybindings for the two if you want
    * to control these separately (i.e. to retain the feature to move a tiled window
    * into a floating position).
    */
    // *** me ***
    // Changing window positions (as well as in stack)
    // { ClkClientWin,         ShiftMask,      Button1,        moveorplace,    {.i = 0} },
    { ClkClientWin,         ShiftMask,      Button2,        togglefloating, {0} },
    // Same as h and l (changing the master-slave window width or slave height ratio)
    // { ClkClientWin,         ControlMask,    Button1,        dragmfact,      {0} },
    // { ClkClientWin,         ControlMask,    Button3,        dragcfact,      {0} },
    { ClkTabBar,            0,              Button1,        focuswin,       {0} },
    { ClkTabBar,            0,              Button1,        focuswin,       {0} },
    { ClkTabPrev,           0,              Button1,        movestack,      { .i = -1 } },
    { ClkTabNext,           0,              Button1,        movestack,      { .i = +1 } },
    { ClkTabClose,          0,              Button1,        killclient,     {0} },

    // *** Luke ***
    { ClkStatusText,        ShiftMask,      Button3,        spawn,          SHCMD(TERMINAL " -e nvim /path_to_dwmblocks/config.h") },
    { ClkStatusText,        ShiftMask,      Button2,        spawn,          SHCMD(TERMINAL " -e nvim /path_to_dwm/config.def.h") },
    { ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
    { ClkClientWin,         MODKEY,         Button2,        defaultgaps,	{0} },
    { ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
    { ClkClientWin,			MODKEY,			Button4,		incrgaps,	    {.i = +1} },
    { ClkClientWin,			MODKEY,			Button5,		incrgaps,	    {.i = -1} },
    { ClkTagBar,            0,              Button1,        view,           {0} },
    { ClkTagBar,            0,              Button3,        toggleview,     {0} },
    { ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
    { ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
    { ClkTagBar,			0,				Button4,		shiftview,	    {.i = -1} },
    { ClkTagBar,			0,				Button5,		shiftview,	    {.i = 1} },
    { ClkRootWin,			0,				Button2,		togglebar,	    {0} },
};
