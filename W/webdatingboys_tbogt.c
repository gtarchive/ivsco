void main()
{
    l_U10 = 0;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "LOVEMTM", 1 );
    g_U864._fU324 = 0;
    sub_56();
    sub_266();
    sub_1999( ref l_U25._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        if (g_U858._fU12 != -1)
        {
            sub_2380( ref g_U838, "www.love-meet.net/profile.html", 1, g_U858._fU12, -1 );
            g_U837 = 1;
        }
    }
    sub_2452();
    g_U864._fU16 = 0;
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
        l_U11 = LOAD_TXD( "WebDatingMales" );
        for ( I = 0; I <= (l_U12 - 1); I++ )
        {
            sub_133( ref uVar3, "fullFace", I, -1, -1 );
            l_U12[I] = GET_TEXTURE( l_U11, ref uVar3 );
        }
        l_U10 = 1;
    }
    return;
}

void sub_133(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_266()
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
    if (g_U1437[0])
    {
        iVar10[0] = 0;
    }
    else
    {
        iVar10[0] = 11;
    }
    if (g_U1437[1])
    {
        iVar10[1] = 1;
    }
    else
    {
        iVar10[1] = 10;
    }
    if (g_U1437[2])
    {
        iVar10[2] = 2;
    }
    else
    {
        iVar10[2] = 9;
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
        sub_133( ref uVar6, "miniProfile", I, -1, -1 );
        l_U0[I] = CREATE_HTML_SCRIPT_OBJECT( ref uVar6 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<table width="176" height="289" border="0" cellpadding="0" cellspacing="6" bgcolor="#CCCCCC">" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="189" align="left" valign="top" bgcolor="#999999" scope="col">" );
        sub_133( ref uVar6, "fullFace", iVar10[I], -1, -1 );
        sub_821( ref l_U0[I], "webDatingMales", ref uVar6, 164, 189, iVar10[I] );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="20" align="center" valign="middle" scope="col"><span class="info">" );
        sub_133( ref uVar6, "LM_M_USER", iVar10[I], -1, -1 );
        sub_1300( ref l_U0[I], ref uVar6, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</span></td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="20" align="center" valign="middle" scope="col"><span class="style4">" );
        sub_133( ref uVar6, "LM_M_AGE", iVar10[I], -1, -1 );
        sub_1300( ref l_U0[I], ref uVar6, -1 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</span></td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "<td width="164" height="30" align="center" valign="middle" bgcolor="#d385b7" class="style3" scope="col">" );
        sub_1300( ref l_U0[I], "LM_INFO_MORE", iVar10[I] );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</td>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</tr>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U0[I], "</table>" );
    }
    return;
}

void sub_821(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, int iParam5)
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

void sub_1300(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1999(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_2010( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U864._fU4, uParam0 );
        StrCopy( ref g_U864._fU168, uParam0, 64 );
        g_U864._fU164 = 1;
    }
    sub_2148();
    return;
}

void sub_2010(boolean bParam0)
{
    if (bParam0)
    {
        g_U864._fU20 = g_U949;
    }
    else
    {
        g_U864._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
    return;
}

void sub_2148()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U864._fU4 );
    if (fVar2 > (g_U948 - (g_U946 * g_U948)))
    {
        g_U864._fU28 = 1;
        g_U864._fU32 = (1.00000000 - g_U946) / fVar2;
        g_U864._fU36 = (1.00000000 - g_U946) * ((g_U948 - (g_U946 * g_U948)) / fVar2);
    }
    else
    {
        g_U864._fU28 = 0;
    }
    return;
}

void sub_2380(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}

void sub_2452()
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
