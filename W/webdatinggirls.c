void main()
{
    l_U10 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    g_U857._fU324 = 0;
    LOAD_ADDITIONAL_TEXT( "LOVEMTF", 1 );
    sub_56();
    sub_268();
    sub_1978( ref l_U25._fU0, 1, 0 );
    while (NOT g_U857._fU16)
    {
        WAIT( 0 );
        if (g_U851._fU12 != -1)
        {
            sub_2359( ref g_U831, "www.love-meet.net/profile.html", 0, g_U851._fU12, -1 );
            g_U830 = 1;
        }
    }
    sub_2431();
    g_U857._fU16 = 0;
    return;
}

void sub_56()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT l_U10)
    {
        l_U11 = LOAD_TXD( "WebDatingFemales" );
        for ( I = 0; I <= (l_U12 - 1); I++ )
        {
            sub_135( ref uVar3, "fullFace", I, -1, -1 );
            l_U12[I] = GET_TEXTURE( l_U11, ref uVar3 );
        }
        l_U10 = 1;
    }
    return;
}

void sub_135(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_268()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int[9] iVar10;

    array(ref iVar10, 9);
    iVar10[0] = 9;
    if (g_U1426[1])
    {
        iVar10[1] = 1;
    }
    else
    {
        iVar10[1] = 10;
    }
    if (g_U1426[2])
    {
        iVar10[2] = 2;
    }
    else
    {
        iVar10[2] = 11;
    }
    for ( I = 3; I <= 8; I++ )
    {
        iVar10[I] = I;
    }
    for ( I = 0; I <= 8; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( I, 9, ref uVar4 );
        uVar5 = iVar10[I];
        iVar10[I] = iVar10[uVar4];
        iVar10[uVar4] = uVar5;
    }
    for ( I = 0; I <= 8; I++ )
    {
        sub_135( ref uVar6, "miniProfile", I, -1, -1 );
        l_U0[I] = CREATE_HTML_SCRIPT_OBJECT( ref uVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<table width="176" height="289" border="0" cellpadding="0" cellspacing="6" bgcolor="#CCCCCC">" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="189" align="left" valign="top" bgcolor="#999999" scope="col">" );
        sub_135( ref uVar6, "fullFace", iVar10[I], -1, -1 );
        sub_800( ref l_U0[I], "webDatingFemales", ref uVar6, 164, 189, iVar10[I] );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="20" align="center" valign="middle" scope="col"><span class="info">" );
        sub_135( ref uVar6, "LM_F_USER", iVar10[I], -1, -1 );
        sub_1279( ref l_U0[I], ref uVar6, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</span></td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="20" align="center" valign="middle" scope="col"><span class="style4">" );
        sub_135( ref uVar6, "LM_F_AGE", iVar10[I], -1, -1 );
        sub_1279( ref l_U0[I], ref uVar6, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</span></td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="30" align="center" valign="middle" bgcolor="#d385b7" class="style3" scope="col">" );
        sub_1279( ref l_U0[I], "LM_INFO_MORE", iVar10[I] );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</table>" );
    }
    return;
}

void sub_800(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
{
    char[16] cVar8;

    string(ref cVar8, iParam5, 16);
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img txd="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" src="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam2 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar8, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar8, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam5 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_1279(unknown uParam0, unknown uParam1, int iParam2)
{
    char[16] cVar5;

    string(ref cVar5, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar5 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_1978(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_1989( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U857._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U857._fU4, uParam0 );
        StrCopy( ref g_U857._fU168, uParam0, 64 );
        g_U857._fU164 = 1;
    }
    sub_2127();
    return;
}

void sub_1989(boolean bParam0)
{
    if (bParam0)
    {
        g_U857._fU20 = g_U942;
    }
    else
    {
        g_U857._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U857._fU4, g_U857._fU20 );
    return;
}

void sub_2127()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U857._fU4 );
    if (fVar2 > (g_U941 - (g_U939 * g_U941)))
    {
        g_U857._fU28 = 1;
        g_U857._fU32 = (1.00000000 - g_U939) / fVar2;
        g_U857._fU36 = (1.00000000 - g_U939) * ((g_U941 - (g_U939 * g_U941)) / fVar2);
    }
    else
    {
        g_U857._fU28 = 0;
    }
    return;
}

void sub_2359(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_2431()
{
    int I;

    if (l_U10)
    {
        for ( I = 0; I <= (l_U12 - 1); I++ )
        {
            RELEASE_TEXTURE( l_U12[I] );
        }
        REMOVE_TXD( l_U11 );
        l_U10 = 0;
    }
    return;
}
