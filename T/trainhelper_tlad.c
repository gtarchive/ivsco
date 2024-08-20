void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U6 = nil;
    l_U44 = -1;
    l_U46 = -1;
    l_U47 = 0;
    l_U48 = 0;
    l_U49 = 1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    SWITCH_RANDOM_TRAINS( 1 );
    while (true)
    {
        WAIT( 0 );
        if (sub_93())
        {
            if (IS_PLAYER_PLAYING( sub_120() ))
            {
                switch (l_U2)
                {
                    case 0:
                    if (sub_197())
                    {
                        sub_980( "playerIsTravellingOnATrain()\n" );
                        SETTIMERA( 0 );
                        l_U2 = 1;
                    }
                    else if (TIMERA() > 1000)
                    {
                        if (IS_CHAR_IN_MODEL( sub_222(), 800869680 ))
                        {
                            if (NOT sub_559())
                            {
                                sub_6342();
                            }
                        }
                        else if (sub_6687())
                        {
                            if (((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_TERM" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_TERM_Y" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_WANT_Y" )))
                            {
                                if (NOT (IS_CAR_DEAD( l_U3 )))
                                {
                                    TRAIN_LEAVE_STATION( l_U3 );
                                    SET_TRAIN_CRUISE_SPEED( l_U3, 20.00000000 );
                                    l_U3 = nil;
                                    StrCopy( ref l_U11, "NULL", 32 );
                                    StrCopy( ref l_U19, "NULL", 32 );
                                    sub_7230();
                                    CLEAR_HELP();
                                }
                            }
                            else if (IS_CAR_DEAD( l_U3 ))
                            {
                                GET_TRAIN_PLAYER_WOULD_ENTER( sub_120(), ref l_U5 );
                                if (IS_VEH_DRIVEABLE( l_U5 ))
                                {
                                    if (IS_CAR_MODEL( l_U5, 800869680 ))
                                    {
                                        if (IS_CAR_STOPPED( l_U5 ))
                                        {
                                            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_ENT" )))
                                            {
                                                PRINT_HELP_FOREVER( "TRN_ENT" );
                                            }
                                        }
                                        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_ENT" ))
                                        {
                                            CLEAR_HELP();
                                        }
                                    }
                                    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_ENT" ))
                                    {
                                        CLEAR_HELP();
                                    }
                                }
                                else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_ENT" ))
                                {
                                    CLEAR_HELP();
                                }
                            }
                            else
                            {
                                SET_TRAIN_CRUISE_SPEED( l_U3, 20.00000000 );
                                l_U3 = nil;
                                StrCopy( ref l_U11, "NULL", 32 );
                                StrCopy( ref l_U19, "NULL", 32 );
                                sub_7230();
                                l_U47 = 0;
                                CLEAR_HELP();
                            }
                            l_U3 = nil;
                        }
                        SETTIMERA( 0 );
                    }
                    break;
                    case 1:
                    if (IS_CHAR_IN_MODEL( sub_222(), 800869680 ))
                    {
                        if (sub_559())
                        {
                            if (sub_7769())
                            {
                                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( ref l_U19, ref l_U11 ))
                                {
                                    CLEAR_HELP();
                                }
                                DO_SCREEN_FADE_OUT( 500 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                if (NOT (IS_CAR_DEAD( l_U3 )))
                                {
                                    SKIP_TO_NEXT_ALLOWED_STATION( l_U3 );
                                    CLEAR_HELP();
                                    l_U2 = 2;
                                }
                                else
                                {
                                    l_U2 = 2;
                                }
                            }
                            else if (NOT sub_8075())
                            {
                                sub_8937();
                            }
                        }
                        else
                        {
                            l_U2 = 0;
                        }
                    }
                    else
                    {
                        l_U2 = 0;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CAR_DEAD( l_U3 )))
                    {
                        GET_TRAIN_CARRIAGE( l_U3, 0, ref l_U4 );
                        GET_CAR_COORDINATES( l_U4, ref l_U8._fU0, ref l_U8._fU4, ref l_U8._fU8 );
                        LOAD_SCENE( l_U8._fU0, l_U8._fU4, l_U8._fU8 );
                    }
                    WAIT( 0 );
                    WAIT( 0 );
                    WAIT( 100 );
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    l_U2 = 0;
                    break;
                }
            }
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_93()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_120()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_197()
{
    if (TIMERA() > 1000)
    {
        if (NOT (IS_CHAR_INJURED( sub_222() )))
        {
            if (IS_CHAR_IN_MODEL( sub_222(), 800869680 ))
            {
                if (IS_CAR_DEAD( l_U3 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_222(), ref l_U3 );
                }
                else if (IS_CHAR_SITTING_IN_CAR( sub_222(), l_U3 ))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_ENT" ))
                    {
                        CLEAR_HELP();
                    }
                    if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "TRAIN_H", 4 )))
                    {
                        sub_416( "TRAIN_H", 4 );
                    }
                    if (sub_559())
                    {
                        if (sub_5638())
                        {
                            SET_TRAIN_CRUISE_SPEED( l_U3, 20.00000000 );
                            return 1;
                        }
                    }
                    else if (sub_713())
                    {
                        if (l_U46 > -1)
                        {
                            SET_TRAIN_CRUISE_SPEED( l_U3, 0.00000000 );
                            sub_6342();
                            sub_980( "TRAIN TERMINATES HERE\n" );
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_222()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_416(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_452())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_452()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_559()
{
    char[32] cVar2;

    StrCopy( ref cVar2, "NULL", 32 );
    l_U43 = GET_INT_STAT( 363 );
    sub_595( ref cVar2, 1 );
    if (l_U46 > -1)
    {
        if (IS_PLAYER_PLAYING( sub_120() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_120(), 2 )))
            {
                if (NOT (COMPARE_STRING( ref cVar2, "NULL" )))
                {
                    if (l_U43 < 2)
                    {
                        if ((((NOT (COMPARE_STRING( ref cVar2, "TRN_ST_22" ))) AND (NOT (COMPARE_STRING( ref cVar2, "TRN_ST_12" )))) AND (NOT (COMPARE_STRING( ref cVar2, "TRN_ST_11" )))) AND (NOT (COMPARE_STRING( ref cVar2, "TRN_ST_03" ))))
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_595(unknown uParam0, boolean bParam1)
{
    char[32] cVar4;

    if (NOT (IS_CAR_DEAD( l_U3 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_222() )))
        {
            l_U45 = GET_CURRENT_STATION_FOR_TRAIN( l_U3 );
            l_U46 = GET_NEXT_STATION_FOR_TRAIN( l_U3 );
            l_U44 = GET_NEXT_STATION_FOR_TRAIN( l_U3 );
            if (bParam1)
            {
                StrCopy( ref cVar4, GET_STATION_NAME( l_U3, l_U46 ), 32 );
            }
            else if (sub_713())
            {
                StrCopy( ref cVar4, GET_STATION_NAME( l_U3, l_U45 ), 32 );
            }
        }
    }
    if (l_U46 > -1)
    {
        if (NOT (IS_CHAR_DEAD( sub_222() )))
        {
            if (COMPARE_STRING( ref cVar4, "QUEENS_HOVE_BEACH" ))
            {
                StrCopy( (uParam0^), "TRN_ST_28", 32 );
                StrCopy( ref l_U19, "TRN_LN_3", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_SCHOTTLER" ))
            {
                StrCopy( (uParam0^), "TRN_ST_27", 32 );
                StrCopy( ref l_U19, "TRN_LN_3", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_HUNTINGTON_ST_NS" ))
            {
                StrCopy( (uParam0^), "TRN_ST_26", 32 );
                StrCopy( ref l_U19, "TRN_LN_3", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_FRANCIS_INT_AIRPORT" ))
            {
                StrCopy( (uParam0^), "TRN_ST_25", 32 );
                StrCopy( ref l_U19, "TRN_LN_3", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_LYNCH_ST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_24", 32 );
                StrCopy( ref l_U19, "TRN_LN_3", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_HUNTINGTON_ST_EW" ))
            {
                StrCopy( (uParam0^), "TRN_ST_23", 32 );
                StrCopy( ref l_U19, "TRN_LN_3", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_MANGANESE_EAST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_22", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_QUARTZ_EAST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_21", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_VESPUCCI_CIRCUS" ))
            {
                StrCopy( (uParam0^), "TRN_ST_20", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_VAUXITE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_19", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_QUARTZ_WEST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_18", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_MANGANESE_WEST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_17", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_HEMATITE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_16", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_FELDSPAR" ))
            {
                StrCopy( (uParam0^), "TRN_ST_15", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_CASTLE_GARDENS" ))
            {
                StrCopy( (uParam0^), "TRN_ST_14", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_EMERALD" ))
            {
                StrCopy( (uParam0^), "TRN_ST_13", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS_EASTON" ))
            {
                StrCopy( (uParam0^), "TRN_ST_12", 32 );
                StrCopy( ref l_U19, "TRN_LN_J", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_EASTON" ))
            {
                StrCopy( (uParam0^), "TRN_ST_12", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_EMERALD" ))
            {
                StrCopy( (uParam0^), "TRN_ST_13", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_CASTLE_GARDENS" ))
            {
                StrCopy( (uParam0^), "TRN_ST_14", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_FELDSPAR" ))
            {
                StrCopy( (uParam0^), "TRN_ST_15", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_HEMATITE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_16", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_MANGANESE_WEST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_17", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_QUARTZ_WEST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_18", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_VAUXITE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_19", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_VESPUCCI_CIRCUS" ))
            {
                StrCopy( (uParam0^), "TRN_ST_20", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_QUARTZ_EAST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_21", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_MANGANESE_EAST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_22", 32 );
                StrCopy( ref l_U19, "TRN_LN_A", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_HUNTINGTON_ST_EW" ))
            {
                StrCopy( (uParam0^), "TRN_ST_23", 32 );
                StrCopy( ref l_U19, "TRN_LN_8", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_LYNCH_ST" ))
            {
                StrCopy( (uParam0^), "TRN_ST_24", 32 );
                StrCopy( ref l_U19, "TRN_LN_8", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_FRANCIS_INT_AIRPORT" ))
            {
                StrCopy( (uParam0^), "TRN_ST_25", 32 );
                StrCopy( ref l_U19, "TRN_LN_8", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_HUNTINGTON_ST_NS" ))
            {
                StrCopy( (uParam0^), "TRN_ST_26", 32 );
                StrCopy( ref l_U19, "TRN_LN_8", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_SCHOTTLER" ))
            {
                StrCopy( (uParam0^), "TRN_ST_27", 32 );
                StrCopy( ref l_U19, "TRN_LN_8", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "QUEENS2_HOVE_BEACH" ))
            {
                StrCopy( (uParam0^), "TRN_ST_28", 32 );
                StrCopy( ref l_U19, "TRN_LN_8", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_SAN_QUENTIN_AVENUE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_01", 32 );
                StrCopy( ref l_U19, "TRN_LN_B", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_WINDMILL_STREET" ))
            {
                StrCopy( (uParam0^), "TRN_ST_02", 32 );
                StrCopy( ref l_U19, "TRN_LN_B", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_FRANKFORT_LOW" ))
            {
                StrCopy( (uParam0^), "TRN_ST_03", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_WEST_PARK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_04", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_FRANKFORT_AVENUE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_05", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_SUFFOLK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_06", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_CITY_HALL" ))
            {
                StrCopy( (uParam0^), "TRN_ST_07", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_EASTON" ))
            {
                StrCopy( (uParam0^), "TRN_ST_08", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_EAST_PARK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_09", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_NORTH_PARK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_10", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX_FRANKFORT_HIGH" ))
            {
                StrCopy( (uParam0^), "TRN_ST_11", 32 );
                StrCopy( ref l_U19, "TRN_LN_C", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_WINDMILL_STREET" ))
            {
                StrCopy( (uParam0^), "TRN_ST_02", 32 );
                StrCopy( ref l_U19, "TRN_LN_E", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_SAN_QUENTIN_AVENUE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_01", 32 );
                StrCopy( ref l_U19, "TRN_LN_E", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_FRANKFORT_HIGH" ))
            {
                StrCopy( (uParam0^), "TRN_ST_11", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_NORTH_PARK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_10", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_EAST_PARK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_09", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_EASTON" ))
            {
                StrCopy( (uParam0^), "TRN_ST_08", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_CITY_HALL" ))
            {
                StrCopy( (uParam0^), "TRN_ST_07", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_SUFFOLK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_06", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_FRANKFORT_AVENUE" ))
            {
                StrCopy( (uParam0^), "TRN_ST_05", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_WEST_PARK" ))
            {
                StrCopy( (uParam0^), "TRN_ST_04", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            if (COMPARE_STRING( ref cVar4, "BRONX2_FRANKFORT_LOW" ))
            {
                StrCopy( (uParam0^), "TRN_ST_03", 32 );
                StrCopy( ref l_U19, "TRN_LN_K", 32 );
                sub_885( ref l_U19 );
            }
            l_U35 = {l_U19};
            l_U27 = {(uParam0^)};
        }
    }
    return;
}

int sub_713()
{
    if (NOT (IS_CAR_DEAD( l_U3 )))
    {
        if (IS_CAR_STOPPED( l_U3 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_885(unknown uParam0)
{
    if (sub_894())
    {
        if (sub_713())
        {
            l_U49 = 1;
            ConcatString((uParam0^), "_L", 32);
        }
        else if (NOT sub_1139())
        {
            if (NOT sub_1179())
            {
                ConcatString((uParam0^), "_S", 32);
            }
            else
            {
                l_U49 = 0;
            }
        }
    }
    else if (sub_713())
    {
        if (sub_1306())
        {
            ConcatString((uParam0^), "_T", 32);
        }
        else
        {
            ConcatString((uParam0^), "_L", 32);
        }
    }
    return;
}

int sub_894()
{
    int iVar2;

    iVar2 = -1;
    if (NOT (IS_CAR_DEAD( l_U3 )))
    {
        if (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))
        {
            iVar2 = GET_TIME_TIL_NEXT_STATION( l_U3 );
            sub_980( "TRAIN TIME HELPER INFO" );
            sub_980( "\n" );
            sub_1037( "Time til Next Station 	 = ", iVar2 );
            sub_980( "\n" );
            sub_980( "\n" );
            SETTIMERA( 0 );
            if (iVar2 > 12000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_980(unknown uParam0)
{
    return;
}

void sub_1037(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_1139()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1179()
{
    int iVar2;

    iVar2 = -1;
    if (NOT (IS_CAR_DEAD( l_U3 )))
    {
        iVar2 = GET_TIME_TIL_NEXT_STATION( l_U3 );
        if (iVar2 == 0)
        {
            return 1;
        }
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1306()
{
    switch (g_U94._fU0)
    {
        case 1021:
        case 1022:
        case 1023:
        case 1024:
        case 1025:
        return 1;
        break;
    }
    return 0;
}

void sub_5638()
{
    int Result;
    unknown[7] uVar3;
    int[7] iVar11;
    int[7] iVar19;
    unknown[3] uVar27;
    int I;
    boolean bVar32;

    Result = 1;
    array(ref uVar3, 7);
    array(ref iVar11, 7);
    array(ref iVar19, 7);
    array(ref uVar27, 3);
    bVar32 = false;
    if (sub_5675())
    {
        for ( I = 0; I < 3; I++ )
        {
            uVar27[I] = sub_5745( I );
            if (uVar27[I] != nil)
            {
                if (NOT (IS_CHAR_INJURED( uVar27[I] )))
                {
                    iVar19[I] = 1;
                    if (IS_CHAR_IN_ANY_TRAIN( uVar27[I] ))
                    {
                        iVar11[I] = 1;
                    }
                    else
                    {
                        iVar11[I] = 0;
                    }
                }
                bVar32 = true;
            }
            if ((NOT iVar19[I]) == iVar11[I])
            {
                Result = 0;
            }
        }
        if (NOT bVar32)
        {
            for ( l_U50 = 0; l_U50 < 7; l_U50++ )
            {
                GET_GROUP_MEMBER( l_U51, l_U50, ref uVar3[l_U50] );
                if (NOT (IS_CHAR_INJURED( uVar3[l_U50] )))
                {
                    iVar19[l_U50] = 1;
                    if (IS_CHAR_IN_ANY_TRAIN( uVar3[l_U50] ))
                    {
                        iVar11[l_U50] = 1;
                    }
                    else
                    {
                        iVar11[l_U50] = 0;
                    }
                }
                if ((NOT iVar19[l_U50]) == iVar11[l_U50])
                {
                    Result = 0;
                }
            }
        }
    }
    return Result;
}

int sub_5675()
{
    unknown uVar2;
    int iVar3;
    int I;
    unknown[3] uVar5;

    array(ref uVar5, 3);
    GET_PLAYER_GROUP( sub_120(), ref l_U51 );
    GET_GROUP_SIZE( l_U51, ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        return 1;
    }
    for ( I = 0; I < 3; I++ )
    {
        uVar5[I] = sub_5745( I );
        if (uVar5[I] != nil)
        {
            return 1;
        }
    }
    return 0;
}

void sub_5745(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 3))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

void sub_6342()
{
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRN_TERM_Y" )))
    {
        TRIGGER_POLICE_REPORT( "SCRIPTED_REPORT_TRAIN_TERMINATES_HERE" );
        if (IS_WANTED_LEVEL_GREATER( sub_120(), 2 ))
        {
            PRINT_HELP_FOREVER( "TRN_WANT_Y" );
        }
        else
        {
            PRINT_HELP_FOREVER( "TRN_TERM_Y" );
        }
        if (NOT (IS_CAR_DEAD( l_U3 )))
        {
            SET_TRAIN_CRUISE_SPEED( l_U3, 0.00000000 );
        }
    }
    return;
}

void sub_6687()
{
    int Result;
    unknown[7] uVar3;
    int[7] iVar11;
    int[7] iVar19;
    unknown[3] uVar27;
    int I;
    boolean bVar32;

    Result = 1;
    array(ref uVar3, 7);
    array(ref iVar11, 7);
    array(ref iVar19, 7);
    array(ref uVar27, 3);
    bVar32 = false;
    if (sub_5675())
    {
        for ( I = 0; I < 3; I++ )
        {
            uVar27[I] = sub_5745( I );
            if (uVar27[I] != nil)
            {
                if (NOT (IS_CHAR_INJURED( uVar27[I] )))
                {
                    iVar19[I] = 1;
                    if (NOT (IS_CHAR_IN_ANY_TRAIN( uVar27[I] )))
                    {
                        iVar11[I] = 1;
                    }
                    else
                    {
                        iVar11[I] = 0;
                    }
                }
                bVar32 = true;
            }
            if ((NOT iVar19[I]) == iVar11[I])
            {
                Result = 0;
            }
        }
        if (NOT bVar32)
        {
            for ( l_U50 = 0; l_U50 < 7; l_U50++ )
            {
                GET_GROUP_MEMBER( l_U51, l_U50, ref uVar3[l_U50] );
                if (NOT (IS_CHAR_INJURED( uVar3[l_U50] )))
                {
                    iVar19[l_U50] = 1;
                    if (NOT (IS_CHAR_IN_ANY_TRAIN( uVar3[l_U50] )))
                    {
                        iVar11[l_U50] = 1;
                    }
                    else
                    {
                        iVar11[l_U50] = 0;
                    }
                }
                if ((NOT iVar19[l_U50]) == iVar11[l_U50])
                {
                    Result = 0;
                }
            }
        }
    }
    return Result;
}

void sub_7230()
{
    if (l_U47 > 0)
    {
        if (sub_7256( l_U47 ))
        {
            sub_1037( "Train Journey Cost = ", l_U47 );
        }
        else if (IS_PLAYER_PLAYING( sub_120() ))
        {
            ALTER_WANTED_LEVEL_NO_DROP( sub_120(), 1 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_120() );
        }
        l_U47 = 0;
    }
    return;
}

int sub_7256(int iParam0)
{
    int iVar3;

    STORE_SCORE( sub_120(), ref iVar3 );
    if (iVar3 >= iParam0)
    {
        ADD_SCORE( sub_120(), -iParam0 );
        return 1;
        break;
    }
    return 0;
}

int sub_7769()
{
    if (NOT (IS_CHAR_DEAD( sub_222() )))
    {
        if (IS_CHAR_IN_MODEL( sub_222(), 800869680 ))
        {
            if (NOT sub_1139())
            {
                if (sub_7829())
                {
                    if (sub_894())
                    {
                        return 1;
                    }
                }
            }
        }
        else
        {
            sub_7230();
            l_U2 = 0;
            l_U3 = nil;
            StrCopy( ref l_U11, "NULL", 32 );
            StrCopy( ref l_U19, "NULL", 32 );
            CLEAR_HELP();
        }
    }
    return 0;
}

int sub_7829()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_8075()
{
    switch (sub_8084())
    {
        case 1048:
        case 1051:
        case 1052:
        return 1;
        break;
        default: break;
    }
    if (g_U9533)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        if ((((((((((((((((((((((((((((((((((((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_01" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_02" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_03a" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_03b" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_03c" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_04" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_05" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_06" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_07" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_08" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_09" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_10" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_11" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_12" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_13" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_14" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_15" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_16" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_17" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "Multi_18" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_0" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_1" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_2" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_3" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_4" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_5" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_6" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_7" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_8" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_9" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_10" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_11" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_12" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_13" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_14" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_15" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_MAX_16" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CP_SLEEP_H1" )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_8084()
{
    return g_U94._fU0;
}

void sub_8937()
{
    if (NOT (IS_CHAR_DEAD( sub_222() )))
    {
        if ((IS_CHAR_IN_MODEL( sub_222(), 800869680 )) AND (sub_559()))
        {
            if (sub_713())
            {
                sub_595( ref l_U11, 0 );
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( ref l_U19, ref l_U11 )))
                {
                    l_U47++;
                    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( "TRAIN_H", 4 ))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING( ref l_U19, ref l_U11 );
                    }
                    else
                    {
                        sub_416( "TRAIN_H", 4 );
                    }
                }
            }
            else if (sub_1179())
            {
                if (NOT (IS_CAR_DEAD( l_U3 )))
                {
                    l_U45 = GET_CURRENT_STATION_FOR_TRAIN( l_U3 );
                    if (l_U44 == l_U45)
                    {
                        sub_595( ref l_U11, 1 );
                        if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( ref l_U19, ref l_U11 )))
                        {
                            if (HAS_THIS_ADDITIONAL_TEXT_LOADED( "TRAIN_H", 4 ))
                            {
                                PRINT_HELP_FOREVER_WITH_STRING( ref l_U19, ref l_U11 );
                            }
                            else
                            {
                                sub_416( "TRAIN_H", 4 );
                            }
                        }
                    }
                }
            }
            else
            {
                sub_595( ref l_U11, 1 );
                if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( ref l_U19, ref l_U11 )))
                {
                    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( "TRAIN_H", 4 ))
                    {
                        PRINT_HELP_FOREVER_WITH_STRING( ref l_U19, ref l_U11 );
                    }
                    else
                    {
                        sub_416( "TRAIN_H", 4 );
                    }
                }
            }
        }
        else if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( ref l_U19, ref l_U11 ))
        {
            l_U47++;
            CLEAR_HELP();
        }
    }
    return;
}
