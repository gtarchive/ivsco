void main()
{
    int iVar2;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U19 = 0;
    l_U20 = 0;
    l_U21 = 0;
    l_U22 = nil;
    l_U23 = nil;
    l_U24 = nil;
    l_U25 = nil;
    l_U26 = 0;
    l_U27 = 0;
    l_U28 = 0;
    l_U29 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = nil;
    l_U43 = nil;
    l_U44 = nil;
    l_U45 = nil;
    l_U46 = 100;
    l_U47 = 100;
    l_U48 = 100;
    l_U49 = 100;
    l_U50 = 1;
    l_U51 = 0;
    l_U52 = 0;
    l_U53 = 0;
    l_U54 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U30 = {-707.87050000, 356.89070000, 3.07160000};
    l_U33 = {64.37280000, -848.18800000, 3.94290000};
    l_U36 = {-38.50610000, 792.72500000, 13.56290000};
    while (true)
    {
        WAIT( 0 );
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            l_U19 = 0;
            l_U20 = 0;
            l_U21 = 0;
            l_U22 = nil;
            l_U23 = nil;
            l_U24 = nil;
            l_U25 = nil;
            l_U26 = 0;
            l_U27 = 0;
            l_U28 = 0;
            l_U29 = 0;
        }
        if (IS_PLAYER_PLAYING( sub_358() ))
        {
            sub_401();
            sub_481();
            sub_1784();
            sub_2563();
            sub_4539();
            if (((NOT l_U19) AND (NOT l_U20)) AND (NOT l_U21))
            {
                iVar2 = 0;
                if (l_U26)
                {
                    iVar2 = sub_887();
                }
                if (l_U27)
                {
                    iVar2 = sub_1226();
                }
                if (l_U28)
                {
                    iVar2 = sub_2122();
                }
                if (l_U29)
                {
                    iVar2 = sub_2889();
                }
            }
        }
        if (NOT l_U54)
        {
            if ((g_U15811[68]) AND (g_U15811[42]))
            {
                sub_5310( 3, 2, 2, 30000 );
                l_U54 = 1;
            }
        }
    }
    return;
}

void sub_358()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_401()
{
    if (g_U15811[70])
    {
        l_U39 = 1;
    }
    if (g_U15811[71])
    {
        l_U40 = 1;
    }
    if (g_U15811[72])
    {
        l_U41 = 1;
    }
    return;
}

void sub_481()
{
    boolean bVar2;

    if (g_U15811[70])
    {
        if (l_U19)
        {
            sub_513();
            l_U19 = 0;
        }
        return;
    }
    bVar2 = LOCATE_CHAR_ANY_MEANS_3D( sub_637(), l_U30._fU0, l_U30._fU4, l_U30._fU8, 200.00000000, 200.00000000, 200.00000000, 0 );
    if (bVar2)
    {
        if (NOT l_U19)
        {
            if (sub_734())
            {
                l_U19 = 1;
            }
        }
        else
        {
            sub_1459();
        }
        return;
    }
    if (l_U19)
    {
        sub_513();
        l_U19 = 0;
        l_U39 = 0;
    }
    return;
}

void sub_513()
{
    sub_522();
    sub_572();
    return;
}

void sub_522()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U22 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U22 );
    l_U22 = nil;
    return;
}

void sub_572()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U23 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U23 );
    l_U23 = nil;
    return;
}

void sub_637()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_734()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U39)
    {
        return 1;
    }
    uVar2 = sub_778( -707.87050000, 356.89070000, 3.07160000, 175.34310000 );
    uVar3 = sub_1098( -707.87050000, 356.89070000, 3.07160000, 175.34310000 );
    if ((uVar2) AND (uVar3))
    {
        return 1;
    }
    return 0;
}

int sub_778(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15811[66])
    {
        return 1;
    }
    if (g_U15811[70])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U22 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_637(), -339587598 ))
    {
        return 1;
    }
    REQUEST_MODEL( -339587598 );
    l_U26 = 1;
    if (NOT sub_887())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( -339587598, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U22, 1 );
    SET_CAR_HEADING( l_U22, uParam3 );
    TURN_OFF_VEHICLE_EXTRA( l_U22, 7, 1 );
    TURN_OFF_VEHICLE_EXTRA( l_U22, 8, 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U22 );
    SET_VEHICLE_DIRT_LEVEL( l_U22, 0.00000000 );
    return 1;
}

int sub_887()
{
    if (HAS_MODEL_LOADED( -339587598 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -339587598 );
        l_U26 = 0;
        return 1;
    }
    return 0;
}

int sub_1098(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15811[67])
    {
        return 1;
    }
    if (g_U15811[70])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U23 ))
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U22 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_637(), 788747387 ))
    {
        return 1;
    }
    REQUEST_MODEL( 788747387 );
    l_U27 = 1;
    if (NOT sub_1226())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( 788747387, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U23, 1 );
    SET_CAR_HEADING( l_U23, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( l_U23 );
    CHANGE_CAR_COLOUR( l_U23, 136, 136 );
    SET_EXTRA_CAR_COLOURS( l_U23, 136, 0 );
    SET_VEHICLE_DIRT_LEVEL( l_U23, 0.00000000 );
    return 1;
}

int sub_1226()
{
    if (HAS_MODEL_LOADED( 788747387 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 788747387 );
        l_U27 = 0;
        return 1;
    }
    return 0;
}

void sub_1459()
{
    sub_1468();
    return;
}

void sub_1468()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U23 )))
    {
        return;
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U23 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_358() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_637() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_637(), l_U23 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U23 );
    if (l_U51)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U43 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U43 );
    }
    l_U51 = 1;
    if (NOT sub_1636())
    {
        return;
    }
    PRINT_HELP( "buzzardPU" );
    return;
}

int sub_1636()
{
    if (g_U12379)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_358() )))
    {
        return 0;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    return 1;
}

void sub_1784()
{
    boolean bVar2;

    if ((g_U15811[71]) || (NOT g_U15811[42]))
    {
        if (l_U20)
        {
            sub_1828();
            l_U20 = 0;
        }
        return;
    }
    bVar2 = LOCATE_CHAR_ANY_MEANS_3D( sub_637(), l_U33._fU0, l_U33._fU4, l_U33._fU8, 200.00000000, 200.00000000, 200.00000000, 0 );
    if (bVar2)
    {
        if (NOT l_U20)
        {
            if (sub_1969())
            {
                l_U20 = 1;
            }
        }
        else
        {
            sub_2307();
        }
        return;
    }
    if (l_U20)
    {
        sub_1828();
        l_U20 = 0;
        l_U40 = 0;
    }
    return;
}

void sub_1828()
{
    sub_1837();
    return;
}

void sub_1837()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U24 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U24 );
    l_U24 = nil;
    return;
}

int sub_1969()
{
    boolean bVar2;

    if (l_U40)
    {
        return 1;
    }
    bVar2 = sub_2013( 64.37280000, -848.18800000, 3.94290000, 300.30780000 );
    if (bVar2)
    {
        return 1;
    }
    return 0;
}

int sub_2013(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15811[68])
    {
        return 1;
    }
    if (g_U15811[71])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U24 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_637(), 562680400 ))
    {
        return 1;
    }
    REQUEST_MODEL( 562680400 );
    l_U28 = 1;
    if (NOT sub_2122())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( 562680400, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U24, 1 );
    SET_CAR_HEADING( l_U24, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( l_U24 );
    return 1;
}

int sub_2122()
{
    if (HAS_MODEL_LOADED( 562680400 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 562680400 );
        l_U28 = 0;
        return 1;
    }
    return 0;
}

void sub_2307()
{
    sub_2316();
    return;
}

void sub_2316()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U24 )))
    {
        return;
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U24 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_358() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_637() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_637(), l_U24 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U24 );
    if (l_U52)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U44 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U44 );
    }
    l_U52 = 1;
    if (NOT sub_1636())
    {
        return;
    }
    PRINT_HELP( "apcPU" );
    return;
}

void sub_2563()
{
    boolean bVar2;

    if (g_U15811[72])
    {
        if (l_U21)
        {
            sub_2595();
            l_U21 = 0;
        }
        return;
    }
    bVar2 = LOCATE_CHAR_ANY_MEANS_3D( sub_637(), l_U36._fU0, l_U36._fU4, l_U36._fU8, 200.00000000, 200.00000000, 200.00000000, 0 );
    if (bVar2)
    {
        if (NOT l_U21)
        {
            if (sub_2736())
            {
                l_U21 = 1;
            }
        }
        else
        {
            sub_4142();
        }
        return;
    }
    if (l_U21)
    {
        sub_2595();
        l_U21 = 0;
        l_U41 = 0;
    }
    return;
}

void sub_2595()
{
    sub_2604();
    return;
}

void sub_2604()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U25 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
    l_U25 = nil;
    return;
}

int sub_2736()
{
    boolean bVar2;

    if (l_U41)
    {
        return 1;
    }
    bVar2 = sub_2780( -38.50610000, 792.72500000, 13.56290000, 0.00000000 );
    if (bVar2)
    {
        return 1;
    }
    return 0;
}

int sub_2780(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT g_U15811[69])
    {
        return 1;
    }
    if (g_U15811[72])
    {
        return 1;
    }
    if (DOES_VEHICLE_EXIST( l_U25 ))
    {
        return 1;
    }
    if (IS_CHAR_IN_MODEL( sub_637(), 1638119866 ))
    {
        return 1;
    }
    REQUEST_MODEL( 1638119866 );
    l_U29 = 1;
    if (NOT sub_2889())
    {
        return 0;
    }
    CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 5.00000000, 0 );
    CREATE_CAR( 1638119866, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U25, 1 );
    SET_CAR_HEADING( l_U25, uParam3 );
    SET_CAR_ON_GROUND_PROPERLY( l_U25 );
    sub_3033( l_U25, 2 );
    return 1;
}

int sub_2889()
{
    if (HAS_MODEL_LOADED( 1638119866 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1638119866 );
        l_U29 = 0;
        return 1;
    }
    return 0;
}

void sub_3033(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_637() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_637() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_637() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_637() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_637() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_637() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_637() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_637() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_4142()
{
    sub_4151();
    return;
}

void sub_4151()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U25 )))
    {
        return;
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U25 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_358() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_637() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_637(), l_U25 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
    if (l_U53)
    {
        return;
    }
    if (DOES_BLIP_EXIST( l_U45 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U45 );
    }
    GIVE_WEAPON_TO_CHAR( sub_637(), 33, 750, 0 );
    SET_CURRENT_CHAR_WEAPON( sub_637(), 33, 1 );
    sub_4357( 8, 30000, 60000 );
    l_U53 = 1;
    if (NOT sub_1636())
    {
        return;
    }
    PRINT_HELP( "superD2PU" );
    return;
}

void sub_4357(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_4539()
{
    sub_4548();
    sub_4750();
    sub_4970();
    return;
}

void sub_4548()
{
    if (l_U51)
    {
        return;
    }
    if (NOT g_U15811[67])
    {
        return;
    }
    if ((g_U15811[70]) || (l_U39))
    {
        if (DOES_BLIP_EXIST( l_U43 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U43 );
        }
        return;
    }
    if (DOES_BLIP_EXIST( l_U43 ))
    {
        return;
    }
    ADD_BLIP_FOR_CONTACT( l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U43 );
    CHANGE_BLIP_SPRITE( l_U43, l_U47 );
    CHANGE_BLIP_DISPLAY( l_U43, 2 );
    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U43, "BLIP_YHELI" );
    return;
}

void sub_4750()
{
    if (l_U52)
    {
        return;
    }
    if (NOT g_U15811[68])
    {
        return;
    }
    if (((g_U15811[71]) || (NOT g_U15811[42])) || (l_U40))
    {
        if (DOES_BLIP_EXIST( l_U44 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U44 );
        }
        return;
    }
    if (DOES_BLIP_EXIST( l_U44 ))
    {
        return;
    }
    ADD_BLIP_FOR_CONTACT( l_U33._fU0, l_U33._fU4, l_U33._fU8, ref l_U44 );
    CHANGE_BLIP_SPRITE( l_U44, l_U48 );
    CHANGE_BLIP_DISPLAY( l_U44, 2 );
    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U44, "BLIP_YTANK" );
    return;
}

void sub_4970()
{
    if (l_U53)
    {
        return;
    }
    if (NOT g_U15811[69])
    {
        return;
    }
    if ((g_U15811[72]) || (l_U41))
    {
        if (DOES_BLIP_EXIST( l_U45 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U45 );
        }
        return;
    }
    if (DOES_BLIP_EXIST( l_U45 ))
    {
        return;
    }
    ADD_BLIP_FOR_CONTACT( l_U36._fU0, l_U36._fU4, l_U36._fU8, ref l_U45 );
    CHANGE_BLIP_SPRITE( l_U45, l_U49 );
    CHANGE_BLIP_DISPLAY( l_U45, 2 );
    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U45, "BLIP_YCAR" );
    return;
}

void sub_5310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 5;
    sub_5335( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_5335(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 10;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_5447( uParam1, uParam2 );
        return;
    }
    if (g_U42731._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U42731._fU12[iParam0]._fU0 = 1;
    g_U42731._fU12[iParam0]._fU4 = 0;
    g_U42731._fU12[iParam0]._fU8 = 0;
    g_U42731._fU12[iParam0]._fU12 = uParam1;
    g_U42731._fU12[iParam0]._fU16 = uParam2;
    g_U42731._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U42731._fU12[iParam0]._fU28 = uParam4;
    g_U42731._fU12[iParam0]._fU32 = uParam5;
    sub_8137( iParam0, iParam3 );
    return;
}

void sub_5447(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_5470( uParam0 );
    sub_5870( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_6214( ref uVar4, 1 );
    sub_6242( ref uVar4, 0 );
    sub_6270( ref uVar4, 2 );
    sub_6301( ref uVar4, 0 );
    return;
}

int sub_5470(unknown uParam0)
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
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 20;
        case 21: return 21;
        case 22: return 22;
        case 23: return 23;
        case 24: return 24;
        case 25: return 25;
        case 26: return 26;
        case 27: return 27;
    }
    sub_5818( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_5818(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_5892( uParam0, 0, iParam4 + 0 );
    sub_5892( uParam1, 1, iParam4 + 0 );
    sub_5892( uParam2, 2, iParam4 + 0 );
    sub_5892( uParam3, 3, iParam4 + 0 );
    sub_5892( 0, 4, iParam4 + 0 );
    sub_5892( 1, 5, iParam4 + 0 );
    sub_5892( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_5892(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_6214(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_6242(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_6270(int iParam0, unknown uParam1)
{
    sub_5892( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_6301(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;
    char[16] cVar6;
    int iVar10;

    iVar5 = 0;
    StrCopy( ref cVar6, "T1_NAME_", 16 );
    if (g_U95._fU540)
    {
        return 0;
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_6371())
        {
            sub_6672( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar10 = sub_6885( iParam0->_fU0 );
    if (iVar10 != -1)
    {
        sub_6672( iVar10 );
    }
    if (bParam1)
    {
        if (NOT (g_U560 == 9))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but other cellphone script is already active\n" );
            return 0;
        }
        if (NOT (g_U95._fU0 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone screen is not OFF\n" );
            return 0;
        }
        if (NOT (g_U95._fU404 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone quickscreen is not OFF\n" );
            return 0;
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U575;
            iVar5++;
            if (iVar5 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar5 );
            }
            else
            {
                ConcatString(ref cVar6, sub_6409( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar6, iVar5 );
            }
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U560 == 9)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15811[2] = 1;
        }
        else if ((sub_6409( 4, g_U575[I] )) == 0)
        {
            iVar5++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    g_U95._fU408 = 0;
    if (bParam1)
    {
        g_U95._fU408 = 1;
    }
    return 1;
}

int sub_6371()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_6409( 1, g_U575[I] )) != 0) AND (g_U575[I]._fU20))
        {
            sub_6672( I );
            return 1;
        }
    }
    return 0;
}

int sub_6409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6672(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_6757( g_U575 - 1 );
    return;
}

void sub_6757(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_6885(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U575 - 1); Result++ )
    {
        if (g_U575[Result]._fU0[0] != -1)
        {
            if (sub_6950( uParam0, g_U575[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U575;
        }
    }
    return -1;
}

int sub_6950(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_6409( 0, uParam0 );
        if (iVar14 == (sub_6409( 0, uParam6 )))
        {
            iVar15 = sub_6409( 3, uParam0 );
            if (iVar15 == (sub_6409( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_8137(unknown uParam0, int iParam1)
{
    g_U42731._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_8176( iParam1 ))
    {
        g_U42731._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_8176(int iParam0)
{
    int iVar3;

    iVar3 = sub_8185();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_8240();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_8185()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_8240()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}
