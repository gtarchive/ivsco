void main()
{
    int iVar2;
    int iVar3;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    GET_GAME_TIMER( ref l_U11 );
    iVar2 = 1;
    while (true)
    {
        WAIT( 0 );
        sub_66();
        if ((sub_763( ref l_U4 )) == 3)
        {
            g_U15654[16] = 1;
            TERMINATE_THIS_SCRIPT();
        }
        iVar3 = 0;
        GET_GAME_TIMER( ref iVar3 );
        if (l_U11 < iVar3)
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                if ((((sub_1052( 25000 )) AND (NOT g_U10978)) AND (NOT g_U9893._fU12)) AND (sub_1881( 0, 30000 )))
                {
                    if (l_U13)
                    {
                        sub_1958();
                        l_U11 = iVar3 + 600000;
                    }
                    else
                    {
                        sub_3758();
                        l_U11 = iVar3 + 20000;
                    }
                }
                else
                {
                    l_U11 = iVar3 + 5000;
                }
            }
            else
            {
                l_U11 = iVar3 + 2000;
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_66()
{
    int iVar2;

    if (l_U12)
    {
        return;
    }
    if (NOT g_U15654[34])
    {
        return;
    }
    l_U12 = 1;
    sub_109();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U11 = iVar2 + 5000;
    return;
}

void sub_109()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_147( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_147( 1, g_U569[I] )) != 0)
            {
                sub_433( I );
            }
        }
    }
    if (NOT sub_599())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_147(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_433(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_518( g_U569 - 1 );
    return;
}

void sub_518(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_599()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_147( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_763(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_816( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_147( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

int sub_816(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_147( 0, uParam0 );
        if (iVar14 == (sub_147( 0, uParam6 )))
        {
            iVar15 = sub_147( 3, uParam0 );
            if (iVar15 == (sub_147( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1052(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( sub_1061() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if ((g_U9893._fU4) AND (NOT g_U9893._fU8))
    {
        return 0;
    }
    if (g_U91._fU104)
    {
        return 0;
    }
    if (sub_1166())
    {
        return 0;
    }
    if (sub_1209())
    {
        return 0;
    }
    if (sub_1414())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_1468( uParam0 ))
    {
        return 0;
    }
    return 1;
}

void sub_1061()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1166()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1209()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U15436[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 23; I++ )
    {
        if (g_U22274[I]._fU68)
        {
            return 1;
        }
        if (g_U22274[I]._fU500._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 13; I++ )
    {
        if (g_U15807[I]._fU0)
        {
            if (g_U15807[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1414()
{
    if (g_U9078)
    {
        return 1;
    }
    return 0;
}

int sub_1468(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_1488())
    {
        return 1;
    }
    if (sub_1523())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_1594( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_1743( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U63988._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_1488()
{
    return g_U91._fU540;
}

int sub_1523()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U63988._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_1594(int iParam0)
{
    int iVar3;

    iVar3 = sub_1603();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_1658();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_1603()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1658()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1743(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U63988._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

boolean sub_1881(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (iParam0 < 57))
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = g_U26671[iParam0] + iParam1;
    return iVar5 < iVar4;
}

void sub_1958()
{
    unknown uVar2;
    int iVar3;

    uVar2 = sub_1968( 0 );
    iVar3 = 17;
    if (l_U12)
    {
        iVar3 = 52;
    }
    sub_2495( uVar2, iVar3, 16383, 16383, ref l_U4 );
    sub_2840( ref l_U4, 1 );
    sub_2869( ref l_U4, 0 );
    if (l_U12)
    {
        sub_2906( ref l_U4, 2 );
    }
    sub_2937( ref l_U4 );
    sub_3596();
    sub_3675( 0, 0 );
    sub_3758();
    return;
}

int sub_1968(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_2428( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_2428(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2495(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_2517( uParam0, 0, iParam4 + 0 );
    sub_2517( uParam1, 1, iParam4 + 0 );
    sub_2517( uParam2, 2, iParam4 + 0 );
    sub_2517( uParam3, 3, iParam4 + 0 );
    sub_2517( 0, 4, iParam4 + 0 );
    sub_2517( 1, 5, iParam4 + 0 );
    sub_2517( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_2517(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_2840(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_2869(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_2906(int iParam0, unknown uParam1)
{
    sub_2517( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_2937(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_3007())
        {
            sub_433( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_3134( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_433( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_147( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_147( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_3007()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_147( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_433( I );
            return 1;
        }
    }
    return 0;
}

int sub_3134(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_816( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

void sub_3596()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1603();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_3675(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_3758()
{
    g_U15654[10] = 1;
    l_U13 = 1;
    return;
}
