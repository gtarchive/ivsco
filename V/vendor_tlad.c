void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0.40000000;
    l_U7 = 0;
    l_U11 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U48 = 0;
    l_U49 = 0;
    l_U50 = 0;
    l_U51 = 0;
    l_U52 = -1;
    l_U58 = 1.00000000;
    l_U60 = 0;
    l_U61 = 0;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U66 = 0;
    l_U67 = 0;
    l_U68 = 1;
    l_U69 = 0;
    l_U70 = "ObjScpt_04";
    l_U76 = -2075907982;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_189();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U10956 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_547() ))
            {
                if (DOES_OBJECT_EXIST( l_U84 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U84 ))
                    {
                        switch (l_U13)
                        {
                            case 0:
                            sub_1293( l_U84 );
                            l_U13 = 1;
                            break;
                            case 1:
                            sub_2600( l_U84 );
                            sub_3119( l_U84 );
                            break;
                            case 2:
                            sub_3130( l_U84 );
                            break;
                            case 3:
                            sub_9100();
                            sub_3119( l_U84 );
                            sub_9330();
                            break;
                            case 4:
                            sub_3119( l_U84 );
                            sub_9925();
                            l_U48 = 0;
                            break;
                            case 5:
                            if (NOT (IS_CHAR_INJURED( l_U79 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U79 );
                                SET_CHAR_KEEP_TASK( l_U79, 1 );
                                TASK_WANDER_STANDARD( l_U79 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
                                l_U79 = nil;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U78 )))
                            {
                                CLEAR_CHAR_TASKS( l_U78 );
                            }
                            if (l_U51 == 0)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U78 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U78, l_U39 );
                                }
                            }
                            g_U9554 = 0;
                            if (DOES_OBJECT_EXIST( l_U80 ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U80 ))
                                {
                                    DETACH_OBJECT( l_U80, 1 );
                                }
                                DELETE_OBJECT( ref l_U80 );
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U80 );
                            }
                            if (l_U14 != 23)
                            {
                                if (DOES_OBJECT_EXIST( l_U81 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U81 ))
                                    {
                                        DETACH_OBJECT( l_U81, 1 );
                                    }
                                    DELETE_OBJECT( ref l_U81 );
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U81 );
                                }
                            }
                            CREATE_OBJECT( l_U76, l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U80, 1 );
                            if (DOES_OBJECT_EXIST( l_U80 ))
                            {
                                SET_OBJECT_VISIBLE( l_U80, 0 );
                                SET_OBJECT_COLLISION( l_U80, 0 );
                            }
                            if (IS_PLAYER_PLAYING( sub_547() ))
                            {
                                sub_744( 0 );
                                SET_PLAYER_CONTROL_ADVANCED( sub_547(), 0, 0, 1 );
                            }
                            l_U14 = 0;
                            l_U13 = 6;
                            break;
                            case 6:
                            sub_3119( l_U84 );
                            sub_12278();
                            break;
                            case 7:
                            if (l_U65 == 1)
                            {
                                if (DOES_CHAR_EXIST( l_U79 ))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
                                    l_U79 = nil;
                                }
                                sub_3119( l_U84 );
                            }
                            else
                            {
                                sub_189();
                            }
                            break;
                        }
                    }
                    else
                    {
                        sub_189();
                    }
                }
                else
                {
                    sub_189();
                }
            }
            else
            {
                sub_189();
            }
        }
        else
        {
            sub_189();
        }
    }
    return;
}

void sub_189()
{
    sub_211( "ObjScpt_04" );
    sub_277( 2, "ObjScpt_04" );
    sub_277( 2, "ClaScpt_04" );
    sub_277( 2, "NULL" );
    if (l_U13 == 6)
    {
        if (IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 0 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_695() );
        sub_744( 1 );
    }
    if (l_U13 > 0)
    {
        if (l_U52 >= 0)
        {
            STOP_SOUND( l_U52 );
            RELEASE_SOUND_ID( l_U52 );
        }
        UNREGISTER_SCRIPT_WITH_AUDIO();
    }
    if (DOES_OBJECT_EXIST( l_U80 ))
    {
        if (IS_OBJECT_ATTACHED( l_U80 ))
        {
            DETACH_OBJECT( l_U80, 1 );
        }
        DELETE_OBJECT( ref l_U80 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U80 );
    }
    if (DOES_OBJECT_EXIST( l_U81 ))
    {
        if (IS_OBJECT_ATTACHED( l_U81 ))
        {
            DETACH_OBJECT( l_U81, 1 );
        }
        DELETE_OBJECT( ref l_U81 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U81 );
    }
    if (l_U50 != 0)
    {
        STOP_PTFX( l_U50 );
    }
    if (NOT (IS_CHAR_INJURED( l_U78 )))
    {
        if (l_U60 == 1)
        {
            CLEAR_CHAR_TASKS( l_U78 );
            SET_CHAR_KEEP_TASK( l_U78, 1 );
            TASK_COMBAT( l_U78, sub_695() );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U78 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U78 );
    }
    g_U9524 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_211(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_277(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_498();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_547(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_498()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_547()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_695()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_744(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_547(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_547(), 1 );
    }
    return;
}

void sub_1293(unknown uParam0)
{
    l_U75 = sub_1302();
    REQUEST_ANIMS( "amb@hotdogcart" );
    REQUEST_MODEL( l_U75 );
    REQUEST_MODEL( l_U76 );
    l_U70 = "ObjScpt_04";
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U52 = GET_SOUND_ID();
    sub_2045( uParam0 );
    sub_2543();
    l_U70 = "ObjScpt_04";
    return;
}

void sub_1302()
{
    int iVar2;
    unknown uVar3;
    int Result;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = -186113957;
    iVar5 = 142730876;
    iVar6 = 768442188;
    iVar7 = 420915580;
    FIND_PRIMARY_POPULATION_ZONE_GROUP( ref iVar2, ref uVar3 );
    if (iVar2 == 0)
    {
        return Result;
    }
    if (iVar2 == 1)
    {
        return iVar7;
    }
    if (iVar2 == 2)
    {
        return Result;
    }
    if (iVar2 == 3)
    {
        return Result;
    }
    if (iVar2 == 4)
    {
        return iVar7;
    }
    if (iVar2 == 5)
    {
        return iVar7;
    }
    if (iVar2 == 6)
    {
        return Result;
    }
    if (iVar2 == 7)
    {
        return Result;
    }
    if (iVar2 == 8)
    {
        return Result;
    }
    if (iVar2 == 9)
    {
        return Result;
    }
    if (iVar2 == 10)
    {
        return Result;
    }
    if (iVar2 == 11)
    {
        return iVar5;
    }
    if (iVar2 == 13)
    {
        return iVar5;
    }
    if (iVar2 == 14)
    {
        return Result;
    }
    if (iVar2 == 15)
    {
        return iVar6;
    }
    if (iVar2 == 16)
    {
        return iVar7;
    }
    if (iVar2 == 17)
    {
        return iVar7;
    }
    if (iVar2 == 18)
    {
        return iVar6;
    }
    if (iVar2 == 19)
    {
        return Result;
    }
    if (iVar2 == 20)
    {
        return Result;
    }
    if (iVar2 == 21)
    {
        return iVar6;
    }
    if (iVar2 == 22)
    {
        return Result;
    }
    if (iVar2 == 23)
    {
        return Result;
    }
    if (iVar2 == 24)
    {
        return iVar6;
    }
    if (iVar2 == 25)
    {
        return iVar5;
    }
    if (iVar2 == 26)
    {
        return iVar5;
    }
    if (iVar2 == 27)
    {
        return iVar5;
    }
    if (iVar2 == 28)
    {
        return iVar5;
    }
    if (iVar2 == 29)
    {
        return iVar5;
    }
    if (iVar2 == 30)
    {
        return iVar7;
    }
    if (iVar2 == 31)
    {
        return iVar7;
    }
    if (iVar2 == 32)
    {
        return iVar7;
    }
    if (iVar2 == 33)
    {
        return Result;
    }
    if (iVar2 == 34)
    {
        return iVar5;
    }
    if (iVar2 == 35)
    {
        return iVar5;
    }
    if (iVar2 == 36)
    {
        return iVar5;
    }
    if (iVar2 == 37)
    {
        return Result;
    }
    if (iVar2 == 38)
    {
        return Result;
    }
    if (iVar2 == 39)
    {
        return iVar6;
    }
    if (iVar2 == 40)
    {
        return iVar6;
    }
    if (iVar2 == 41)
    {
        return iVar7;
    }
    return Result;
}

void sub_2045(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U15._fU0, ref l_U15._fU4, ref l_U15._fU8 );
        GET_OBJECT_MODEL( uParam0, ref l_U77 );
        if (l_U77 == 526100790)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.10600000, -0.41000000, -0.50000000, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.20000000, 0.91000000, 0.00000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
            l_U58 = 0.35000000;
        }
        else if (l_U77 == 1139438163)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.74200000, 0.53500000, -0.50000000, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.88300000, -0.83000000, 0.00000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
            l_U58 = 0.30000000;
        }
        else if (l_U77 == 1914818237)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, 0.64000000, -0.50000000, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, -0.70000000, 0.00000000, ref l_U21._fU0, ref l_U21._fU4, ref l_U21._fU8 );
            l_U58 = 0.30000000;
        };;;
        GET_HEADING_FROM_VECTOR_2D( l_U15._fU0 - l_U18._fU0, l_U15._fU4 - l_U18._fU4, ref l_U39 );
        if (l_U77 == 1139438163)
        {
            l_U42 = l_U39 - 220;
        }
        else if (l_U77 == 1914818237)
        {
            l_U42 = l_U39 - 160;
        }
        else
        {
            l_U42 = l_U39 - 180;
        }
    }
    return;
}

void sub_2543()
{
    return;
}

void sub_2600(unknown uParam0)
{
    if ((HAS_MODEL_LOADED( l_U76 )) AND (HAS_MODEL_LOADED( l_U75 )))
    {
        if ((NOT (IS_OBJECT_ON_SCREEN( uParam0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_695(), l_U15._fU0, l_U15._fU4, l_U15._fU8, 50.00000000, 50.00000000, 50.00000000, 0 ))))
        {
            l_U50 = START_PTFX_ON_OBJ( "ambient_hotdogstand", uParam0, -0.05000000, 0.20000000, 0.40000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.00000000, 0.20000000, ref l_U24._fU0, ref l_U24._fU4, ref l_U24._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.20000000, 0.00000000, 0.20000000, ref l_U27._fU0, ref l_U27._fU4, ref l_U27._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.50000000, -0.50000000, ref l_U30._fU0, ref l_U30._fU4, ref l_U30._fU8 );
            CREATE_OBJECT( l_U76, l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U80, 1 );
            if (DOES_OBJECT_EXIST( l_U80 ))
            {
                SET_OBJECT_VISIBLE( l_U80, 0 );
                SET_OBJECT_COLLISION( l_U80, 0 );
            }
            SET_OBJECT_LIGHTS( uParam0, 1 );
            CREATE_CHAR( 4, l_U75, l_U18._fU0, l_U18._fU4, l_U18._fU8, ref l_U78, 1 );
            g_U9524 = 1;
            if (NOT (IS_CHAR_INJURED( l_U78 )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U78 );
                SET_CHAR_HEADING( l_U78, l_U39 );
                SET_CHAR_IN_CUTSCENE( l_U78, 1 );
                TASK_START_SCENARIO_IN_PLACE( l_U78, "scenario_standing", -1082130432 );
                l_U13 = 3;
            }
        }
    }
    return;
}

void sub_3119(unknown uParam0)
{
    unknown uVar3;

    sub_3130( uParam0 );
    if (IS_CHAR_IN_MELEE_COMBAT( sub_695() ))
    {
        sub_3576();
    }
    if (NOT (IS_CHAR_INJURED( l_U78 )))
    {
        if (IS_CHAR_IN_MELEE_COMBAT( l_U78 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_695(), l_U78, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U67 = 1;
            }
        }
    }
    if (sub_3810())
    {
        sub_3576();
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (l_U66 == 0)
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( sub_695(), uParam0, 20.00000000, 20.00000000, 0 ))
            {
                PLAY_SOUND_FROM_OBJECT( l_U52, "STREET_FOOD_GRILL", uParam0 );
                l_U66 = 1;
            }
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref l_U44 );
    }
    if (DOES_CHAR_EXIST( l_U78 ))
    {
        if (IS_CHAR_DEAD( l_U78 ))
        {
            sub_189();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U78 ))
        {
            sub_189();
        }
        if (IS_CHAR_INJURED( l_U78 ))
        {
            sub_189();
        }
        if (IS_PED_FLEEING( l_U78 ))
        {
            sub_189();
        }
        GET_CURRENT_CHAR_WEAPON( sub_695(), ref uVar3 );
        if (NOT (IS_CHAR_INJURED( l_U78 )))
        {
            if (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U78 ))
            {
                if (NOT sub_4264())
                {
                    SAY_AMBIENT_SPEECH( l_U78, "GUN_RUN", 0, 1, 0 );
                    l_U60 = 1;
                    sub_189();
                }
            }
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_695(), l_U15._fU0 - 15, l_U15._fU4 - 15, l_U15._fU0 + 15, l_U15._fU4 + 15, 0 ))
        {
            sub_189();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U79 )))
    {
        if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U79, sub_695(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U79 ))) || (sub_4505( l_U21 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U78 )))
            {
                CLEAR_CHAR_TASKS( l_U78 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
            sub_3576();
            l_U48 = 0;
            l_U79 = nil;
            l_U61 = 0;
            l_U62 = 0;
            l_U63 = 0;
            l_U64 = 0;
            l_U13 = 3;
            l_U14 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U79 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_695(), l_U79 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U79 );
                TASK_WANDER_STANDARD( l_U79 );
            }
            if (NOT (IS_CHAR_INJURED( l_U78 )))
            {
                CLEAR_CHAR_TASKS( l_U78 );
            }
            sub_3576();
            l_U48 = 0;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
            l_U79 = nil;
            l_U61 = 0;
            l_U62 = 0;
            l_U63 = 0;
            l_U64 = 0;
            l_U13 = 3;
            l_U14 = 0;
        }
    }
    if (l_U13 == 6)
    {
        if ((((l_U14 == 19) || (l_U14 == 21)) || (l_U14 == 22)) || (l_U14 == 23))
        {
            if (sub_4898())
            {
                if (DOES_OBJECT_EXIST( l_U81 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U81 ))
                    {
                        DETACH_OBJECT( l_U81, 1 );
                    }
                    DELETE_OBJECT( ref l_U81 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U81 );
                    sub_3576();
                    if (NOT (IS_BUTTON_PRESSED( 0, 14 )))
                    {
                        CLEAR_CHAR_TASKS( sub_695() );
                    }
                    sub_744( 1 );
                    l_U14 = 23;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U79 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U79, 0 ))
        {
            sub_3576();
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
            l_U79 = nil;
            l_U61 = 0;
            l_U62 = 0;
            l_U63 = 0;
            l_U64 = 0;
            l_U13 = 3;
            l_U14 = 0;
        }
    }
    if (l_U65 == 1)
    {
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            if (NOT (IS_OBJECT_UPRIGHT( uParam0, 15 )))
            {
                sub_5264( uParam0 );
            }
            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < l_U58)
            {
                sub_5264( uParam0 );
            }
        }
    }
    else if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_OBJECT_UPRIGHT( uParam0, 20 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_695(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U60 = 1;
            }
            sub_189();
        }
        if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < l_U58)
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_695(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U60 = 1;
            }
            sub_189();
        }
        GET_OBJECT_MODEL( uParam0, ref l_U77 );
        if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_695(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
        {
            if (l_U69 == 0)
            {
                if (IS_CHAR_TOUCHING_OBJECT_ON_FOOT( sub_695(), uParam0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U78 )))
                    {
                        if (l_U77 == 526100790)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.95000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                SAY_AMBIENT_SPEECH( l_U78, "Intimidate_Resp", 1, 1, 0 );
                                CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                                l_U69 = 1;
                            }
                        }
                        else if (l_U77 == 1914818237)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.96000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                SAY_AMBIENT_SPEECH( l_U78, "Intimidate_Resp", 1, 1, 0 );
                                CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                                l_U69 = 1;
                            }
                        }
                        else if (l_U77 == 1139438163)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.99000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                SAY_AMBIENT_SPEECH( l_U78, "Intimidate_Resp", 1, 1, 0 );
                                CLEAR_OBJECT_LAST_DAMAGE_ENTITY( uParam0 );
                                l_U69 = 1;
                            }
                        };;;
                    }
                }
            }
            else if (l_U67 == 0)
            {
                if (IS_CHAR_TOUCHING_OBJECT_ON_FOOT( sub_695(), uParam0 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U78 )))
                    {
                        if (l_U77 == 526100790)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.50000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                SAY_AMBIENT_SPEECH( l_U78, "Intimidate_Resp", 1, 1, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U78 )))
                                {
                                    TASK_COMBAT( l_U78, sub_695() );
                                }
                                sub_3576();
                                l_U67 = 1;
                            }
                        }
                        else if (l_U77 == 1914818237)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.88000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                SAY_AMBIENT_SPEECH( l_U78, "Intimidate_Resp", 1, 1, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U78 )))
                                {
                                    TASK_COMBAT( l_U78, sub_695() );
                                }
                                sub_3576();
                                l_U67 = 1;
                            }
                        }
                        else if (l_U77 == 1139438163)
                        {
                            if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 1 )) < 0.95000000)
                            {
                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                SAY_AMBIENT_SPEECH( l_U78, "Intimidate_Resp", 1, 1, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U78 )))
                                {
                                    TASK_COMBAT( l_U78, sub_695() );
                                }
                                sub_3576();
                                l_U67 = 1;
                            }
                        };;;
                    }
                }
            }
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U15._fU0, l_U15._fU4, l_U15._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            sub_2045( uParam0 );
        }
    }
    if (l_U13 != 7)
    {
        if (IS_PLAYER_PLAYING( sub_547() ))
        {
            if (NOT (IS_CHAR_INJURED( l_U78 )))
            {
                if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_547() ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_695(), ref l_U82 );
                    if (l_U82 == nil)
                    {
                        if (DOES_OBJECT_EXIST( uParam0 ))
                        {
                            if (HAVE_ANIMS_LOADED( "amb@hotdogcart" ))
                            {
                                if ((l_U13 != 1) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_695() ))))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_695(), l_U21._fU0, l_U21._fU4, l_U21._fU8, 3.00000000, 3.00000000, 1.00000000, 0 ))
                                    {
                                        if (l_U13 != 6)
                                        {
                                            if (l_U67 == 0)
                                            {
                                                if (NOT (IS_PED_RAGDOLL( l_U78 )))
                                                {
                                                    if (NOT (IS_CHAR_GETTING_UP( l_U78 )))
                                                    {
                                                        if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U78 )))
                                                        {
                                                            if (l_U51 == 0)
                                                            {
                                                                if (l_U13 != 2)
                                                                {
                                                                    if (sub_6935( 2, 0 ))
                                                                    {
                                                                        if (sub_7196( 2, l_U70, 0 ))
                                                                        {
                                                                            if (IS_SCORE_GREATER( sub_547(), 4 ))
                                                                            {
                                                                                g_U9522 = 1;
                                                                                REMOVE_PED_HELMET( sub_695(), 1 );
                                                                                sub_211( l_U70 );
                                                                                g_U9526++;
                                                                                if (g_U9526 < g_U9525)
                                                                                {
                                                                                    l_U70 = "ObjScpt_04";
                                                                                }
                                                                                else
                                                                                {
                                                                                    l_U70 = "NULL";
                                                                                }
                                                                                SET_MINIGAME_IN_PROGRESS( 1 );
                                                                                l_U13 = 5;
                                                                            }
                                                                            else
                                                                            {
                                                                                sub_7948( "FAIL_TRAN", 3000, 0 );
                                                                            }
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        sub_277( 2, "ObjScpt_04" );
                                                                        sub_277( 2, "ClaScpt_04" );
                                                                        sub_277( 2, "NULL" );
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    sub_277( 2, "ObjScpt_04" );
                                                                    sub_277( 2, "ClaScpt_04" );
                                                                    sub_277( 2, "NULL" );
                                                                }
                                                            }
                                                            else
                                                            {
                                                                sub_277( 2, "ObjScpt_04" );
                                                                sub_277( 2, "ClaScpt_04" );
                                                                sub_277( 2, "NULL" );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_277( 2, "ObjScpt_04" );
                                                            sub_277( 2, "ClaScpt_04" );
                                                            sub_277( 2, "NULL" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_277( 2, "ObjScpt_04" );
                                                        sub_277( 2, "ClaScpt_04" );
                                                        sub_277( 2, "NULL" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_277( 2, "ObjScpt_04" );
                                                    sub_277( 2, "ClaScpt_04" );
                                                    sub_277( 2, "NULL" );
                                                }
                                            }
                                            else if (l_U68 == 0)
                                            {
                                                CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U78 );
                                                SAY_AMBIENT_SPEECH( l_U78, "Generic_Fuck_Off", 1, 0, 0 );
                                                sub_8404();
                                                TASK_LOOK_AT_CHAR( l_U78, sub_695(), 5000, 0 );
                                                l_U68 = 1;
                                            }
                                            sub_277( 2, "ObjScpt_04" );
                                            sub_277( 2, "ClaScpt_04" );
                                            sub_277( 2, "NULL" );;
                                        }
                                    }
                                    else
                                    {
                                        l_U68 = 0;
                                        sub_277( 2, "ObjScpt_04" );
                                        sub_277( 2, "ClaScpt_04" );
                                        sub_277( 2, "NULL" );
                                    }
                                }
                                else
                                {
                                    l_U68 = 0;
                                    sub_277( 2, "ObjScpt_04" );
                                    sub_277( 2, "ClaScpt_04" );
                                    sub_277( 2, "NULL" );
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_277( 2, "ObjScpt_04" );
                    sub_277( 2, "ClaScpt_04" );
                    sub_277( 2, "NULL" );
                }
            }
            else
            {
                sub_277( 2, "ObjScpt_04" );
                sub_277( 2, "ClaScpt_04" );
                sub_277( 2, "NULL" );
            }
        }
    }
    return;
}

void sub_3130(unknown uParam0)
{
    switch (l_U51)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U78 )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U78, l_U18._fU0, l_U18._fU4, l_U18._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U83 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U18._fU0, l_U18._fU4, l_U18._fU8, 2, -1, 1.00000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U18._fU0, l_U18._fU4, l_U18._fU8, l_U39, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U83 );
                l_U73 = 0;
                if (l_U79 != nil)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
                    l_U79 = nil;
                }
                if (l_U13 == 6)
                {
                    sub_744( 1 );
                    CLEAR_CHAR_TASKS( sub_695() );
                    l_U14 = 0;
                }
                sub_2045( uParam0 );
                l_U13 = 2;
                l_U51++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U78 )))
        {
            TASK_PERFORM_SEQUENCE( l_U78, l_U83 );
            CLEAR_SEQUENCE_TASK( l_U83 );
            l_U51++;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U78 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U78, 29, ref l_U73 );
            if (l_U73 == 7)
            {
                l_U13 = 3;
                l_U51 = 0;
            }
        }
        break;
    }
    return;
}

void sub_3576()
{
    if (DOES_OBJECT_EXIST( l_U81 ))
    {
        if (IS_OBJECT_ATTACHED( l_U81 ))
        {
            DETACH_OBJECT( l_U81, 1 );
        }
        DELETE_OBJECT( ref l_U81 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U81 );
    }
    if (DOES_OBJECT_EXIST( l_U80 ))
    {
        if (IS_OBJECT_ATTACHED( l_U80 ))
        {
            DETACH_OBJECT( l_U80, 1 );
        }
        DELETE_OBJECT( ref l_U80 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U80 );
    }
    return;
}

int sub_3810()
{
    if (sub_3819())
    {
        if (sub_3858())
        {
            return 1;
        }
    }
    return 0;
}

int sub_3819()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_3858()
{
    if (g_U94._fU60 != -1)
    {
        if ((g_U15862[g_U94._fU60]._fU196._fU24 == 0) || (g_U15862[g_U94._fU60]._fU196._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4264()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_695(), ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    if (iVar2 == 3)
    {
        return 1;
    }
    if (iVar2 == 1)
    {
        return 1;
    }
    if (iVar2 == 46)
    {
        return 1;
    }
    return 0;
}

int sub_4505(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_695() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_695(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4898()
{
    if ((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 )))
    {
        return 1;
    }
    if ((((IS_BUTTON_JUST_PRESSED( 0, 17 )) || (IS_BUTTON_JUST_PRESSED( 0, 14 ))) || (IS_BUTTON_JUST_PRESSED( 0, 15 ))) || (IS_BUTTON_JUST_PRESSED( 0, 16 )))
    {
        return 1;
    }
    return 0;
}

void sub_5264(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U33._fU0, ref l_U33._fU4, ref l_U33._fU8 );
        ADD_EXPLOSION( l_U33._fU0, l_U33._fU4, l_U33._fU8, 0, 0.10000000, 0, 0, 1.00000000 );
    }
    sub_5357( uParam0 );
    sub_189();
    return;
}

void sub_5357(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U78 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( l_U78, uParam0, 5.00000000, 5.00000000, 0 ))
            {
                TRIGGER_PTFX_ON_OBJ( "fire_hotdog_blaze", uParam0, -0.05000000, 0.20000000, 0.40000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                START_CHAR_FIRE( l_U78 );
                INCREMENT_INT_STAT_NO_MESSAGE( 272, 1 );
            }
        }
    }
    return;
}

int sub_6935(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_547() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_547() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_547() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_3819())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_695() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_7087())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_7087()
{
    return sub_7098( 0, 0 );
}

int sub_7098(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_7196(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_6935( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_547(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7471();
                l_U3 = 1;
                g_U10469 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_7471()
{
    return sub_7098( 1, 1 );
}

int sub_7948(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_8404()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
    if (iVar2 == 0)
    {
        PRINT( "upsetVend", 5000, 1 );
    }
    else if (iVar2 == 1)
    {
        PRINT( "upsetVend1", 5000, 1 );
    }
    else if (iVar2 == 2)
    {
        PRINT( "upsetVend2", 5000, 1 );
    }
    else if (iVar2 == 3)
    {
        PRINT( "upsetVend3", 5000, 1 );
    }
    else if (iVar2 == 4)
    {
        PRINT( "upsetVend4", 5000, 1 );
    }
    else if (iVar2 == 5)
    {
        PRINT( "upsetVend5", 5000, 1 );
    }
    else if (iVar2 == 6)
    {
        PRINT( "upsetVend6", 5000, 1 );
    }
    else if (iVar2 == 7)
    {
        PRINT( "upsetVend7", 5000, 1 );
    }
    else
    {
        PRINT( "upsetVend8", 5000, 1 );
    };;;;;;;;
    return;
}

void sub_9100()
{
    if (NOT (IS_CHAR_INJURED( l_U78 )))
    {
        switch (l_U53)
        {
            case 0:
            if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U78 )))
            {
                SAY_AMBIENT_SPEECH( l_U78, "ATTRACT_HOTDOG", 0, 1, 0 );
                GET_GAME_TIMER( ref l_U54 );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 8000, ref l_U57 );
                l_U53++;
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U55 );
            l_U56 = l_U55 - l_U54;
            if (l_U56 > (6000 + l_U57))
            {
                l_U53--;
            }
            break;
        }
    }
    return;
}

void sub_9330()
{
    if (NOT g_U9554)
    {
        if (l_U13 != 5)
        {
            if (l_U79 == nil)
            {
                if (HAVE_ANIMS_LOADED( "amb@hotdogcart" ))
                {
                    BEGIN_CHAR_SEARCH_CRITERIA();
                    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 44 );
                    END_CHAR_SEARCH_CRITERIA();
                    GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U15._fU0, l_U15._fU4, l_U15._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U79 );
                }
            }
            if (l_U79 != nil)
            {
                if (NOT (IS_CHAR_INJURED( l_U79 )))
                {
                    if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U79 )))
                    {
                        if (NOT (IS_PED_A_MISSION_PED( l_U79 )))
                        {
                            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U79, sub_695(), 0 )))
                            {
                                if (NOT (IS_PLAYER_TARGETTING_CHAR( sub_547(), l_U79 )))
                                {
                                    if (NOT (sub_4505( l_U21 )))
                                    {
                                        SET_CHAR_AS_MISSION_CHAR( l_U79 );
                                        SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U79, 0 );
                                        SET_CHAR_IN_CUTSCENE( l_U79, 1 );
                                        l_U14 = 0;
                                        l_U13 = 4;
                                    }
                                    else
                                    {
                                        l_U79 = nil;
                                    }
                                }
                                else
                                {
                                    l_U79 = nil;
                                }
                            }
                            else
                            {
                                l_U79 = nil;
                            }
                        }
                        else
                        {
                            l_U79 = nil;
                        }
                    }
                    else
                    {
                        l_U79 = nil;
                    }
                }
                else
                {
                    l_U79 = nil;
                }
            }
        }
    }
    else if (l_U79 == nil)
    {
        REQUEST_MODEL( 697247370 );
        while (NOT (HAS_MODEL_LOADED( 697247370 )))
        {
            WAIT( 0 );
            REQUEST_MODEL( 697247370 );
        }
        if (HAS_MODEL_LOADED( 697247370 ))
        {
            if (HAVE_ANIMS_LOADED( "amb@hotdogcart" ))
            {
                CREATE_CHAR( 4, 697247370, 923.86190000, -506.48510000, 14.03120000, ref l_U79, 1 );
                SET_CHAR_HEADING( l_U79, 75.50110000 );
                l_U14 = 0;
                l_U13 = 4;
            }
        }
    }
    return;
}

void sub_9925()
{
    sub_9934();
    if (NOT (IS_CHAR_INJURED( l_U78 )))
    {
        switch (l_U14)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U79, l_U21._fU0, l_U21._fU4, l_U21._fU8, 2, -2, 1.00000000 );
                if (sub_10193( l_U78, l_U18 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U78, l_U18._fU0, l_U18._fU4, l_U18._fU8, l_U39, 2.00000000 );
                }
                l_U14 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U79, 27, ref l_U71 );
                if ((l_U71 == 7) || (l_U71 == 2))
                {
                    l_U14 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                if (sub_10193( l_U79, l_U21 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( l_U79, l_U21._fU0, l_U21._fU4, l_U21._fU8, l_U42, 2.00000000, 150.00000000 );
                    l_U71 = 0;
                    l_U14 = 3;
                }
                else
                {
                    l_U14 = 0;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U79, 68, ref l_U71 );
                if ((l_U71 == 7) || (l_U71 == 2))
                {
                    l_U14 = 4;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U79, l_U78 );
                TASK_LOOK_AT_CHAR( l_U78, l_U79, 12000, 0 );
                l_U71 = 0;
                l_U14 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U79, 34, ref l_U71 );
                if ((l_U71 == 7) || (l_U71 == 2))
                {
                    l_U14 = 6;
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                TASK_PLAY_ANIM( l_U79, "BUY_HOTDOG", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U78, "SELL_HOTDOG", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( l_U79, "Order_Food", 1, 0, 0 );
                l_U71 = 0;
                l_U14 = 8;
            }
            break;
            case 8:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U79, "amb@hotdogcart", "BUY_HOTDOG" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U79, "amb@hotdogcart", "BUY_HOTDOG", ref l_U59 );
                }
                else
                {
                    l_U14 = 23;
                }
            }
            if (IS_CHAR_PLAYING_ANIM( l_U78, "amb@hotdogcart", "SELL_HOTDOG" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U78, "amb@hotdogcart", "SELL_HOTDOG", ref l_U40 );
            }
            if ((l_U40 > 0.15800000) AND (l_U63 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U80 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U80 )))
                    {
                        SET_OBJECT_VISIBLE( l_U80, 1 );
                        ATTACH_OBJECT_TO_PED( l_U80, l_U78, 1219, 0.01000000, 0.00500000, 0, -0.18000000, -0.12000000, 0.04000000, 0 );
                    }
                }
                l_U63 = 1;
            }
            if ((l_U40 > 0.72000000) AND (l_U64 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U80 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U80 ))
                    {
                        DETACH_OBJECT( l_U80, 1 );
                    }
                    DELETE_OBJECT( ref l_U80 );
                }
                SAY_AMBIENT_SPEECH( l_U78, "SELL_GOODS", 0, 1, 0 );
                l_U64 = 1;
            }
            if (l_U59 > 0.79500000)
            {
                if (NOT (IS_CHAR_INJURED( l_U79 )))
                {
                    if (g_U9554 == 1)
                    {
                        SET_CHAR_KEEP_TASK( l_U79, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U79, 925, 65045, 16, 2, -2, 2 );
                    }
                    SAY_AMBIENT_SPEECH( l_U79, "Thanks", 1, 0, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U79 )))
                    {
                        BLOCK_CHAR_GESTURE_ANIMS( l_U79, 1 );
                    }
                    GIVE_PED_AMBIENT_OBJECT( l_U79, l_U76 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U79 );
                    l_U79 = nil;
                    l_U14 = 23;
                }
            }
            break;
            case 23:
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U79, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U80 ))
            {
                if (IS_OBJECT_ATTACHED( l_U80 ))
                {
                    DETACH_OBJECT( l_U80, 1 );
                }
                DELETE_OBJECT( ref l_U80 );
            }
            sub_277( 2, "ObjScpt_04" );
            sub_277( 2, "ClaScpt_04" );
            sub_277( 2, "NULL" );
            CREATE_OBJECT( l_U76, l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U80, 1 );
            if (DOES_OBJECT_EXIST( l_U80 ))
            {
                SET_OBJECT_VISIBLE( l_U80, 0 );
                SET_OBJECT_COLLISION( l_U80, 0 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 697247370 );
            g_U9554 = 0;
            if (NOT (IS_CHAR_INJURED( l_U79 )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U79, 0 );
            }
            l_U40 = 0.00000000;
            l_U61 = 0;
            l_U62 = 0;
            l_U63 = 0;
            l_U64 = 0;
            l_U13 = 3;
            l_U49 = 0;
            l_U14 = 0;
            break;
        }
    }
    return;
}

void sub_9934()
{
    if (NOT (IS_CHAR_INJURED( l_U79 )))
    {
        if (l_U14 > 4)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U79, l_U21._fU0, l_U21._fU4, l_U21._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U14 = 23;
            }
        }
    }
    return;
}

int sub_10193(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        if ((VDIST( uVar6, uParam1 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_12278()
{
    if (NOT (IS_CHAR_INJURED( l_U78 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( sub_695(), 1 );
        BLOCK_CHAR_GESTURE_ANIMS( l_U78, 1 );
        switch (l_U14)
        {
            case 0:
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_695(), l_U21._fU0, l_U21._fU4, l_U21._fU8, 3, -2, 1.00000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( l_U78, l_U21._fU0, l_U21._fU4, l_U21._fU8 );
            l_U71 = 0;
            l_U14 = 1;
            break;
            case 1:
            if (sub_12489())
            {
                l_U14 = 23;
            }
            GET_SCRIPT_TASK_STATUS( sub_695(), 27, ref l_U71 );
            if (l_U71 == 7)
            {
                if (sub_12697( l_U21 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_695(), l_U21._fU0, l_U21._fU4, l_U21._fU8, l_U42, 2.00000000, 270.00000000 );
                    sub_12829();
                    l_U14 = 9;
                }
                else
                {
                    l_U14 = 0;
                }
            }
            break;
            case 9:
            if (sub_12489())
            {
                l_U14 = 23;
                break;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_695(), 68, ref l_U71 );
                if (l_U71 == 7)
                {
                    TASK_LOOK_AT_CHAR( l_U78, sub_695(), 5000, 0 );
                    l_U71 = 0;
                    l_U14 = 10;
                }
            }
            break;
            case 10:
            l_U14 = 16;
            break;
            case 16:
            if (NOT (DOES_OBJECT_EXIST( l_U81 )))
            {
                CREATE_OBJECT( l_U76, l_U21._fU0, l_U21._fU4, l_U21._fU8, ref l_U81, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U81 ))
            {
                SET_OBJECT_COLLISION( l_U81, 0 );
                SET_OBJECT_VISIBLE( l_U81, 0 );
            }
            if (NOT (DOES_OBJECT_EXIST( l_U80 )))
            {
                CREATE_OBJECT( l_U76, l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U80, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U80 ))
            {
                SET_OBJECT_VISIBLE( l_U80, 0 );
                SET_OBJECT_COLLISION( l_U80, 0 );
            }
            TASK_PLAY_ANIM( l_U78, "SELL_HOTDOG_PLYR", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
            TASK_PLAY_ANIM( sub_695(), "BUY_HOTDOG_PLYR", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
            SAY_AMBIENT_SPEECH( sub_695(), "GENERIC_BUY", 1, 1, 0 );
            l_U40 = 0.00000000;
            l_U14 = 18;
            break;
            case 18:
            if (IS_CHAR_PLAYING_ANIM( l_U78, "amb@hotdogcart", "SELL_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U78, "amb@hotdogcart", "SELL_HOTDOG_PLYR", ref l_U40 );
            }
            if (IS_CHAR_PLAYING_ANIM( sub_695(), "amb@hotdogcart", "BUY_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_695(), "amb@hotdogcart", "BUY_HOTDOG_PLYR", ref l_U59 );
            }
            else
            {
                l_U14 = 21;
            }
            if ((l_U40 > 0.19400000) AND (l_U63 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U80 ))
                {
                    if (NOT (IS_OBJECT_ATTACHED( l_U80 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U80, l_U78, 1219, 0.01000000, 0.00500000, 0, -0.18000000, -0.12000000, 0.04000000, 0 );
                    }
                    SET_OBJECT_VISIBLE( l_U80, 1 );
                    l_U63 = 1;
                }
            }
            if ((l_U40 > 0.64500000) AND (l_U64 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U80 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U80 ))
                    {
                        DETACH_OBJECT( l_U80, 1 );
                    }
                    DELETE_OBJECT( ref l_U80 );
                    l_U64 = 1;
                }
            }
            if (l_U59 > 0.73500000)
            {
                if (DOES_OBJECT_EXIST( l_U81 ))
                {
                    SET_OBJECT_VISIBLE( l_U81, 1 );
                    if (NOT (IS_OBJECT_ATTACHED( l_U81 )))
                    {
                        ATTACH_OBJECT_TO_PED( l_U81, sub_695(), 1232, 0.23000000, 0.01000000, -0.07000000, -0.22000000, 3.48000000, 0, 0 );
                    }
                    SAY_AMBIENT_SPEECH( l_U78, "SELL_GOODS", 0, 1, 0 );
                    sub_13986();
                    l_U14 = 21;
                }
            }
            break;
            case 21:
            if (IS_CHAR_PLAYING_ANIM( l_U78, "amb@hotdogcart", "SELL_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U78, "amb@hotdogcart", "SELL_HOTDOG_PLYR", ref l_U40 );
            }
            if ((l_U40 > 0.64500000) AND (l_U64 == 0))
            {
                if (DOES_OBJECT_EXIST( l_U80 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U80 ))
                    {
                        DETACH_OBJECT( l_U80, 1 );
                    }
                    DELETE_OBJECT( ref l_U80 );
                    l_U64 = 1;
                }
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_695(), "amb@hotdogcart", "BUY_HOTDOG_PLYR" )))
            {
                SAY_AMBIENT_SPEECH( sub_695(), "THANKS", 1, 1, 0 );
                BLOCK_CHAR_GESTURE_ANIMS( sub_695(), 1 );
                if (DOES_OBJECT_EXIST( l_U81 ))
                {
                    TASK_LOOK_AT_OBJECT( sub_695(), l_U81, 2000, 0 );
                }
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_695(), "EAT_HOTDOG_PLYR", "amb@hotdogcart", 8.00000000, 0, 0, 0, 0, -2 );
                l_U40 = 0.00000000;
                if (IS_PLAYER_PLAYING( sub_547() ))
                {
                    sub_744( 1 );
                }
                l_U14 = 22;
            }
            break;
            case 22:
            BLOCK_CHAR_GESTURE_ANIMS( sub_695(), 1 );
            if (IS_CHAR_PLAYING_ANIM( sub_695(), "amb@hotdogcart", "EAT_HOTDOG_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_695(), "amb@hotdogcart", "EAT_HOTDOG_PLYR", ref l_U40 );
            }
            if ((l_U40 > 0.99000000) || (NOT (IS_CHAR_PLAYING_ANIM( sub_695(), "amb@hotdogcart", "EAT_HOTDOG_PLYR" ))))
            {
                if (DOES_OBJECT_EXIST( l_U81 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U81 ))
                    {
                        DETACH_OBJECT( l_U81, 1 );
                    }
                    DELETE_OBJECT( ref l_U81 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U81 );
                }
                BLOCK_CHAR_GESTURE_ANIMS( sub_695(), 1 );
                l_U14 = 23;
            }
            break;
            case 23:
            BLOCK_CHAR_GESTURE_ANIMS( sub_695(), 1 );
            sub_277( 2, "ObjScpt_04" );
            sub_277( 2, "ClaScpt_04" );
            sub_277( 2, "NULL" );
            if (DOES_OBJECT_EXIST( l_U80 ))
            {
                if (IS_OBJECT_ATTACHED( l_U80 ))
                {
                    DETACH_OBJECT( l_U80, 1 );
                }
                DELETE_OBJECT( ref l_U80 );
            }
            CREATE_OBJECT( l_U76, l_U30._fU0, l_U30._fU4, l_U30._fU8, ref l_U80, 1 );
            if (DOES_OBJECT_EXIST( l_U80 ))
            {
                SET_OBJECT_VISIBLE( l_U80, 0 );
                SET_OBJECT_COLLISION( l_U80, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U78 )))
            {
                TASK_ACHIEVE_HEADING( l_U78, l_U39 );
            }
            BLOCK_CHAR_GESTURE_ANIMS( sub_695(), 0 );
            BLOCK_CHAR_GESTURE_ANIMS( l_U78, 0 );
            SET_MINIGAME_IN_PROGRESS( 0 );
            l_U40 = 0.00000000;
            l_U61 = 0;
            l_U62 = 0;
            l_U63 = 0;
            l_U64 = 0;
            g_U9522 = 0;
            sub_15666();
            l_U13 = 3;
            l_U14 = 0;
            break;
        }
    }
    return;
}

int sub_12489()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_12537()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_695() );
        SET_PLAYER_CONTROL( sub_547(), 1 );
        return 1;
    }
    return 0;
}

int sub_12537()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 100) || (iVar2 < 65436))
    {
        return 1;
    }
    if ((iVar3 > 100) || (iVar3 < 65436))
    {
        return 1;
    }
    return 0;
}

int sub_12697(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_695() )))
    {
        GET_CHAR_COORDINATES( sub_695(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_12829()
{
    if (NOT (IS_CHAR_DEAD( sub_695() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_695(), ref l_U11 );
        if (l_U11 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_695(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_695(), 0, 1 );
        }
        if (l_U11 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_695(), 0, 1 );
        }
    }
    return;
}

void sub_13986()
{
    ADD_SCORE( sub_547(), -5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 97, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 5 );
    sub_14032( 1, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 307, 1 );
    sub_14448();
    SET_CHAR_HEALTH( sub_695(), sub_14565() );
    return;
}

void sub_14032(unknown uParam0, unknown uParam1)
{
    sub_14053( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_14053(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_14448()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_547() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_547() );
        }
    }
    sub_14505();
    return;
}

void sub_14505()
{
    if (NOT (IS_CHAR_DEAD( sub_695() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_695() );
    }
    return;
}

void sub_14565()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_695() )))
    {
        GET_CHAR_HEALTH( sub_695(), ref Result );
        if (Result <= 100)
        {
            Result += 100;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

void sub_15666()
{
    if (NOT (IS_CHAR_DEAD( sub_695() )))
    {
        if (l_U11 != 0)
        {
            if (l_U11 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_695(), l_U11, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_695(), 46 );
            }
        }
    }
    return;
}
