#pragma once

class Settings
{
public:
    static int sm_arrange;
    static int sm_cleanboot;
    static int sm_cmonitors;
    static int sm_cmousebuttons;
    static int sm_convertibleslatemode;
    static int sm_cxborder;
    static int sm_cxcursor;
    static int sm_cxdlgframe;
    static int sm_cxdoubleclk;
    static int sm_cxdrag;
    static int sm_cxedge;
    static int sm_cxfixedframe;
    static int sm_cxfocusborder;
    static int sm_cxframe;
    static int sm_cxfullscreen;
    static int sm_cxhscroll;
    static int sm_cxhthumb;
    static int sm_cxicon;
    static int sm_cxiconspacing;
    static int sm_cxmaximized;
    static int sm_cxmaxtrack;
    static int sm_cxmenucheck;
    static int sm_cxmenusize;
    static int sm_cxmin;
    static int sm_cxminimized;
    static int sm_cxminspacing;
    static int sm_cxmintrack;
    static int sm_cxpaddedborder;
    static int sm_cxscreen;
    static int sm_cxsize;
    static int sm_cxsizeframe;
    static int sm_cxsmicon;
    static int sm_cxsmsize;
    static int sm_cxvirtualscreen;
    static int sm_cxvscroll;
    static int sm_cyborder;
    static int sm_cycaption;
    static int sm_cycursor;
    static int sm_cydlgframe;
    static int sm_cydoubleclk;
    static int sm_cydrag;
    static int sm_cyedge;
    static int sm_cyfixedframe;
    static int sm_cyfocusborder;
    static int sm_cyframe;
    static int sm_cyfullscreen;
    static int sm_cyhscroll;
    static int sm_cyicon;
    static int sm_cyiconspacing;
    static int sm_cykanjiwindow;
    static int sm_cymaximized;
    static int sm_cymaxtrack;
    static int sm_cymenu;
    static int sm_cymenucheck;
    static int sm_cymenusize;
    static int sm_cymin;
    static int sm_cyminimized;
    static int sm_cyminspacing;
    static int sm_cymintrack;
    static int sm_cyscreen;
    static int sm_cysize;
    static int sm_cysizeframe;
    static int sm_cysmcaption;
    static int sm_cysmicon;
    static int sm_cysmsize;
    static int sm_cyvirtualscreen;
    static int sm_cyvscroll;
    static int sm_cyvthumb;
    static int sm_dbcsenabled;
    static int sm_debug;
    static int sm_digitizer;
    static int sm_immenabled;
    static int sm_maximumtouches;
    static int sm_mediacenter;
    static int sm_menudropalignment;
    static int sm_mideastenabled;
    static int sm_mousepresent;
    static int sm_mousehorizontalwheelpresent;
    static int sm_mousewheelpresent;
    static int sm_network;
    static int sm_penwindows;
    static int sm_remotecontrol;
    static int sm_remotesession;
    static int sm_samedisplayformat;
    static int sm_secure;
    static int sm_serverr2;
    static int sm_showsounds;
    static int sm_shuttingdown;
    static int sm_slowmachine;
    static int sm_starter;
    static int sm_swapbutton;
    static int sm_systemdocked;
    static int sm_tabletpc;
    static int sm_xvirtualscreen;
    static int sm_yvirtualscreen;

    static bool Load();

    static bool IsUndefined(int& value);

    static void Describe();

    static int GetByFlag(int& flag);

private:
    static const int UNDEFINED = -39; // Miku but negative
};
