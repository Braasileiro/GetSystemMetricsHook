#include "pch.h"
#include "settings.h"

int Settings::sm_arrange;
int Settings::sm_cleanboot;
int Settings::sm_cmonitors;
int Settings::sm_cmousebuttons;
int Settings::sm_convertibleslatemode;
int Settings::sm_cxborder;
int Settings::sm_cxcursor;
int Settings::sm_cxdlgframe;
int Settings::sm_cxdoubleclk;
int Settings::sm_cxdrag;
int Settings::sm_cxedge;
int Settings::sm_cxfixedframe;
int Settings::sm_cxfocusborder;
int Settings::sm_cxframe;
int Settings::sm_cxfullscreen;
int Settings::sm_cxhscroll;
int Settings::sm_cxhthumb;
int Settings::sm_cxicon;
int Settings::sm_cxiconspacing;
int Settings::sm_cxmaximized;
int Settings::sm_cxmaxtrack;
int Settings::sm_cxmenucheck;
int Settings::sm_cxmenusize;
int Settings::sm_cxmin;
int Settings::sm_cxminimized;
int Settings::sm_cxminspacing;
int Settings::sm_cxmintrack;
int Settings::sm_cxpaddedborder;
int Settings::sm_cxscreen;
int Settings::sm_cxsize;
int Settings::sm_cxsizeframe;
int Settings::sm_cxsmicon;
int Settings::sm_cxsmsize;
int Settings::sm_cxvirtualscreen;
int Settings::sm_cxvscroll;
int Settings::sm_cyborder;
int Settings::sm_cycaption;
int Settings::sm_cycursor;
int Settings::sm_cydlgframe;
int Settings::sm_cydoubleclk;
int Settings::sm_cydrag;
int Settings::sm_cyedge;
int Settings::sm_cyfixedframe;
int Settings::sm_cyfocusborder;
int Settings::sm_cyframe;
int Settings::sm_cyfullscreen;
int Settings::sm_cyhscroll;
int Settings::sm_cyicon;
int Settings::sm_cyiconspacing;
int Settings::sm_cykanjiwindow;
int Settings::sm_cymaximized;
int Settings::sm_cymaxtrack;
int Settings::sm_cymenu;
int Settings::sm_cymenucheck;
int Settings::sm_cymenusize;
int Settings::sm_cymin;
int Settings::sm_cyminimized;
int Settings::sm_cyminspacing;
int Settings::sm_cymintrack;
int Settings::sm_cyscreen;
int Settings::sm_cysize;
int Settings::sm_cysizeframe;
int Settings::sm_cysmcaption;
int Settings::sm_cysmicon;
int Settings::sm_cysmsize;
int Settings::sm_cyvirtualscreen;
int Settings::sm_cyvscroll;
int Settings::sm_cyvthumb;
int Settings::sm_dbcsenabled;
int Settings::sm_debug;
int Settings::sm_digitizer;
int Settings::sm_immenabled;
int Settings::sm_maximumtouches;
int Settings::sm_mediacenter;
int Settings::sm_menudropalignment;
int Settings::sm_mideastenabled;
int Settings::sm_mousepresent;
int Settings::sm_mousehorizontalwheelpresent;
int Settings::sm_mousewheelpresent;
int Settings::sm_network;
int Settings::sm_penwindows;
int Settings::sm_remotecontrol;
int Settings::sm_remotesession;
int Settings::sm_samedisplayformat;
int Settings::sm_secure;
int Settings::sm_serverr2;
int Settings::sm_showsounds;
int Settings::sm_shuttingdown;
int Settings::sm_slowmachine;
int Settings::sm_starter;
int Settings::sm_swapbutton;
int Settings::sm_systemdocked;
int Settings::sm_tabletpc;
int Settings::sm_xvirtualscreen;
int Settings::sm_yvirtualscreen;

bool Settings::Load()
{
    toml::table table;

    try
    {
        table = toml::parse_file("GetSystemMetricsHook.toml");
    }
    catch (std::exception& e)
    {
        spdlog::error(e.what());

        return false;
    }

    sm_arrange = table["SM_ARRANGE"].value_or(UNDEFINED);
    sm_cleanboot = table["SM_CLEANBOOT"].value_or(UNDEFINED);
    sm_cmonitors = table["SM_CMONITORS"].value_or(UNDEFINED);
    sm_cmousebuttons = table["SM_CMOUSEBUTTONS"].value_or(UNDEFINED);
    sm_convertibleslatemode = table["SM_CONVERTIBLESLATEMODE"].value_or(UNDEFINED);
    sm_cxborder = table["SM_CXBORDER"].value_or(UNDEFINED);
    sm_cxcursor = table["SM_CXCURSOR"].value_or(UNDEFINED);
    sm_cxdlgframe = table["SM_CXDLGFRAME"].value_or(UNDEFINED);
    sm_cxdoubleclk = table["SM_CXDOUBLECLK"].value_or(UNDEFINED);
    sm_cxdrag = table["SM_CXDRAG"].value_or(UNDEFINED);
    sm_cxedge = table["SM_CXEDGE"].value_or(UNDEFINED);
    sm_cxfixedframe = table["SM_CXFIXEDFRAME"].value_or(UNDEFINED);
    sm_cxfocusborder = table["SM_CXFOCUSBORDER"].value_or(UNDEFINED);
    sm_cxframe = table["SM_CXFRAME"].value_or(UNDEFINED);
    sm_cxfullscreen = table["SM_CXFULLSCREEN"].value_or(UNDEFINED);
    sm_cxhscroll = table["SM_CXHSCROLL"].value_or(UNDEFINED);
    sm_cxhthumb = table["SM_CXHTHUMB"].value_or(UNDEFINED);
    sm_cxicon = table["SM_CXICON"].value_or(UNDEFINED);
    sm_cxiconspacing = table["SM_CXICONSPACING"].value_or(UNDEFINED);
    sm_cxmaximized = table["SM_CXMAXIMIZED"].value_or(UNDEFINED);
    sm_cxmaxtrack = table["SM_CXMAXTRACK"].value_or(UNDEFINED);
    sm_cxmenucheck = table["SM_CXMENUCHECK"].value_or(UNDEFINED);
    sm_cxmenusize = table["SM_CXMENUSIZE"].value_or(UNDEFINED);
    sm_cxmin = table["SM_CXMIN"].value_or(UNDEFINED);
    sm_cxminimized = table["SM_CXMINIMIZED"].value_or(UNDEFINED);
    sm_cxminspacing = table["SM_CXMINSPACING"].value_or(UNDEFINED);
    sm_cxmintrack = table["SM_CXMINTRACK"].value_or(UNDEFINED);
    sm_cxpaddedborder = table["SM_CXPADDEDBORDER"].value_or(UNDEFINED);
    sm_cxscreen = table["SM_CXSCREEN"].value_or(UNDEFINED);
    sm_cxsize = table["SM_CXSIZE"].value_or(UNDEFINED);
    sm_cxsizeframe = table["SM_CXSIZEFRAME"].value_or(UNDEFINED);
    sm_cxsmicon = table["SM_CXSMICON"].value_or(UNDEFINED);
    sm_cxsmsize = table["SM_CXSMSIZE"].value_or(UNDEFINED);
    sm_cxvirtualscreen = table["SM_CXVIRTUALSCREEN"].value_or(UNDEFINED);
    sm_cxvscroll = table["SM_CXVSCROLL"].value_or(UNDEFINED);
    sm_cyborder = table["SM_CYBORDER"].value_or(UNDEFINED);
    sm_cycaption = table["SM_CYCAPTION"].value_or(UNDEFINED);
    sm_cycursor = table["SM_CYCURSOR"].value_or(UNDEFINED);
    sm_cydlgframe = table["SM_CYDLGFRAME"].value_or(UNDEFINED);
    sm_cydoubleclk = table["SM_CYDOUBLECLK"].value_or(UNDEFINED);
    sm_cydrag = table["SM_CYDRAG"].value_or(UNDEFINED);
    sm_cyedge = table["SM_CYEDGE"].value_or(UNDEFINED);
    sm_cyfixedframe = table["SM_CYFIXEDFRAME"].value_or(UNDEFINED);
    sm_cyfocusborder = table["SM_CYFOCUSBORDER"].value_or(UNDEFINED);
    sm_cyframe = table["SM_CYFRAME"].value_or(UNDEFINED);
    sm_cyfullscreen = table["SM_CYFULLSCREEN"].value_or(UNDEFINED);
    sm_cyhscroll = table["SM_CYHSCROLL"].value_or(UNDEFINED);
    sm_cyicon = table["SM_CYICON"].value_or(UNDEFINED);
    sm_cyiconspacing = table["SM_CYICONSPACING"].value_or(UNDEFINED);
    sm_cykanjiwindow = table["SM_CYKANJIWINDOW"].value_or(UNDEFINED);
    sm_cymaximized = table["SM_CYMAXIMIZED"].value_or(UNDEFINED);
    sm_cymaxtrack = table["SM_CYMAXTRACK"].value_or(UNDEFINED);
    sm_cymenu = table["SM_CYMENU"].value_or(UNDEFINED);
    sm_cymenucheck = table["SM_CYMENUCHECK"].value_or(UNDEFINED);
    sm_cymenusize = table["SM_CYMENUSIZE"].value_or(UNDEFINED);
    sm_cymin = table["SM_CYMIN"].value_or(UNDEFINED);
    sm_cyminimized = table["SM_CYMINIMIZED"].value_or(UNDEFINED);
    sm_cyminspacing = table["SM_CYMINSPACING"].value_or(UNDEFINED);
    sm_cymintrack = table["SM_CYMINTRACK"].value_or(UNDEFINED);
    sm_cyscreen = table["SM_CYSCREEN"].value_or(UNDEFINED);
    sm_cysize = table["SM_CYSIZE"].value_or(UNDEFINED);
    sm_cysizeframe = table["SM_CYSIZEFRAME"].value_or(UNDEFINED);
    sm_cysmcaption = table["SM_CYSMCAPTION"].value_or(UNDEFINED);
    sm_cysmicon = table["SM_CYSMICON"].value_or(UNDEFINED);
    sm_cysmsize = table["SM_CYSMSIZE"].value_or(UNDEFINED);
    sm_cyvirtualscreen = table["SM_CYVIRTUALSCREEN"].value_or(UNDEFINED);
    sm_cyvscroll = table["SM_CYVSCROLL"].value_or(UNDEFINED);
    sm_cyvthumb = table["SM_CYVTHUMB"].value_or(UNDEFINED);
    sm_dbcsenabled = table["SM_DBCSENABLED"].value_or(UNDEFINED);
    sm_debug = table["SM_DEBUG"].value_or(UNDEFINED);
    sm_digitizer = table["SM_DIGITIZER"].value_or(UNDEFINED);
    sm_immenabled = table["SM_IMMENABLED"].value_or(UNDEFINED);
    sm_maximumtouches = table["SM_MAXIMUMTOUCHES"].value_or(UNDEFINED);
    sm_mediacenter = table["SM_MEDIACENTER"].value_or(UNDEFINED);
    sm_menudropalignment = table["SM_MENUDROPALIGNMENT"].value_or(UNDEFINED);
    sm_mideastenabled = table["SM_MIDEASTENABLED"].value_or(UNDEFINED);
    sm_mousepresent = table["SM_MOUSEPRESENT"].value_or(UNDEFINED);
    sm_mousehorizontalwheelpresent = table["SM_MOUSEHORIZONTALWHEELPRESENT"].value_or(UNDEFINED);
    sm_mousewheelpresent = table["SM_MOUSEWHEELPRESENT"].value_or(UNDEFINED);
    sm_network = table["SM_NETWORK"].value_or(UNDEFINED);
    sm_penwindows = table["SM_PENWINDOWS"].value_or(UNDEFINED);
    sm_remotecontrol = table["SM_REMOTECONTROL"].value_or(UNDEFINED);
    sm_remotesession = table["SM_REMOTESESSION"].value_or(UNDEFINED);
    sm_samedisplayformat = table["SM_SAMEDISPLAYFORMAT"].value_or(UNDEFINED);
    sm_secure = table["SM_SECURE"].value_or(UNDEFINED);
    sm_serverr2 = table["SM_SERVERR2"].value_or(UNDEFINED);
    sm_showsounds = table["SM_SHOWSOUNDS"].value_or(UNDEFINED);
    sm_shuttingdown = table["SM_SHUTTINGDOWN"].value_or(UNDEFINED);
    sm_slowmachine = table["SM_SLOWMACHINE"].value_or(UNDEFINED);
    sm_starter = table["SM_STARTER"].value_or(UNDEFINED);
    sm_swapbutton = table["SM_SWAPBUTTON"].value_or(UNDEFINED);
    sm_systemdocked = table["SM_SYSTEMDOCKED"].value_or(UNDEFINED);
    sm_tabletpc = table["SM_TABLETPC"].value_or(UNDEFINED);
    sm_xvirtualscreen = table["SM_XVIRTUALSCREEN"].value_or(UNDEFINED);
    sm_yvirtualscreen = table["SM_YVIRTUALSCREEN"].value_or(UNDEFINED);

    spdlog::info("Settings loaded.");

    return true;
}

bool Settings::IsUndefined(int &value)
{
    return value == UNDEFINED;
}

void Settings::Describe()
{
    // YandereDev style

    if (!IsUndefined(sm_arrange))
    {
        spdlog::info("SM_ARRANGE is '{}'.", sm_arrange);
    }

    if (!IsUndefined(sm_cleanboot))
    {
        spdlog::info("SM_CLEANBOOT is '{}'.", sm_cleanboot);
    }

    if (!IsUndefined(sm_cmonitors))
    {
        spdlog::info("SM_CMONITORS is '{}'.", sm_cmonitors);
    }

    if (!IsUndefined(sm_cmousebuttons))
    {
        spdlog::info("SM_CMOUSEBUTTONS is '{}'.", sm_cmousebuttons);
    }

    if (!IsUndefined(sm_convertibleslatemode))
    {
        spdlog::info("SM_CONVERTIBLESLATEMODE is '{}'.", sm_convertibleslatemode);
    }

    if (!IsUndefined(sm_cxborder))
    {
        spdlog::info("SM_CXBORDER is '{}'.", sm_cxborder);
    }

    if (!IsUndefined(sm_cxcursor))
    {
        spdlog::info("SM_CXCURSOR is '{}'.", sm_cxcursor);
    }

    if (!IsUndefined(sm_cxdlgframe))
    {
        spdlog::info("SM_CXDLGFRAME is '{}'.", sm_cxdlgframe);
    }

    if (!IsUndefined(sm_cxdoubleclk))
    {
        spdlog::info("SM_CXDOUBLECLK is '{}'.", sm_cxdoubleclk);
    }

    if (!IsUndefined(sm_cxdrag))
    {
        spdlog::info("SM_CXDRAG is '{}'.", sm_cxdrag);
    }

    if (!IsUndefined(sm_cxedge))
    {
        spdlog::info("SM_CXEDGE is '{}'.", sm_cxedge);
    }

    if (!IsUndefined(sm_cxfixedframe))
    {
        spdlog::info("SM_CXFIXEDFRAME is '{}'.", sm_cxfixedframe);
        spdlog::warn("The value of SM_CXDLGFRAME will be prioritized if set.");
    }

    if (!IsUndefined(sm_cxfocusborder))
    {
        spdlog::info("SM_CXFOCUSBORDER is '{}'.", sm_cxfocusborder);
    }

    if (!IsUndefined(sm_cxframe))
    {
        spdlog::info("SM_CXFRAME is '{}'.", sm_cxframe);
    }

    if (!IsUndefined(sm_cxfullscreen))
    {
        spdlog::info("SM_CXFULLSCREEN is '{}'.", sm_cxfullscreen);
    }

    if (!IsUndefined(sm_cxhscroll))
    {
        spdlog::info("SM_CXHSCROLL is '{}'.", sm_cxhscroll);
    }

    if (!IsUndefined(sm_cxhthumb))
    {
        spdlog::info("SM_CXHTHUMB is '{}'.", sm_cxhthumb);
    }

    if (!IsUndefined(sm_cxicon))
    {
        spdlog::info("SM_CXICON is '{}'.", sm_cxicon);
    }

    if (!IsUndefined(sm_cxiconspacing))
    {
        spdlog::info("SM_CXICONSPACING is '{}'.", sm_cxiconspacing);
    }

    if (!IsUndefined(sm_cxmaximized))
    {
        spdlog::info("SM_CXMAXIMIZED is '{}'.", sm_cxmaximized);
    }

    if (!IsUndefined(sm_cxmaxtrack))
    {
        spdlog::info("SM_CXMAXTRACK is '{}'.", sm_cxmaxtrack);
    }

    if (!IsUndefined(sm_cxmenucheck))
    {
        spdlog::info("SM_CXMENUCHECK is '{}'.", sm_cxmenucheck);
    }

    if (!IsUndefined(sm_cxmenusize))
    {
        spdlog::info("SM_CXMENUSIZE is '{}'.", sm_cxmenusize);
    }

    if (!IsUndefined(sm_cxmin))
    {
        spdlog::info("SM_CXMIN is '{}'.", sm_cxmin);
    }

    if (!IsUndefined(sm_cxminimized))
    {
        spdlog::info("SM_CXMINIMIZED is '{}'.", sm_cxminimized);
    }

    if (!IsUndefined(sm_cxminspacing))
    {
        spdlog::info("SM_CXMINSPACING is '{}'.", sm_cxminspacing);
    }

    if (!IsUndefined(sm_cxmintrack))
    {
        spdlog::info("SM_CXMINTRACK is '{}'.", sm_cxmintrack);
    }

    if (!IsUndefined(sm_cxpaddedborder))
    {
        spdlog::info("SM_CXPADDEDBORDER is '{}'.", sm_cxpaddedborder);
    }

    if (!IsUndefined(sm_cxscreen))
    {
        spdlog::info("SM_CXSCREEN is '{}'.", sm_cxscreen);
    }

    if (!IsUndefined(sm_cxsize))
    {
        spdlog::info("SM_CXSIZE is '{}'.", sm_cxsize);
    }

    if (!IsUndefined(sm_cxsizeframe))
    {
        spdlog::info("SM_CXSIZEFRAME is '{}'.", sm_cxsizeframe);
        spdlog::warn("The value of SM_CXFRAME will be prioritized if set.");
    }

    if (!IsUndefined(sm_cxsmicon))
    {
        spdlog::info("SM_CXSMICON is '{}'.", sm_cxsmicon);
    }

    if (!IsUndefined(sm_cxsmsize))
    {
        spdlog::info("SM_CXSMSIZE is '{}'.", sm_cxsmsize);
    }

    if (!IsUndefined(sm_cxvirtualscreen))
    {
        spdlog::info("SM_CXVIRTUALSCREEN is '{}'.", sm_cxvirtualscreen);
    }

    if (!IsUndefined(sm_cxvscroll))
    {
        spdlog::info("SM_CXVSCROLL is '{}'.", sm_cxvscroll);
    }

    if (!IsUndefined(sm_cyborder))
    {
        spdlog::info("SM_CYBORDER is '{}'.", sm_cyborder);
    }

    if (!IsUndefined(sm_cycaption))
    {
        spdlog::info("SM_CYCAPTION is '{}'.", sm_cycaption);
    }

    if (!IsUndefined(sm_cycursor))
    {
        spdlog::info("SM_CYCURSOR is '{}'.", sm_cycursor);
    }

    if (!IsUndefined(sm_cydlgframe))
    {
        spdlog::info("SM_CYDLGFRAME is '{}'.", sm_cydlgframe);
    }

    if (!IsUndefined(sm_cydoubleclk))
    {
        spdlog::info("SM_CYDOUBLECLK is '{}'.", sm_cydoubleclk);
    }

    if (!IsUndefined(sm_cydrag))
    {
        spdlog::info("SM_CYDRAG is '{}'.", sm_cydrag);
    }

    if (!IsUndefined(sm_cyedge))
    {
        spdlog::info("SM_CYEDGE is '{}'.", sm_cyedge);
    }

    if (!IsUndefined(sm_cyfixedframe))
    {
        spdlog::info("SM_CYFIXEDFRAME is '{}'.", sm_cyfixedframe);
        spdlog::warn("The value of SM_CYDLGFRAME will be prioritized if set.");
    }

    if (!IsUndefined(sm_cyfocusborder))
    {
        spdlog::info("SM_CYFOCUSBORDER is '{}'.", sm_cyfocusborder);
    }

    if (!IsUndefined(sm_cyframe))
    {
        spdlog::info("SM_CYFRAME is '{}'.", sm_cyframe);
    }

    if (!IsUndefined(sm_cyfullscreen))
    {
        spdlog::info("SM_CYFULLSCREEN is '{}'.", sm_cyfullscreen);
    }

    if (!IsUndefined(sm_cyhscroll))
    {
        spdlog::info("SM_CYHSCROLL is '{}'.", sm_cyhscroll);
    }

    if (!IsUndefined(sm_cyicon))
    {
        spdlog::info("SM_CYICON is '{}'.", sm_cyicon);
    }

    if (!IsUndefined(sm_cyiconspacing))
    {
        spdlog::info("SM_CYICONSPACING is '{}'.", sm_cyiconspacing);
    }

    if (!IsUndefined(sm_cykanjiwindow))
    {
        spdlog::info("SM_CYKANJIWINDOW is '{}'.", sm_cykanjiwindow);
    }

    if (!IsUndefined(sm_cymaximized))
    {
        spdlog::info("SM_CYMAXIMIZED is '{}'.", sm_cymaximized);
    }

    if (!IsUndefined(sm_cymaxtrack))
    {
        spdlog::info("SM_CYMAXTRACK is '{}'.", sm_cymaxtrack);
    }

    if (!IsUndefined(sm_cymenu))
    {
        spdlog::info("SM_CYMENU is '{}'.", sm_cymenu);
    }

    if (!IsUndefined(sm_cymenucheck))
    {
        spdlog::info("SM_CYMENUCHECK is '{}'.", sm_cymenucheck);
    }

    if (!IsUndefined(sm_cymenusize))
    {
        spdlog::info("SM_CYMENUSIZE is '{}'.", sm_cymenusize);
    }

    if (!IsUndefined(sm_cymin))
    {
        spdlog::info("SM_CYMIN is '{}'.", sm_cymin);
    }

    if (!IsUndefined(sm_cyminimized))
    {
        spdlog::info("SM_CYMINIMIZED is '{}'.", sm_cyminimized);
    }

    if (!IsUndefined(sm_cyminspacing))
    {
        spdlog::info("SM_CYMINSPACING is '{}'.", sm_cyminspacing);
    }

    if (!IsUndefined(sm_cymintrack))
    {
        spdlog::info("SM_CYMINTRACK is '{}'.", sm_cymintrack);
    }

    if (!IsUndefined(sm_cyscreen))
    {
        spdlog::info("SM_CYSCREEN is '{}'.", sm_cyscreen);
    }

    if (!IsUndefined(sm_cysize))
    {
        spdlog::info("SM_CYSIZE is '{}'.", sm_cysize);
    }

    if (!IsUndefined(sm_cysizeframe))
    {
        spdlog::info("SM_CYSIZEFRAME is '{}'.", sm_cysizeframe);
        spdlog::warn("The value of SM_CYFRAME will be prioritized if set.");
    }

    if (!IsUndefined(sm_cysmcaption))
    {
        spdlog::info("SM_CYSMCAPTION is '{}'.", sm_cysmcaption);
    }

    if (!IsUndefined(sm_cysmicon))
    {
        spdlog::info("SM_CYSMICON is '{}'.", sm_cysmicon);
    }

    if (!IsUndefined(sm_cysmsize))
    {
        spdlog::info("SM_CYSMSIZE is '{}'.", sm_cysmsize);
    }

    if (!IsUndefined(sm_cyvirtualscreen))
    {
        spdlog::info("SM_CYVIRTUALSCREEN is '{}'.", sm_cyvirtualscreen);
    }

    if (!IsUndefined(sm_cyvscroll))
    {
        spdlog::info("SM_CYVSCROLL is '{}'.", sm_cyvscroll);
    }

    if (!IsUndefined(sm_cyvthumb))
    {
        spdlog::info("SM_CYVTHUMB is '{}'.", sm_cyvthumb);
    }

    if (!IsUndefined(sm_dbcsenabled))
    {
        spdlog::info("SM_DBCSENABLED is '{}'.", sm_dbcsenabled);
    }

    if (!IsUndefined(sm_debug))
    {
        spdlog::info("SM_DEBUG is '{}'.", sm_debug);
    }

    if (!IsUndefined(sm_digitizer))
    {
        spdlog::info("SM_DIGITIZER is '{}'.", sm_digitizer);
    }

    if (!IsUndefined(sm_immenabled))
    {
        spdlog::info("SM_IMMENABLED is '{}'.", sm_immenabled);
    }

    if (!IsUndefined(sm_maximumtouches))
    {
        spdlog::info("SM_MAXIMUMTOUCHES is '{}'.", sm_maximumtouches);
    }

    if (!IsUndefined(sm_mediacenter))
    {
        spdlog::info("SM_MEDIACENTER is '{}'.", sm_mediacenter);
    }

    if (!IsUndefined(sm_menudropalignment))
    {
        spdlog::info("SM_MENUDROPALIGNMENT is '{}'.", sm_menudropalignment);
    }

    if (!IsUndefined(sm_mideastenabled))
    {
        spdlog::info("SM_MIDEASTENABLED is '{}'.", sm_mideastenabled);
    }

    if (!IsUndefined(sm_mousepresent))
    {
        spdlog::info("SM_MOUSEPRESENT is '{}'.", sm_mousepresent);
    }

    if (!IsUndefined(sm_mousehorizontalwheelpresent))
    {
        spdlog::info("SM_MOUSEHORIZONTALWHEELPRESENT is '{}'.", sm_mousehorizontalwheelpresent);
    }

    if (!IsUndefined(sm_mousewheelpresent))
    {
        spdlog::info("SM_MOUSEWHEELPRESENT is '{}'.", sm_mousewheelpresent);
    }

    if (!IsUndefined(sm_network))
    {
        spdlog::info("SM_NETWORK is '{}'.", sm_network);
    }

    if (!IsUndefined(sm_penwindows))
    {
        spdlog::info("SM_PENWINDOWS is '{}'.", sm_penwindows);
    }

    if (!IsUndefined(sm_remotecontrol))
    {
        spdlog::info("SM_REMOTECONTROL is '{}'.", sm_remotecontrol);
    }

    if (!IsUndefined(sm_remotesession))
    {
        spdlog::info("SM_REMOTESESSION is '{}'.", sm_remotesession);
    }

    if (!IsUndefined(sm_samedisplayformat))
    {
        spdlog::info("SM_SAMEDISPLAYFORMAT is '{}'.", sm_samedisplayformat);
    }

    if (!IsUndefined(sm_secure))
    {
        spdlog::info("SM_SECURE is '{}'.", sm_secure);
    }

    if (!IsUndefined(sm_serverr2))
    {
        spdlog::info("SM_SERVERR2 is '{}'.", sm_serverr2);
    }

    if (!IsUndefined(sm_showsounds))
    {
        spdlog::info("SM_SHOWSOUNDS is '{}'.", sm_showsounds);
    }

    if (!IsUndefined(sm_shuttingdown))
    {
        spdlog::info("SM_SHUTTINGDOWN is '{}'.", sm_shuttingdown);
    }

    if (!IsUndefined(sm_slowmachine))
    {
        spdlog::info("SM_SLOWMACHINE is '{}'.", sm_slowmachine);
    }

    if (!IsUndefined(sm_starter))
    {
        spdlog::info("SM_STARTER is '{}'.", sm_starter);
    }

    if (!IsUndefined(sm_swapbutton))
    {
        spdlog::info("SM_SWAPBUTTON is '{}'.", sm_swapbutton);
    }

    if (!IsUndefined(sm_systemdocked))
    {
        spdlog::info("SM_SYSTEMDOCKED is '{}'.", sm_systemdocked);
    }

    if (!IsUndefined(sm_tabletpc))
    {
        spdlog::info("SM_TABLETPC is '{}'.", sm_tabletpc);
    }

    if (!IsUndefined(sm_xvirtualscreen))
    {
        spdlog::info("SM_XVIRTUALSCREEN is '{}'.", sm_xvirtualscreen);
    }

    if (!IsUndefined(sm_yvirtualscreen))
    {
        spdlog::info("SM_YVIRTUALSCREEN is '{}'.", sm_yvirtualscreen);
    }
}

int Settings::GetByFlag(int& flag)
{
    switch (flag)
    {
    case SM_ARRANGE:
        return sm_arrange;

    case SM_CLEANBOOT:
        return sm_cleanboot;

    case SM_CMONITORS:
        return sm_cmonitors;

    case SM_CMOUSEBUTTONS:
        return sm_cmousebuttons;

    case SM_CONVERTIBLESLATEMODE:
        return sm_convertibleslatemode;

    case SM_CXBORDER:
        return sm_cxborder;

    case SM_CXCURSOR:
        return sm_cxcursor;

    case SM_CXDLGFRAME:
        return !IsUndefined(sm_cxdlgframe) ? sm_cxdlgframe : sm_cxfixedframe;

    case SM_CXDOUBLECLK:
        return sm_cxdoubleclk;

    case SM_CXDRAG:
        return sm_cxdrag;

    case SM_CXEDGE:
        return sm_cxedge;

    case SM_CXFOCUSBORDER:
        return sm_cxfocusborder;

    case SM_CXFRAME:
        return !IsUndefined(sm_cxframe) ? sm_cxframe : sm_cxsizeframe;

    case SM_CXFULLSCREEN:
        return sm_cxfullscreen;

    case SM_CXHSCROLL:
        return sm_cxhscroll;

    case SM_CXHTHUMB:
        return sm_cxhthumb;

    case SM_CXICON:
        return sm_cxicon;

    case SM_CXICONSPACING:
        return sm_cxiconspacing;

    case SM_CXMAXIMIZED:
        return sm_cxmaximized;

    case SM_CXMAXTRACK:
        return sm_cxmaxtrack;

    case SM_CXMENUCHECK:
        return sm_cxmenucheck;

    case SM_CXMENUSIZE:
        return sm_cxmenusize;

    case SM_CXMIN:
        return sm_cxmin;

    case SM_CXMINIMIZED:
        return sm_cxminimized;

    case SM_CXMINSPACING:
        return sm_cxminspacing;

    case SM_CXMINTRACK:
        return sm_cxmintrack;

    case SM_CXPADDEDBORDER:
        return sm_cxpaddedborder;

    case SM_CXSCREEN:
        return sm_cxscreen;

    case SM_CXSIZE:
        return sm_cxsize;

    case SM_CXSMICON:
        return sm_cxsmicon;

    case SM_CXSMSIZE:
        return sm_cxsmsize;

    case SM_CXVIRTUALSCREEN:
        return sm_cxvirtualscreen;

    case SM_CXVSCROLL:
        return sm_cxvscroll;

    case SM_CYBORDER:
        return sm_cyborder;

    case SM_CYCAPTION:
        return sm_cycaption;

    case SM_CYCURSOR:
        return sm_cycursor;

    case SM_CYDLGFRAME:
        return !IsUndefined(sm_cydlgframe) ? sm_cydlgframe : sm_cyfixedframe;

    case SM_CYDOUBLECLK:
        return sm_cydoubleclk;

    case SM_CYDRAG:
        return sm_cydrag;

    case SM_CYEDGE:
        return sm_cyedge;

    case SM_CYFOCUSBORDER:
        return sm_cyfocusborder;

    case SM_CYFRAME:
        return !IsUndefined(sm_cyframe) ? sm_cyframe : sm_cysizeframe;

    case SM_CYFULLSCREEN:
        return sm_cyfullscreen;

    case SM_CYHSCROLL:
        return sm_cyhscroll;

    case SM_CYICON:
        return sm_cyicon;

    case SM_CYICONSPACING:
        return sm_cyiconspacing;

    case SM_CYKANJIWINDOW:
        return sm_cykanjiwindow;

    case SM_CYMAXIMIZED:
        return sm_cymaximized;

    case SM_CYMAXTRACK:
        return sm_cymaxtrack;

    case SM_CYMENU:
        return sm_cymenu;

    case SM_CYMENUCHECK:
        return sm_cymenucheck;

    case SM_CYMENUSIZE:
        return sm_cymenusize;

    case SM_CYMIN:
        return sm_cymin;

    case SM_CYMINIMIZED:
        return sm_cyminimized;

    case SM_CYMINSPACING:
        return sm_cyminspacing;

    case SM_CYMINTRACK:
        return sm_cymintrack;

    case SM_CYSCREEN:
        return sm_cyscreen;

    case SM_CYSIZE:
        return sm_cysize;

    case SM_CYSMCAPTION:
        return sm_cysmcaption;

    case SM_CYSMICON:
        return sm_cysmicon;

    case SM_CYSMSIZE:
        return sm_cysmsize;

    case SM_CYVIRTUALSCREEN:
        return sm_cyvirtualscreen;

    case SM_CYVSCROLL:
        return sm_cyvscroll;

    case SM_CYVTHUMB:
        return sm_cyvthumb;

    case SM_DBCSENABLED:
        return sm_dbcsenabled;

    case SM_DEBUG:
        return sm_debug;

    case SM_DIGITIZER:
        return sm_digitizer;

    case SM_IMMENABLED:
        return sm_immenabled;

    case SM_MAXIMUMTOUCHES:
        return sm_maximumtouches;

    case SM_MEDIACENTER:
        return sm_mediacenter;

    case SM_MENUDROPALIGNMENT:
        return sm_menudropalignment;

    case SM_MIDEASTENABLED:
        return sm_mideastenabled;

    case SM_MOUSEPRESENT:
        return sm_mousepresent;

    case SM_MOUSEHORIZONTALWHEELPRESENT:
        return sm_mousehorizontalwheelpresent;

    case SM_MOUSEWHEELPRESENT:
        return sm_mousewheelpresent;

    case SM_NETWORK:
        return sm_network;

    case SM_PENWINDOWS:
        return sm_penwindows;

    case SM_REMOTECONTROL:
        return sm_remotecontrol;

    case SM_REMOTESESSION:
        return sm_remotesession;

    case SM_SAMEDISPLAYFORMAT:
        return sm_samedisplayformat;

    case SM_SECURE:
        return sm_secure;

    case SM_SERVERR2:
        return sm_serverr2;

    case SM_SHOWSOUNDS:
        return sm_showsounds;

    case SM_SHUTTINGDOWN:
        return sm_shuttingdown;

    case SM_SLOWMACHINE:
        return sm_slowmachine;

    case SM_STARTER:
        return sm_starter;

    case SM_SWAPBUTTON:
        return sm_swapbutton;

    case SM_SYSTEMDOCKED:
        return sm_systemdocked;

    case SM_TABLETPC:
        return sm_tabletpc;

    case SM_XVIRTUALSCREEN:
        return sm_xvirtualscreen;

    case SM_YVIRTUALSCREEN:
        return sm_yvirtualscreen;
    }

    return UNDEFINED;
}
