#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	struct<28> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<216> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8000, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	struct<9> Local_274[16];
	struct<9> Local_419[4];
	struct<9> Local_456[6];
	var uLocal_511 = 1;
	var uLocal_512 = 0;
	var uLocal_513 = 5;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	char* sLocal_519[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_526[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_541 = 4;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	struct<14> Local_578[1];
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622[5] = { 0, 0, 0, 0, 0 };
	int iLocal_628 = 0;
	var uLocal_629 = 0;
	float fLocal_630 = 0f;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	var uLocal_637[2] = { 0, 0 };
	int iLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	int iLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_43 = 1452745259;
	iLocal_44 = -258459266;
	iLocal_45 = 2087366558;
	iLocal_46 = -359184052;
	iLocal_47 = 871322766;
	iLocal_48 = 753163213;
	iLocal_49 = -22664287;
	iLocal_636 = 1;
	iLocal_658 = vScriptParam_0.x;
	iLocal_656 = vScriptParam_0.z;
	if (func_1(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	}
	func_2();
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_657)
		{
			iLocal_657 = MISC::GET_GAME_TIMER() + 1000;
			iVar0 = iLocal_656;
			func_4(iLocal_658, &iLocal_656);
			switch (iLocal_656)
			{
				case 0:
					if (!Global_1879534->f_1)
					{
						bLocal_659 = !func_5(iLocal_658, 1);
						if (bLocal_659)
						{
						}
						iLocal_656 = 1;
					}
					break;
				case 1:
					iLocal_656 = 2;
					break;
				case 2:
					if (func_6(bLocal_659))
					{
						iLocal_656 = 4;
					}
					break;
				case 4:
					iLocal_656 = 6;
					break;
				case 6:
					if (func_7(iLocal_658, -1, -1, 0))
					{
						func_8(iLocal_658, 4);
						iLocal_656 = 7;
					}
					break;
				case 7:
					iLocal_656 = 8;
					break;
				case 8:
					func_9(iLocal_658);
					iLocal_656 = 9;
					break;
				case 9:
					if (iLocal_658 != 5)
					{
						func_10(Global_1898004);
						func_11(iLocal_658, Global_1898004, bLocal_659);
					}
					func_8(iLocal_658, 8);
					iLocal_656 = 10;
					break;
				case 10:
					if (!bLocal_659)
					{
						func_12();
						if (func_13(32))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(500);
							}
							func_14(32);
						}
						iLocal_656 = 3;
					}
					else
					{
						iLocal_656 = 3;
					}
					break;
				case 3:
					if (!STREAMING::_0xCF45DF50C7775F2A())
					{
						if (func_15(bLocal_659))
						{
							iLocal_656 = 11;
						}
					}
					break;
				case 11:
					if (!bLocal_659)
					{
						if (!func_16(iLocal_658))
						{
							iLocal_657 = 0;
						}
					}
					func_17(Global_1898004, iLocal_658);
					break;
				case 12:
					func_18();
					break;
			}
			if (iVar0 != iLocal_656)
			{
				iLocal_657 = 0;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_18();
}

int func_1(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_19(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_19(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_18();
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		else
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
	}
}

int func_3()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35) && CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	return 1;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_13(16))
	{
		return;
	}
	if (Global_1894899->f_7 == 0)
	{
		func_14(16);
		return;
	}
	if (!func_20(iParam0))
	{
		Global_1894899->f_7 = 0;
		func_14(16);
		return;
	}
	if (func_21(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_22(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_22(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_22(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_22(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_21(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_22(1);
			*iParam1 = 11;
			return;
		}
	}
}

int func_5(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_23(iParam0))
	{
		return 0;
	}
	if (func_24() == -1)
	{
		if (func_25(6206, 1, 1))
		{
			iVar0 = func_26(0);
			iVar1 = func_27(iVar0);
			return 0;
		}
		if (bParam1)
		{
			if (func_28() == iParam0)
			{
				return 0;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_29(63))
					{
						return 0;
					}
					if (func_30(76) || func_31())
					{
						return 0;
					}
					break;
				case 125:
					if (!func_32())
					{
						return 0;
					}
					break;
				case 129:
					if (!func_33())
					{
						return 0;
					}
					if (func_34(19, 0))
					{
						return 0;
					}
					break;
				case 114:
					if (!func_33())
					{
						return 0;
					}
					if (func_34(20, 0))
					{
						return 0;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_24() == 0)
	{
		return 0;
	}
	else
	{
		return 0;
	}
	if (func_35(iParam0, 256))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar2 = func_36(iParam0);
		if (!func_37(iVar2))
		{
			return 0;
		}
		iVar3 = func_38(iVar2);
		if (func_39(iVar3))
		{
			func_40(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_41(iVar3, 1))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_6(bool bParam0)
{
	func_42();
	Local_50.f_215 = Local_15.f_3;
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_27))
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_15.f_27, 7);
	}
	return 1;
}

int func_7(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return 1;
	}
	if (!func_43(iParam0))
	{
		return 1;
	}
	if (func_35(iParam0, 16))
	{
		return 1;
	}
	if (func_44(iParam0) && !func_45(iParam0))
	{
	}
	if (func_46(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_47(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_47(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_44(iParam0) || func_45(iParam0)) || func_48(&Global_1897950))
			{
				func_49(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_8(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_9(int iParam0)
{
	iParam0 = iParam0;
}

void func_10(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		((*uParam0)[iVar0 /*3*/])->f_1 = 0;
		((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_11(int iParam0, var uParam1, bool bParam2)
{
	func_50(uParam1, Local_50.f_215, 1);
}

void func_12()
{
	if (func_51(66) || func_52(128))
	{
		func_53(256);
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", true, true);
	func_54();
	func_55();
	func_56();
	func_57();
	func_58();
	func_59(&Local_50, 16, &sLocal_519, 30);
	func_60(&(Local_50.f_155), 1);
	func_61(&(Local_50.f_155), 0);
	func_62(&(Local_50.f_155), 1);
	func_63(&(Local_50.f_155), 0);
	func_64(&(Local_50.f_155), 0);
	func_65(&(Local_50.f_155), 1);
}

bool func_13(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_14(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

int func_15(bool bParam0)
{
	return 1;
}

int func_16(int iParam0)
{
	switch (Local_50)
	{
		case 0:
			if (func_66(&Local_50, &uLocal_511, &uLocal_513, "HANGING", 0))
			{
				func_67(&Local_578);
				func_68(&Local_50, 1);
			}
			break;
		case 1:
			if (func_69(&Local_50, &Local_274, -1535431934, 0, iLocal_631))
			{
				Local_50.f_197 = 0;
				func_68(&Local_50, 2);
			}
			break;
		case 2:
			if (func_69(&Local_50, &Local_419, -1683752762, 0, 3))
			{
				Local_50.f_197 = 0;
				func_68(&Local_50, 3);
			}
			break;
		case 3:
			if (func_69(&Local_50, &Local_456, -1683752762, 0, 5))
			{
				Local_50.f_197 = 0;
				func_70(0);
				if (!func_71(256))
				{
					if (func_71(128))
					{
						func_72();
					}
				}
				func_73();
				func_74();
				func_75(&Local_50, &Local_274, 0, iLocal_631);
				func_75(&Local_50, &Local_419, 0, 3);
				func_75(&Local_50, &Local_456, 0, 5);
				iLocal_640 = GRAPHICS::CREATE_TRACKED_POINT();
				GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_640, -2216.052f, 730.4907f, 123.6852f, 3f);
				func_68(&Local_50, 7);
			}
			break;
		case 7:
			func_76(&Local_50, &Local_274);
			func_77();
			break;
	}
	if (!func_78(&Local_50, 4))
	{
		func_79();
	}
	func_80();
	func_81(&Local_50);
	func_82();
	return 0;
}

void func_17(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_83(&Global_1935630, 16384)) || func_83(&Global_1935630, 8388608))
	{
		return;
	}
	if (func_84(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_85();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch (((*uParam0)[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0[iVar3 /*3*/]))
				{
					if (VOLUME::_0xF256A75210C5C0EB(uParam0[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_86((*uParam0)[iVar3 /*3*/], 1) && func_87(iParam1)) && !func_88(iParam1, 16))
							{
								func_90(iParam1, func_89(), -1, 0, -1, 0);
								func_91((*uParam0)[iVar3 /*3*/], 1);
							}
							func_92(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_24() == -1)
	{
		if (func_93() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_94();
			func_95(Global_1310750->f_16071, 0, iVar4, 0, 0);
		}
	}
	func_96(bVar0);
	if (func_24() == -1)
	{
		func_97((iParam1 == func_28() && bVar0));
	}
}

void func_18()
{
	func_98(bLocal_659);
	func_99(bLocal_659);
	if (func_24() == -1)
	{
		if (iLocal_658 != 5)
		{
			func_100(iLocal_658);
		}
	}
	if (iLocal_658 != 5)
	{
		func_101(iLocal_658);
		func_102(iLocal_658, 4);
		func_102(iLocal_658, 8);
		func_96(0);
		if (func_24() == -1)
		{
			func_97(0);
		}
	}
	func_103(0);
	if (func_28() == iLocal_658)
	{
		func_104(0);
	}
	if (func_105(func_36(iLocal_658), 1))
	{
		func_107(func_106(iLocal_658), 1, 0);
	}
	func_108(iLocal_658);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_19(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_20(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return func_35(iParam0, 8);
}

bool func_21(int iParam0)
{
	return (Global_1894899->f_7 && iParam0) != 0;
}

void func_22(int iParam0)
{
	Global_1894899->f_7 = (Global_1894899->f_7 - (Global_1894899->f_7 && iParam0));
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_109(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return (Global_40.f_9571[iVar0 /*10*/])->f_1 == 5;
}

int func_24()
{
	return Global_1572887->f_12;
}

int func_25(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_110())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_111(&(Global_1898164->f_1[0 /*5*/]));
		if (func_112(iVar0) && func_113(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_37(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_27(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	return func_115(func_114(iParam0));
}

int func_28()
{
	return Global_40.f_4283.f_1;
}

int func_29(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_112(iParam0))
	{
		return 0;
	}
	return func_105(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_30(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_105(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
	}
	return (UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1835011)[iParam0 /*74*/])->f_2) && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1835011)[iParam0 /*74*/])->f_2));
}

int func_31()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_32()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_33()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_24() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || ((*Global_1347702)[iVar0 /*49*/])->f_13 & 16384 == 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_36(int iParam0)
{
	if (!func_116(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

bool func_37(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_38(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -15;
	}
	return func_117(iParam0);
}

bool func_39(int iParam0)
{
	return iParam0 != -15;
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_118(*iParam0);
	iVar1 = func_119(*iParam0);
	iVar2 = func_120(*iParam0);
	iVar3 = func_121(*iParam0);
	iVar4 = func_122(*iParam0);
	iVar5 = func_123(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_124(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_124(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_125(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_41(int iParam0, bool bParam1)
{
	return func_127(func_126(), iParam0, bParam1);
}

void func_42()
{
	Local_15 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15, -2215.921f, 715.4277f, 108.5499f, 0f, 0f, -60.71788f, 61.12918f, 71.4177f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2185.79f, 719.8107f, 125.9173f, 0f, 0f, -49.6687f, 78.42181f, 29.96664f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2207.069f, 698.5532f, 125.9173f, 0f, 0f, 18.13125f, 57.41941f, 55.58218f, 40f);
	VOLUME::_0x39816F6F94F385AD(Local_15, -2243.9f, 698.0834f, 125.9173f, 0f, 0f, 157.6347f, 53.98835f, 35.64567f, 40f);
	Local_15.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(-2162.379f, 697.5178f, 124.2176f, 0f, 0f, 117.2988f, 7.23474f, 10.33556f, 10f);
	Local_15.f_2 = VOLUME::_CREATE_VOLUME_BOX(-2176.081f, 718.1721f, 123.1325f, 0f, 0f, -65.64973f, 13.25763f, 11.35147f, 3.617907f);
	Local_15.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER(-2205.058f, 704.8635f, 107.6184f, 0f, 0f, 0f, 100f, 51f, 55f);
	Local_15.f_4 = VOLUME::_CREATE_VOLUME_BOX(-2179.158f, 718.7728f, 125.696f, 0f, 0f, 25.73497f, 2.51749f, 8.753881f, 1.420768f);
	Local_15.f_5 = VOLUME::_CREATE_VOLUME_BOX(-2181.856f, 703.3795f, 125.5378f, 0f, 0f, 31.8471f, 25.59958f, 28.61663f, 14f);
	Local_15.f_6 = VOLUME::_CREATE_VOLUME_BOX(-2184.401f, 716.2277f, 125.5378f, 0f, 0f, 31.8471f, 46.04769f, 32.37297f, 14f);
	Local_15.f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_7, -2195.499f, 704.8807f, 123.1368f, 0f, 0f, 30.40001f, 18.83077f, 12f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_7, -2198.667f, 710.2791f, 123.1368f, 0f, 0f, 30.40001f, 32.91431f, 12f, 10f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_7, -2203.972f, 709.9851f, 123.1368f, 0f, 0f, -15.61009f, 12f, 12f, 10f);
	Local_15.f_8 = VOLUME::_CREATE_VOLUME_BOX(-2177.229f, 719.6956f, 126.3739f, 0f, 0f, 25.68904f, 55.78278f, 26.5051f, 13.80155f);
	Local_15.f_9 = VOLUME::_CREATE_VOLUME_BOX(-2174.92f, 720.5648f, 122.894f, 0f, 0f, 25.00888f, 4.885302f, 15.48536f, 2.756113f);
	Local_15.f_10 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_10, -2238.242f, 733.6033f, 132.643f, 0f, 0f, 13.43939f, 3.288061f, 3.232871f, 12.02643f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_10, -2238.109f, 733.6352f, 128.3968f, 0f, 0f, 13.43939f, 5.500687f, 5.320982f, 3.092754f);
	Local_15.f_11 = VOLUME::_CREATE_VOLUME_BOX(-2219.658f, 736.7062f, 123.6755f, 0f, 0f, 29.83443f, 7.807473f, 10.42084f, 3f);
	Local_15.f_12 = VOLUME::_CREATE_VOLUME_BOX(-2209.769f, 719.3145f, 122.5114f, 0f, 0f, 29.49112f, 18.56119f, 13.66177f, 5f);
	Local_15.f_13 = VOLUME::_CREATE_VOLUME_BOX(-2174.108f, 723.7501f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 1.679469f, 2.345157f);
	Local_15.f_14 = VOLUME::_CREATE_VOLUME_BOX(-2172.26f, 719.765f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 3.028282f, 2.345157f);
	Local_15.f_15 = VOLUME::_CREATE_VOLUME_BOX(-2182.887f, 718.5485f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 1.910376f, 2.345157f);
	Local_15.f_16 = VOLUME::_CREATE_VOLUME_BOX(-2180.633f, 713.69f, 122.7633f, 0f, 0f, 24.88236f, 0.753009f, 2.099462f, 2.345157f);
	Local_15.f_17 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_17, -2213.416f, 724.3344f, 126.4249f, 0f, 0f, 120.7389f, 12.5758f, 14.00233f, 16.17389f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_17, -2219.67f, 734.8531f, 126.4249f, 0f, 0f, 120.7389f, 21.75996f, 19.71248f, 16.17389f);
	Local_15.f_18 = VOLUME::_CREATE_VOLUME_BOX(-2217.485f, 732.937f, 123.3117f, 0f, 0f, 120.7389f, 15.10671f, 14.00233f, 3.046946f);
	Local_15.f_19 = VOLUME::_CREATE_VOLUME_BOX(-2217.907f, 733.649f, 123.3117f, 0f, 0f, 120.7389f, 18.05849f, 21.12796f, 3.046946f);
	Local_15.f_20 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2225.716f, 701.6668f, 119.2689f, 0f, 0f, 26.89523f, 9.995893f, 16.37919f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2241.587f, 694.2487f, 119.2689f, 0f, 0f, 40.89367f, 13.73913f, 47.38847f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2233.069f, 692.6113f, 119.2689f, 0f, 0f, 26.89523f, 13.60186f, 59.31243f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_20, -2245.768f, 688.1744f, 119.2689f, 0f, 0f, 58.93462f, 18.14353f, 47.38847f, 14.88079f);
	Local_15.f_21 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_21, -2241.104f, 690.2465f, 119.9667f, 0f, 0f, -50.30847f, 10.47053f, 23.45253f, 11.39182f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_21, -2244.537f, 708.3721f, 119.9667f, 0f, 0f, 117.5792f, 41.35089f, 20.1097f, 11.39182f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_21, -2255.364f, 700.6849f, 119.9667f, 0f, 0f, 157.6347f, 30.40379f, 32.45269f, 11.39182f);
	Local_15.f_22 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_15.f_22, -2229.781f, 701.3605f, 119.2689f, 0f, 0f, 26.89523f, 2.753997f, 20.84027f, 14.88079f);
	VOLUME::_0x39816F6F94F385AD(Local_15.f_22, -2230.22f, 689.3765f, 119.2689f, 0f, 0f, 135.7285f, 2.753997f, 12.30992f, 14.88079f);
	Local_15.f_23 = VOLUME::_CREATE_VOLUME_BOX(-2151.21f, 617.5656f, 139.3943f, 0f, 0f, -14.07312f, 180f, 180f, 80.57575f);
	Local_15.f_24 = VOLUME::_CREATE_VOLUME_BOX(-2291.843f, 653.1472f, 139.3943f, 0f, 0f, -14.07311f, 180f, 180f, 80.57575f);
	Local_15.f_25 = VOLUME::_CREATE_VOLUME_BOX(-2254.409f, 800.5667f, 139.3943f, 0f, 0f, -14.07311f, 180f, 180f, 80.57575f);
	Local_15.f_26 = VOLUME::_CREATE_VOLUME_BOX(-2113.777f, 764.9851f, 139.3943f, 0f, 0f, -14.07312f, 180f, 180f, 80.57575f);
	Local_15.f_27 = VOLUME::_CREATE_VOLUME_BOX(-2175.111f, 722.58f, 122.09f, 0f, 0f, 115f, 2.5f, 1.2f, 1f);
}

bool func_43(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_44(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return func_35(iParam0, 33554432);
}

int func_45(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_24() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_49(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_128(iParam0, 2))
	{
		return 0;
	}
	if (func_128(iParam0, 32) && !bParam1)
	{
		func_130(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_129(iParam0)));
		if (func_24() == -1)
		{
			if (func_128(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_131(iParam0));
				func_132(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(iParam0));
		}
		return 0;
	}
	if (!func_133(iParam0) && func_24() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_0x800DF3FC913355F3(func_131(iParam0)))
	{
		func_132(iParam0, 128);
		return 1;
	}
	func_130(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_129(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_131(iParam0));
	if (func_128(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_131(iParam0));
		func_132(iParam0, 2048);
	}
	return 1;
}

void func_50(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_134(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	((*uParam0)[uParam0->f_61 /*3*/])->f_1 = iParam2;
	((*uParam0)[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

int func_51(int iParam0)
{
	int iVar0;

	if (!func_135(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1879534->f_7301.f_2[iVar0 /*4*/]), 1))
			{
				switch (&Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])
				{
					case -2093459088:
						if ((Global_1879534->f_1911[(Global_1879534->f_7301.f_2[iVar0 /*4*/])->f_1 /*3*/])->f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_52(int iParam0)
{
	return (Global_1898091 && iParam0) != 0;
}

void func_53(int iParam0)
{
	uLocal_629 = (uLocal_629 || iParam0);
}

void func_54()
{
	int iVar0;

	if (!func_136(&(iLocal_622[0])))
	{
		iVar0 = -905798639;
		iLocal_622[0] = iVar0;
		func_137(&(iLocal_622[0]), 1, 0f, 0, 0, 0, 0, 0);
		if (func_138(&(iLocal_622[0])))
		{
		}
	}
	if (!func_136(&(iLocal_622[1])))
	{
		iVar0 = 944044180;
		iLocal_622[1] = iVar0;
		func_137(&(iLocal_622[1]), 1, 0f, 0, 0, 0, 0, 0);
		if (func_138(&(iLocal_622[1])))
		{
		}
	}
	if (!func_136(&(iLocal_622[2])))
	{
		iVar0 = -2123724066;
		iLocal_622[2] = iVar0;
		func_137(&(iLocal_622[2]), 0, 0f, 0, 1, 0, 0, 0);
		if (func_138(&(iLocal_622[2])))
		{
		}
	}
	if (!func_136(&(iLocal_622[3])))
	{
		iVar0 = -1826804157;
		iLocal_622[3] = iVar0;
		func_137(&(iLocal_622[3]), 0, 0f, 0, 1, 0, 0, 0);
		if (func_138(&(iLocal_622[3])))
		{
		}
	}
	if (!func_136(&(iLocal_622[4])))
	{
		iVar0 = -1624567095;
		iLocal_622[4] = iVar0;
		func_137(&(iLocal_622[4]), 0, 0f, 0, 1, 0, 0, 0);
		if (func_138(&(iLocal_622[4])))
		{
		}
	}
	if (!func_136(iLocal_628))
	{
		iVar0 = -2082052312;
		iLocal_628 = iVar0;
		func_137(iLocal_628, 0, 0f, 0, 0, 0, 0, 0);
		if (func_138(iLocal_628))
		{
		}
	}
}

void func_55()
{
	int iVar0;

	if (func_71(256))
	{
		Local_50.f_189 = 1;
		Local_50.f_199 = 5;
		Local_50.f_201 = (Local_50.f_199 + func_139());
	}
	else
	{
		Local_50.f_189 = 3;
		Local_50.f_199 = 16;
		Local_50.f_201 = (Local_50.f_199 + func_139());
	}
	func_140();
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		Local_274[iVar0 /*9*/] = joaat("g_m_m_uniranchers_01");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_419)
	{
		Local_419[iVar0 /*9*/] = 1230359523;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_456)
	{
		if (iVar0 < 1)
		{
			Local_456[iVar0 /*9*/] = joaat("a_c_bull_01");
		}
		else
		{
			Local_456[iVar0 /*9*/] = joaat("a_c_cow");
		}
		iVar0++;
	}
	func_141();
	Local_50.f_207 = "CALLOUT_LETS_GET_OUTTA_HERE_NEUTRAL";
	func_142(&uLocal_513, &(Local_274[0 /*9*/]));
	func_142(&uLocal_513, &(Local_419[0 /*9*/]));
	func_142(&uLocal_513, &(Local_456[0 /*9*/]));
	func_142(&uLocal_513, &(Local_456[(Local_456 - 1) /*9*/]));
}

void func_56()
{
	sLocal_519[0] = "HIDEOUT_COMBAT1";
	sLocal_519[1] = "HIDEOUT_COMBAT2";
	sLocal_519[2] = "HIDEOUT_COMBAT3";
	sLocal_519[3] = "HIDEOUT_COMBAT4";
	sLocal_519[4] = "HIDEOUT_COMBAT5";
	sLocal_519[5] = "HIDEOUT_COMBAT6";
}

void func_57()
{
}

void func_58()
{
	int iVar0;

	*(Local_578[0 /*14*/]) = { func_143(4, 1) };
	(Local_578[0 /*14*/])->f_6 = func_144(4, 1);
	(Local_578[0 /*14*/])->f_7 = -21851829;
	(Local_578[0 /*14*/])->f_3 = { 0f, 0f, (Local_578[iVar0 /*14*/])->f_6 };
	func_142(&uLocal_513, (Local_578[0 /*14*/])->f_7);
}

void func_59(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	bool bVar0;

	func_145(128);
	iParam0->f_205 = iParam1;
	bVar0 = func_146(&(iParam0->f_5), 1048576);
	iParam0->f_202 = { func_147(iParam0->f_205, bVar0) };
	iParam0->f_187 = MISC::GET_RANDOM_INT_IN_RANGE(7502, 10000);
	if (iParam0->f_205 == 16)
	{
		func_148(iParam0->f_202, 120f, 0);
	}
	else
	{
		func_148(iParam0->f_202, 80f, 0);
	}
	func_149(iParam0, 1);
	func_150(&(iParam0->f_155));
	func_151(&(iParam0->f_155));
	func_152(&(iParam0->f_155));
	func_153(&(iParam0->f_155), 1);
	func_154(&(iParam0->f_155), BUILTIN::TO_FLOAT(iParam3));
	func_155(&(iParam0->f_155), 50);
	func_156(&(iParam0->f_155), 8f);
	func_157(sParam2);
	func_158(iParam0);
	if (!func_159(65))
	{
		func_160(iParam0);
	}
	func_161(iParam0);
	func_162(iParam0);
	func_163(&(iParam0->f_38), Global_35, "ARTHUR", 0);
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 4);
	}
	else
	{
		func_165(uParam0, 4);
	}
}

void func_61(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 256);
	}
	else
	{
		func_165(uParam0, 256);
	}
}

void func_62(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_165(&(uParam0->f_1), 131072);
	}
	else
	{
		func_164(&(uParam0->f_1), 131072);
	}
}

void func_63(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_165(&(uParam0->f_1), 1);
	}
	else
	{
		func_164(&(uParam0->f_1), 1);
	}
}

void func_64(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 512);
	}
	else
	{
		func_165(uParam0, 512);
	}
}

void func_65(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_165(&(uParam0->f_1), 2048);
	}
	else
	{
		func_164(&(uParam0->f_1), 2048);
	}
}

int func_66(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	if (iParam0->f_201 > 0)
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_201);
	}
	else
	{
		PED::_0xED9582B3DA8F02B4(iParam0->f_199);
	}
	if (func_166(&(iParam0->f_1), uParam1, uParam2, sParam3, sParam4) && PED::_0x5E420FF293EE5472())
	{
		return 1;
	}
	return 0;
}

void func_67(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!((*uParam0)[iVar0 /*14*/])->f_11)
		{
			if (((*uParam0)[iVar0 /*14*/])->f_7 != 0)
			{
				if (((*uParam0)[iVar0 /*14*/])->f_13 > -1)
				{
					iVar10 = ((*uParam0)[iVar0 /*14*/])->f_13;
					vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*((*uParam0)[iVar10 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_6, *((*uParam0)[iVar0 /*14*/])) };
					((*uParam0)[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam0)[iVar0 /*14*/])->f_7, vVar7, true, true, false, false, true);
					if (!((*uParam0)[iVar10 /*14*/])->f_11)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar10 /*14*/])->f_8, 0, *((*uParam0)[iVar0 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_3, 0, 0, 0, 0, 2, 1, 0, 0);
					}
					else
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar10 /*14*/])->f_9, 0, *((*uParam0)[iVar0 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_3, 0, 0, 0, 0, 2, 1, 0, 0);
					}
				}
				else
				{
					((*uParam0)[iVar0 /*14*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam0)[iVar0 /*14*/])->f_7, *((*uParam0)[iVar0 /*14*/]), true, true, true, false, true);
					vVar1 = { ENTITY::GET_ENTITY_COORDS(((*uParam0)[iVar0 /*14*/])->f_8, true, false) };
				}
				ENTITY::SET_ENTITY_ROTATION(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar0 /*14*/])->f_3, 2, true);
				if (((*uParam0)[iVar0 /*14*/])->f_12)
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam0)[iVar0 /*14*/])->f_8, ((*uParam0)[iVar0 /*14*/])->f_12);
				}
				else
				{
					PHYSICS::ACTIVATE_PHYSICS(((*uParam0)[iVar0 /*14*/])->f_8);
					ENTITY::_0x9587913B9E772D29(((*uParam0)[iVar0 /*14*/])->f_8, 0);
				}
			}
		}
		else
		{
			((*uParam0)[iVar0 /*14*/])->f_9 = VEHICLE::CREATE_VEHICLE(((*uParam0)[iVar0 /*14*/])->f_7, *((*uParam0)[iVar0 /*14*/]), ((*uParam0)[iVar0 /*14*/])->f_6, true, true, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*14*/])->f_8))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(((*uParam0)[iVar0 /*14*/])->f_8, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION(((*uParam0)[iVar0 /*14*/])->f_8, 2) };
		}
		else if (ENTITY::DOES_ENTITY_EXIST(((*uParam0)[iVar0 /*14*/])->f_9))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(((*uParam0)[iVar0 /*14*/])->f_9, true, false) };
			vVar4 = { ENTITY::GET_ENTITY_ROTATION(((*uParam0)[iVar0 /*14*/])->f_9, 2) };
		}
		iVar0++;
	}
}

void func_68(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam4 < 0)
	{
		iParam4 = (iParam0->f_199 - 1);
	}
	if (iParam0->f_197 < iParam3)
	{
		iParam0->f_197 = iParam3;
	}
	if (iParam1[iParam0->f_197 /*9*/] != 0)
	{
		func_167((*iParam1)[iParam0->f_197 /*9*/], iParam2, 1);
	}
	iParam0->f_197++;
	if (iParam0->f_197 > iParam4)
	{
		return 1;
	}
	return 0;
}

void func_70(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_50.f_199 - 1))
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((Local_274[iVar0 /*9*/])->f_5, bParam0);
			PED::SET_PED_CONFIG_FLAG((Local_274[iVar0 /*9*/])->f_5, 130, bParam0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), (Local_274[iVar0 /*9*/])->f_5, 7, 0, 1);
		}
		iVar0++;
	}
}

bool func_71(int iParam0)
{
	return (uLocal_629 && iParam0) != 0;
}

void func_72()
{
	int iVar0;

	iVar0 = 11;
	if (!ENTITY::IS_ENTITY_DEAD((Local_274[iVar0 /*9*/])->f_5))
	{
		DECORATOR::DECOR_SET_BOOL((Local_274[iVar0 /*9*/])->f_5, "proc_bounty_target", true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS((Local_274[iVar0 /*9*/])->f_5, false);
		func_169();
		func_170(&((Local_274[iVar0 /*9*/])->f_5));
	}
}

void func_73()
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
		{
			sVar1 = func_171(iVar0);
			func_172((Local_274[iVar0 /*9*/])->f_5, sVar1, 0);
			PED::SET_PED_CONFIG_FLAG((Local_274[iVar0 /*9*/])->f_5, 246, true);
			PED::_0xF1C03A5352243A30((Local_274[iVar0 /*9*/])->f_5);
			func_173(Local_274[iVar0 /*9*/], 0);
			TASK::TASK_LOOK_AT_ENTITY((Local_274[iVar0 /*9*/])->f_5, Global_35, -1, 0, 51, 0);
			func_174(0, (Local_274[iVar0 /*9*/])->f_5);
		}
		iVar0++;
	}
	func_175((Local_274[0 /*9*/])->f_5, joaat("weapon_unarmed"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	func_175((Local_274[1 /*9*/])->f_5, -594562071, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
}

void func_74()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	func_176(0, iLocal_44);
	func_176(1, iLocal_43);
	func_176(2, iLocal_47);
	func_176(3, iLocal_45);
	func_176(4, iLocal_48);
	if (!func_71(256))
	{
		func_176(5, iLocal_46);
		func_176(9, iLocal_49);
		func_176(10, iLocal_49);
		if (func_168((Local_274[12 /*9*/])->f_5, 0, 1))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE((Local_274[12 /*9*/])->f_5, -1543059912, 0, 0, 0, -1082130432, 0);
			func_177(&((Local_274[12 /*9*/])->f_7), 256, 0);
		}
		if (func_168((Local_274[13 /*9*/])->f_5, 0, 1))
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE((Local_274[13 /*9*/])->f_5, -1543059912, 0, 0, 0, -1082130432, 0);
			func_177(&((Local_274[13 /*9*/])->f_7), 256, 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 0))
		{
			if (!func_178(&((Local_274[iVar0 /*9*/])->f_7), 256))
			{
				func_179((Local_274[iVar0 /*9*/])->f_5, (Local_274[iVar0 /*9*/])->f_1, 3f, 3, 0, 0, 0);
			}
		}
		iVar0++;
	}
	if (!func_71(256))
	{
		if (func_71(128))
		{
			if (func_168((Local_274[11 /*9*/])->f_5, 0, 1))
			{
				vVar1 = { -2215.501f, 728.9337f, 121.9681f };
				fVar4 = 204.9706f;
				if (func_168((Local_419[0 /*9*/])->f_5, 0, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING((Local_419[0 /*9*/])->f_5, vVar1, fVar4, 1, 0, 1);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING((Local_274[11 /*9*/])->f_5, vVar1, fVar4, 1, 0, 1);
					PED::_SET_PED_ON_MOUNT((Local_274[11 /*9*/])->f_5, (Local_419[0 /*9*/])->f_5, -1, true);
				}
			}
		}
	}
	func_180(0);
	func_180(1);
	func_180(2);
	func_180(3);
	func_180(4);
	func_180(5);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 < 0)
	{
		iParam3 = (iParam0->f_199 - 1);
	}
	iVar0 = iParam2;
	while (iVar0 <= iParam3)
	{
		if (func_168(((*iParam1)[iVar0 /*9*/])->f_5, 0, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(((*iParam1)[iVar0 /*9*/])->f_5, true);
		}
		iVar0++;
	}
}

void func_76(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0->f_196 >= iParam0->f_199)
		{
			iParam0->f_196 = 0;
		}
		if (func_168(((*iParam1)[iParam0->f_196 /*9*/])->f_5, 0, 1))
		{
			((*iParam1)[iVar0 /*9*/])->f_8 = func_181(((*iParam1)[iParam0->f_196 /*9*/])->f_5, Global_35, 0, 1);
			if ((*iParam1)[iVar0 /*9*/])->f_8 < func_182(iParam0)
			{
				if (!func_178(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 16))
				{
					func_183(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 32);
					func_177(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 16, 1);
				}
			}
			else if (!func_178(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 32))
			{
				func_183(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 16);
				func_177(&(((*iParam1)[iParam0->f_196 /*9*/])->f_7), 32, 1);
			}
			if (!func_146(&(iParam0->f_5), 65536))
			{
				if (func_184(((*iParam1)[iParam0->f_196 /*9*/])->f_5, 45f, 30f, ((*iParam1)[iVar0 /*9*/])->f_8, 70f))
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(((*iParam1)[iParam0->f_196 /*9*/])->f_5, true, false) };
					func_185(&(iParam0->f_5), 65536);
				}
			}
		}
		iParam0->f_196++;
		iVar0++;
	}
}

void func_77()
{
	if (!func_186(&Local_50, 9))
	{
		Local_50.f_198 = func_187(&Local_274, Local_50.f_199, Local_50.f_199);
	}
	switch (Local_50.f_3)
	{
		case 0:
			if (func_188())
			{
				if (func_189(4, 100))
				{
					func_190();
				}
				else
				{
					func_191(&Local_50, 1);
					func_192();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_START");
			}
			else if (func_193())
			{
				func_53(8);
				func_191(&Local_50, 1);
			}
			break;
		case 1:
			if (!func_71(8))
			{
				if (func_194())
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_50.f_192, Global_35, -1, 0, 1);
					func_191(&Local_50, 2);
				}
			}
			else if (func_195())
			{
				func_196();
				func_190();
			}
			break;
		case 2:
			if (func_197(-5.5f, 1, 0, 0))
			{
				func_196();
				if (!func_71(256))
				{
					func_198(1);
				}
				if (!func_71(512))
				{
					func_199();
					func_53(512);
					func_200(&uLocal_618, 1);
				}
				if (func_193())
				{
					func_53(8);
					func_201(Local_50.f_192, 0, "ARRIVAL_COMBAT_RAID_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_190();
				}
			}
			break;
		case 5:
			func_196();
			if (func_202())
			{
			}
			if (!func_71(256))
			{
				func_198(0);
			}
			if (func_203())
			{
				if (func_204(&uLocal_609) > 20f)
				{
					func_191(&Local_50, 7);
					AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
				}
			}
			break;
		case 7:
			if (Local_50.f_198 < Local_50.f_189)
			{
				func_205();
			}
			if (func_206(&Local_50, &Local_274, -1))
			{
				func_207();
				func_191(&Local_50, 8);
			}
			break;
		case 8:
			if (func_208())
			{
				func_191(&Local_50, 9);
			}
			break;
		case 9:
			if (func_209(&Local_50, &Local_274, 1000, 1, 1))
			{
				func_191(&Local_50, 10);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", false, true);
			}
			break;
		case 10:
			if (func_210(&Local_50))
			{
				func_211(0);
			}
			break;
	}
	if (Local_50.f_3 <= 5)
	{
		func_212(&Local_274, &Local_50);
	}
	if (!func_78(&Local_50, 5))
	{
		func_213();
		if (func_214(&Local_50, &Local_274, Local_50.f_199, 0, 0))
		{
			func_190();
		}
	}
	else if (Local_50.f_3 > 8)
	{
		func_215(&Local_274, &Local_50, 200, 1084227584 /* Float: 5f */);
	}
}

int func_78(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return 0;
	}
	return 1;
}

void func_79()
{
	int iVar0;

	if (func_146(&(Local_50.f_5), 131072))
	{
		return;
	}
	if (!func_146(&(Local_50.f_5), 65536))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
				{
					func_216(Local_274[iVar0 /*9*/], joaat("BLIP_STYLE_ENEMY"), -662251075);
				}
				break;
		}
		iVar0++;
	}
	func_185(&(Local_50.f_5), 131072);
}

void func_80()
{
	vector3 vVar0;

	switch (iLocal_595)
	{
		case 0:
			vVar0 = { VOLUME::_0xF70F00013A62F866(Local_15.f_2) };
			iLocal_621 = INTERIOR::GET_INTERIOR_AT_COORDS(vVar0);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
			{
				func_217(1);
			}
			break;
		case 1:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_621);
				func_217(2);
			}
			break;
		case 2:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_621))
				{
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_621, "han_int_tables_upright"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_621, "han_int_tables_upright", 0);
					}
					func_217(4);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_81(int iParam0)
{
	if (iParam0->f_195 == 0)
	{
		if (func_218(iParam0))
		{
		}
		if (func_219(Global_1888801[iParam0->f_205 /*35*/]) == 3)
		{
			if (func_168(Global_35, 0, 1))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			}
		}
		func_220(iParam0);
	}
	if (!func_146(&(iParam0->f_5), 1073741824 /* Float: 2f */))
	{
		if (!func_221())
		{
			if (iParam0->f_3 >= 4 && iParam0->f_3 < 8)
			{
				func_222(iParam0, 1);
				func_223(iParam0, 1);
			}
		}
		else if (iParam0->f_3 >= 8)
		{
			func_222(iParam0, 0);
			func_224(0);
		}
	}
	if (iParam0->f_195 < 5)
	{
		iParam0->f_195++;
	}
	else
	{
		iParam0->f_195 = 0;
	}
}

void func_82()
{
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_85()
{
	return func_83(&Global_1935630, 4096);
}

bool func_86(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_87(int iParam0)
{
	if (!func_43(iParam0))
	{
		return false;
	}
	return ((((*Global_1888801)[iParam0 /*35*/])->f_20 == 1 || ((*Global_1888801)[iParam0 /*35*/])->f_20 == 2) && !func_225(iParam0));
}

bool func_88(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (((*Global_1888801)[iParam0 /*35*/])->f_21 && iParam1) != 0;
}

int func_89()
{
	return Global_1897952->f_41;
}

void func_90(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_226())
	{
		return;
	}
	sVar1 = func_227(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_228(iParam4))
	{
		if (func_43(iParam0))
		{
			iParam4 = func_230(func_229(iParam0));
		}
		else
		{
			iParam4 = func_230(iParam1);
		}
	}
	if (func_228(iParam4))
	{
		iVar3 = func_231(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_233(func_232(iParam2));
	}
	else if ((func_234(iParam1, 2) || func_235(iParam4, 2)) && !Global_1894899->f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899->f_9 = 1;
	}
	else if ((func_43(iParam0) && func_35(iParam0, 16777216)) && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899->f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899->f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899->f_9 = 1;
	}
	else
	{
		iVar4 = func_121(func_126());
		iVar5 = func_122(func_126());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_236(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, func_237(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_237(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_236(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, func_237(&cVar6, joaat("COLOR_PURE_WHITE")), func_237(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899->f_9 = 0;
	}
	Global_1934266->f_148 = func_238(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_92(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_24() == 0)
	{
		return;
	}
	if (func_239(128))
	{
		return;
	}
	if (!func_240(iParam0))
	{
		return;
	}
	if (func_35(iParam0, 32))
	{
		return;
	}
	func_8(iParam0, 32);
	func_241(Global_1935630, 8192);
	func_243(func_242(-1532769513, joaat("areas")), 1);
	switch (func_229(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_243(func_242(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_243(func_242(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_243(func_242(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_243(func_242(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_243(func_242(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_243(func_242(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_8(iParam0, 64);
	}
}

bool func_93()
{
	return (Global_1894899 & 1 != 0 && func_244() != -1);
}

void func_94()
{
	if (!func_245(&Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1310750)[&Global_1327479 /*111*/])->f_40));
		}
	}
	func_246(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

void func_95(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_247() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0 /*9*/];
		if (((func_245(iVar1) && !func_248(iVar1, iParam2)) && (!bParam3 || !func_249(iVar1))) && (!bParam4 || !func_250(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_251(iVar0);
			}
		}
		iVar0++;
	}
}

void func_96(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 2);
	}
}

void func_98(bool bParam0)
{
}

void func_99(bool bParam0)
{
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_252(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_253(&((Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1]));
		(Global_1392240->f_1[iVar0 /*18*/])->f_6[iVar1] = 0;
		iVar1++;
	}
}

void func_101(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((Global_1914319->f_3[iVar0 /*446*/])->f_9 == iParam0)
		{
			func_254(iVar0);
		}
		iVar0++;
	}
}

void func_102(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

void func_103(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 4;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 4);
	}
}

void func_104(bool bParam0)
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1360165)
	{
		if ((!func_255(iVar0) && !func_256(iVar0)) && iVar0 != Global_1357549->f_1497)
		{
			if ((!func_257(iVar0, 33, 1) || !ENTITY::DOES_ENTITY_EXIST(Global_1360165[iVar0 /*1157*/])) || !ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iVar0 /*1157*/]))
			{
				func_258(iVar0, 0, 0, 1, bParam0);
			}
		}
		iVar0++;
	}
}

int func_105(int iParam0, bool bParam1)
{
	switch (func_219(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 273461605;
		case 16:
			return -857964358;
		case 9:
			return -868076593;
		case 36:
			return 1205826474;
		case 127:
			return 2136753624;
		case 125:
			return -796902762;
		case 118:
			return 1360745816;
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

void func_107(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_259(1497516462);
			func_260(2016141805);
			func_260(1010885152);
			func_260(-502324015);
			break;
		case 2016141805:
			func_260(1497516462);
			func_259(2016141805);
			func_260(1010885152);
			func_260(-502324015);
			break;
		case 1010885152:
			func_260(1497516462);
			func_260(2016141805);
			func_259(1010885152);
			func_260(-502324015);
			break;
		case -502324015:
			func_260(1497516462);
			func_260(2016141805);
			func_260(1010885152);
			func_259(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_260(-538889627);
			func_260(-538880323);
			func_260(-1056767524);
			func_259(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_261();
			func_259(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_262();
			func_259(iParam0);
			break;
		case 2019386373:
			func_260(-664252410);
			func_260(2109952320);
			func_259(2019386373);
			break;
		case -664252410:
			func_260(2019386373);
			func_260(2109952320);
			func_259(-664252410);
			break;
		case 2109952320:
			func_260(2019386373);
			func_260(-664252410);
			func_259(2109952320);
			break;
		case -1674179981:
			func_260(-1835851517);
			func_260(-1838352012);
			func_259(-1674179981);
			break;
		case -1835851517:
			func_260(-1674179981);
			func_260(-1838352012);
			func_259(-1835851517);
			break;
		case -1838352012:
			func_260(-1674179981);
			func_260(-1835851517);
			func_259(-1838352012);
			break;
		case -1717960576:
			func_260(210001842);
			func_259(-1717960576);
			break;
		case 210001842:
			func_260(-1717960576);
			func_259(210001842);
			break;
		case -150493654:
			func_260(-1271608261);
			func_260(1846061697);
			func_260(-1145519186);
			func_259(-150493654);
			break;
		case -1271608261:
			func_260(-150493654);
			func_260(1846061697);
			func_260(-1145519186);
			func_259(-1271608261);
			break;
		case 1846061697:
			func_260(-150493654);
			func_260(-1271608261);
			func_260(-1145519186);
			func_259(1846061697);
			break;
		case -1145519186:
			func_260(-150493654);
			func_260(-1271608261);
			func_260(1846061697);
			func_259(-1145519186);
			break;
		case 1766284049:
			func_260(280705402);
			func_260(1926308480);
			func_259(1766284049);
			break;
		case 280705402:
			func_260(1766284049);
			func_260(1926308480);
			func_259(280705402);
			break;
		case 1926308480:
			func_260(1766284049);
			func_260(280705402);
			func_259(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_260(439465264);
				func_259(1609506757);
			}
			else
			{
				func_260(1609506757);
				func_260(439465264);
			}
			break;
		case 439465264:
			if (func_263(1609506757))
			{
				if (bParam1)
				{
					func_259(439465264);
				}
				else
				{
					func_260(439465264);
				}
			}
			break;
		case 1822001510:
			func_260(-1612662716);
			func_259(1822001510);
			break;
		case -1612662716:
			func_260(1822001510);
			func_259(-1612662716);
			break;
		case 1306158345:
			func_260(1952610440);
			func_260(-223469678);
			func_260(-404698347);
			func_260(1517904467);
			func_259(1306158345);
			break;
		case 1952610440:
			func_260(1306158345);
			func_260(-223469678);
			func_260(-404698347);
			func_260(1517904467);
			func_259(1952610440);
			break;
		case -223469678:
			func_260(1306158345);
			func_260(1952610440);
			func_260(-404698347);
			func_260(1517904467);
			func_259(-223469678);
			break;
		case -404698347:
			func_260(1306158345);
			func_260(1952610440);
			func_260(-223469678);
			func_260(1517904467);
			func_259(-404698347);
			break;
		case 1517904467:
			func_260(1306158345);
			func_260(1952610440);
			func_260(-223469678);
			func_260(-404698347);
			func_259(1517904467);
			break;
		case 1376646519:
			func_260(931649776);
			func_260(-434590080);
			func_260(1743048395);
			func_260(449774763);
			func_259(1376646519);
			break;
		case 931649776:
			func_260(1376646519);
			func_260(-434590080);
			func_260(1743048395);
			func_260(449774763);
			func_259(931649776);
			break;
		case -434590080:
			func_260(1376646519);
			func_260(931649776);
			func_260(1743048395);
			func_260(449774763);
			func_259(-434590080);
			break;
		case 1743048395:
			func_260(1376646519);
			func_260(931649776);
			func_260(-434590080);
			func_260(449774763);
			func_259(1743048395);
			break;
		case 449774763:
			func_260(1376646519);
			func_260(931649776);
			func_260(-434590080);
			func_260(1743048395);
			func_259(449774763);
			break;
		case -1414537028:
			func_260(38162571);
			func_260(1350391819);
			func_260(54073871);
			func_259(-1414537028);
			break;
		case 38162571:
			func_260(-1414537028);
			func_260(1350391819);
			func_260(54073871);
			func_259(38162571);
			break;
		case 1350391819:
			func_260(-1414537028);
			func_260(38162571);
			func_260(54073871);
			func_259(1350391819);
			break;
		case 54073871:
			func_260(-1414537028);
			func_260(38162571);
			func_260(1350391819);
			func_259(54073871);
			break;
		case 198200492:
			func_259(198200492);
			func_260(-1124061431);
			func_260(52706132);
			func_260(-259123672);
			break;
		case -1124061431:
			func_260(198200492);
			func_259(-1124061431);
			func_260(52706132);
			func_260(-259123672);
			break;
		case 52706132:
			func_260(198200492);
			func_260(-1124061431);
			func_259(52706132);
			func_260(-259123672);
			break;
		case -259123672:
			func_260(198200492);
			func_260(-1124061431);
			func_260(52706132);
			func_259(-259123672);
			break;
		case -919512195:
			func_259(-919512195);
			func_260(-1925798111);
			func_260(420709909);
			func_260(1703426636);
			break;
		case -1925798111:
			func_259(-1925798111);
			func_260(-919512195);
			func_260(420709909);
			func_260(1703426636);
			break;
		case 420709909:
			func_259(420709909);
			func_260(-919512195);
			func_260(-1925798111);
			func_260(1703426636);
			break;
		case 1703426636:
			func_259(1703426636);
			func_260(-919512195);
			func_260(-1925798111);
			func_260(420709909);
			break;
		case -1223121209:
			func_259(-1223121209);
			func_260(630808005);
			break;
		case 630808005:
			func_259(630808005);
			func_260(-1223121209);
			break;
		case 1453909576:
			func_259(1453909576);
			func_260(1643531967);
			break;
		case 1643531967:
			func_259(1643531967);
			func_260(1453909576);
			break;
		case 0:
			func_259(0);
			func_260(473295046);
			func_260(-1738165526);
			break;
		case 473295046:
			func_259(473295046);
			func_260(0);
			func_260(-1738165526);
			break;
		case -1738165526:
			func_259(-1738165526);
			func_260(0);
			func_260(473295046);
			break;
		case 932909855:
			func_259(932909855);
			func_260(2051822093);
			break;
		case 2051822093:
			func_259(2051822093);
			func_260(932909855);
			break;
		case 405586984:
			func_259(405586984);
			func_260(1509509592);
			func_260(-959357075);
			func_260(-1311865656);
			break;
		case 1509509592:
			func_259(1509509592);
			func_260(405586984);
			func_260(-959357075);
			func_260(-1311865656);
			break;
		case -959357075:
			func_259(-959357075);
			func_260(1509509592);
			func_260(405586984);
			func_260(-1311865656);
			break;
		case -1311865656:
			func_259(-1311865656);
			func_260(1509509592);
			func_260(-959357075);
			func_260(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_259(-524145696);
			}
			else
			{
				func_260(-524145696);
			}
			func_260(1626481264);
			func_260(282809459);
			break;
		case 282809459:
			func_259(282809459);
			func_260(1626481264);
			func_260(-524145696);
			break;
		case 1626481264:
			func_259(1626481264);
			func_260(-524145696);
			func_260(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_259(885203519);
			}
			else
			{
				func_260(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_259(-1080627546);
			}
			else
			{
				func_260(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_263(iParam0))
				{
					func_259(iParam0);
				}
			}
			else if (func_263(iParam0))
			{
				func_260(iParam0);
			}
			break;
	}
}

void func_108(int iParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_621))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_621);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_22))
	{
		if (PATHFIND::_0xDE0EA444735C1368(Local_15.f_22))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_22);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_27))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_15.f_27);
	}
	if (Local_50.f_205 != iParam0)
	{
		Local_50.f_205 = iParam0;
	}
	if (iLocal_640 != -1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_640);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Hanging_Dog_Ranch", false, true);
	func_211(1);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 36:
			return 0;
		case 16:
			if (!func_31() && !func_30(59))
			{
				return 0;
			}
			else
			{
				return 4;
			}
			break;
		case 9:
			return 2;
		case 79:
			return 1;
		case 109:
			return 3;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
	}
	return -1;
}

int func_110()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_264(func_114(iParam0));
}

bool func_112(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_114(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_115(int iParam0)
{
	return iParam0 & 31;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_6;
	}
	return -15;
}

int func_118(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_265(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_119(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_120(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_121(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_122(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_123(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_124(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_266(iParam0, iParam6);
	func_267(iParam0, iParam5);
	func_268(iParam0, iParam4);
	func_269(iParam0, iParam3);
	func_270(iParam0, iParam2);
	func_271(iParam0, iParam1);
}

int func_126()
{
	return &Global_1899515;
}

bool func_127(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_272(iParam1) || !func_272(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_128(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

int func_129(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_130(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_131(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_132(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

int func_133(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_128(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_135(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_136(int iParam0)
{
	if (func_138(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_137(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_273(iParam0, 0, 0);
	if (func_136(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_274(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_275(iParam0, 1);
			}
			else
			{
				func_276(iParam0, 1);
			}
		}
		else
		{
			func_277(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_278())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_138(int iParam0)
{
	return iParam0 != 0;
}

int func_139()
{
	return 10;
}

void func_140()
{
	if (func_71(256))
	{
		iLocal_631 = (Local_50.f_199 - 1);
		iLocal_633 = -1;
		iLocal_632 = -1;
		iLocal_634 = -1;
	}
	else
	{
		iLocal_631 = 13;
		if (!func_279())
		{
			iLocal_633 = 2;
			iLocal_632 = iLocal_631 + 1;
			iLocal_634 = ((iLocal_632 + iLocal_633) - 1);
		}
		else
		{
			iLocal_633 = 0;
			iLocal_632 = -1;
			iLocal_634 = -1;
		}
	}
}

void func_141()
{
	int iVar0;

	func_280(&((Local_274[0 /*9*/])->f_1), &((Local_274[0 /*9*/])->f_4), 0, 7);
	func_280(&((Local_274[1 /*9*/])->f_1), &((Local_274[1 /*9*/])->f_4), 0, 8);
	func_280(&((Local_274[5 /*9*/])->f_1), &((Local_274[5 /*9*/])->f_4), 0, 9);
	func_280(&((Local_274[2 /*9*/])->f_1), &((Local_274[2 /*9*/])->f_4), 0, 2);
	func_280(&((Local_274[3 /*9*/])->f_1), &((Local_274[3 /*9*/])->f_4), 0, 3);
	func_280(&((Local_274[4 /*9*/])->f_1), &((Local_274[4 /*9*/])->f_4), 0, 10);
	func_280(&((Local_274[6 /*9*/])->f_1), &((Local_274[6 /*9*/])->f_4), 0, 4);
	func_280(&((Local_274[7 /*9*/])->f_1), &((Local_274[7 /*9*/])->f_4), 0, 5);
	func_280(&((Local_274[8 /*9*/])->f_1), &((Local_274[8 /*9*/])->f_4), 0, 6);
	func_280(&((Local_274[9 /*9*/])->f_1), &((Local_274[9 /*9*/])->f_4), 0, 12);
	func_280(&((Local_274[10 /*9*/])->f_1), &((Local_274[10 /*9*/])->f_4), 0, 13);
	func_280(&((Local_274[11 /*9*/])->f_1), &((Local_274[11 /*9*/])->f_4), 0, 11);
	func_280(&((Local_274[12 /*9*/])->f_1), &((Local_274[12 /*9*/])->f_4), 0, 0);
	func_280(&((Local_274[13 /*9*/])->f_1), &((Local_274[13 /*9*/])->f_4), 0, 1);
	if (iLocal_632 >= 0)
	{
		iVar0 = iLocal_632;
		while (iVar0 <= iLocal_634)
		{
			func_281(&((Local_274[iVar0 /*9*/])->f_1), &((Local_274[iVar0 /*9*/])->f_4), 2, (iVar0 - iLocal_632));
			iVar0++;
		}
	}
	func_280(&((Local_419[0 /*9*/])->f_1), &((Local_419[0 /*9*/])->f_4), 5, 0);
	func_280(&((Local_419[1 /*9*/])->f_1), &((Local_419[1 /*9*/])->f_4), 5, 1);
	func_280(&((Local_419[2 /*9*/])->f_1), &((Local_419[2 /*9*/])->f_4), 5, 2);
	func_280(&((Local_419[3 /*9*/])->f_1), &((Local_419[3 /*9*/])->f_4), 5, 3);
	func_280(&((Local_456[0 /*9*/])->f_1), &((Local_456[0 /*9*/])->f_4), 5, 4);
	func_280(&((Local_456[1 /*9*/])->f_1), &((Local_456[1 /*9*/])->f_4), 5, 5);
	func_280(&((Local_456[2 /*9*/])->f_1), &((Local_456[2 /*9*/])->f_4), 5, 6);
	func_280(&((Local_456[3 /*9*/])->f_1), &((Local_456[3 /*9*/])->f_4), 5, 7);
	func_280(&((Local_456[4 /*9*/])->f_1), &((Local_456[4 /*9*/])->f_4), 5, 8);
	func_280(&((Local_456[5 /*9*/])->f_1), &((Local_456[5 /*9*/])->f_4), 5, 9);
}

void func_142(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] == 0)
		{
			iVar1 = iVar0;
			Jump @68; //curOff = 42
		}
		else if (uParam0[iVar0] == iParam1)
		{
		}
		iVar0++;
	}
	if (iVar1 > -1)
	{
		(*uParam0)[iVar1] = iParam1;
	}
}

Vector3 func_143(int iParam0, int iParam1)
{
	return func_282(iParam0, iParam1);
}

float func_144(int iParam0, int iParam1)
{
	return func_283(iParam0, iParam1);
}

void func_145(int iParam0)
{
	Global_1898091 = (&Global_1898091 - (Global_1898091 && iParam0));
}

bool func_146(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

Vector3 func_147(int iParam0, bool bParam1)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 9:
			vVar0 = { 1897.123f, -1863.157f, 46.0415f };
			break;
		case 16:
			vVar0 = { -2205.06f, 704.86f, 107.62f };
			break;
		case 36:
			vVar0 = { -45.93f, 1230.82f, 175.19f };
			break;
		case 79:
			vVar0 = { 2351f, 1335.5f, 102.4f };
			break;
		case 125:
			vVar0 = { -3962.021f, -2137.957f, -5.9562f };
			break;
		case 127:
			vVar0 = { -1411.857f, -2333.451f, 42.1056f };
			break;
		case 118:
			vVar0 = { -4201.647f, -3440.702f, 47.5009f };
			break;
		case 129:
			vVar0 = { -5415.055f, -3654.25f, -13.4989f };
			break;
		case 114:
			vVar0 = { -5984.121f, -3249.982f, -22.5604f };
			break;
		default:
			return 0f, 0f, 0f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, VOLUME::_0xF70F00013A62F866(func_284(iParam0)), false) > 2f && !bParam1)
	{
	}
	return vVar0;
}

void func_148(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_149(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0->f_205)
	{
		case 79:
			sVar0 = "AZ_hideout_beaver_hollow";
			break;
		case 118:
			sVar0 = "AZ_hideout_fort_mercer";
			break;
		case 16:
			sVar0 = "AZ_hideout_hanging_dog_ranch";
			break;
		case 9:
			sVar0 = "AZ_hideout_shady_belle";
			break;
		case 36:
			sVar0 = "AZ_hideout_six_point_cabin";
			break;
		case 127:
			sVar0 = "AZ_hideout_thieves_landing";
			break;
		case 125:
			sVar0 = "AZ_hideout_Twin_Rocks";
			break;
		default:
			return;
	}
	if (func_146(&(iParam0->f_5), 262144) == bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_185(&(iParam0->f_5), 262144);
	}
	else
	{
		func_285(&(iParam0->f_5), 262144);
	}
	AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, bParam1, true);
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, true, true);
}

void func_150(var uParam0)
{
	func_287(uParam0, (func_286(uParam0) - 6f));
	func_288(uParam0, 1);
}

void func_151(var uParam0)
{
	func_289(uParam0, 0);
	func_65(uParam0, 0);
	func_153(uParam0, 1);
	func_290(uParam0, 1);
	func_291(uParam0, 0);
	func_61(uParam0, 1);
	func_292(uParam0, 1, 1, 1);
}

void func_152(var uParam0)
{
	func_64(uParam0, 1);
	func_293(uParam0, 1);
	func_294(uParam0, 1);
}

void func_153(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_165(&(uParam0->f_1), 256);
	}
	else
	{
		func_164(&(uParam0->f_1), 256);
	}
}

void func_154(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_155(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_156(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_157(char* sParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (*sParam0 <= 1)
	{
		return;
	}
	iVar0 = (*sParam0 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		uVar2 = sParam0[iVar1];
		(*sParam0)[iVar1] = sParam0[iVar0];
		(*sParam0)[iVar0] = uVar2;
		iVar0 = (iVar0 + -1);
	}
}

void func_158(int iParam0)
{
	switch (iParam0->f_205)
	{
		case 16:
			break;
		case 79:
			break;
		default:
			break;
	}
}

int func_159(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_112(iParam0))
	{
		return 0;
	}
	return func_295(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

void func_160(int iParam0)
{
}

void func_161(int iParam0)
{
	iParam0->f_136.f_9 = { 0f, 0f, 0f };
	iParam0->f_136.f_12 = 1;
	iParam0->f_136.f_13 = 30f;
	iParam0->f_136.f_14 = 100f;
	iParam0->f_136.f_15 = -1;
	iParam0->f_136.f_16 = 1500;
	iParam0->f_136.f_17 = 1000;
	iParam0->f_136.f_6 = 25f;
}

void func_162(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	switch (iParam0->f_205)
	{
		case 79:
			iVar0 = 325633398;
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 214473058;
			}
			else
			{
				iVar0 = 1811505867;
			}
			break;
		case 9:
			iVar0 = -2009656535;
			break;
		case 36:
			iVar0 = 214473058;
			break;
		case 125:
			iVar0 = 1004822587;
			break;
		case 127:
			iVar0 = 1004822587;
			break;
		default:
			iParam0->f_200 = 0;
			return;
	}
	if (iVar0 != 0)
	{
		Var1 = { func_242(joaat("killed"), iVar0) };
		STATS::STAT_ID_GET_INT(&Var1, &(iParam0->f_200));
	}
}

void func_163(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_296(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_164(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_165(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_166(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			func_297(uParam1);
			func_298(uParam2);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3) || func_299(sParam3, sParam4))
			{
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!func_300(uParam1))
			{
				return 0;
			}
			if (!func_301(uParam2))
			{
				return 0;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam3))
				{
					return 0;
				}
			}
			return 1;
	}
	return 0;
}

void func_167(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_5 = func_302(*uParam0, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_178(&(uParam0->f_7), 2))
	{
		if (func_178(&(uParam0->f_7), 8))
		{
			iVar0 = func_302(-1038436471, uParam0->f_1, uParam0->f_4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_ON_MOUNT(uParam0->f_5, iVar0, -1, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, true);
		PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_5);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_5, iParam1);
		if (func_178(&(uParam0->f_7), 4))
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uParam0->f_5, uParam0->f_1, 2f, 1, false, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5, !bParam2);
	}
	else
	{
		func_303(uParam0->f_5, 0, 0);
	}
	PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
}

bool func_168(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_1(iParam0, iParam1);
}

void func_169()
{
	func_53(128);
}

void func_170(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 278, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 21, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 314, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 466, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 326, true);
	ENTITY::_0x18FF3110CF47115D(*uParam0, 16, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, false);
	PED::_0x2E5B5D1F1453E08E(*uParam0, 1);
	MISC::_0x7FA58CED69405F9A(*uParam0, 3);
	HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(*uParam0);
	func_304(*uParam0, 0);
}

char* func_171(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 3);
	switch (iVar0)
	{
		case 0:
			return "0711_G_M_M_UniRanchers_01_WHITE_01";
		case 1:
			return "0712_G_M_M_UniRanchers_01_WHITE_02";
		case 2:
			return "0713_G_M_M_UniRanchers_01_WHITE_03";
		default:
			break;
	}
	return "0711_G_M_M_UniRanchers_01_WHITE_01";
}

void func_172(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_168(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_173(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_177(&(uParam0->f_7), 1, 0);
	}
	else
	{
		func_183(&(uParam0->f_7), 1);
	}
}

void func_174(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	if (!func_168(iParam1, 0, 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_ACCURACY(iParam1, 20);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 1);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.2f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(80, 110);
			PED::SET_PED_SHOOT_RATE(iParam1, iVar1);
			fVar0 = PED::GET_COMBAT_FLOAT(iParam1, 3);
			fVar0 = (fVar0 * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 1.25f));
			PED::SET_COMBAT_FLOAT(iParam1, 1, fVar0);
			break;
		case 1:
			PED::SET_PED_ACCURACY(iParam1, 15);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 30, false);
			break;
	}
}

bool func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_305(iParam3, 1);
	bVar1 = func_305(iParam3, 2);
	bVar2 = !func_305(iParam3, 4);
	bVar3 = func_305(iParam3, 8);
	bVar4 = !func_305(iParam3, 16);
	bVar5 = func_305(iParam3, 32);
	bVar6 = func_305(iParam3, 64);
	return func_306(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_176(int iParam0, int iParam1)
{
	if (func_168((Local_274[iParam0 /*9*/])->f_5, 0, 1))
	{
		func_307(&((Local_274[iParam0 /*9*/])->f_1), 1, 10, 0);
		uLocal_526[iParam0] = TASK::CREATE_SCENARIO_POINT(iParam1, (Local_274[iParam0 /*9*/])->f_1, (Local_274[iParam0 /*9*/])->f_4, 0f, 0f, 1);
		TASK::_TASK_USE_SCENARIO_POINT((Local_274[iParam0 /*9*/])->f_5, &(uLocal_526[iParam0]), 0, 0, 0, 1, 0, 0, -1082130432, 0);
		func_177(&((Local_274[iParam0 /*9*/])->f_7), 256, 0);
	}
}

void func_177(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	*uParam0 = (*uParam0 || iParam1);
}

bool func_178(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_179(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;

	if (!func_168(iParam0, 0, 1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	switch (iParam5)
	{
		case 0:
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, vParam1, fParam4, iParam7, bParam8, 0, 0);
			break;
		case 2:
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vParam1, fParam4, iParam7, 0, bParam8, 0, 0);
			break;
		case 1:
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(0, vParam1, fParam4, iParam7, bParam8, 0, 0);
			break;
		case 3:
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(0, vParam1, fParam4, iParam7, 0, bParam8, 0, 0);
			break;
	}
	if (bParam8)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam6))
		{
			TASK::TASK_WANDER_IN_VOLUME(0, iParam6, 1077936128, 1086324736, 1);
		}
		else
		{
			TASK::TASK_WANDER_IN_AREA(0, vParam1, fParam4, 1077936128, 1086324736, 1);
		}
	}
	func_308(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_180(int iParam0)
{
	if (func_168((Local_456[iParam0 /*9*/])->f_5, 0, 1))
	{
		func_307(&((Local_456[iParam0 /*9*/])->f_1), 1, 10, 0);
		TASK::TASK_WANDER_IN_AREA((Local_456[iParam0 /*9*/])->f_5, (Local_456[iParam0 /*9*/])->f_1, 5f, 30f, 100f, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((Local_456[iParam0 /*9*/])->f_5, false);
		func_309((Local_456[iParam0 /*9*/])->f_5, Local_15.f_22);
	}
}

float func_181(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_182(int iParam0)
{
	return 18f;
}

void func_183(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_184(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_310(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_185(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0->f_3 < iParam1)
	{
		return 0;
	}
	return 1;
}

int func_187(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (func_168(((*iParam0)[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam1)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_188()
{
	int iVar0;
	int iVar1;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_311(), Global_36, false) >= 25f)
	{
		return 0;
	}
	Local_50.f_190 = func_312(&Local_274, &Local_50, 0, 0, 0, 1);
	if (Local_50.f_190 < 0)
	{
		return 0;
	}
	Local_50.f_190 = 0;
	Local_50.f_192 = (Local_274[Local_50.f_190 /*9*/])->f_5;
	func_216(Local_274[Local_50.f_190 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
	iVar0 = (Local_274[1 /*9*/])->f_5;
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (func_189(4, 100))
		{
			func_201(Local_50.f_192, 0, "ITS_MALE_EXTREME_RECOGNIZE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_201(Local_50.f_192, 0, "HEADS_UP_HIDEOUT", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_200(&uLocal_603, 0);
	}
	func_313(Local_50.f_192, Global_36, 3, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 8000, 0, 1);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 6000, -1082130432, -1082130432, -1082130432);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_50.f_192, true, false), 30f, 0, 0, false, 0, 0);
	func_308(Local_50.f_192, &iVar1, 0, 0, 1, 1);
	func_314(&Local_274, Local_50.f_190, Global_35, 3, 2, -1f);
	if (func_168(iVar0, 0, 1))
	{
		func_315(iVar0, Global_35, 3, 2, 2000f);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2172.143f, 687.5095f, 119.6322f, 1f, 20000, 0.25f, false, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 15000, -1082130432, -1082130432, -1082130432);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 0, 0, false, 0, 0);
		func_308(iVar0, &iVar1, 1f, 0, 1, 1);
		PED::SET_PED_USING_ACTION_MODE(iVar0, true, 15000, 0);
	}
	fLocal_630 = func_310(Local_50.f_192, Global_36, 1);
	func_316(Local_50.f_205);
	func_317(1);
	return 1;
}

bool func_189(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_318(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_319(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_190()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_320(iVar0))
		{
		}
		iVar0++;
	}
	func_321(&iLocal_602);
	func_200(&(Local_50.f_184), 1);
	func_200(&uLocal_609, 1);
	Local_50.f_187 = 16500;
	func_137(&(iLocal_622[2]), 0, 0f, 0, 0, 0f, 0, 0);
	func_137(&(iLocal_622[3]), 0, 0f, 0, 0, 0f, 0, 0);
	func_70(1);
	func_191(&Local_50, 5);
	AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_ACTION");
}

void func_191(int iParam0, int iParam1)
{
	if (iParam1 == iParam0->f_3)
	{
	}
	iParam0->f_3 = iParam1;
}

void func_192()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Local_50.f_199 - 1))
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
		{
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), (Local_274[iVar0 /*9*/])->f_5, 3, 0, 1);
		}
		iVar0++;
	}
}

int func_193()
{
	if (!func_322(Global_35, Local_15, 1, 0))
	{
		return 0;
	}
	Local_50.f_190 = func_312(&Local_274, &Local_50, 0, 0, 0, 8);
	if (Local_50.f_190 < 0)
	{
		return 0;
	}
	Local_50.f_192 = (Local_274[Local_50.f_190 /*9*/])->f_5;
	return 1;
}

int func_194()
{
	float fVar0;

	if (func_71(8))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15, true, 0))
	{
		if (func_323())
		{
			return 1;
		}
	}
	else
	{
		fVar0 = func_310(Local_50.f_192, Global_36, 1);
		if (func_197(-2f, 1, 0, 0))
		{
			if (!MAP::DOES_BLIP_EXIST((Local_274[1 /*9*/])->f_6))
			{
				func_216(Local_274[1 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
			}
			if (!MAP::DOES_BLIP_EXIST((Local_274[0 /*9*/])->f_6))
			{
				func_216(Local_274[0 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
			}
			if (fVar0 < (fLocal_630 - 15f) || fVar0 < 6f)
			{
				return 1;
			}
		}
		if (func_197(0, 1, 0, 0) && func_324(&uLocal_603, 16f))
		{
			if ((fVar0 < (fLocal_630 + 2f) && PED::IS_PED_FACING_PED(Global_35, Local_50.f_192, 80f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_50.f_192))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_195()
{
	int iVar0;

	switch (iLocal_596)
	{
		case 0:
			if (func_168(Local_50.f_192, 0, 1))
			{
				func_325(Local_50.f_192, Global_35, -1);
				func_200(&uLocal_618, 1);
				func_326(1);
			}
			break;
		case 1:
			if (PED::IS_PED_FACING_PED(Local_50.f_192, Global_35, 60f) || func_324(&uLocal_618, 2f))
			{
				func_327(&uLocal_618);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_50.f_192, Global_35, 8000, 0, 1);
				func_201(Local_50.f_192, 0, "ARRIVAL_COMBAT_RAID_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_216(Local_274[Local_50.f_190 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				func_326(2);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				func_328(&Local_50, &Local_274, iVar0, "", "", 0, 1, 0, 0);
				iVar0++;
			}
			if (func_324(&uLocal_618, 2f))
			{
				func_326(3);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_196()
{
	int iVar0;

	if (func_324(&uLocal_609, 6f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_329(iVar0))
		{
			PED::SET_PED_RESET_FLAG((Local_274[iVar0 /*9*/])->f_5, 27, true);
		}
		iVar0++;
	}
}

int func_197(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_330(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_331(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_198(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3[24];

	if (bParam0)
	{
		PATHFIND::_0x19C7567D2F2287D6(Local_15.f_20, 15);
		iVar1 = Local_50.f_199;
	}
	else
	{
		iVar1 = 2;
	}
	fVar2 = 0.2f;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iLocal_635 >= Local_50.f_199)
		{
			iLocal_635 = 0;
		}
		if (func_332(iLocal_635))
		{
			iLocal_635++;
		}
		else
		{
			if (func_168((Local_274[iLocal_635 /*9*/])->f_5, 0, 1) && PED::IS_PED_IN_COMBAT((Local_274[iLocal_635 /*9*/])->f_5, 0))
			{
				StringCopy(&cVar3, "Ped ", 24);
				StringIntConCat(&cVar3, iLocal_635, 24);
				StringConCat(&cVar3, " ", 24);
				if (func_178(&((Local_274[iLocal_635 /*9*/])->f_7), 4096))
				{
					StringConCat(&cVar3, "Flag set", 24);
					if (func_322((Local_274[iLocal_635 /*9*/])->f_5, Local_15.f_20, 1, 0) || !func_322(Global_35, Local_15, 1, 0))
					{
						func_183(&((Local_274[iLocal_635 /*9*/])->f_7), 4096);
						PED::SET_PED_COMBAT_MOVEMENT((Local_274[iLocal_635 /*9*/])->f_5, 2);
						PED::SET_PED_COMBAT_RANGE((Local_274[iLocal_635 /*9*/])->f_5, 0);
					}
				}
				else if (!func_178(&((Local_274[iLocal_635 /*9*/])->f_7), 4096))
				{
					if (!func_322((Local_274[iLocal_635 /*9*/])->f_5, Local_15.f_20, 1, 0))
					{
						StringConCat(&cVar3, "Flag NOT set", 24);
						func_177(&((Local_274[iLocal_635 /*9*/])->f_7), 4096, 0);
					}
				}
			}
			iLocal_635++;
		}
		iVar0++;
	}
}

void func_199()
{
	int iVar0;

	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_333((Local_274[1 /*9*/])->f_5, 1);
		TASK::TASK_GRAPPLE((Local_274[1 /*9*/])->f_5, Global_35, 0, 1, 1065353216, 1, 0);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2178.507f, 678.9174f, 119.1548f, Global_35, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("firing_pattern_burst_fire"), 20000, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
		func_308((Local_274[1 /*9*/])->f_5, &iVar0, 0, 0, 1, 1);
	}
}

void func_200(var uParam0, bool bParam1)
{
	if (bParam1 || !func_334(uParam0))
	{
		func_327(uParam0);
	}
}

bool func_201(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_335(iParam0, iParam1, sParam2, sParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

int func_202()
{
	if (func_71(1))
	{
		return 1;
	}
	if (!func_336())
	{
		func_53(1);
	}
	return 0;
}

int func_203()
{
	int iVar0;
	var uVar1;

	if (!func_71(256))
	{
		func_337();
		func_338();
		func_339();
		if (!func_279())
		{
			func_340();
			func_341();
		}
		func_342();
	}
	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		func_343(&Local_50, &Local_274, iVar0, &uVar1, 2096805056);
		iVar0++;
	}
	switch (iLocal_594)
	{
		case 0:
			func_344(1);
			break;
		case 1:
			func_344(2);
			break;
		case 2:
			if (func_345(Local_50.f_199, &Local_274, "CALLOUT_JUST_KILL_EM_NEUTRAL", Local_50.f_198, 5, 0))
			{
				func_346();
				func_344(3);
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

float func_204(bool bParam0)
{
	if (!func_334(bParam0))
	{
		return bParam0->f_1;
	}
	if (func_347(bParam0))
	{
		return bParam0->f_2;
	}
	return (func_348() - bParam0->f_1);
}

void func_205()
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (!func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
		{
		}
		else
		{
			fVar1 = func_310((Local_274[iVar0 /*9*/])->f_5, Global_36, 1);
			if (fVar1 < 5f)
			{
				func_177(&((Local_274[iVar0 /*9*/])->f_7), 1, 0);
			}
		}
		iVar0++;
	}
}

int func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar3;

	if (iParam2 >= 0)
	{
		iVar0 = iParam2;
	}
	else
	{
		iVar0 = iParam0->f_198;
	}
	if (iVar0 < iParam0->f_189)
	{
		switch (iParam0->f_205)
		{
			case 79:
				vVar3 = { 2279.824f, 1490.092f, 83.44096f };
				break;
			case 16:
				vVar3 = { -2142.385f, 797.8377f, 135.6134f };
				break;
			case 36:
				vVar3 = { -50.2002f, 1267.741f, 171.5688f };
				break;
		}
		iVar1 = 0;
		while (iVar1 < iParam0->f_199)
		{
			func_349((*iParam1)[iVar1 /*9*/], iParam0->f_207, &uVar2, iVar1, vVar3);
			iVar1++;
		}
		if (!func_334(&(iParam0->f_211)))
		{
			func_200(&(iParam0->f_211), 0);
		}
		func_185(&(iParam0->f_5), 128);
		return 1;
	}
	return 0;
}

void func_207()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
		{
			if (func_350(Local_274[iVar0 /*9*/]))
			{
				func_351((Local_274[iVar0 /*9*/])->f_5, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 4f, 4f, 3f);
			}
		}
		iVar0++;
	}
}

int func_208()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
		{
			if (func_178(&((Local_274[iVar0 /*9*/])->f_7), 1) && MAP::DOES_BLIP_EXIST((Local_274[iVar0 /*9*/])->f_6))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_209(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_352(iParam1, iParam0))
	{
		return 0;
	}
	if (!func_146(&(iParam0->f_5), 256))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		func_353(iParam0);
		func_354(iParam0);
		if (bParam4)
		{
			func_355(iParam0->f_205, bParam3, 0);
		}
		func_149(iParam0, 0);
		func_185(&(iParam0->f_5), 256);
		func_185(&(iParam0->f_5), 8);
	}
	return 1;
}

int func_210(int iParam0)
{
	int iVar0;

	if (!func_146(&(iParam0->f_5), 256) && !func_336())
	{
		iVar0 = func_36(iParam0->f_205);
		if (func_219(iVar0) == 3 || func_219(iVar0) == 4)
		{
			func_356(iParam0->f_205);
			func_185(&(iParam0->f_5), 4096);
		}
		func_357("H_HIDE_FAIL", 7500, 0, 1, 0, 0, -1, -1, 0);
		func_185(&(iParam0->f_5), 256);
		return 1;
	}
	return 0;
}

void func_211(bool bParam0)
{
	func_358();
	if (bParam0)
	{
		func_359(&Local_274, &Local_50, &uLocal_513, SCRIPTS::GET_ID_OF_THIS_THREAD(), "HANGING");
	}
}

void func_212(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_360(iParam1->f_205) && !func_83(&Global_1935630, 32))
	{
		iVar0 = 0;
		while (iVar0 < iParam1->f_199)
		{
			if (ENTITY::DOES_ENTITY_EXIST(((*iParam0)[iVar0 /*9*/])->f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(((*iParam0)[iVar0 /*9*/])->f_5, Global_35, 1, 1))
				{
					func_361(iParam1->f_205);
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_213()
{
	vector3 vVar0;

	vVar0 = { func_362(Global_35, 1f) };
	if (func_363(Local_15.f_23, vVar0))
	{
		iLocal_601 = 1;
	}
	else if (func_363(Local_15.f_25, vVar0))
	{
		iLocal_601 = 2;
	}
	else if (func_363(Local_15.f_24, vVar0))
	{
		iLocal_601 = 3;
	}
	else if (func_363(Local_15.f_26, vVar0))
	{
		iLocal_601 = 4;
	}
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 == 0)
	{
		iParam4 = (iParam2 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_364(((*iParam1)[iVar0 /*9*/])->f_5, 0, &(iParam0->f_155), &(iParam0->f_183), 0, 0) && !PED::GET_PED_CONFIG_FLAG(((*iParam1)[iVar0 /*9*/])->f_5, 9, false))
		{
			iParam0->f_192 = ((*iParam1)[iVar0 /*9*/])->f_5;
			iParam0->f_190 = iVar0;
			return 1;
		}
		else if (func_365(iParam0, (*iParam1)[iVar0 /*9*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	bVar1 = func_146(&(iParam1->f_5), 128);
	iVar0 = 0;
	while (iVar0 < iParam1->f_199)
	{
		func_366((*iParam0)[iVar0 /*9*/], iParam1->f_202, iParam2, &(iParam1->f_211), iParam3, bVar1);
		iVar0++;
	}
}

void func_216(var uParam0, int iParam1, int iParam2)
{
	func_367(uParam0, iParam1, iParam2);
}

void func_217(int iParam0)
{
	iLocal_595 = iParam0;
}

int func_218(int iParam0)
{
	if (!func_146(&(iParam0->f_5), 1024))
	{
		if (VOLUME::_0xF256A75210C5C0EB(iParam0->f_215, Global_36))
		{
			if (func_168(Global_35, 0, 1))
			{
				func_368(iParam0, 1);
				func_185(&(iParam0->f_5), 1024);
				return 1;
			}
		}
	}
	else if (!VOLUME::_0xF256A75210C5C0EB(iParam0->f_215, Global_36) && func_219(Global_1888801[iParam0->f_205 /*35*/]) != 3)
	{
		if (func_168(Global_35, 0, 1))
		{
			func_368(iParam0, 0);
			func_285(&(iParam0->f_5), 1024);
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_369(iParam0);
}

void func_220(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_370(302))
	{
		return;
	}
	if (func_28() == iParam0->f_205)
	{
		return;
	}
	if (!func_371(iParam0->f_205))
	{
		return;
	}
	if (func_25(32, 0, 1))
	{
		return;
	}
	if (func_34(83, 0))
	{
		return;
	}
	if (!func_5(iParam0->f_205, 0))
	{
		return;
	}
	if (func_146(&(iParam0->f_5), 1024))
	{
		if (func_372(iParam0->f_202, 0.2f, 0.8f, 0f, 0.99f))
		{
			func_373(302, &iVar0, &iVar1);
			func_374(iVar0, iVar1);
			func_375(&iVar0, &iVar1);
			func_376("GANG_PROGRESS", "TF_SP_GANG_HIDEOUTS", 0, 0, -2, 0, 0, 0, 0, 1, 1);
		}
	}
}

bool func_221()
{
	return func_52(2);
}

void func_222(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_377(iParam0, 1);
		func_378(2);
	}
	else
	{
		if (func_52(2))
		{
			func_377(iParam0, 0);
		}
		func_145(2);
	}
}

void func_223(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_146(&(iParam0->f_5), 32768))
		{
			LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
			func_185(&(iParam0->f_5), 32768);
		}
	}
	else if (func_146(&(iParam0->f_5), 32768))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 0);
		func_285(&(iParam0->f_5), 32768);
	}
}

void func_224(bool bParam0)
{
	if (bParam0)
	{
		if (!func_379())
		{
			func_378(8);
		}
	}
	else if (func_379())
	{
		func_145(8);
	}
}

int func_225(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_31())
	{
		return 1;
	}
	if (iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_226()
{
	if (Global_16)
	{
		return 0;
	}
	if (!func_380())
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266->f_78.f_55))
	{
		return 0;
	}
	if (func_25(-1 ^ 9, 0, 1))
	{
		return 0;
	}
	return 1;
}

char* func_227(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899->f_162)))
	{
		sVar0 = func_381(Global_1894899->f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_383(func_382(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_384(iParam0) || func_385(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case -49694339:
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case -196675805: /* GXTEntry: "Aurora Basin" */
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case -1168459546:
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case 795414694: /* GXTEntry: "Barrow Lagoon" */
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case -557290573: /* GXTEntry: "Bayou Nwa" */
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case -1073312073: /* GXTEntry: "Cairn Lake" */
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case -804804953:
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case 370072007: /* GXTEntry: "Dakota River" */
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case 1245451421: /* GXTEntry: "Deadboot Creek" */
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case -105598602: /* GXTEntry: "Elysian Pool" */
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case -1356490953:
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case 1755369577: /* GXTEntry: "Heartlands Overflow" */
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case 1175365009: /* GXTEntry: "Hot Springs" */
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case -1369817450: /* GXTEntry: "Lake Don Julio" */
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case 592454541: /* GXTEntry: "Lake Isabella" */
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case -2040708515:
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case -1410384421: /* GXTEntry: "Little Creek River" */
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case -1308233316: /* GXTEntry: "Lower Montana River" */
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case 301094150: /* GXTEntry: "Mattlock Pond" */
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case -811730579: /* GXTEntry: "Moonstone Pond" */
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case -1817904483:
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case -1300497193: /* GXTEntry: "Owanjila" */
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case 2005774838: /* GXTEntry: "Ringneck Creek" */
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case -247856387: /* GXTEntry: "Sea of Coronado" */
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case -823661292: /* GXTEntry: "Southfield Flats" */
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case -218679770: /* GXTEntry: "Spider Gorge" */
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case -1287619521: /* GXTEntry: "Stillwater Creek" */
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case -1781130443: /* GXTEntry: "Upper Montana River" */
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case -261541730: /* GXTEntry: "Whinyard Strait" */
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case -1229593481: /* GXTEntry: "Kamassa River" */
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case -1504425495: /* GXTEntry: "San Luis River" */
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_228(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_229(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_231(int iParam0)
{
	if (!func_228(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0 /*12*/]);
	}
	return &(Global_1058888->f_42266[iParam0 /*12*/]);
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return 0;
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return 0;
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return 2;
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return 1;
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return 0;
		case 231313522:
			return 0;
		case -804804953:
			return 0;
		case 370072007: /* GXTEntry: "Dakota River" */
			return 1;
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return 1;
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return 1;
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return 0;
		case -1356490953:
			return 0;
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return 1;
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return 0;
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return 0;
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return 1;
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return 0;
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return 0;
		case -2040708515:
			return 1;
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return 1;
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return 1;
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return 0;
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return 0;
		case -1817904483:
			return 0;
		case -1300497193: /* GXTEntry: "Owanjila" */
			return 0;
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return 1;
		case -1504425495: /* GXTEntry: "San Luis River" */
			return 1;
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return 1;
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return 0;
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return 1;
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return 1;
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return 1;
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_234(int iParam0, int iParam1)
{
	if (!func_386(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_235(int iParam0, int iParam1)
{
	if (!func_228(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return ((Global_40.f_358[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1058888->f_42266[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

float func_236(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_237(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_387(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_238(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = _NAMESPACE71::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_239(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_240(int iParam0)
{
	int iVar0;

	if (func_384(iParam0))
	{
		if (!func_385(45))
		{
			return 0;
		}
	}
	iVar0 = func_229(iParam0);
	if (func_388())
	{
		if (!func_105(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_242(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_243(var uParam0, int iParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_244()
{
	return Global_1894899->f_2;
}

bool func_245(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_246(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

int func_247()
{
	return Global_1310750->f_16037;
}

bool func_248(int iParam0, int iParam1)
{
	if (!func_245(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

int func_249(int iParam0)
{
	if (!func_245(iParam0))
	{
		return 0;
	}
	if (func_389(64) && func_390(iParam0))
	{
		return 1;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_46;
}

int func_250(int iParam0)
{
	if (!func_245(iParam0))
	{
		return 0;
	}
	return ((*Global_1310750)[iParam0 /*111*/])->f_47;
}

void func_251(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_245(&(Global_1310750->f_13321[iParam0 /*9*/])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID((Global_1310750->f_13321[iParam0 /*9*/])->f_5, 523);
	((*Global_1310750)[iVar0 /*111*/])->f_48 = 0;
	func_391(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

int func_252(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((Global_1392240->f_1[iVar0 /*18*/])->f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_253(int iParam0)
{
	if (func_136(iParam0) && func_392())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_47((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_393((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_394((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_395((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_396(iParam0, 536870912);
	iVar1 = func_397(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_253(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_398(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_399(iParam0, 0);
}

bool func_255(int iParam0)
{
	return func_400(iParam0, 16, 1);
}

bool func_256(int iParam0)
{
	return func_257(iParam0, 32, 1);
}

bool func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_401(iParam0))
		{
			return false;
		}
	}
	func_402(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0]), iVar1);
}

void func_258(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_403(iParam0)))
	{
		func_404(iParam0, 4, 1);
		func_404(iParam0, 17, 1);
		func_404(iParam0, 1, 1);
		func_404(iParam0, 2, 1);
		return;
	}
	if (!func_405(iParam0))
	{
		return;
	}
	if (func_256(iParam0) && !bParam2)
	{
		return;
	}
	if (func_255(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam0 == Global_1357549->f_1497 && !bParam2)
	{
		return;
	}
	if (((!bParam3 && ENTITY::DOES_ENTITY_EXIST(func_403(iParam0))) && func_406(iParam0) < 5000f) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	func_404(iParam0, 4, 1);
	func_404(iParam0, 17, 1);
	func_404(iParam0, 1, 1);
	func_404(iParam0, 2, 1);
	func_407(iParam0, func_403(iParam0));
	func_408(iParam0, 1, 1, 1, bParam4);
}

void func_259(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_409(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_260(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_409(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_261()
{
	func_260(-939420910);
	func_260(-1187950766);
	func_260(356365161);
	func_260(753127042);
	func_260(-2038424081);
	func_260(1884271742);
	func_260(459290420);
}

void func_262()
{
	func_260(704802028);
	func_260(588987611);
	func_260(2008888900);
	func_260(1649996811);
	func_260(227918160);
	func_260(168171957);
	func_260(1193080109);
	func_260(-491981251);
	func_260(-639037538);
	func_260(-618620429);
}

bool func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_409(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_264(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_265(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_266(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_267(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_119(*iParam0);
	iVar1 = func_118(*iParam0);
	if (iParam1 < 1 || iParam1 > func_124(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_269(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_270(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_271(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_272(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_123(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_122(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_121(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_118(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_119(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_120(iParam0);
	if (iVar5 < 1 || iVar5 > func_124(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_273(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

void func_274(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_136(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, iParam3);
	}
}

void func_275(int iParam0, bool bParam1)
{
	if (func_136(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_276(int iParam0, bool bParam1)
{
	if (func_136(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_277(int iParam0, bool bParam1)
{
	if (func_136(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_278()
{
	return 1;
}

bool func_279()
{
	return func_71(128);
}

void func_280(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam3;
	func_281(uParam0, uParam1, iParam2, iVar0);
}

void func_281(var uParam0, var uParam1, int iParam2, int iParam3)
{
	*uParam0 = { func_282(iParam2, iParam3) };
	*uParam1 = func_283(iParam2, iParam3);
}

Vector3 func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2223.761f, 737.5955f, 126.7442f;
				case 1:
					return -2218.971f, 741.9222f, 126.756f;
				case 2:
					return -2211.783f, 701.7747f, 120.9748f;
				case 3:
					return -2210.994f, 701.0175f, 120.9435f;
				case 4:
					return -2183.596f, 716.9006f, 121.2168f;
				case 5:
					return -2175.707f, 720.9724f, 121.6612f;
				case 6:
					return -2176.155f, 719.3885f, 121.5661f;
				case 7:
					return -2190.877f, 673.5523f, 118.9156f;
				case 8:
					return -2172.297f, 689.7922f, 119.7469f;
				case 9:
					return -2171.377f, 712.2957f, 121.1564f;
				case 10:
					return -2227.709f, 696.103f, 120.4979f;
				case 11:
					return -2215.684f, 737.365f, 122.3088f;
				case 12:
					return -2178.598f, 728.0159f, 121.6136f;
				case 13:
					return -2175.62f, 712.2767f, 125.2048f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2172.399f, 704.8712f, 120.7081f;
				case 1:
					return -2203.452f, 703.8745f, 121.0022f;
				case 2:
					return -2189.793f, 729.2222f, 121.9009f;
				case 3:
					return -2199.363f, 698.4965f, 120.7474f;
				case 4:
					return -2211.82f, 727.1941f, 126.7459f;
				case 5:
					return -2182.918f, 718.5294f, 121.6174f;
				case 6:
					return -2179.823f, 711.8821f, 121.6257f;
				case 7:
					return -2201.024f, 683.3922f, 119.938f;
				case 8:
					return -2174.062f, 723.76f, 121.6155f;
				case 9:
					return -2172.435f, 720.2062f, 121.6158f;
				case 10:
					return -2215.8f, 737.1833f, 122.2836f;
				case 11:
					return -2217.199f, 738.8154f, 126.7635f;
				case 12:
					return -2221.781f, 734.1628f, 126.7485f;
				case 13:
					return -2176.991f, 719.4493f, 121.6153f;
				case 14:
					return -2175.45f, 716.213f, 121.6169f;
				case 15:
					return -2180.139f, 700.8182f, 120.7541f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -2214.603f, 727.0795f, 121.8915f;
				case 1:
					return -2214.49f, 729.858f, 121.9972f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -2212.305f, 721.037f, 121.6195f;
				case 1:
					return -2206.981f, 720.8355f, 121.5673f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -2181.971f, 700.0224f, 120.5177f;
				case 1:
					return -2196.003f, 717.3415f, 121.4383f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -2221.359f, 727.8313f, 121.8606f;
				case 1:
					return -2222.58f, 730.9521f, 122.1194f;
				case 2:
					return -2224.084f, 734.0168f, 122.2665f;
				case 3:
					return -2225.753f, 697.7101f, 120.6569f;
				case 4:
					return -2253.492f, 693.5522f, 120.7491f;
				case 5:
					return -2244.597f, 683.2422f, 118.5429f;
				case 6:
					return -2248.638f, 714.8721f, 121.2831f;
				case 7:
					return -2258.504f, 705.4272f, 121.1243f;
				case 8:
					return -2234.935f, 694.1183f, 119.9569f;
				case 9:
					return -2238.572f, 709.6912f, 121.0358f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 213.3486f;
				case 1:
					return 214.3606f;
				case 2:
					return 644.6668f;
				case 3:
					return 359.2667f;
				case 4:
					return 110.9196f;
				case 5:
					return 129.1174f;
				case 6:
					return -18.8163f;
				case 7:
					return 564.6566f;
				case 8:
					return 212.1663f;
				case 9:
					return 204.1663f;
				case 10:
					return 300.6566f;
				case 11:
					return 191.0894f;
				case 12:
					return 24.9915f;
				case 13:
					return -63.0085f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 114.052f;
				case 1:
					return -148.1992f;
				case 2:
					return 191.2408f;
				case 3:
					return 212.052f;
				case 4:
					return -147.9481f;
				case 5:
					return 116.0519f;
				case 6:
					return 114.0519f;
				case 7:
					return 202.1844f;
				case 8:
					return -64.351f;
				case 9:
					return -64.351f;
				case 10:
					return -156.9106f;
				case 11:
					return 164.2908f;
				case 12:
					return -99.7092f;
				case 13:
					return 114.9915f;
				case 14:
					return 114.9915f;
				case 15:
					return 180.9118f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 211.4397f;
				case 1:
					return 207.4397f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -167.4217f;
				case 1:
					return -131.4217f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 417.4069f;
				case 1:
					return 331.4069f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -58.1243f;
				case 1:
					return 305.8757f;
				case 2:
					return -60.1243f;
				case 3:
					return 209.8757f;
				case 4:
					return 137.7796f;
				case 5:
					return 23.7796f;
				case 6:
					return -30.2204f;
				case 7:
					return 35.7796f;
				case 8:
					return 1.7796f;
				case 9:
					return 67.7796f;
			}
			break;
	}
	return 0f;
}

int func_284(int iParam0)
{
	if (!func_43(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_3;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_286(var uParam0)
{
	return uParam0->f_24;
}

void func_287(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_288(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 1);
	}
	else
	{
		func_165(uParam0, 1);
	}
}

void func_289(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_165(&(uParam0->f_1), 16384);
	}
	else
	{
		func_164(&(uParam0->f_1), 16384);
	}
}

void func_290(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 16);
	}
	else
	{
		func_165(uParam0, 67108864);
		func_165(uParam0, 16);
	}
}

void func_291(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_165(&(uParam0->f_1), 128);
	}
	else
	{
		func_164(&(uParam0->f_1), 128);
	}
}

void func_292(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_164(uParam0, 268435456);
	}
	else
	{
		func_165(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_164(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_165(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_164(uParam0, 536870912);
	}
	else
	{
		func_165(uParam0, 536870912);
	}
}

void func_293(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 2);
	}
	else
	{
		func_165(uParam0, 2);
	}
}

void func_294(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 8);
	}
	else
	{
		func_165(uParam0, 8);
	}
}

bool func_295(int iParam0)
{
	int iVar0;

	iVar0 = func_219(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_296(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_297(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_298(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

int func_299(char* sParam0, char* sParam1)
{
	int iVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		iVar0 = HUD::_TEXT_DATABASE_REQUEST(sParam0);
		if (iVar0 == 0)
		{
			return 0;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	iVar0 = HUD::_TEXT_DATABASE_REQUEST(sParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_300(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0]))
		{
			iVar1 = 1;
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_301(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_302(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_410(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_304(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_411(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_305(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_306(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_412(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_412(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_24() == -1 && !func_413(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (func_413(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_412(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_414(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_415(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_416(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_307(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_417(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_308(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_309(int iParam0, int iParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_0xDE0EA444735C1368(iParam1))
	{
		PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	}
	if (PED::_0xE9B168527B337BF0(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

float func_310(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_311()
{
	return -2178.5f, 676.5f, 119.7f;
}

int func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam5 == 0)
	{
		if (iParam1->f_199 > 0)
		{
			iParam5 = (iParam1->f_199 - 1);
		}
		else
		{
			iParam5 = (*iParam0 - 1);
		}
	}
	iVar1 = func_418((iParam5 - iParam4) + 1, 5);
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam1->f_191 == -1)
	{
		iParam1->f_191 = iParam4;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iParam1->f_191 > ((iParam4 + iVar2) - 1) || iParam1->f_191 < iParam4)
		{
			iParam1->f_191 = iParam4;
		}
		if (!func_419(((*iParam0)[iParam1->f_191 /*9*/])->f_5) || bParam3)
		{
			if (func_420(((*iParam0)[iParam1->f_191 /*9*/])->f_5, &(iParam1->f_155), &(iParam1->f_183), 0))
			{
				if (bParam2)
				{
					func_367((*iParam0)[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		else if (func_419(((*iParam0)[iParam1->f_191 /*9*/])->f_5))
		{
			if (func_181(((*iParam0)[iParam1->f_191 /*9*/])->f_5, Global_35, 0, 1) < 2f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(((*iParam0)[iParam1->f_191 /*9*/])->f_5, Global_35, 17))
			{
				if (bParam2)
				{
					func_367((*iParam0)[iParam1->f_191 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				return iParam1->f_191;
			}
		}
		iParam1->f_191++;
		iVar0++;
	}
	return -1;
}

void func_313(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_1(iParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(iParam0))
	{
		PED::_0xF1C03A5352243A30(iParam0);
		return;
	}
	if (func_421(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::_0x802092B07E3B1EEA(iParam0, vParam1, iParam6);
			break;
		case 5:
			PED::_0x463803429297117C(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			PED::_0x62FDAD5E01D2DD47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			PED::_0xEC6935EBE0847B90(iParam0, vParam1);
			break;
		case 2:
			PED::_0xEEED8FAFEC331A70(iParam0, vParam1, iParam6);
			break;
		case 1:
			PED::_0xF1C03A5352243A30(iParam0);
			break;
		case 7:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
		default:
			PED::_0xA3A9299C4F2ADB98(iParam0);
			break;
	}
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	if (iParam1 < 0 || iParam1 >= *iParam0)
	{
		return;
	}
	func_315(((*iParam0)[iParam1 /*9*/])->f_5, iParam2, iParam3, iParam4, fParam5);
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	struct<23> Var0;

	if (!func_168(iParam0, 0, 1))
	{
		return;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	TASK::_0xE7FA07624574B79A(iParam0, iParam1, iParam2, iParam3, fParam4, 1, 0, 0, 0);
	TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, BUILTIN::FLOOR(fParam4), 0, 51, 0);
	func_422(&Var0, iParam1, 0, -1, 3, 3, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

void func_316(int iParam0)
{
	if (!func_43(iParam0))
	{
		return;
	}
}

void func_317(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

bool func_318(int iParam0, bool bParam1)
{
	if (!func_423(iParam0, 0))
	{
		return false;
	}
	return ((Global_40.f_9571[iParam0 /*10*/])->f_1 == 3 || (bParam1 && (Global_40.f_9571[iParam0 /*10*/])->f_1 == 4));
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[1];
	var uVar6[1];
	float fVar8[1];
	int iVar10;

	iVar0 = iParam0;
	if (!func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
	{
		return 0;
	}
	if (func_279())
	{
		if (func_424((Local_274[iVar0 /*9*/])->f_5))
		{
			return 0;
		}
	}
	switch (iVar0)
	{
		case 2:
			*(vVar2[0 /*3*/]) = { func_143(1, 1) };
			switch (iLocal_601)
			{
				case 3:
					PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[iVar0 /*9*/])->f_5, 2);
					break;
				default:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[iVar0 /*9*/])->f_5, *(vVar2[0 /*3*/]), 6.5f, 0, false, 0);
					break;
			}
			func_425(Local_274[iVar0 /*9*/], 0, 0, 0, 0, 0);
			break;
		case 3:
			*(vVar2[0 /*3*/]) = { func_143(1, 3) };
			uVar6[0] = func_144(1, 3);
			switch (iLocal_601)
			{
				case 1:
					iVar10 = TASK::ADD_COVER_POINT(*(vVar2[0 /*3*/]), &(uVar6[0]), 3, 0, 1, false);
					func_426((Local_274[iVar0 /*9*/])->f_5, *(vVar2[0 /*3*/]), 6f, 1, 0);
					break;
				case 3:
					func_426((Local_274[iVar0 /*9*/])->f_5, (Local_274[iVar0 /*9*/])->f_1, 4f, 0, 0);
					break;
				case 4:
					func_426((Local_274[iVar0 /*9*/])->f_5, *(vVar2[0 /*3*/]), 6f, 0, 0);
					break;
				default:
					PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[iVar0 /*9*/])->f_5, 2);
					break;
			}
			func_425(Local_274[iVar0 /*9*/], 1, func_427(), 1, func_427(), 0);
			break;
		case 4:
			switch (iLocal_601)
			{
				case 1:
					*(vVar2[0 /*3*/]) = { func_143(1, 7) };
					func_425(Local_274[iVar0 /*9*/], 0, 1, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[iVar0 /*9*/])->f_5, *(vVar2[0 /*3*/]), 5f, 1, false, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES((Local_274[iVar0 /*9*/])->f_5, 45, true);
					break;
				default:
					PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[iVar0 /*9*/])->f_5, 2);
					func_425(Local_274[iVar0 /*9*/], 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 6:
			switch (iLocal_601)
			{
				case 1:
				case 3:
					*(vVar2[0 /*3*/]) = { func_143(1, 15) };
					fVar8[0] = 5.5f;
					break;
				default:
					*(vVar2[0 /*3*/]) = { func_143(4, 1) };
					fVar8[0] = 4f;
					break;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED_TIMED(0, Global_35, 2000, 0);
			TASK::TASK_SET_SPHERE_DEFENSIVE_AREA(0, *(vVar2[0 /*3*/]), &(fVar8[0]));
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_308((Local_274[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			break;
		case 7:
			switch (iLocal_601)
			{
				case 4:
					*(vVar2[0 /*3*/]) = { func_143(1, 8) };
					uVar6[0] = func_144(1, 8);
					break;
				default:
					*(vVar2[0 /*3*/]) = { func_143(1, 5) };
					uVar6[0] = func_144(1, 5);
					break;
			}
			iVar10 = TASK::ADD_COVER_POINT(*(vVar2[0 /*3*/]), &(uVar6[0]), 2, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, *(vVar2[0 /*3*/]), 2f, 2000, 0.25f, false, &(uVar6[0]));
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, *(vVar2[0 /*3*/]), 20, 0, 0f, 0, 0, iVar10, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_308((Local_274[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			func_177(&((Local_274[iVar0 /*9*/])->f_7), 64, 0);
			break;
		case 8:
			switch (iLocal_601)
			{
				case 4:
					*(vVar2[0 /*3*/]) = { func_143(1, 9) };
					uVar6[0] = func_144(1, 9);
					break;
				default:
					*(vVar2[0 /*3*/]) = { func_143(1, 6) };
					uVar6[0] = func_144(1, 6);
					break;
			}
			iVar10 = TASK::ADD_COVER_POINT(*(vVar2[0 /*3*/]), &(uVar6[0]), 2, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, *(vVar2[0 /*3*/]), 2f, 20000, 0.25f, false, &(uVar6[0]));
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, *(vVar2[0 /*3*/]), 20, 0, 0f, 0, 0, iVar10, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_308((Local_274[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			func_177(&((Local_274[iVar0 /*9*/])->f_7), 64, 0);
			break;
		case 9:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING((Local_274[iVar0 /*9*/])->f_5, -2177.095f, 721.5068f, 121.6187f, 258.8683f, 1, 0, 1);
			func_306((Local_274[iVar0 /*9*/])->f_5, joaat("weapon_repeater_henry"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 40, 0, 0, 0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2183.847f, 715.3598f, 121.2995f, 3f, -1, 0.25f, false, 40000f);
			PED::FORCE_PED_MOTION_STATE(0, -1115154469, false, 0, false);
			PED::SET_PED_COMBAT_RANGE(0, 1);
			PED::SET_PED_COMBAT_MOVEMENT(0, 2);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_308((Local_274[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			func_177(&((Local_274[iVar0 /*9*/])->f_7), 64, 0);
			break;
		case 10:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
			PED::SET_PED_COMBAT_MOVEMENT((Local_274[iVar0 /*9*/])->f_5, 2);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_308((Local_274[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			break;
		case 0:
			PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
			PED::SET_PED_COMBAT_MOVEMENT((Local_274[iVar0 /*9*/])->f_5, 2);
			func_425(Local_274[iVar0 /*9*/], 0, 0, 0, 0, 0);
			break;
		case 1:
			switch (iLocal_601)
			{
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[iVar0 /*9*/])->f_5, (Local_274[iVar0 /*9*/])->f_1, 4f, 1, false, 0);
					func_425(Local_274[iVar0 /*9*/], 0, 1, 1, 0, 0);
					break;
				default:
					func_425(Local_274[iVar0 /*9*/], 0, 1, 1, 0, 0);
					break;
			}
			break;
		case 5:
			*(vVar2[0 /*3*/]) = { func_143(1, 0) };
			fVar8[0] = 4f;
			PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[iVar0 /*9*/])->f_5, *(vVar2[0 /*3*/]), &(fVar8[0]), 1, false, 0);
			func_425(Local_274[iVar0 /*9*/], 0, 1, 0, 0, 0);
			break;
		case 11:
			*(vVar2[0 /*3*/]) = { func_143(1, 10) };
			uVar6[0] = func_144(1, 10);
			iVar10 = TASK::ADD_COVER_POINT(*(vVar2[0 /*3*/]), &(uVar6[0]), 3, 0, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, *(vVar2[0 /*3*/]), 2f, 20000, 0.25f, false, &(uVar6[0]));
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, *(vVar2[0 /*3*/]), 20, 1, 0f, 0, 0, iVar10, 1, 0, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_308((Local_274[iVar0 /*9*/])->f_5, &iVar1, 0, 0, 1, 1);
			break;
		case 12:
			break;
		case 13:
			break;
		default:
			return 0;
	}
	return 1;
}

void func_321(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_322(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_323()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_311(), Global_36, false) < 25f)
	{
		Local_50.f_190 = func_312(&Local_274, &Local_50, 0, 0, 0, 1);
		if (Local_50.f_190 < 0)
		{
			return 0;
		}
		Local_50.f_190 = 1;
		Local_50.f_192 = (Local_274[Local_50.f_190 /*9*/])->f_5;
		func_216(Local_274[Local_50.f_190 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
		return 1;
	}
	return 0;
}

int func_324(bool bParam0, float fParam1)
{
	if (!func_334(bParam0))
	{
		return 0;
	}
	if (func_204(bParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

int func_325(int iParam0, var uParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_326(int iParam0)
{
	iLocal_596 = iParam0;
}

void func_327(var uParam0)
{
	func_428(uParam0, 0f);
}

void func_328(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if ((((*iParam1)[iParam2 /*9*/])->f_5 == iParam0->f_192 && !bParam8) || !func_168(((*iParam1)[iParam2 /*9*/])->f_5, 0, 1))
	{
		return;
	}
	func_429(iParam1, iParam2, &fVar1, &fVar2);
	func_313(((*iParam1)[iParam2 /*9*/])->f_5, Global_36, 2, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 32) || func_419(((*iParam1)[iParam2 /*9*/])->f_5))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			if (bParam7)
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 4f, -4f, -1, 0, 0, 0, 0, 0, 0, 0);
			}
			else if (func_427())
			{
				TASK::TASK_PLAY_ANIM(0, sParam3, sParam4, 8f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 0, 0, 0, 0, 0, 0, 0);
			}
		}
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1082130432, -1082130432, -1082130432);
		if ((func_427() || bParam6) && !func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 16))
		{
			PED::SET_PED_CONFIG_FLAG(((*iParam1)[iParam2 /*9*/])->f_5, 246, true);
			TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 1);
		}
	}
	else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(((*iParam1)[iParam2 /*9*/])->f_5))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(250, 500), -1082130432, -1082130432, -1082130432);
		func_430(((*iParam1)[iParam2 /*9*/])->f_5, Global_35, 500, 0, 1, 1);
	}
	if (bParam5)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	}
	func_308(((*iParam1)[iParam2 /*9*/])->f_5, &iVar0, fVar1, fVar2, 1, 1);
}

int func_329(int iParam0)
{
	float fVar0;

	if (!func_168((Local_274[iParam0 /*9*/])->f_5, 0, 0))
	{
		return 0;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((Local_274[iParam0 /*9*/])->f_5))
	{
		return 0;
	}
	if (func_310((Local_274[iParam0 /*9*/])->f_5, Global_36, 1) < 5f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			fVar0 = 1f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		case 4:
			fVar0 = 1.5f;
			break;
		case 6:
			fVar0 = 1f;
			break;
		case 7:
			fVar0 = 0f;
			break;
		case 8:
			fVar0 = 0f;
			break;
		case 0:
			fVar0 = 1.2f;
			break;
		case 1:
			fVar0 = 1.5f;
			break;
		case 5:
			fVar0 = 2f;
			break;
	}
	if (func_324(&uLocal_609, fVar0))
	{
		return 0;
	}
	return 1;
}

int func_330(int iParam0, bool bParam1)
{
	if (func_168(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_331(float fParam0)
{
	if (func_431(1))
	{
		return 1;
	}
	if (func_334(&uLocal_0) && !func_432(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
		case 1:
		case 5:
		case 7:
		case 8:
		case 12:
		case 13:
			return 1;
	}
	return 0;
}

void func_333(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("weapon_unarmed"), 0);
			}
		}
	}
}

bool func_334(bool bParam0)
{
	return func_433(*bParam0, 1);
}

int func_335(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_93())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_434(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_181(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_327(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_435(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_265(func_436(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_336()
{
	return func_437(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

void func_337()
{
	bool bVar0;

	if (iLocal_599 < 4)
	{
		if (!func_168((Local_274[6 /*9*/])->f_5, 0, 1))
		{
			func_438(4);
			return;
		}
	}
	switch (iLocal_599)
	{
		case 0:
			if (!func_168((Local_274[0 /*9*/])->f_5, 0, 1) && !func_168((Local_274[1 /*9*/])->f_5, 0, 1))
			{
				bVar0 = true;
			}
			if (func_322(Global_35, Local_15, 1, 0))
			{
				func_200(&uLocal_606, 0);
				if (func_324(&uLocal_606, 4f))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				func_439((Local_274[6 /*9*/])->f_5);
				PED::_0x1854217C640B39EC((Local_274[6 /*9*/])->f_5, Global_35, 0f, 0f, 0f, 15f, 0, 0);
				func_200(&uLocal_606, 1);
				func_438(2);
			}
			break;
		case 2:
			if (func_324(&uLocal_606, 1.5f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((Local_274[6 /*9*/])->f_5, Global_35, 17) && func_197(-3f, 1, 0, 0))
				{
					func_327(&uLocal_606);
					func_172((Local_274[6 /*9*/])->f_5, func_171(6), 0);
					func_201((Local_274[6 /*9*/])->f_5, 0, "SICK_BASTARD", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_438(3);
				}
			}
			break;
		case 3:
			if (func_310((Local_274[6 /*9*/])->f_5, Global_36, 1) < 15f && func_324(&uLocal_606, 3f))
			{
				func_439((Local_274[6 /*9*/])->f_5);
				PED::SET_PED_COMBAT_RANGE((Local_274[6 /*9*/])->f_5, 0);
				PED::SET_PED_COMBAT_MOVEMENT((Local_274[6 /*9*/])->f_5, 2);
				func_438(4);
			}
			break;
		case 4:
			break;
	}
}

void func_338()
{
	if (func_71(4))
	{
		return;
	}
	if (!func_168((Local_274[5 /*9*/])->f_5, 0, 1))
	{
		func_53(4);
		return;
	}
	if (func_322(Global_35, Local_15.f_5, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((Local_274[5 /*9*/])->f_5))
	{
		func_439((Local_274[5 /*9*/])->f_5);
		PED::SET_PED_COMBAT_RANGE((Local_274[5 /*9*/])->f_5, 0);
		PED::SET_PED_COMBAT_MOVEMENT((Local_274[5 /*9*/])->f_5, 2);
		func_53(4);
	}
}

void func_339()
{
	int iVar0;
	bool bVar2;

	func_440();
	if (!func_71(16))
	{
		if (func_441(&Global_35))
		{
			func_53(16);
		}
	}
	switch (iLocal_593)
	{
		case 0:
			func_442(1);
			break;
		case 1:
			if (func_322(Global_35, Local_15.f_8, 1, 0) || Local_50.f_198 < 7)
			{
				iVar0 = 7;
				while (iVar0 <= 8)
				{
					if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
					{
						if (!bVar2)
						{
							if (func_201((Local_274[iVar0 /*9*/])->f_5, 0, "CHALLENGE_THREATEN", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								bVar2 = true;
							}
							else
							{
								iVar0++;
							}
							if (bVar2)
							{
								iVar0 = 7;
								while (iVar0 <= 8)
								{
									if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
									{
										func_216(Local_274[iVar0 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
									}
									iVar0++;
								}
								func_442(2);
							}
							Jump @424; //curOff = 262
							if (func_197(-6f, 1, 0, 0) || func_441(&Global_35))
							{
								iVar0 = 7;
								while (iVar0 <= 8)
								{
									func_425(Local_274[iVar0 /*9*/], 0, 0, 1, 0, 0);
									iVar0++;
								}
								if (func_443())
								{
									iLocal_648 = 2;
								}
								else
								{
									iLocal_648 = 1;
								}
								func_442(3);
							}
							Jump @424; //curOff = 352
							if (Local_50.f_198 < 6)
							{
								iVar0 = 7;
								while (iVar0 <= 8)
								{
									if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
									{
										func_439((Local_274[iVar0 /*9*/])->f_5);
									}
									iVar0++;
								}
								func_442(4);
							}
						}
					}
				}
			}
		}

void func_340()
{
	int iVar0;
	vector3 vVar1;

	if (iLocal_597 >= 2 && iLocal_597 < 5)
	{
		if (func_168((Local_419[0 /*9*/])->f_5, 0, 1))
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION((Local_419[0 /*9*/])->f_5, "AGITATED", 0);
		}
		if (func_168((Local_419[1 /*9*/])->f_5, 0, 1))
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION((Local_419[1 /*9*/])->f_5, "AGITATED", 0);
		}
	}
	if (iLocal_597 >= 2)
	{
		if (func_168((Local_419[0 /*9*/])->f_5, 0, 1))
		{
			if (!func_71(32))
			{
				if (func_310((Local_419[0 /*9*/])->f_5, func_282(3, 0), 0) < 1f || &uLocal_637[0] != 0)
				{
					if (func_444((Local_274[iLocal_632 /*9*/])->f_5, uLocal_637[0], 33, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
					{
						func_425(Local_274[iLocal_632 /*9*/], 0, 0, 1, 0, 0);
						func_53(32);
					}
				}
			}
		}
		if (func_168((Local_419[1 /*9*/])->f_5, 0, 1))
		{
			if (!func_71(64))
			{
				if (func_310((Local_419[1 /*9*/])->f_5, func_282(3, 1), 0) < 1f || &uLocal_637[1] != 0)
				{
					if (func_444((Local_274[iLocal_632 + 1 /*9*/])->f_5, uLocal_637[1], 9, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
					{
						func_425(Local_274[iLocal_632 + 1 /*9*/], 0, 0, 1, 0, 0);
						func_53(64);
					}
				}
			}
		}
	}
	if (!func_71(1024))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_19, false, 0) || GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_640))
		{
			iLocal_597 = 5;
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_15.f_7, false, 0))
		{
			iLocal_597 = 0;
			func_53(1024);
		}
	}
	switch (iLocal_597)
	{
		case 0:
			if (func_445(Global_35, -2213.7f, 725.9f, 123.7f, 40f, 1, 1))
			{
				func_446(-2210.994f, 722.6376f, 123.666f, &uLocal_641, &uLocal_646, &uLocal_647, 0.5f, 18f, 0, 0, 13f);
				iLocal_597 = 1;
			}
			break;
		case 1:
			if (func_69(&Local_50, &Local_274, -350226955, iLocal_632, iLocal_634))
			{
				Local_50.f_197 = 0;
				func_75(&Local_50, &Local_274, iLocal_632, iLocal_634);
				if (func_168((Local_274[iLocal_632 /*9*/])->f_5, 0, 1))
				{
					func_175((Local_274[iLocal_632 /*9*/])->f_5, joaat("group_rifle"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (func_168((Local_419[0 /*9*/])->f_5, 0, 1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING((Local_419[0 /*9*/])->f_5, (Local_274[iLocal_632 /*9*/])->f_1, (Local_274[iLocal_632 /*9*/])->f_4, 1, 0, 1);
						PED::_SET_PED_ON_MOUNT((Local_274[iLocal_632 /*9*/])->f_5, (Local_419[0 /*9*/])->f_5, -1, true);
					}
				}
				if (func_168((Local_274[iLocal_632 + 1 /*9*/])->f_5, 0, 1))
				{
					func_175((Local_274[iLocal_632 + 1 /*9*/])->f_5, joaat("group_pistol"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (func_168((Local_419[1 /*9*/])->f_5, 0, 1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING((Local_419[1 /*9*/])->f_5, (Local_274[iLocal_632 + 1 /*9*/])->f_1, (Local_274[iLocal_632 + 1 /*9*/])->f_4, 1, 0, 1);
						PED::_SET_PED_ON_MOUNT((Local_274[iLocal_632 + 1 /*9*/])->f_5, (Local_419[1 /*9*/])->f_5, -1, true);
					}
				}
				iVar0 = iLocal_632;
				while (iVar0 <= iLocal_634)
				{
					if (func_425(Local_274[iVar0 /*9*/], 0, 0, 1, 0, 0))
					{
						vVar1 = { func_282(3, (iVar0 - iLocal_632)) };
						PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[iVar0 /*9*/])->f_5, vVar1, 2f, 1, false, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES((Local_274[iVar0 /*9*/])->f_5, 51, true);
					}
					iVar0++;
				}
				func_137(&(iLocal_622[2]), 0, 0f, 0, 0, 0f, 0, 0);
				func_137(&(iLocal_622[3]), 0, 0f, 0, 0, 0f, 0, 0);
				iLocal_597 = 2;
				AUDIO::_PLAY_SOUND_FROM_POSITION("OPEN_BARN_DOORS", func_447(&(iLocal_622[3])), "HIDEOUT_HDR_Sounds", 0, 0, 0, 0);
			}
			break;
		case 2:
			if (func_448(&(iLocal_622[3])) >= 0.5f)
			{
				func_327(&uLocal_615);
				iLocal_597 = 4;
			}
			break;
		case 3:
			if (func_324(&uLocal_615, 2f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
					{
						PED::_0xFC3DB99C8144CD81((Local_274[iVar0 /*9*/])->f_5, Local_15.f_12, 0, 0, 0);
					}
					iVar0++;
				}
				func_327(&uLocal_615);
				iLocal_597 = 4;
			}
			break;
		case 4:
			if (func_324(&uLocal_615, 0f))
			{
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 1))
					{
						func_439((Local_274[iVar0 /*9*/])->f_5);
						PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
					}
					iVar0++;
				}
				iVar0 = iLocal_632;
				while (iVar0 <= iLocal_634)
				{
					if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 0))
					{
						func_439((Local_274[iVar0 /*9*/])->f_5);
						PED::SET_PED_COMBAT_RANGE((Local_274[iVar0 /*9*/])->f_5, 0);
					}
					iVar0++;
				}
				iLocal_597 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_341()
{
	switch (iLocal_598)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST((Local_274[11 /*9*/])->f_6))
			{
				if (func_449(&Local_274) < 2)
				{
					func_216(Local_274[11 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
			if (func_322(Global_35, Local_15.f_17, 1, 0) || !func_168((Local_274[11 /*9*/])->f_5, 0, 1))
			{
				if (func_168((Local_274[11 /*9*/])->f_5, 0, 1))
				{
					func_172((Local_274[11 /*9*/])->f_5, "0712_G_M_M_UniRanchers_01_WHITE_02", 0);
					func_201((Local_274[11 /*9*/])->f_5, 0, "SURROUNDED", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_216(Local_274[11 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				func_450(1);
			}
			break;
		case 1:
			if ((func_197(-5f, 1, 0, 0) || func_322(Global_35, Local_15.f_19, 1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((Local_274[11 /*9*/])->f_5))
			{
				if (func_425(Local_274[11 /*9*/], 0, 0, 1, 0, 0))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[11 /*9*/])->f_5, ENTITY::GET_ENTITY_COORDS((Local_274[11 /*9*/])->f_5, true, false), 1.5f, 1, false, 0);
				}
				func_200(&uLocal_649, 1);
				func_450(2);
			}
			break;
		case 2:
			if (func_324(&uLocal_649, 4f))
			{
				if (func_168((Local_274[11 /*9*/])->f_5, 0, 1))
				{
					PED::_0xFC3DB99C8144CD81((Local_274[11 /*9*/])->f_5, Local_15.f_18, 0, 0, 0);
				}
				func_200(&uLocal_649, 1);
				func_450(3);
			}
			break;
		case 3:
			if (func_324(&uLocal_649, 6f))
			{
				if (func_168((Local_274[11 /*9*/])->f_5, 0, 1))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((Local_274[11 /*9*/])->f_5, Global_35, 17))
					{
						func_201((Local_274[11 /*9*/])->f_5, 0, "CALLOUT_JUST_KILL_EM_MALE", "", -1f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_439((Local_274[11 /*9*/])->f_5);
						PED::SET_PED_COMBAT_MOVEMENT((Local_274[11 /*9*/])->f_5, 2);
						func_450(4);
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_342()
{
	vector3 vVar0;
	int iVar3;

	switch (iLocal_600)
	{
		case 0:
			if (func_451())
			{
				if (func_168((Local_274[12 /*9*/])->f_5, 0, 1))
				{
					vVar0 = { func_143(1, 12) };
					PED::_0x7DE9692C6F64CFE8((Local_274[12 /*9*/])->f_5, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[12 /*9*/])->f_5, vVar0, 1f, 1, false, 0);
					func_216(Local_274[12 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 3f, 20000, 1193033728, 2f, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					func_308((Local_274[12 /*9*/])->f_5, &iVar3, 0, 0, 1, 1);
				}
				func_200(&uLocal_652, 0);
				func_452(1);
			}
			break;
		case 1:
			if (func_324(&uLocal_652, 0.5f))
			{
				if (func_168((Local_274[13 /*9*/])->f_5, 0, 1))
				{
					vVar0 = { func_143(1, 11) };
					PED::_0x7DE9692C6F64CFE8((Local_274[13 /*9*/])->f_5, 0, 0, 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA((Local_274[13 /*9*/])->f_5, vVar0, 1f, 1, false, 0);
					func_216(Local_274[13 /*9*/], joaat("BLIP_STYLE_ENEMY"), 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 3f, 20000, 1193033728, 2f, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					func_308((Local_274[13 /*9*/])->f_5, &iVar3, 0, 0, 1, 1);
				}
				func_327(&uLocal_652);
				func_452(2);
			}
			break;
		case 2:
			if (func_324(&uLocal_652, 3f))
			{
				if (func_168((Local_274[13 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[13 /*9*/])->f_5);
					PED::SET_PED_COMBAT_RANGE((Local_274[13 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[13 /*9*/])->f_5, 2);
				}
				else if (func_168((Local_274[12 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[12 /*9*/])->f_5);
					PED::SET_PED_COMBAT_RANGE((Local_274[12 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[12 /*9*/])->f_5, 2);
				}
				func_327(&uLocal_652);
				func_452(3);
			}
			break;
		case 3:
			if (func_324(&uLocal_652, 1f))
			{
				if (func_168((Local_274[12 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[12 /*9*/])->f_5);
					PED::SET_PED_COMBAT_RANGE((Local_274[12 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[12 /*9*/])->f_5, 2);
				}
				if (func_168((Local_274[13 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[13 /*9*/])->f_5);
					PED::SET_PED_COMBAT_RANGE((Local_274[13 /*9*/])->f_5, 0);
					PED::SET_PED_COMBAT_MOVEMENT((Local_274[13 /*9*/])->f_5, 2);
				}
				func_327(&uLocal_652);
				func_452(4);
			}
			break;
		case 4:
			break;
	}
}

void func_343(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	if ((MAP::DOES_BLIP_EXIST(((*iParam1)[iParam2 /*9*/])->f_6) || !func_168(((*iParam1)[iParam2 /*9*/])->f_5, 0, 1)) || func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 64))
	{
		return;
	}
	if (func_453(iParam1, iParam2))
	{
		func_367((*iParam1)[iParam2 /*9*/], joaat("BLIP_STYLE_ENEMY"), iParam4);
		if (!func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 64))
		{
			func_177(&(((*iParam1)[iParam2 /*9*/])->f_7), 64, 0);
		}
	}
	else
	{
		if (!func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 64))
		{
			if (func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 128))
			{
				func_177(&(((*iParam1)[iParam2 /*9*/])->f_7), 64, 0);
			}
		}
		if (!func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 64))
		{
			bVar0 = func_427();
			if (func_427())
			{
				if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(((*iParam1)[iParam2 /*9*/])->f_5) && func_178(&(((*iParam1)[iParam2 /*9*/])->f_7), 32))
				{
					bVar1 = true;
				}
			}
			if ((PED::_0xC8D523BF5BBD3808(((*iParam1)[iParam2 /*9*/])->f_5, joaat("event_shot_fired_bullet_impact")) || PED::_0xC8D523BF5BBD3808(((*iParam1)[iParam2 /*9*/])->f_5, joaat("event_shot_fired_whizzed_by"))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(((*iParam1)[iParam2 /*9*/])->f_5))
			{
				func_425((*iParam1)[iParam2 /*9*/], 1, bVar0, 0, bVar1, 0);
				func_367((*iParam1)[iParam2 /*9*/], joaat("BLIP_STYLE_ENEMY"), iParam4);
				func_177(&(((*iParam1)[iParam2 /*9*/])->f_7), 64, 0);
			}
			else if (*uParam3 < 5)
			{
				if (func_454(((*iParam1)[iParam2 /*9*/])->f_5, Global_35, 1, 20f, 0))
				{
					func_425((*iParam1)[iParam2 /*9*/], 1, bVar0, 0, bVar1, 0);
					func_367((*iParam1)[iParam2 /*9*/], joaat("BLIP_STYLE_ENEMY"), iParam4);
					func_177(&(((*iParam1)[iParam2 /*9*/])->f_7), 64, 0);
				}
				*uParam3++;
			}
		}
	}
}

void func_344(int iParam0)
{
	iLocal_594 = iParam0;
}

int func_345(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;

	if (iParam3 < iParam4)
	{
		iVar0 = iParam5;
		while (iVar0 <= ((iParam5 + iParam0) - 1))
		{
			func_455(&(((*iParam1)[iVar0 /*9*/])->f_5), "");
			if (!bVar1)
			{
				if (func_168(((*iParam1)[iVar0 /*9*/])->f_5, 0, 1))
				{
					bVar1 = true;
					func_201(((*iParam1)[iVar0 /*9*/])->f_5, 0, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_346()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_50.f_199)
	{
		if (func_168((Local_274[iVar0 /*9*/])->f_5, 0, 0))
		{
			if (PED::_0xD5FE956C70FF370B((Local_274[iVar0 /*9*/])->f_5))
			{
				PED::_0x7DE9692C6F64CFE8((Local_274[iVar0 /*9*/])->f_5, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

bool func_347(bool bParam0)
{
	return func_433(*bParam0, 2);
}

float func_348()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_349(var uParam0, char* sParam1, var uParam2, int iParam3, vector3 vParam4)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, 1) != 1)
		{
			if (!func_350(uParam0))
			{
				if (!func_421(vParam4))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::_TASK_FLEE_FROM_PED(0, Global_35, vParam4, -1f, -1, 5120, 1077936128, 0);
					func_308(uParam0->f_5, &iVar0, 0, 0, 1, 1);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					*uParam2 = 1;
				}
				if (!*uParam2)
				{
					_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
					func_201(uParam0->f_5, Global_35, sParam1, "", 70f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					*uParam2 = 1;
				}
			}
			PED::SET_PED_KEEP_TASK(uParam0->f_5, true);
		}
	}
}

int func_350(var uParam0)
{
	if (func_178(&(uParam0->f_7), 1))
	{
		return 1;
	}
	return 0;
}

void func_351(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	int iVar0;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, vParam5, vParam8, "volDefAreaAttached");
	PED::_0x7C00CFC48A782DC0(iVar0, uParam1, vParam2, vParam5, 2, 1);
	PED::_0xFC3DB99C8144CD81(uParam0, iVar0, 0, 0, 0);
}

int func_352(int iParam0, int iParam1)
{
	if (!func_146(&(iParam1->f_5), 33554432))
	{
		if (func_449(iParam0) <= 0)
		{
			func_185(&(iParam1->f_5), 33554432);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	iVar2 = 0;
	switch (iParam0->f_205)
	{
		case 9:
			iVar0 = 100;
			iVar1 = 150;
			iVar2 = -2009656535;
			break;
		case 16:
			iVar0 = 100;
			iVar1 = 150;
			if (!func_31())
			{
				iVar2 = 214473058;
			}
			else
			{
				iVar2 = -1005838710;
			}
			break;
		case 36:
			iVar0 = 75;
			iVar1 = 100;
			iVar2 = 214473058;
			break;
		case 79:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 325633398;
			break;
		case 125:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 1004822587;
			break;
		case 127:
			iVar0 = 100;
			iVar1 = 100;
			iVar2 = 1004822587;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 > 0)
	{
		Var4 = { func_242(joaat("killed"), iVar2) };
		STATS::STAT_ID_GET_INT(&Var4, &iVar3);
		if (iVar3 >= (iParam0->f_200 + iParam0->f_199))
		{
			func_456(iVar0, 1);
		}
		else
		{
			func_456(iVar1, 1);
		}
	}
}

void func_354(int iParam0)
{
	if (func_457(1) <= 0)
	{
		return;
	}
}

void func_355(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	func_458(iVar0, 1, bParam1, 0, 1);
	func_459(iParam0, -1);
	if (bParam2)
	{
		if (func_460(iVar0) >= 1)
		{
			func_461(iVar0, (func_460(iVar0) - 1));
		}
	}
	else
	{
		func_462(0, 12);
		iVar1 = func_463(iParam0);
		if (func_460(iVar0) <= 1)
		{
			func_243(func_464(64058978), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = (Global_40.f_9571[iVar1 /*10*/])->f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				((*Global_1392050)[iVar1 /*14*/])->f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237->f_192[iVar1] = (func_465() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						((*Global_1392050)[iVar1 /*14*/])->f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						((*Global_1392050)[iVar1 /*14*/])->f_1 |= 8;
					}
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237->f_192[iVar1] = (&Global_1393237->f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			func_467(func_466(iParam0, 1), 350f, 0);
			func_468(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_356(int iParam0)
{
	int iVar0;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	if (iVar0 != func_26(0))
	{
		func_469(iVar0);
	}
	else
	{
		func_469(iVar0);
	}
}

var func_357(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_470(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_471(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_470(sVar0, iParam1, 0, 0, 1, 1);
}

void func_358()
{
	VOLUME::_DELETE_VOLUME(Local_15);
	VOLUME::_DELETE_VOLUME(Local_15.f_1);
	VOLUME::_DELETE_VOLUME(Local_15.f_2);
	VOLUME::_DELETE_VOLUME(Local_15.f_3);
	VOLUME::_DELETE_VOLUME(Local_15.f_4);
	VOLUME::_DELETE_VOLUME(Local_15.f_5);
	VOLUME::_DELETE_VOLUME(Local_15.f_6);
	VOLUME::_DELETE_VOLUME(Local_15.f_7);
	VOLUME::_DELETE_VOLUME(Local_15.f_8);
	VOLUME::_DELETE_VOLUME(Local_15.f_9);
	VOLUME::_DELETE_VOLUME(Local_15.f_10);
	VOLUME::_DELETE_VOLUME(Local_15.f_11);
	VOLUME::_DELETE_VOLUME(Local_15.f_12);
	VOLUME::_DELETE_VOLUME(Local_15.f_13);
	VOLUME::_DELETE_VOLUME(Local_15.f_14);
	VOLUME::_DELETE_VOLUME(Local_15.f_15);
	VOLUME::_DELETE_VOLUME(Local_15.f_16);
	VOLUME::_DELETE_VOLUME(Local_15.f_17);
	VOLUME::_DELETE_VOLUME(Local_15.f_18);
	VOLUME::_DELETE_VOLUME(Local_15.f_19);
	VOLUME::_DELETE_VOLUME(Local_15.f_20);
	VOLUME::_DELETE_VOLUME(Local_15.f_21);
	VOLUME::_DELETE_VOLUME(Local_15.f_22);
	VOLUME::_DELETE_VOLUME(Local_15.f_23);
	VOLUME::_DELETE_VOLUME(Local_15.f_24);
	VOLUME::_DELETE_VOLUME(Local_15.f_25);
	VOLUME::_DELETE_VOLUME(Local_15.f_26);
}

void func_359(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_146(&(iParam1->f_5), 8) && !func_146(&(iParam1->f_5), 4))
	{
		iVar0 = func_36(iParam1->f_205);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_295(iVar0))
			{
				if (!func_146(&(iParam1->f_5), 4096))
				{
					func_472(iParam1, 1);
					func_185(&(iParam1->f_5), 4096);
				}
				func_356(iParam1->f_205);
			}
		}
		else if (func_295(iVar0))
		{
			func_472(iParam1, 0);
			func_473(iParam1->f_205, iParam1->f_198);
			func_185(&(iParam1->f_5), 4);
		}
	}
	func_149(iParam1, 0);
	func_223(iParam1, 0);
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		func_321(&(((*iParam0)[iVar1 /*9*/])->f_6));
		if ((CAM::IS_SCREEN_FADED_OUT() || (func_181(((*iParam0)[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 60f && ENTITY::IS_ENTITY_OCCLUDED(((*iParam0)[iVar1 /*9*/])->f_5))) || func_181(((*iParam0)[iVar1 /*9*/])->f_5, Global_35, 0, 0) > 100f)
		{
			func_474(&(((*iParam0)[iVar1 /*9*/])->f_5));
		}
		iVar1++;
	}
	func_475(&(iParam1->f_214), 1, 1);
	func_476(uParam2);
	if (iParam1->f_201 > 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::_TEXT_DATABASE_DELETE(sParam4);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_477(&uVar2, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_215))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_215);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_215);
		VOLUME::_DELETE_VOLUME(iParam1->f_215);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_216))
	{
		POPULATION::_0xA1CFB35069D23C23(iParam1->f_216);
		POPULATION::_0x74C2B3DC0B294102(iParam1->f_216);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(func_284(iParam1->f_205)))
	{
		POPULATION::_0xA1CFB35069D23C23(func_284(iParam1->f_205));
		POPULATION::_0x74C2B3DC0B294102(func_284(iParam1->f_205));
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
	func_222(iParam1, 0);
	func_224(0);
	func_478(Global_1935630, 32);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_360(int iParam0)
{
	int iVar0;

	if (!func_43(iParam0))
	{
		return 0;
	}
	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return 0;
	}
	return func_295(iVar0);
}

void func_361(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_479(iParam0, 57, func_466(iParam0, 1), 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	if (func_219(iVar0) != 4)
	{
		func_241(Global_1935630, 32);
	}
	if (func_105(iVar0, 1))
	{
		func_480(iVar0);
	}
	iVar1 = func_463(iParam0);
	if (iVar1 != -1)
	{
		func_468(0, iVar1, 0, 12, 0);
	}
	func_481(iParam0);
	func_482(iVar0, 1);
	func_484(iVar0, 1, func_483(PLAYER::PLAYER_ID(), 1, 0, 1));
	func_485(iParam0);
	func_462(0, 12);
}

Vector3 func_362(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_486(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_363(int iParam0, vector3 vParam1)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::_0xF256A75210C5C0EB(iParam0, vParam1);
}

int func_364(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_487(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_488(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_489(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_490(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_491(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_492(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_483(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_489(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_493(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_494(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_489(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_495(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_489(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_496(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_496(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_489(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_497(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_498(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_499(uParam2, 4000))
				{
					if ((func_500(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_501(uParam2, iParam0)) && func_502(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_489(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_500(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_501(uParam2, iParam0)) && func_502(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_503(iParam0, Global_1935630->f_41))
							{
								func_504();
								*uParam3 = 2;
								func_489(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_503(iParam0, Global_1935630->f_41))
						{
							func_504();
							*uParam3 = 2;
							func_489(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_505(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_465() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_504();
						*uParam3 = 2;
						func_489(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_506())
					{
						if (func_503(iParam0, Global_1935630->f_42))
						{
							func_504();
							*uParam3 = 2;
							func_489(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_507(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_489(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_508(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_509(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_489(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_510(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_511(uParam2, 4000))
				{
					if (func_512(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_489(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_513(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_489(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_514(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_489(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_365(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < func_457(1))
	{
		iVar1 = func_515(iVar0);
		if (func_405(iVar1))
		{
			iVar2 = func_516(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (func_168(iVar2, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_5, iVar2, 1, 1))
						{
							return 1;
						}
					}
					if (func_168(uParam1->f_5, 0, 1))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, uParam1->f_5, 1, 1))
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_366(var uParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		if (func_168(uParam0->f_5, 0, 1))
		{
			if (!func_350(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_5, 518218985, 1) == 1 || bParam7)
				{
					if (func_517(uParam0->f_5, vParam1, 1) > IntToFloat((iParam4 * iParam4)))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
					}
					else if (func_324(bParam5, fParam6))
					{
						MAP::REMOVE_BLIP(&(uParam0->f_6));
						if (func_310(uParam0->f_5, vParam1, 1) < IntToFloat((iParam4 / 3)))
						{
						}
					}
				}
			}
		}
	}
}

void func_367(var uParam0, int iParam1, int iParam2)
{
	if (!func_168(uParam0->f_5, 0, 0) || DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		func_321(&(uParam0->f_6));
	}
	uParam0->f_6 = MAP::_BLIP_ADD_FOR_ENTITY(iParam1, uParam0->f_5);
	if (iParam2 != 0)
	{
		MAP::_0x662D364ABF16DE2F(uParam0->f_6, iParam2);
	}
}

void func_368(int iParam0, bool bParam1)
{
	if (iParam0->f_205 != 9)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, bParam1);
	}
}

int func_369(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

bool func_370(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_371(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23117[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0 /*11*/] & 32 != 0;
}

int func_372(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_373(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_374(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_375(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (func_24() != -1)
	{
		uVar0 = &Global_36637.f_1444[*iParam0];
		MISC::SET_BIT(&uVar0, *iParam1);
		Global_36637.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = &Global_40.f_7832[*iParam0];
	MISC::SET_BIT(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

var func_376(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_377(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	func_519(&iVar0, 0);
	func_519(&iVar0, 17);
	func_519(&iVar0, 28);
	if (bParam1)
	{
		COMPANION::_0x3CAAD93FA5B9579A(iParam0->f_215, 2, iVar0);
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_215))
	{
		COMPANION::_0x7274F84B1501B523(iParam0->f_215);
	}
}

void func_378(int iParam0)
{
	Global_1898091 = (Global_1898091 || iParam0);
}

bool func_379()
{
	return func_52(8);
}

int func_380()
{
	if (func_24() != 0)
	{
		return 1;
	}
	return 1;
}

var func_381(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_382(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_520(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_383(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

int func_384(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	if (!func_521(iParam0))
	{
		return 0;
	}
	return func_522(iParam0);
}

bool func_386(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_387(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_388()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

bool func_389(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_390(int iParam0)
{
	return func_248(iParam0, Global_1310750->f_16072 | 64);
}

void func_391(int iParam0)
{
	int iVar0;

	if (&Global_1310750->f_13321[iParam0 /*9*/] != -1)
	{
		((*Global_1310750)[&Global_1310750->f_13321[iParam0 /*9*/] /*111*/])->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0 /*9*/] = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_1 = -1;
	(Global_1310750->f_13321[iParam0 /*9*/])->f_2 = { 0f, 0f, 0f };
	(Global_1310750->f_13321[iParam0 /*9*/])->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1310750->f_13321[iParam0 /*9*/])->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

int func_392()
{
	return 1;
}

bool func_393(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_394(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_47(iParam0))
	{
		return;
	}
	if (!func_128(iParam0, 1))
	{
		return;
	}
	if (!func_128(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_393(iParam0)) && func_523(iParam0))
	{
		return;
	}
	func_132(iParam0, 1);
	func_524(iParam0);
	if (func_525(func_129(iParam0)))
	{
		iVar0 = func_131(iParam0);
		if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_0xEB98B38CA60742D7(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_132(iParam0, 16);
	}
	if (func_128(iParam0, 128) && !bParam3)
	{
		func_526(iParam0, 0);
	}
}

void func_395(int iParam0, bool bParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_528(iParam0, 1024))
		{
			func_529(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_528(iParam0, 1024))
	{
		func_530(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_531(iParam0);
}

void func_396(int iParam0, int iParam1)
{
	if (!func_532(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

int func_397(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_398(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_399(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_532(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_400(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_401(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_401(int iParam0)
{
	return iParam0 > -1;
}

int func_402(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_403(int iParam0)
{
	if (!func_401(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		(*Global_1360165)[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_404(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_401(iParam0))
		{
			return;
		}
	}
	func_402(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

int func_405(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return 0;
	}
	return 1;
}

float func_406(int iParam0)
{
	if (!func_401(iParam0))
	{
		return 0f;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_134;
}

void func_407(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_533(iParam1);
	}
}

void func_408(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;

	if (!func_405(iParam0))
	{
		return;
	}
	if (func_255(iParam0))
	{
		if (!func_534(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_257(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	uVar0 = func_535(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(uVar0))
	{
		return;
	}
	iVar1 = func_403(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_406(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::_0x0C3CB2E600C8977D(iVar1, 1)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::_0xF1C03A5352243A30(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, 1, 1);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_536(iParam0, 2, 1);
	}
	else
	{
		func_537(iParam0);
		func_536(iParam0, 1, 1);
	}
}

int func_409(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_410(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_538(iParam1))
		{
			func_539(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_540(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_541(iParam0, 0);
			bVar0 = true;
		}
		func_542(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875: /* GXTEntry: "Murder" */
			return 2;
		case 1587891565:
			return 4;
		case 1877013492: /* GXTEntry: "Frighten" */
			return 32;
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return 64;
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return 128;
		case 551416228: /* GXTEntry: "Killed Horse" */
			return 256;
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return 512;
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return 1024;
		case 508358508: /* GXTEntry: "Stole Mule" */
			return 2048;
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return 16384;
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return 32768;
		case -1972216640: /* GXTEntry: "Antagonize" */
			return 65536;
		case 530833824: /* GXTEntry: "Theft" */
			return 131072;
		case 1682361219: /* GXTEntry: "Intervened" */
			return 262144;
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return 524288;
		case 1919819559: /* GXTEntry: "Donated Game" */
			return 1048576;
		case 1461411082: /* GXTEntry: "Item Request" */
			return 2097152;
		case -549508280: /* GXTEntry: "Long Absence" */
			return 4194304;
		default:
			break;
	}
	return 0;
}

bool func_412(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("weapon_unarmed"));
}

int func_413(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_414(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_543(bParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_544((375 + iVar28), 1);
			if (func_545(bParam0, &Var0, iVar5, 0))
			{
				if (func_546(bParam0, &Var6, iVar5))
				{
					Var29 = { func_547(bParam0, Var0, iVar5, 0) };
					func_548(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_549(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_550(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_551(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_415(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*bParam1 == joaat("weapon_revolver_cattleman_mexican") || *bParam1 == joaat("weapon_revolver_cattleman_pig")) || *bParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *bParam1 == joaat("weapon_revolver_schofield_calloway")) || *bParam1 == joaat("weapon_revolver_schofield_golden")) || *bParam1 == joaat("weapon_pistol_mauser_drunk")) || *bParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *bParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_416(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

bool func_417(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_418(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_419(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_420(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_487(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_499(uParam1, 4000))
				{
					if ((func_500(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_501(uParam1, iParam0)) && func_502(uParam1, iParam0))
					{
						func_504();
						*uParam2 = 2;
						func_489(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_499(uParam1, 4000))
				{
					if ((func_500(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_501(uParam1, iParam0)) && func_502(uParam1, iParam0))
					{
						func_504();
						*uParam2 = 2;
						func_489(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_503(iParam0, Global_1935630->f_41))
							{
								func_504();
								*uParam2 = 2;
								func_489(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_503(iParam0, Global_1935630->f_41))
						{
							func_504();
							*uParam2 = 2;
							func_489(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_506())
					{
						if (func_503(iParam0, Global_1935630->f_42))
						{
							func_504();
							*uParam2 = 2;
							func_489(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_493(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_494(Global_35, iParam0, uParam1))
					{
						func_504();
						*uParam2 = 4;
						func_489(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_495(Global_35, iParam0, uParam1))
					{
						func_504();
						*uParam2 = 256;
						func_489(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_552(iParam0, uParam1))
			{
				func_504();
				*uParam2 = 131072;
				func_489(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_553(iParam0, uParam1))
			{
				func_504();
				*uParam2 = 262144;
				func_489(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_421(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_422(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

int func_423(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return 0;
	}
	return 1;
}

int func_424(int iParam0)
{
	if (func_168(iParam0, 0, 1))
	{
		return DECORATOR::DECOR_GET_BOOL(iParam0, "proc_bounty_target");
	}
	return 0;
}

int func_425(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	bool bVar0;
	int iVar1;

	if (func_168(uParam0->f_5, 0, 1))
	{
		bVar0 = WEAPON::GET_BEST_PED_WEAPON(uParam0->f_5, false, false);
		if (!func_178(&(uParam0->f_7), 512))
		{
			if (bParam1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (bParam4)
				{
					TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 4000, 0, 0, 0);
				}
				if (bVar0 != 0)
				{
					if (bParam2 && (WEAPON::_0xD955FEE4B87AFA07(bVar0) || WEAPON::_0x0556E9D2ECF39D01(bVar0)))
					{
						func_430(uParam0->f_5, Global_35, 250, 0, 1, 1);
					}
				}
				TASK::TASK_COMBAT_PED(0, Global_35, iParam5, 0);
				func_308(uParam0->f_5, &iVar1, 0.1f, 0.3f, 1, 1);
			}
			else
			{
				TASK::TASK_COMBAT_PED(uParam0->f_5, Global_35, 0, 0);
			}
		}
		if (bParam3)
		{
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_5, "proc_bounty_target"))
			{
				func_367(uParam0, joaat("BLIP_STYLE_ENEMY"), 0);
			}
		}
		return 1;
	}
	return 0;
}

void func_426(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam6);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, vParam1, fParam4, iParam5, bParam6, 0);
	}
}

int func_427()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

void func_428(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_348() - fParam1);
	func_554(uParam0, 1);
	func_555(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_429(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (func_178(&(((*iParam0)[iParam1 /*9*/])->f_7), 16))
	{
		*fParam2 = 0.1f;
		*fParam3 = 0.5f;
	}
	else
	{
		*fParam2 = 0.4f;
		*fParam3 = 1f;
	}
	if (!func_419(((*iParam0)[iParam1 /*9*/])->f_5))
	{
		if (PED::IS_PED_FACING_PED(((*iParam0)[iParam1 /*9*/])->f_5, Global_35, 70f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(((*iParam0)[iParam1 /*9*/])->f_5))
		{
			*fParam2 = (*fParam2 / 2f);
			*fParam3 = (*fParam3 / 2f);
		}
	}
}

void func_430(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			iVar0 = 0;
			if (!WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false), true, 0, false, false);
			}
			if (WEAPON::_0xD955FEE4B87AFA07(func_556(iParam0, 0)) || WEAPON::_0x0556E9D2ECF39D01(func_556(iParam0, 0)))
			{
				if (bParam4)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam1, iParam2, iParam3, iParam5);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iParam1, iParam2, iParam3, iParam5);
				}
			}
		}
	}
}

bool func_431(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_432(bool bParam0, float fParam1)
{
	if (func_324(bParam0, fParam1))
	{
		func_557(bParam0);
		return 1;
	}
	return 0;
}

bool func_433(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_434(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_181(Global_35, iParam0, bParam1, bParam2);
}

int func_435(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_436(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_558(iParam0, &Var0);
}

bool func_437(int iParam0)
{
	return iParam0 != 0;
}

void func_438(int iParam0)
{
	iLocal_599 = iParam0;
}

void func_439(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_440()
{
	vector3 vVar0;
	bool bVar3;

	switch (iLocal_648)
	{
		case 1:
			if (!func_443())
			{
				if (func_168((Local_274[7 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[7 /*9*/])->f_5);
					vVar0 = { func_143(1, 8) };
					func_426((Local_274[7 /*9*/])->f_5, vVar0, 1.5f, 1, 0);
				}
				if (func_168((Local_274[8 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[8 /*9*/])->f_5);
					vVar0 = { func_143(1, 9) };
					func_426((Local_274[8 /*9*/])->f_5, vVar0, 1.5f, 1, 0);
				}
				iLocal_648 = 4;
			}
			break;
		case 4:
			vVar0 = { func_143(1, 8) };
			if ((func_168((Local_274[7 /*9*/])->f_5, 0, 1) && func_310((Local_274[7 /*9*/])->f_5, vVar0, 0) < 1.5f) || !func_168((Local_274[7 /*9*/])->f_5, 0, 1))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				vVar0 = { func_143(1, 9) };
				if ((func_168((Local_274[8 /*9*/])->f_5, 0, 1) && func_310((Local_274[8 /*9*/])->f_5, vVar0, 0) < 1.5f) || !func_168((Local_274[8 /*9*/])->f_5, 0, 1))
				{
					iLocal_648 = 2;
				}
			}
			break;
		case 2:
			if (func_443())
			{
				if (func_168((Local_274[7 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[7 /*9*/])->f_5);
					vVar0 = { func_143(1, 5) };
					func_426((Local_274[7 /*9*/])->f_5, vVar0, 1.5f, 1, 0);
				}
				if (func_168((Local_274[8 /*9*/])->f_5, 0, 1))
				{
					func_439((Local_274[8 /*9*/])->f_5);
					vVar0 = { func_143(1, 6) };
					func_426((Local_274[8 /*9*/])->f_5, vVar0, 1.5f, 1, 0);
				}
				iLocal_648 = 3;
			}
			break;
		case 3:
			vVar0 = { func_143(1, 5) };
			if ((func_168((Local_274[7 /*9*/])->f_5, 0, 1) && func_310((Local_274[7 /*9*/])->f_5, vVar0, 0) < 1.5f) || !func_168((Local_274[7 /*9*/])->f_5, 0, 1))
			{
				bVar3 = true;
			}
			if (bVar3)
			{
				vVar0 = { func_143(1, 6) };
				if ((func_168((Local_274[8 /*9*/])->f_5, 0, 1) && func_310((Local_274[8 /*9*/])->f_5, vVar0, 0) < 1.5f) || !func_168((Local_274[8 /*9*/])->f_5, 0, 1))
				{
					iLocal_648 = 1;
				}
			}
			break;
	}
}

int func_441(var uParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(*uParam0, Local_15.f_2, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(*uParam0, Local_15.f_4, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_442(int iParam0)
{
	iLocal_593 = iParam0;
}

int func_443()
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -2194.76f, 709.5738f, 121.1217f, false) < MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, -2157.75f, 727.7754f, 121.9189f, false))
	{
		return 1;
	}
	return 0;
}

int func_444(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_19(*uParam1, 128))
	{
		if (!func_559(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_19(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_560(iVar2))
			{
				return 0;
			}
			if (!func_559(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_561(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_19(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return 0;
		}
		else if ((func_562(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_563(uParam1, 128);
			return 0;
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_19(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return 0;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*uParam1 = 0;
			return 1;
		}
	}
	if (func_19(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_560(iVar2))
			{
				return 0;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_562(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_562(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam3, 0);
				if (func_562(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return 0;
		}
		if (func_19(*uParam1, 2336))
		{
			if (!func_560(iVar2))
			{
			}
			if (func_564(iVar2, *uParam1))
			{
				func_565(uParam1, 32);
				func_565(uParam1, 256);
				func_565(uParam1, 2048);
				func_563(uParam1, 512);
				func_563(uParam1, 1024);
				func_563(uParam1, 4096);
			}
			else
			{
				return 0;
			}
		}
		if (func_19(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_560(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return 0;
			}
			else
			{
				func_565(uParam1, 64);
			}
		}
		if (func_562(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return 1;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_562(iParam2, 1024))) || func_562(iParam2, 8)) && !func_19(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_563(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_562(iParam2, 4096)) && !func_19(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_563(uParam1, 2048);
			func_563(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_562(iParam2, 32)) && !func_19(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_563(uParam1, 256);
			func_563(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_563(uParam1, 64);
		}
		else if (!func_562(iParam2, 1))
		{
			if (!func_562(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, 1, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_561(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_19(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_563(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_563(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_562(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_563(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return 1;
		}
	}
	else if (!func_562(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_563(uParam1, 8);
	}
	return 0;
}

int func_445(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_566(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_446(vector3 vParam0, var uParam3, int iParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	float fVar0;

	if (fParam8 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return 0;
		}
	}
	fVar0 = func_310(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (func_567(vParam0, 0, uParam3, iParam4, uParam5, fParam6, fParam7, fParam9, 0))
		{
			return 1;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0f;
			return 1;
		}
	}
	return 0;
}

Vector3 func_447(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_568(iParam0, 0)))
	{
		return ENTITY::GET_ENTITY_COORDS(func_568(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

float func_448(int iParam0)
{
	func_273(iParam0, 0, 0);
	if (func_136(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0);
	}
	return -1f;
}

int func_449(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MAP::DOES_BLIP_EXIST(((*iParam0)[iVar0 /*9*/])->f_6) && func_168(((*iParam0)[iVar0 /*9*/])->f_5, 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_450(int iParam0)
{
	iLocal_598 = iParam0;
}

int func_451()
{
	if (!func_322(Global_35, Local_15.f_19, 1, 0) && Local_50.f_198 > 6)
	{
		return 0;
	}
	func_200(&uLocal_612, 0);
	if (func_324(&uLocal_612, 1.5f))
	{
		return 1;
	}
	if (!func_168((Local_274[11 /*9*/])->f_5, 0, 1))
	{
		if (func_324(&uLocal_612, 1f))
		{
			return 1;
		}
	}
	return 0;
}

void func_452(int iParam0)
{
	iLocal_600 = iParam0;
}

int func_453(int iParam0, int iParam1)
{
	if (PED::IS_PED_SHOOTING(((*iParam0)[iParam1 /*9*/])->f_5))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_COMBAT(((*iParam0)[iParam1 /*9*/])->f_5, 0))
	{
		return 0;
	}
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(((*iParam0)[iParam1 /*9*/])->f_5, Global_35, 17))
	{
		return 1;
	}
	if (func_517(((*iParam0)[iParam1 /*9*/])->f_5, Global_36, 1) < 100f)
	{
		return 1;
	}
	return 0;
}

bool func_454(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_569(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_570(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_455(var uParam0, char* sParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 780511057, 1) == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
	}
	if (!MISC::IS_STRING_NULL(sParam1) && func_197(0, 1, 0, 0))
	{
		func_201(*uParam0, Global_35, sParam1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_456(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_24() != -1)
	{
		return;
	}
	if (func_571(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_572())
	{
		iVar1 = 0;
	}
	func_573(iParam0, iVar1);
}

int func_457(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_574(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_575(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_575(), iVar3);
		if (func_576(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_37(iParam0))
	{
		return;
	}
	if (func_219(iParam0) == 4)
	{
		func_577(iParam0, func_126());
		if (!func_369(iParam0) == 5 && !func_369(iParam0) == 6)
		{
			if (bParam3)
			{
				func_578(iParam0, 6);
			}
			else
			{
				func_578(iParam0, 5);
			}
			func_579(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_580(1);
	}
	iVar0 = func_27(iParam0);
	bVar1 = func_24() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_581(0, 2);
		if (!bVar1 && bParam1)
		{
			func_582();
		}
	}
	else
	{
		func_583(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_584(iParam0);
	}
	else
	{
		Var2 = { func_464(-1876607090) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_239(32768))
		{
			Var4 = { func_464(773573510) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_369(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_111(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[76 /*74*/])->f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						}
					}
					else if ((func_111(iParam0) != 95 && func_111(iParam0) != 82) && !func_113(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1347702)[func_111(iParam0) /*49*/])->f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(((*Global_1835011)[func_111(iParam0) /*74*/])->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_586(func_111(iParam0), iVar6, func_585());
	}
	else if (iVar0 == 8)
	{
		func_588(func_111(iParam0), iVar6, func_585(), func_587());
	}
	if (!func_369(iParam0) == 5 && !func_369(iParam0) == 6)
	{
		iVar9 = func_589(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_590(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_591(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_592((iVar10 - 20), 0, iVar10);
					iVar11 = func_592((iVar11 - 10), 0, iVar11);
				}
				func_593(1);
				func_594(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_594(45, 0, 1);
				break;
			case 8:
				iVar10 = func_595(func_111(iParam0), &iVar11);
				if (!Global_17503.f_9)
				{
					iVar10 = func_592((iVar10 - 20), 0, iVar10);
					iVar11 = func_592((iVar11 - 10), 0, iVar11);
				}
				func_594(iVar10, iVar11, 1);
				Global_17503.f_9 = 0;
				Global_17503.f_10 = 0;
				if (func_596(func_111(iParam0)))
				{
					func_597(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_594(120, 0, 1);
				break;
			case 2:
				func_594(120, 0, 1);
				break;
			case 6:
				func_594(func_599(func_598(iParam0)), 0, 1);
				break;
			case 5:
				func_594(120, 0, 1);
				break;
		}
	}
	func_600(iParam0, 1);
	func_577(iParam0, func_126());
	func_579(iParam0);
	if ((!func_369(iParam0) == 0 && bParam1) && func_24() == -1)
	{
		iVar12 = func_601(iParam0);
		if (iVar12 != -1)
		{
			func_602(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_603();
			if (iVar12 != -1)
			{
				func_602(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_111(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_112(func_111(iParam0)) && func_113(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_111(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_604();
				}
				break;
			case 8:
				if (func_111(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_604();
				}
				break;
		}
	}
	if (!func_369(iParam0) == 5 && !func_369(iParam0) == 6)
	{
		if (bParam3)
		{
			func_578(iParam0, 6);
		}
		else
		{
			func_578(iParam0, 5);
		}
		func_579(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_605();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_606(-1781387050 /* GXTEntry: "Sage" */, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(1433048902 /* GXTEntry: "Ginseng" */, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-597058368 /* GXTEntry: "Indian Tobacco" */, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-529638012 /* GXTEntry: "Yarrow" */, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(500564674 /* GXTEntry: "Gritty Fish Meat" */, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-875449072 /* GXTEntry: "Stringy Meat" */, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(1237770824 /* GXTEntry: "Animal Fat" */, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(236757114 /* GXTEntry: "Flight Feather" */, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-601932535 /* GXTEntry: "Ground Coffee" */, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-1267972061 /* GXTEntry: "Horse Ointment Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(-1267972061 /* GXTEntry: "Horse Ointment Pamphlet" */);
						func_606(1619534881 /* GXTEntry: "Fire Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(1619534881 /* GXTEntry: "Fire Arrow Pamphlet" */);
						func_606(-755457379 /* GXTEntry: "Improved Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(-755457379 /* GXTEntry: "Improved Arrow Pamphlet" */);
						func_606(1015404643 /* GXTEntry: "Small Game Arrow Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(1015404643 /* GXTEntry: "Small Game Arrow Pamphlet" */);
						func_606(-1724192342 /* GXTEntry: "Improved Tomahawk Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(-1724192342 /* GXTEntry: "Improved Tomahawk Pamphlet" */);
						func_606(1310680212 /* GXTEntry: "Improved Throwing Knife Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(1310680212 /* GXTEntry: "Improved Throwing Knife Pamphlet" */);
						func_606(-566881549 /* GXTEntry: "Split Point Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(-566881549 /* GXTEntry: "Split Point Pamphlet" */);
						func_606(-1753730528 /* GXTEntry: "Fire Bottle Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(-1753730528 /* GXTEntry: "Fire Bottle Pamphlet" */);
						func_606(147796381 /* GXTEntry: "Express Explosive Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(147796381 /* GXTEntry: "Express Explosive Pamphlet" */);
						func_606(-378547623 /* GXTEntry: "Potent Herbivore Bait Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(-378547623 /* GXTEntry: "Potent Herbivore Bait Pamphlet" */);
						func_606(829545206 /* GXTEntry: "Potent Predator Bait Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(829545206 /* GXTEntry: "Potent Predator Bait Pamphlet" */);
						func_606(891318243 /* GXTEntry: "Cover Scent Pamphlet" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_607(891318243 /* GXTEntry: "Cover Scent Pamphlet" */);
						func_606(joaat("weapon_kit_camera"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-1838434463 /* GXTEntry: "Camp" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-248960099 /* GXTEntry: "Bandolier" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_608();
						func_609(967523420);
						func_610();
						func_611();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_612(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131);
						break;
					case 15:
						func_606(1030791766 /* GXTEntry: "Legendary Animal Map" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1231074654))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1231074654, true);
							func_613(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1880205078))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1880205078, true);
							func_613(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_614(304805134, 1, 1);
						if (!func_105(((*Global_1347702)[21 /*49*/])->f_15, 1))
						{
							func_458(((*Global_1347702)[21 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[21 /*49*/])->f_3)), iVar14);
						}
						break;
					case 20:
						func_615();
						break;
					case 26:
						func_616();
						break;
					case 17:
						func_617(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_33())
						{
							func_618(joaat("weapon_repeater_evans"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_619(-514575035, -1))
						{
							iVar15 = func_126();
							func_40(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_620(-514575035, iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_33())
						{
							func_618(joaat("weapon_revolver_lemat"));
						}
						break;
					case 34:
						if (func_33())
						{
							func_618(joaat("weapon_revolver_doubleaction_gambler"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_621();
						break;
					case 37:
						func_622();
						if (func_32())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(2116153146, iVar14);
						}
						break;
					case 38:
						func_623();
						break;
					case 43:
						func_624();
						break;
					case 44:
						if (!func_105(((*Global_1347702)[82 /*49*/])->f_15, 1))
						{
							func_458(((*Global_1347702)[82 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[82 /*49*/])->f_3)), iVar14);
						}
						if (!func_105(((*Global_1347702)[83 /*49*/])->f_15, 1))
						{
							func_458(((*Global_1347702)[83 /*49*/])->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[83 /*49*/])->f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_625();
						break;
					case 59:
						func_626();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_627();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_628();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(1673898385))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(1673898385, true);
							func_613(451, 0);
						}
						if (!func_629(-1992824800))
						{
							if (func_629(1520110311))
							{
								iVar16 = func_126();
								func_40(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_620(1937177603, iVar16, 1);
							}
						}
						if (func_630(4))
						{
							if (!func_631(684296857 /* GXTEntry: "Invitation from Jeremy Gill" */, 1, 0))
							{
								iVar17 = func_126();
								func_40(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_620(-1439688706, iVar17, 1);
							}
						}
						func_606(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_606(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_632(89200);
						func_632(2300);
						func_632(2300);
						break;
					case 68:
						func_633();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[108 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[69 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[70 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[7 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[22 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[23 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1347702)[65 /*49*/])->f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[7 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[8 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[36 /*74*/])->f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(((*Global_1835011)[48 /*74*/])->f_8)), iVar14);
						func_634();
						func_632(-139100);
						break;
					case 69:
						if (func_105(((*Global_1347702)[9 /*49*/])->f_15, 1))
						{
							func_632(-6000);
						}
						break;
					case 70:
						func_632(23400);
						func_632(1900);
						func_632(-15000);
						break;
					case 71:
						func_632(-5500);
						break;
				}
				break;
			case 8:
				switch (func_111(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -812886857);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -433459459);
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1851064008);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1595707554);
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 780151577);
						break;
					case 58:
						func_635();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 727067922);
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_636();
						break;
					case 66:
						func_637();
						func_638();
						break;
					case 67:
						if (!func_639(6))
						{
							func_640(6);
						}
						if (!func_639(3))
						{
							func_640(3);
						}
						if (func_33())
						{
							func_618(joaat("weapon_pistol_m1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1085773120);
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 753448360);
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 709011912);
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 989551914);
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -480463506);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1841532568);
						break;
					case 9:
						if (func_105(((*Global_1835011)[69 /*74*/])->f_1, 1))
						{
							func_641(0);
							func_632(40500);
						}
						else
						{
							func_641(0);
							func_632(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_111(iParam0))
				{
					case 0:
						switch (func_598(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_642(iParam0);
		func_643();
		switch (iVar0)
		{
			case 1:
				switch (func_111(iParam0))
				{
					case 4:
						func_644(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_644(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_644(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_644(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_644(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_644(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_644(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_645(iParam0);
						func_644(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_644(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_644(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_631(-2046502963 /* GXTEntry: "Reutlinger Pocket Watch" */, 1, 0))
						{
							func_606(-2046502963 /* GXTEntry: "Reutlinger Pocket Watch" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_644(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_644(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_644(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_645(iParam0) == 0)
						{
							func_644(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_644(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_113(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 536870912))
				{
					func_646(11, 1);
				}
				switch (func_111(iParam0))
				{
					case 109:
						func_644(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_646(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_644(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_644(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_644(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_644(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_647(0, 10, 11, 2116153146))
				{
					func_644(iParam0, func_645(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_647(0, 7, 11, -379687487 /* GXTEntry: "Coach Robbery with Sean" */))
				{
					func_644(iParam0, func_648(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_647(0, 8, 11, -1386089015 /* GXTEntry: "Coach Robbery with Bill" */))
				{
					func_644(iParam0, func_648(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_647(0, 11, 11, -1952009645 /* GXTEntry: "Coach Robbery with Micah" */))
				{
					func_644(iParam0, func_648(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_647(0, 12, 11, 2065895756 /* GXTEntry: "Coach Robbery with Lenny" */))
				{
					func_644(iParam0, func_648(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_369(iParam0) == 0)
			{
				if (func_649(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(func_649(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_650(func_27(iParam0), func_649(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_111(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_652(func_651(Global_1879514->f_1));
						if (iVar0 == 8 && func_111(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_112(func_111(iParam0)) && func_113(((*Global_1347702)[func_111(iParam0) /*49*/])->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_462(bParam2, iVar20);
		}
	}
	func_653(1);
	if ((bVar13 || func_604()) && (func_27(iParam0) == 1 || func_27(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_654(iParam0);
	Global_40.f_11864[iVar0 /*2*/] = iParam1;
}

int func_460(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return BUILTIN::SHIFT_RIGHT(func_655(iParam0) & 2147418112, 16);
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	iVar0 = func_655(iParam0) & 65535;
	iVar1 = BUILTIN::SHIFT_LEFT(iParam1, 16);
	func_656(iParam0, (iVar1 + iVar0));
}

void func_462(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_657(&Global_0, 8);
	}
	if (!func_388() || func_24() != -1)
	{
		return;
	}
	func_657(&Global_0, 1);
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 2;
		case 79:
			return 1;
		case 36:
			return 0;
		case 125:
			return 5;
		case 127:
			return 5;
		case 118:
			return 5;
		case 129:
			return 5;
		case 114:
			return 5;
		case 16:
			if (func_31())
			{
				return 4;
			}
			else
			{
				return 0;
			}
			break;
	}
	return -1;
}

struct<2> func_464(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_465()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

Vector3 func_466(int iParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { 0f, 0f, 0f };
	if (!func_43(iParam0))
	{
		return vVar0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(((*Global_1888801)[iParam0 /*35*/])->f_3))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(((*Global_1888801)[iParam0 /*35*/])->f_3) };
		if (bParam1)
		{
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
			{
				vVar0.f_2 = uVar3;
			}
		}
	}
	return vVar0;
}

void func_467(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST((Global_1393237->f_11[iVar0 /*30*/])->f_3, vParam0) < fParam3)
		{
			func_658(iVar0);
		}
		iVar0++;
	}
}

void func_468(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_659(Global_1393447, 1);
	func_660();
	func_661();
	func_662((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_465() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_663();
		if (iParam1 == -1)
		{
			if (func_562(iParam0, 1))
			{
				func_664(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_562(iParam0, 2))
			{
				func_664(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_562(iParam0, 4))
			{
				func_664(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_665(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_666(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_666((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_469(int iParam0)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		return;
	}
	if (iParam0 != func_26(0))
	{
		return;
	}
	if (func_649(iParam0) == 0)
	{
	}
	iVar0 = func_27(iParam0);
	if (func_369(iParam0) == 3)
	{
		if (func_649(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(func_649(iParam0)))
		{
			if (func_27(iParam0) != 1 && func_27(iParam0) != 8)
			{
				func_650(func_27(iParam0), func_649(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_579(iParam0);
	func_580(1);
	func_583(0);
	func_578(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_593(1);
			func_594(15, 0, 1);
			break;
		case 4:
			func_594(10, 0, 1);
			break;
		case 8:
			func_594(10, 0, 1);
			break;
		case 9:
			func_594(10, 0, 1);
			break;
		case 2:
			func_594(10, 0, 1);
			break;
		case 6:
			func_594(10, 0, 1);
			break;
		case 5:
			func_594(10, 0, 1);
			break;
	}
	func_653(1);
}

var func_470(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_471(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_667(sParam1));
}

void func_472(int iParam0, bool bParam1)
{
	switch (iParam0->f_205)
	{
		case 9:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SB_HIDEOUT_END");
			}
			break;
		case 36:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_SPC_ABANDON");
			}
			break;
		case 79:
			if (bParam1)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_FAIL");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("HIDEOUT_BH_ABANDON");
			}
			break;
		case 125:
		case 127:
			AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
			break;
	}
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_36(iParam0);
	if (!func_37(iVar0))
	{
		return;
	}
	iVar1 = func_463(iParam0);
	if (iVar1 != -1)
	{
		((*Global_1392050)[iVar1 /*14*/])->f_1 |= 16;
	}
	func_668(iVar0, 0, 2);
	func_459(iParam0, iParam1);
}

void func_474(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_0xA7E51B53309EAC97(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_475(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_669(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_670(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_671(iVar0);
	*uParam0 = 0;
}

void func_476(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_477(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_672(2000);
	Global_16 = 0;
	func_673();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_674(*uParam0, 8));
	if (!func_674(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_674(*uParam0, 2) || func_674(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_674(*uParam0, 16))
	{
		func_675(1);
	}
	if (func_674(*uParam0, 32))
	{
		func_676(Global_35, -383172193 /* GXTEntry: "No Neckwear" */, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_677(-1623728698 /* GXTEntry: "Bandana" */, 0);
	}
	func_678(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_478(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_479(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_679(iVar0) == iParam0 && func_680(iVar0) == iParam1)
		{
			func_681(iVar0, -1);
			func_682(iVar0, 0);
			func_683(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
				}
				MAP::REMOVE_BLIP(Global_36307[iVar0]);
			}
			return;
		}
		iVar0++;
	}
}

void func_480(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_578(iParam0, 0);
}

void func_481(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 36:
			iVar0 = 55818986; /* GXTEntry: "O\'Driscoll Boys" */
			iVar1 = -1595327694;
			break;
		case 16:
			if (!func_31())
			{
				iVar0 = 55818986; /* GXTEntry: "O\'Driscoll Boys" */
				iVar1 = -1065712501;
			}
			else
			{
				iVar0 = -2100600611; /* GXTEntry: "The Laramie Gang" */
				iVar1 = 151695316;
			}
			break;
		case 9:
			iVar0 = 1143368244; /* GXTEntry: "Lemoyne Raiders" */
			iVar1 = -162596529;
			break;
		case 79:
			iVar0 = -1797026825; /* GXTEntry: "The Murfree Brood" */
			iVar1 = -339251000;
			break;
		case 125:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = -437070331;
			break;
		case 127:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1047393655;
			break;
		case 118:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1048432636;
			break;
		case 114:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 2103232336;
			break;
		case 129:
			iVar0 = 1033509606; /* GXTEntry: "Del Lobo Gang" */
			iVar1 = 1351740867;
			break;
	}
	COMPENDIUM::COMPENDIUM_GANG_HIDEOUT_FOUND(iVar0, iVar1);
}

void func_482(int iParam0, bool bParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_684(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_649(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_649(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_27(iParam0), func_111(iParam0), func_598(iParam0), func_649(iParam0), Global_36);
		}
	}
	func_578(iParam0, 1);
	bParam1 = bParam1;
}

int func_483(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_685(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_484(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_37(iParam0))
	{
		return;
	}
	if (!func_686(iParam0))
	{
		return;
	}
	iVar0 = func_27(iParam0);
	if (bParam1)
	{
		if (func_649(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(func_649(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != ((*Global_1835011)[77 /*74*/])->f_1)
			{
				func_687(func_111(iParam0));
			}
			if (func_24() != 0)
			{
				STATS::_0xB2A38826E5886E83(func_649(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(func_649(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_688(iParam0);
	if (!func_37(func_26(0)))
	{
		func_578(iParam0, 3);
		func_580(bParam2);
		if (func_24() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			func_583(1);
		}
		func_689(iParam0, -1);
		if (bParam1 && !func_239(2))
		{
			func_657(&Global_0, 1024);
		}
		if (func_24() == -1)
		{
			func_690(&(Global_1347343->f_11), 536870912);
			func_691(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_692(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_693(0);
			}
		}
		if (func_24() == -1)
		{
			iVar1 = func_601(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_603();
				switch (iVar1)
				{
					case 0:
						func_694(0);
						break;
					case 1:
						func_694(1);
						break;
					case 2:
						func_694(2);
						break;
					case 3:
						func_694(3);
						break;
					case 4:
						func_694(4);
						break;
					case 5:
						func_694(5);
						break;
					case 6:
						func_694(5);
						break;
					case 7:
						func_694(7);
						break;
					case 8:
						func_694(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_111(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_694(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_111(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_694(11);
						break;
					default:
						iVar1 = func_603();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_695(0);
									break;
								case 1:
									func_695(1);
									break;
								case 2:
									func_695(2);
									break;
								case 3:
									func_695(3);
									break;
								case 4:
									func_695(4);
									break;
								case 5:
									func_695(5);
									break;
								case 6:
									func_695(5);
									break;
								case 7:
									func_695(7);
									break;
								case 8:
									func_695(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_653(1);
	}
	else
	{
		func_689(iParam0, -1);
		func_578(iParam0, 4);
	}
	func_600(iParam0, 0);
}

void func_485(int iParam0)
{
	int iVar0;

	if (func_696(iParam0))
	{
		return;
	}
	iVar0 = func_654(iParam0);
	func_697(iVar0, 16);
}

Vector3 func_486(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_487(var uParam0, bool bParam1, int iParam2)
{
	func_698(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_699(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_164(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_700(1))
						{
							func_164(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_700(1) || *uParam0 & 8192 != 0))
				{
					func_165(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_701(uParam0))
			{
				uParam0->f_15 = func_465();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_465() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_702(uParam0);
}

int func_488(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case joaat("event_shocking_dead_body"):
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_703(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_704(iParam0, iVar2) <= func_705(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_489(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_706(iParam2, 1, 1, 1, 0))
	{
		func_164(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_707(uParam1, 1);
	func_708();
}

int func_490(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_709(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_710(uParam1);
			if (func_711(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_712(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_707(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_707(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_491(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_713(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_710(uParam2);
		if (func_711(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_712(uParam2)
				{
					func_707(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_492(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_703(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_712(uParam1)
		{
			fVar3 = func_710(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_493(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_465();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_494(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_714(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_502(uParam2, iParam1))
			{
				func_707(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_495(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_715(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_502(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_707(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_496(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_716(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_22))
				{
					func_707(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_fire"), vVar0, uParam2->f_27))
				{
					func_707(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_717(iParam1, vVar0, vVar4))
					{
						func_707(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_explosion"), vVar0, uParam2->f_22))
				{
					func_707(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("event_shocking_potential_blast"), vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_717(iParam1, vVar0, vVar7))
					{
						func_707(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_497(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_703(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_718(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_719(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_720(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_721(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_722(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_498(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("event_shocking_property_damage"):
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_499(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_465();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_500(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_723(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_724(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_501(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_502(var uParam0, int iParam1)
{
	if (func_725(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_GET_LASSOED_ENTITY(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_503(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_181(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_504()
{
}

int func_505(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_726(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_465();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_310(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_465();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_506()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_465() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_507(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_705(uParam0);
	if (uParam0->f_12 > func_286(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_727(iParam1);
	iVar1 = func_728(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, true, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_508(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_729(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_509(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_730(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case joaat("event_shocking_seen_car_stolen"):
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_731(uParam1, iParam0))
					{
						if (func_310(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_510(int iParam0, var uParam1)
{
	if (!func_732(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_511(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_465();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_512(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_513(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_465();
	}
	else if (func_465() - uParam1->f_4) > func_733(uParam1)
	{
		return func_734(iParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

int func_514(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_515(int iParam0)
{
	if (!func_401(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_457(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

int func_516(int iParam0)
{
	if (func_405(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

float func_517(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_566(vVar0, vParam1);
}

int func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

void func_519(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_520(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_735(iParam3, &vVar0, &Var3, &uVar6);
	if (func_736(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_522(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

bool func_523(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_524(int iParam0)
{
	int iVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	iVar0 = func_737(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

bool func_525(int iParam0)
{
	return iParam0 != 0;
}

int func_526(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_128(iParam0, 2))
	{
		return 0;
	}
	if (func_129(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(func_131(iParam0)))
	{
		return 1;
	}
	if (func_128(iParam0, 1) && !bParam1)
	{
		func_738(iParam0, 128);
		return 1;
	}
	func_132(iParam0, 129);
	func_524(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_131(iParam0));
	func_130(iParam0, 0);
	return 1;
}

bool func_527(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_528(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_529(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_530(int iParam0, int iParam1)
{
	if (!func_527(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_531(int iParam0)
{
	func_740(func_739(iParam0));
}

bool func_532(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_533(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_534(int iParam0)
{
	if (!func_405(iParam0))
	{
		return false;
	}
	if (!func_255(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_535(int iParam0, bool bParam1)
{
	if (!func_405(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_0x800DF3FC913355F3(((*Global_1360165)[iParam0 /*1157*/])->f_1))
		{
			func_741(iParam0);
		}
	}
	return ((*Global_1360165)[iParam0 /*1157*/])->f_1;
}

void func_536(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_401(iParam0))
		{
			return;
		}
	}
	func_402(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(((*Global_1360165)[iParam0 /*1157*/])->f_58[iVar0], iVar1);
}

void func_537(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_403(iParam0);
	iVar1 = func_535(iParam0, 0);
	func_407(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

int func_538(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_539(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_742(iParam0, iParam1))
		{
			if (func_743(iParam0, iParam1))
			{
				if (func_744(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_745(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_540(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_SET_PED_COMPONENT_DISABLED(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_541(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_542(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

struct<5> func_543(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_746(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_747(bParam0))
	{
		case joaat("clothing"):
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_547(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("weapon"):
			Var0 = { func_748(bParam1) };
			if (bParam2 && func_749(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_545(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_545(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_546(bParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_750(bParam1) };
			switch (func_751(bParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_752(bParam0, -1823706425))
			{
				Var0 = { func_547(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_752(bParam0, -1483207246))
			{
				Var0 = { func_547(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_753(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_544(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return 1786352060;
		case 217:
			return -833319691;
		case 218:
			return 1591329969;
		case 219:
			return 2123222014;
		case 220:
			return -1578397674;
		case 221:
			return 1473261684;
		case 222:
			return -241855024;
		case 223:
			return 12999093;
		case 224:
			return -6796437;
		case 225:
			return -268116367;
		case 226:
			return -636470867;
		case 227:
			return 1737668280;
		case 228:
			return 892807236;
		case 229:
			return -733247890;
		case 230:
			return 24047176;
		case 231:
			return -1561999014;
		case 232:
			return -2052774042;
		case 233:
			return -997150586;
		case 234:
			return -1189569496;
		case 235:
			return 46488141;
		case 236:
			return 1046566686;
		case 237:
			return 325139909;
		case 238:
			return -1585141069;
		case 239:
			return 802754820;
		case 240:
			return 1415981582;
		case 241:
			return -1886147520;
		case 242:
			return 654877947;
		case 243:
			return -415648720;
		case 244:
			return 1221327846;
		case 245:
			return 923162715;
		case 246:
			return 625423581;
		case 247:
			return 326668608;
		case 248:
			return 669530755;
		case 249:
			return 429759982;
		case 250:
			return -2111934838;
		case 251:
			return 1886178087;
		case 252:
			return 1587783573;
		case 253:
			return -279722001;
		case 254:
			return 1310070322;
		case 255:
			return 724026534;
		case 256:
			return 137387616;
		case 257:
			return -653439684;
		case 258:
			return 1376835592;
		case 259:
			return -1824203570;
		case 260:
			return -1654197998;
		case 261:
			return 798987653;
		case 262:
			return 976923323;
		case 263:
			return 1167442289;
		case 264:
			return 986998820;
		case 265:
			return -2119169513;
		case 266:
			return -2015960939;
		case 267:
			return -1287636759;
		case 268:
			return -706917073;
		case 269:
			return -2166805;
		case 270:
			return -1391602433;
		case 271:
			return 1782075221;
		case 272:
			return 1282544585;
		case 273:
			return 1732594027;
		case 274:
			return -1058817012;
		case 275:
			return 1090546265;
		case 276:
			return -1783120823;
		case 277:
			return -1535745896;
		case 278:
			return -2086922122;
		case 279:
			return -1675198649;
		case 280:
			return 1189497682;
		case 281:
			return -1565675519;
		case 282:
			return -268973591;
		case 283:
			return 1039159916;
		case 284:
			return 1111816631;
		case 285:
			return 405591388;
		case 286:
			return 897456793;
		case 287:
			return 104187473;
		case 288:
			return 773808542;
		case 289:
			return -1120669954;
		case 290:
			return -1389278274;
		case 291:
			return 552979403;
		case 292:
			return -1571578784;
		case 293:
			return -708312114;
		case 294:
			return 688823508;
		case 295:
			return -1622147240;
		case 296:
			return 830292162;
		case 297:
			return 226276782;
		case 298:
			return -678416628;
		case 299:
			return -1098528034;
		case 300:
			return 316207340;
		case 301:
			return -1909200748;
		case 302:
			return -939652363;
		case 303:
			return joaat("SLOTID_PROGRESSION");
		case 304:
			return -375447933;
		case 305:
			return 537014919;
		case 306:
			return 1784584921;
		case 307:
			return 1084182731;
		case 308:
			return -1045471300;
		case 309:
			return 1617414719;
		case 310:
			return -787761753;
		case 311:
			return -490616606;
		case 312:
			return 1491346514;
		case 313:
			return -1311702610;
		case 314:
			return -904250715;
		case 315:
			return 1034665895;
		case 316:
			return -101524555;
		case 317:
			return 1419152594;
		case 318:
			return -451359317;
		case 319:
			return -1915385310;
		case 320:
			return 1315162488;
		case 321:
			return -361152079;
		case 322:
			return -2041626192;
		case 323:
			return -2077812539;
		case 324:
			return -1371514637;
		case 325:
			return 1730017037;
		case 326:
			return 892816668;
		case 327:
			return -1994943603;
		case 328:
			return 603133554;
		case 329:
			return -30160144;
		case 330:
			return -1248299493;
		case 331:
			return 727393558;
		case 332:
			return 755611221;
		case 333:
			return -170255458;
		case 334:
			return 1011151573;
		case 335:
			return 1122339631;
		case 336:
			return 454815308;
		case 337:
			return 990701735;
		case 338:
			return -246340825;
		case 339:
			return -1410671073;
		case 340:
			return 1547608292;
		case 341:
			return -714132970;
		case 342:
			return 732290690;
		case 343:
			return 971340545;
		case 344:
			return -234132662;
		case 345:
			return -2143057988;
		case 346:
			return -993947465;
		case 347:
			return -486552269;
		case 348:
			return -1156317860;
		case 349:
			return 1229625803;
		case 350:
			return -388596167;
		case 351:
			return -1204639465;
		case 352:
			return -1384685096;
		case 353:
			return -2026728113;
		case 354:
			return -1228057307;
		case 355:
			return 1835126290;
		case 356:
			return 1890833594;
		case 357:
			return -751549960;
		case 358:
			return -1682270750;
		case 359:
			return -1839865333;
		case 360:
			return -1990383629;
		case 361:
			return 1712094016;
		case 362:
			return 1532953697;
		case 363:
			return 1620318083;
		case 364:
			return -307230331;
		case 365:
			return -1034549620;
		case 366:
			return -1293064293;
		case 367:
			return -1540142553;
		case 368:
			return -1769886012;
		case 369:
			return -1983081126;
		case 370:
			return -1106117124;
		case 371:
			return -1873108338;
		case 372:
			return -2097543219;
		case 373:
			return 155413195;
		case 374:
			return -1162387149;
		case 375:
			return 1728382685 /* GXTEntry: "Right" */;
		case 376:
			return -649335959 /* GXTEntry: "Left" */;
		case 377:
			return -1876502240;
		case 378:
			return -2107032155;
		case 379:
			return 619103418;
		case 380:
			return 1355448197;
		case 381:
			return 1681762005;
		case 382:
			return 1026887814;
		case 383:
			return 354352628;
		case 384:
			return 1519366642;
		case 385:
			return -82757515;
		case 386:
			return 386306655;
		case 387:
			return 1243962119;
		case 388:
			return 756214903;
		case 389:
			return -718417579;
		case 390:
			return -1445516411;
		case 391:
			return -672392892;
		case 392:
			return 1465341584;
		case 393:
			return -427758369;
		case 394:
			return -735647142;
		case 395:
			return 1535838048;
		case 396:
			return -602272282;
		case 397:
			return 2051264661;
		case 398:
			return 487172188;
		case 399:
			return 282270687;
		case 400:
			return 1607708943;
		case 401:
			return 1686264939;
		case 402:
			return 314786149;
		case 403:
			return 1402841185;
		case 404:
			return 1099170772;
		case 405:
			return 2125676786;
		case 406:
			return -363896735;
		case 407:
			return -468790222;
		case 408:
			return -1779133048;
		case 409:
			return 1732537631;
		case 410:
			return 1755095401;
		case 411:
			return 835771095;
		case 412:
			return 1963317232;
		case 413:
			return 259627919;
		case 414:
			return 1299075397;
		case 415:
			return -1509094230;
		case 416:
			return 61132362;
		case 417:
			return 1549741908;
		case 418:
			return 288484254;
		case 419:
			return -1877032947;
		case 420:
			return -1395676456;
		case 421:
			return 1136146715;
		case 422:
			return 468034421;
		case 423:
			return 1079459546;
		case 424:
			return -140369351;
		case 425:
			return 1822341990;
		case 426:
			return 1219701681;
		case 427:
			return 1601295268;
		case 428:
			return -1692460667;
		case 429:
			return 1471419228;
		case 430:
			return 907446160;
		case 431:
			return -1126482585;
		case 432:
			return 1911050315;
		case 433:
			return -1343525599;
		case 434:
			return 1261891225;
		case 435:
			return 763162704;
		case 436:
			return 1335861197;
		case 437:
			return 526744654;
		case 438:
			return -1177461517;
		case 439:
			return -241638635;
		case 440:
			return 1024262875;
		case 441:
			return 853355463;
		case 442:
			return -337288221;
		case 443:
			return 361381308;
		case 444:
			return -1264898804;
		case 445:
			return -585289073;
		case 446:
			return 1423542233;
		case 447:
			return -948489286;
		case 448:
			return 2063859257;
		case 449:
			return -1652627327;
		case 450:
			return -1959697839;
		case 451:
			return -1532267859;
		case 452:
			return -1410062763;
		case 453:
			return -901428716;
		case 454:
			return -1628873469;
		case 455:
			return 144855571;
		case 456:
			return -617589883;
		case 457:
			return -1306457086;
		case 458:
			return 1713542477;
		case 459:
			return -305542365;
		case 460:
			return 1985390213;
		case 461:
			return -2145069367;
		case 462:
			return -1674390752;
		case 463:
			return -2117214398;
		case 464:
			return 1880805647;
		case 465:
			return -62390436;
		case 466:
			return 1815288415;
		case 467:
			return 196214097;
		case 468:
			return -201958220;
		case 469:
			return 1400281261;
		case 470:
			return 1601515402;
		case 471:
			return -940704970;
		case 472:
			return -548371721;
		case 473:
			return -1022384613;
		case 474:
			return -357406394;
		case 475:
			return 1077068189;
		case 476:
			return -782241404;
		case 477:
			return 1669853467;
		case 478:
			return 1592019450;
		case 479:
			return 635273153;
		case 480:
			return -1559225678;
		case 481:
			return -266425508;
		case 482:
			return 1117400455;
		case 483:
			return 454332195;
		case 484:
			return -1328061889;
		case 485:
			return 561650932;
		case 486:
			return 256105670;
		case 487:
			return 1976779618;
		case 488:
			return -269095126;
		case 489:
			return 2145617267;
		case 490:
			return 1150213537;
		case 491:
			return 1598825281;
		case 492:
			return -712527121;
		case 493:
			return 1308553072;
		case 494:
			return 852866398;
		case 495:
			return -1794417972;
		case 496:
			return 293062146;
		case 497:
			return 95360094;
		case 498:
			return 807631773;
		case 499:
			return 1603958275;
		case 500:
			return 860052020;
		case 501:
			return -1885979781;
		case 502:
			return 746147970;
		case 503:
			return 666663006;
		case 504:
			return -2096186453;
		case 505:
			return 859409444;
		case 506:
			return -671427187;
		case 507:
			return 100192478;
		case 508:
			return 307812616;
		case 509:
			return 1670843243;
		case 510:
			return 899615863;
		case 511:
			return -298901850;
		case 512:
			return 1379186917;
		case 513:
			return -817206030;
		case 514:
			return -1150323212;
		case 515:
			return -247466821;
		case 516:
			return 427124242;
		case 517:
			return 855418120;
		case 518:
			return -777015093;
		case 519:
			return -722462870;
		case 520:
			return -937454324;
		case 521:
			return -339438116;
		case 522:
			return 2135639035;
		case 523:
			return 1254273765;
		case 524:
			return -792172668;
		case 525:
			return 1905987493;
		case 526:
			return 495693044;
		case 527:
			return -1693422950;
		case 528:
			return -205873076;
		case 529:
			return -2143114654;
		case 530:
			return -1420574021;
		case 531:
			return -1959250381;
		case 532:
			return -1088328663;
		case 533:
			return 513602003;
		case 534:
			return 359221401;
		case 535:
			return 1005272;
		case 536:
			return 1583044470;
		case 537:
			return 348853959;
		case 538:
			return 1045621973;
		case 539:
			return 1084576580;
		case 540:
			return 1651573695;
		case 541:
			return 1463321587;
		case 542:
			return -997505963;
		case 543:
			return -1649851713;
		case 544:
			return -386012962;
		case 545:
			return 1386101789;
		case 546:
			return 1227915917;
		case 547:
			return -218846335;
		case 548:
			return -352578118;
		case 549:
			return 1426626782;
		case 550:
			return -714081520;
		case 551:
			return 74547781;
		case 552:
			return 1271463052;
		case 553:
			return 1983140194;
		case 554:
			return 677262775;
		case 555:
			return -832337898;
		case 556:
			return -319249747;
		case 557:
			return -16955722;
		case 558:
			return -1360128126;
		case 559:
			return -1535425646;
		case 560:
			return -1063641743;
		case 561:
			return -1041133401;
		case 562:
			return 1380479304;
		case 563:
			return 600890828;
		case 564:
			return 733333190;
		case 565:
			return 1843035435;
		case 566:
			return -304127320;
		case 567:
			return 122470371;
		case 568:
			return 0;
		case 569:
			return -1591664384;
		case 570:
			return -673000374;
		case 571:
			return -1150938404;
		case 572:
			return -1756997214;
		case 573:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_545(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_754(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_546(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_755(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_547(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_756(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_757(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_548(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_758(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_753(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_549(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_757(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_549(bool bParam0)
{
	if (func_24() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_757(bParam0));
}

int func_550(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_759(bParam0))
	{
		return 0;
	}
	if (!func_549(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, iParam1, iParam2);
	return 1;
}

void func_551(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_418(WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

int func_552(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_760(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_761(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, true, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_762())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_553(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_419(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

void func_554(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_555(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_556(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_557(bool bParam0)
{
	bParam0->f_1 = 0f;
	bParam0->f_2 = 0f;
	*bParam0 = 0;
}

var func_558(int iParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, uParam1);
}

int func_559(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_560(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_559(iParam0, 1041577989))
	{
		return 0;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_561(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_763(vVar0, vVar3, vParam1);
}

bool func_562(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_563(var uParam0, int iParam1)
{
	func_764(uParam0, iParam1);
}

int func_564(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_559(iParam0, 1041577989))
	{
		return 1;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_19(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return 1;
		}
		return 0;
	}
	if (func_19(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (func_19(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_565(int iParam0, int iParam1)
{
	func_765(iParam0, iParam1);
}

float func_566(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_567(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_766(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_767(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_768(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = func_348();
		}
		else if ((func_348() - *iParam5) > fParam7)
		{
			*iParam5 = 0f;
			return 1;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return 0;
}

int func_568(int iParam0, int iParam1)
{
	int iVar0;

	func_273(iParam0, 0, 0);
	if (func_136(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

bool func_569(int iParam0, int iParam1, float fParam2)
{
	return func_769(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_570(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_571(var uParam0)
{
	if (-1829635046 == func_770(81053684))
	{
		if (func_771(uParam0))
		{
			return 1;
		}
	}
	else if (func_772(-525676072, uParam0))
	{
		if (func_771(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_572()
{
	return (ANIMSCENE::_0x25557E324489393C(Global_43799) && ANIMSCENE::_0xCBFC7725DE6CE2E0(Global_43799, 0));
}

void func_573(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_773();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(&Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_592(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_592(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_774())
		{
			func_775(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_776())
		{
			func_775(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_777())
		{
			func_775(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_778())
	{
		func_775(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_243(func_464(661720433), iVar1);
	iVar10 = func_773();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

int func_574(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_765(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_575()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_576(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_24() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_577(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_6 = iParam1;
}

void func_578(int iParam0, int iParam1)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_779(iParam0, iParam1);
}

int func_579(int iParam0)
{
	return func_781(func_780(iParam0));
}

void func_580(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_478(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_241(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

int func_581(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_263(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(752193127) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(752193127, iVar0);
	func_583(bParam0);
	return 1;
}

void func_582()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_405(iVar17))
		{
			iVar18 = func_403(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_557(&(Global_1359489->f_55));
	if (func_782(1777191912, 1))
	{
		func_783(1777191912, 1, 0);
	}
}

int func_583(bool bParam0)
{
	if (!bParam0 && func_263(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_584(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_656(iParam0, (func_655(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_585()
{
	return func_784() > 0;
}

void func_586(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 67:
			func_785(-1032423150, iParam1);
			break;
		case 18:
			func_785(294066959, iParam1);
			func_785(-1925639563, iParam1);
			func_785(-378582304, iParam1);
			func_785(-338306437, iParam1);
			break;
		case 20:
			func_785(437270255, iParam1);
			break;
		case 2:
			func_785(-304000413, iParam1);
			func_785(-533612796, iParam1);
			func_785(48036954, iParam1);
			break;
		case 23:
			func_785(193108691, iParam1);
			func_785(491732588, iParam1);
			func_785(671962088, iParam1);
			func_786(1);
			break;
		case 16:
			func_785(-1836056650, iParam1);
			func_785(-754657922, iParam1);
			func_785(-1752355838, iParam1);
			func_785(-1375324510, iParam1);
			break;
		case 59:
			func_785(-514392105, iParam1);
			func_785(-822060246, iParam1);
			if (func_787(146))
			{
				func_785(1372748575, iParam1);
			}
			func_786(1);
			break;
		case 76:
			func_785(1991352213, iParam1);
			if (func_788() == 0)
			{
				func_785(1852488616, iParam1);
			}
			else
			{
				func_785(-9866350, iParam1);
			}
			break;
		case 44:
			func_785(863852599, iParam1);
			func_785(1228374935, iParam1);
			func_785(1517889050, iParam1);
			func_785(830657578, iParam1);
			func_785(1901354958, iParam1);
			break;
		case 46:
			func_785(-582805654, iParam1);
			func_785(250378940, iParam1);
			func_785(-2143265426, iParam1);
			break;
		case 17:
			func_785(-941494139, iParam1);
			func_785(1641489521, iParam1);
			break;
		case 19:
			func_785(-1829423531 /* GXTEntry: @"We went horse thieving, our greed getting the better of us.~n~Believed a yarn spun us by one of that Gray family, the patriarch, Tavish, a particularly unpleasant one of what seems a reasonably unpleasant family.~n~~n~He had us believing that the Braithwaite woman owned some highly prized English thoroughbreds or Arab chargers or whatever they was supposed to be, and imagined we" */, iParam1);
			func_785(-1590504752 /* GXTEntry: "was going to be wonderfully rich. At the end of it, we felt like prize idiots, so" +
    " I guess at least some prizes was being handed out." */, iParam1);
			func_785(1357221321, iParam1);
			break;
		case 21:
			func_785(-1037992610, iParam1);
			func_785(-1286414399, iParam1);
			func_786(0);
			break;
		case 15:
			func_785(-1014460309, iParam1);
			func_785(-1030502825, iParam1);
			break;
		case 33:
			func_785(479388090, iParam1);
			func_785(-1396342239, iParam1);
			func_785(-619618632, iParam1);
			break;
		case 34:
			func_785(1193561641, iParam1);
			break;
		case 64:
			func_785(1363960851, iParam1);
			break;
		case 60:
			func_785(-1232453926, iParam1);
			func_785(-882833584, iParam1);
			break;
		case 73:
			func_785(2023205767, iParam1);
			break;
		case 74:
			func_785(-2135286513, iParam1);
			if (func_788() == 0)
			{
				func_785(33799444, iParam1);
			}
			else
			{
				func_785(-161343203, iParam1);
			}
			break;
		case 8:
			func_785(841639693, iParam1);
			func_785(358952323, iParam1);
			break;
		case 36:
			func_785(852538149, iParam1);
			func_785(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_785(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_785(1116039310, iParam1);
			}
			break;
		case 27:
			func_785(107633428 /* GXTEntry: @"So we headed into Saint Denis to find little Jack. We was told he'd been kidnapped by some local gangster, this Italian feller called Bronte, a local tough guy.~n~~n~We ain't found him, but he's found us. Dutch and I headed into town and I managed to get myself robbed by a bunch of children. This was a new low, even by my standards. Anyway, we found Mr Bronte and" */, iParam1);
			func_785(335902282 /* GXTEntry: @"are going to pay him a call.~n~~n~We better get the boy back soon, not least because if we don't Abigail will kill the lot of us. All this after we burned down the Braithwaite Manor house looking for him and made some real enemies of ourselves back in that country.~n~~n~We're now hiding deep in the swamps, trying not to get" */, iParam1);
			func_785(575673055 /* GXTEntry: @"eaten by wildlife or sunk too deep in the mud. I cannot decide which I like less - the swamps or the city. Both are full of parasites, reptiles and slime, but the swamp's prettier.~n~~n~Dutch is trying to think of where we can run next, but in the meantime, we are deep in the swamps. Hiding in some disease ridden old plantation house, mostly swallowed up by nature." */, iParam1);
			func_785(-425944207 /* GXTEntry: "Guess we will find Jack, get some money, then flee, but where?~n~These bastards a" +
    "in\'t giving up. We\'re a long way east of land we know and far from real open cou" +
    "ntry." */, iParam1);
			break;
		case 28:
			func_785(-1941530250, iParam1);
			func_785(1399269304, iParam1);
			func_785(1839684664, iParam1);
			func_785(923168503, iParam1);
			func_785(-1485078322, iParam1);
			break;
		case 29:
			func_785(574995900, iParam1);
			func_785(-1691275407, iParam1);
			func_785(-1725307861, iParam1);
			break;
		case 31:
			func_785(-2108383238, iParam1);
			func_785(-1321828931, iParam1);
			func_785(-1632118592, iParam1);
			func_785(334938948, iParam1);
			break;
		case 4:
			func_785(115823701, iParam1);
			func_785(-1896939736, iParam1);
			func_785(-1830746356, iParam1);
			func_785(-1235169781, iParam1);
			func_786(0);
			break;
		case 6:
			func_785(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_785(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_785(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_785(-384176140, iParam1);
			}
			break;
		case 25:
			func_785(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_785(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_785(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_785(-1374849484, iParam1);
			}
			break;
		case 48:
			func_785(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_785(217772674, iParam1);
			}
			else
			{
				func_785(2071798160, iParam1);
			}
			if (func_789(51))
			{
				func_785(-792802286, iParam1);
			}
			break;
		case 49:
			func_785(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_785(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_785(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_785(1402120602, iParam1);
			}
			break;
		case 58:
			func_785(-1661934591, iParam1);
			break;
		case 50:
			func_785(-1713759426, iParam1);
			break;
		case 52:
			func_785(-314799932, iParam1);
			func_785(-462260432, iParam1);
			func_785(822929377, iParam1);
			if (iParam2 == 1)
			{
				func_785(345256028, iParam1);
				func_785(-1635084094, iParam1);
			}
			else
			{
				func_785(114267347, iParam1);
			}
			break;
		case 32:
			func_785(615304157, iParam1);
			break;
		case 47:
			func_785(415434835, iParam1);
			break;
		case 69:
			func_785(1373465877, iParam1);
			if (func_105(((*Global_1347702)[9 /*49*/])->f_15, 1))
			{
				func_785(-2058273527, iParam1);
			}
			break;
		case 70:
			func_785(451334985, iParam1);
			if (func_788() == 0)
			{
				func_785(-224150200, iParam1);
			}
			else
			{
				func_785(289012628, iParam1);
			}
			break;
		case 71:
			if (func_788() == 0)
			{
				func_785(-41692120, iParam1);
			}
			else
			{
				func_785(1537840678, iParam1);
			}
			break;
		case 37:
			func_785(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_785(1842132550, iParam1);
			}
			else
			{
				func_785(-785735240, iParam1);
			}
			func_785(-1605690566, iParam1);
			break;
		case 13:
			func_785(-731367459, iParam1);
			func_785(224176585, iParam1);
			func_785(-14545580, iParam1);
			break;
		case 53:
			func_785(1095274522, iParam1);
			break;
		case 54:
			func_785(-572027988, iParam1);
			break;
		case 56:
			func_785(1339307101, iParam1);
			func_785(2102267732, iParam1);
			break;
		case 57:
			func_785(710102686, iParam1);
			break;
		case 22:
			func_785(-1754368482 /* GXTEntry: @"Charles and I went looking for Trelawny, who was staying in Rhodes. He'd been accosted by some bounty hunters who was looking for him and a means to getting to us.~n~Whole thing turned nasty and he'd been treated pretty bad but we got him out of there. He seemed worried that there might be more following in their wake, so came back to camp with us." */, iParam1);
			func_785(-2071408557 /* GXTEntry: @"There always seem to be more, bounty hunters, Pinkertons, lawmen.~n~~n~Everywhere we go, there's more and more civilization. Perhaps this is it from now on. We shall see, I guess.~n~~n~This whole place is beginning to give me the creeps - I want to get back in the open country of the West or what's left of it, but even that ain't the way I remember it." */, iParam1);
			break;
		case 12:
			func_785(-181334543, iParam1);
			break;
		case 0:
			func_785(-2134669864, iParam1);
			func_785(-548289709, iParam1);
			func_785(-911271922, iParam1);
			func_785(-604455775, iParam1);
			break;
		case 1:
			func_786(1);
			break;
		case 3:
			if (func_32())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1478534115))
				{
					func_785(-1286192062, iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-1286192062))
			{
				func_785(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_587()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_588(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_785(-145926707, iParam1);
			func_785(-604922090, iParam1);
			func_785(-848690769, iParam1);
			break;
		case 1:
			func_785(-1477631591, iParam1);
			break;
		case 2:
			func_785(76112544, iParam1);
			break;
		case 9:
			func_785(1396404308 /* GXTEntry: "- Front Gate~n~~n~~n~- Grazing?" */, iParam1);
			func_785(-1357381228, iParam1);
			if (func_105(((*Global_1835011)[69 /*74*/])->f_1, 1))
			{
				func_785(1902679064, iParam1);
			}
			else
			{
				func_785(-2146422425, iParam1);
			}
			break;
		case 22:
			func_785(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_785(-1934184559, iParam1);
				func_785(1281755988, iParam1);
			}
			else
			{
				func_785(-1745220872, iParam1);
				func_785(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_785(-1641504538, iParam1);
				func_785(-988014485, iParam1);
			}
			else if (func_787(26))
			{
				func_785(-343043950, iParam1);
				func_785(-640062214, iParam1);
			}
			else
			{
				func_785(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_785(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_785(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_785(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_785(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_785(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_785(1301690984, iParam1);
				}
			}
			else
			{
				func_785(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_785(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_785(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_785(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_785(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_785(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_785(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_785(-754570528, iParam1);
			}
			else
			{
				func_785(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_785(-2072125821, iParam1);
			}
			else
			{
				func_785(270040030, iParam1);
			}
			break;
		case 37:
			func_785(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_785(-505314737, iParam1);
				func_785(-1853052860, iParam1);
			}
			else
			{
				func_785(-1975624994, iParam1);
				func_785(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_785(1690231002, iParam1);
			}
			else
			{
				func_785(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_785(1225386280, iParam1);
			}
			else if (func_787(54))
			{
				func_785(-283235773, iParam1);
			}
			else
			{
				func_785(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_785(1355398007, iParam1);
			}
			else
			{
				func_785(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_785(574636806, iParam1);
			}
			else
			{
				func_785(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_785(821118338, iParam1);
			}
			else if (func_787(39))
			{
				func_785(846829260, iParam1);
			}
			else
			{
				func_785(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_645(((*Global_1835011)[33 /*74*/])->f_1) == 1)
				{
					func_785(1422779093, iParam1);
				}
				else
				{
					func_785(-1769536986, iParam1);
				}
			}
			else
			{
				func_785(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_785(352134789, iParam1);
			}
			else if (func_787(43))
			{
				func_785(260723113, iParam1);
			}
			else
			{
				func_785(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_785(-457958799, iParam1);
			}
			else
			{
				func_785(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_787(41))
			{
				func_785(-546824600, iParam1);
			}
			else
			{
				func_785(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_785(1297261593 /* GXTEntry: "Met a man - Francis Sinclair - wants me to find some odd rock carvings and send h" +
    "im details. Not sure why. I probably won\'t bother. Francis had bright red hair a" +
    "nd a birthmark and spoke in an odd way." */, iParam1);
			}
			else
			{
				func_785(1940089142 /* GXTEntry: "Met a man - Francis Sinclair - wants me to find some odd rock carvings and send h" +
    "im details. Not sure why. I probably won\'t bother. Francis had bright red hair a" +
    "nd a birthmark and spoke in an odd way." */, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_785(2068484886 /* GXTEntry: @"Something real odd happened to me. Went to see Francis Sinclair. Only he weren't there. But a lady was, nursing a baby called Francis, with the same mark on his face and yet she'd never heard of an adult with that name and was acting real odd. She must have been treating me for a fool which perhaps I was for getting involved in this nonsense. Someone had made the carvings into an odd symbol. I don't know what to make of this at all." */, iParam1);
			}
			else if (func_787(49))
			{
				func_785(-1489080639, iParam1);
				func_785(-2102244050, iParam1);
			}
			else
			{
				func_785(-1863040467 /* GXTEntry: @"Something really strange happened. Went to see Francis Sinclair. Only he weren't there. But a lady was, nursing a baby called Francis, with the same mark on his face and yet she'd never heard of an adult called Francis. She must have been treating me for a fool which perhaps I was for getting involved in this nonsense. Someone had made the carvings into an odd symbol. I don't know what to make of this at all." */, iParam1);
			}
			break;
		case 51:
			func_785(-2055943209, iParam1);
			break;
		case 58:
			if (func_105(((*Global_1347702)[23 /*49*/])->f_15, 1))
			{
				func_785(1650066845, iParam1);
			}
			else
			{
				func_785(151370023, iParam1);
			}
			func_785(1426057961, iParam1);
			func_785(476379584, iParam1);
			break;
		case 59:
			func_785(-1638117866, iParam1);
			break;
		case 62:
			func_785(199541730, iParam1);
			break;
		case 63:
			func_785(1703485804, iParam1);
			func_785(-800449045, iParam1);
			break;
		case 65:
			func_785(-1678210868, iParam1);
			func_785(-1448238026, iParam1);
			func_785(-1200864845, iParam1);
			func_785(1473511536, iParam1);
			break;
		case 66:
			func_785(-1774490051, iParam1);
			func_785(-34645921, iParam1);
			func_785(174027075, iParam1);
			func_785(-1155999, iParam1);
			func_786(1);
			break;
		case 67:
			func_785(701612593, iParam1);
			func_785(-1069631343, iParam1);
			func_785(1673428882, iParam1);
			break;
		case 68:
			func_785(-739133286, iParam1);
			func_785(-2130089358, iParam1);
			func_785(2056190391, iParam1);
			func_785(1941753817, iParam1);
			func_786(0);
			break;
		case 70:
			func_785(-1217555753, iParam1);
			break;
		case 71:
			func_785(697048821 /* GXTEntry: @"Met Evelyn Miller. The Evelyn Miller. The writer I grew up with, Dutch's favorite, even though I never really understood a word of what he said.~n~~n~In the flesh, both humbler and more pathetic than in Dutch's imagination. Bit of a sad man, looking for something or other." */, iParam1);
			break;
		case 73:
			func_785(-553148661 /* GXTEntry: "Saw Mr Miller again. Still living out in a cabin in the middle of the woods, lost" +
    " and trying to write and seemingly losing his mind.~n~~n~Seemed hungry. Should t" +
    "ake him some food.~n~~n~I\'m worried for him." */, iParam1);
			break;
		case 75:
			func_785(1349250531 /* GXTEntry: @"Poor Mr Miller died. I hope his book, which I got the manuscript for, was worth all the sacrifice.~n~~n~I burned the hut he was in as that seemed to be what he wanted -- Strange man.~n~~n~All that learning did not seem to make him happy, nor quite as wise as he thought he was." */, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_785(1414263863, iParam1);
			}
			else
			{
				func_785(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_785(1835465936, iParam1);
				func_785(523715611 /* GXTEntry: "Their husbands weren\'t so keen on the liberties he\'d been taking with his subject" +
    " matter. Whole thing descended into a brawl. Had to help him escape." */, iParam1);
			}
			else if (func_787(78))
			{
				func_785(1420338873, iParam1);
			}
			else
			{
				func_785(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_785(10180941, iParam1);
			}
			else if (func_787(79))
			{
				func_785(768420635, iParam1);
			}
			else
			{
				func_785(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_785(-383601523, iParam1);
			}
			else
			{
				func_785(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_785(1606472408, iParam1);
			}
			else
			{
				func_785(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_785(-203571927, iParam1);
			}
			else
			{
				func_785(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_785(729886222, iParam1);
			}
			else
			{
				func_785(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_785(-714816362, iParam1);
			}
			else
			{
				func_785(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_785(-932932179, iParam1);
				func_785(-1458537240, iParam1);
			}
			else
			{
				func_785(-1764383885, iParam1);
				func_785(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_785(1741466706, iParam1);
			}
			else
			{
				func_785(1405815775, iParam1);
			}
			break;
		case 94:
			func_785(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_785(1905280979, iParam1);
			}
			else
			{
				func_785(-1966245299, iParam1);
			}
			func_785(721468880, iParam1);
			break;
		case 99:
			func_785(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_785(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_785(-1117781095, iParam1);
				}
				else
				{
					func_785(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_785(141494548, iParam1);
			}
			else
			{
				func_785(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_785(-369525697, iParam1);
			}
			else if (func_787(101))
			{
				func_785(1595015219, iParam1);
			}
			else
			{
				func_785(-321486961, iParam1);
			}
			break;
		case 103:
			func_785(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_785(793460477, iParam1);
				func_785(-1610242176, iParam1);
			}
			else if (func_787(103))
			{
				func_785(1830897187, iParam1);
			}
			else
			{
				func_785(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_785(1528309077, iParam1);
			}
			else if (func_787(104))
			{
				func_785(1864966105, iParam1);
			}
			else
			{
				func_785(-103336013, iParam1);
			}
			break;
		case 108:
			func_785(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_785(-1123227713, iParam1);
				func_785(-889574341 /* GXTEntry: @"Somehow got myself involved in the charming business of Saint Denis culture. The mayor, who knew we robbed him a while back, invited me over to his mansion again. Strange man - nice and awful. Cynical and caring. Wants to make his city thrive. Doesn't seem to care how he goes about it." */, iParam1);
			}
			else
			{
				func_785(2065385917, iParam1);
				func_785(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_785(-887421691, iParam1);
			}
			else if (func_787(109))
			{
				func_785(-1318117949 /* GXTEntry: @"Met the mayor of Saint Denis who apparently knew Arthur. Now I'm doing his dirty work.~n~~n~I was threatened into threatening a newspaper man into donating to the noble cause of truth and learning.~n~~n~I had to make this guy support a library. He didn't want to. Then he did." */, iParam1);
			}
			else
			{
				func_785(1632244327 /* GXTEntry: @"Again doing Mayor Lemieux's dirty work. I think that's how you spell it.~n~~n~Now I was threatened into threatening a newspaper man into donating to the noble cause of truth and learning.~n~~n~I had to make this guy support a library. He didn't want to. Then he did." */, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_785(284822762, iParam1);
				}
				else
				{
					func_785(-1425017554, iParam1);
				}
			}
			else if (func_787(110))
			{
				if (&Global_1357515 == 0)
				{
					func_785(553087292 /* GXTEntry: @"Arthur's dear old friend, the corrupt mayor Mr Lemieux, has himself been threatened by his own assistant - Jean Marc, I think. So I go hunting for Jean Marc.~n~~n~Only Jean Marc is a real believer in truth and honesty and cannot stand his boss's lies. I'm charged with killing him.~n~~n~I do as I am bid. I am in too deep now to start worrying about the morality of politicians. I think we can all assume they have none." */, iParam1);
				}
				else
				{
					func_785(-1766870331, iParam1);
					func_785(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_785(-1980598735 /* GXTEntry: @"Nice Mr Lemieux has himself been threatened by his own assistant - Jean Marc, I think. So I go hunting for Jean Marc.~n~~n~Only Jean Marc is a real believer in truth and honesty and cannot stand his boss's lies. I'm charged with killing him.~n~~n~I do as I am bid. I am in too deep now to start worrying about the morality of politicians. I think we can all assume they have none." */, iParam1);
			}
			else
			{
				func_785(-442732098 /* GXTEntry: @"Nice Mr Lemieux has himself been threatened by his own assistant - Jean Marc, I think. So I go hunting for Jean Marc.~n~~n~Only Jean Marc is a real believer in truth and honesty and cannot stand his boss's lies. I'm charged with killing him.~n~~n~I cannot do it. Jean Marc is irritating, but the mayor is worse. The" */, iParam1);
				func_785(1955756409 /* GXTEntry: "mayor is all that is bad in those who would rule over us. And it ain\'t my busines" +
    "s.~n~~n~So I let him live and let them deal with it themselves.~n~~n~I guess I\'m" +
    " through with politics." */, iParam1);
			}
			break;
		case 115:
			func_785(394303528, iParam1);
			func_785(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_785(1182403394, iParam1);
			}
			else
			{
				func_785(-2116547899 /* GXTEntry: @"I managed to get into a fight with a drunk giant with a tiny head. Yes - I did.~n~~n~Big man was killing a barman who had turned off his sherry supply. Part of some kind of circus act.~n~The show was run by a woman - Miss Marjorie was her name. She's missing a tiny magician. I suppose we all are. Supposed to be hiding in the woods.~n~Said if I saw him, I'd ask him to head back to them." */, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_785(924445424, iParam1);
			}
			else
			{
				func_785(1227062271 /* GXTEntry: @"Found the little magician with a big mouth and reunited this odd family.~n~Fella tried to give me the slip a few times but in the end, seems they love each other even more than they hate each other, or at least it was close.~n~Want me to see their show sometime in Saint Denis, and say they'll reward me then as they were broke now." */, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_785(430755273, iParam1);
				func_785(-1473879802, iParam1);
			}
			else
			{
				func_785(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_785(73885747, iParam1);
			}
			else if (func_787(117))
			{
				func_785(1559707913, iParam1);
			}
			else
			{
				func_785(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_785(-2103887972, iParam1);
			}
			else if (func_787(118))
			{
				func_785(-435828462, iParam1);
			}
			else
			{
				func_785(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_785(2054486196, iParam1);
			}
			else
			{
				func_785(1809320262 /* GXTEntry: @"Found a crazy lunatic, or got found by him. Took him to a village nearby name of Butcher's Creek.~n~~n~Something odd is going on there. Some strange village elder - Obediah Hinton was his name, I think - appeared.~n~~n~He spoke mostly nonsense, blamed some kind of curse. I don't believe in curses." */, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_785(-570086056, iParam1);
			}
			else if (func_787(121))
			{
				func_785(32337856 /* GXTEntry: @"Stumbled into a weird little village, name of Butcher's Creek. Odd place. The locals claimed they were being eaten by demons, but they were just sick dogs. Hydrophobia.~n~~n~Seems like Obediah, the village elder, is also possessed. Him by a fake shaman fella that suddenly turned up. He - the shaman - wants me to destroy some cursed charms in the woods around there.~n~~n~Wonder what that shaman is up to." */, iParam1);
			}
			else
			{
				func_785(-206811842 /* GXTEntry: @"Headed back to Butcher's Creek. The locals claimed they were being eaten by demons, but they were just sick dogs. Hydrophobia.~n~~n~Seems like Obediah, the elder, is also possessed. Him by a fake shaman fella that suddenly turned up. He - the shaman - wants me to destroy some cursed charms in the woods around there.~n~~n~Wonder what the shaman is up to." */, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_785(813493663, iParam1);
			}
			else if (func_787(122))
			{
				func_785(-2132763590 /* GXTEntry: @"Went up into the strange village. Odd place, like Arthur mentioned.~n~~n~This creepy fake Shaman appears and announces things are worse precisely because someone destroyed the charms that were either cursing or saving the village. Seemed like he was making stuff up as he went along. I was about to give him a little justice when he runs.~n~~n~The elder said the Shaman was interested in a mine shaft nearby. Maybe that's worth a look." */, iParam1);
			}
			else
			{
				func_785(477901035 /* GXTEntry: @"Destroyed the supposedly cursed charms. Headed back to the village. Then the fake Shaman announces things are worse precisely because I destroyed the charms.~n~~n~I was about to give him a little justice when he runs.~n~~n~The elder said the Shaman was interested in a mine shaft nearby. Maybe that's worth a look." */, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_785(-66240572, iParam1);
				func_785(1563075046, iParam1);
			}
			else
			{
				func_785(-787011772, iParam1);
				func_785(-1523377438, iParam1);
			}
			break;
		case 127:
			func_785(61020800, iParam1);
			break;
		case 129:
			func_785(428985222, iParam1);
			break;
		case 131:
			func_785(-1393851036 /* GXTEntry: "If I want to get paid for this nonsense, I got to find a bounty - name of Wilson " +
    "J. McDaniels - so he can be humanely disposed of, at enormous cost to everybody," +
    " as opposed to shot in the head, like I would do. Still ain\'t been paid for this" +
    "." */, iParam1);
			break;
		case 133:
			func_785(1559531342, iParam1);
			break;
		case 134:
			func_785(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_785(-1374407408, iParam1);
				}
				else
				{
					func_785(471210931, iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(1732474719) && HUD::_JOURNAL_CAN_WRITE_ENTRY(801682048)) && HUD::_JOURNAL_CAN_WRITE_ENTRY(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_785(-472672138 /* GXTEntry: "Went to see the murderer in his shack. Man named Edmund Lowry~n~~n~Took him in to" +
    " the law in Valentine after he tried to kill me. He turned on the sheriff. I kil" +
    "led him.~n~~n~Nasty bastard he was." */, iParam1);
				}
				else
				{
					func_785(-2132098614 /* GXTEntry: @"Went to see the murderer in his shack. Man named Edmund Lowry.~n~~n~Took him in to the law in Valentine after he tried to kill me. He turned on the sheriff, and I thought he was going to kill him in front of my eyes, but the sheriff killed him.~n~~n~Got kind of annoying with me, too. The Sheriff, not the murderer." */, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_785(-1678710489 /* GXTEntry: @"Went to see the murderer Arthur was investigating all them years ago, in his shack. Man named Edmund Lowry.~n~Still happily killing folk, by the looks of it.~n~Took him in to the law in Valentine after he tried to kill me. He turned on the sheriff. I killed him.~n~~n~Nasty bastard he was." */, iParam1);
			}
			else
			{
				func_785(1522210661 /* GXTEntry: @"Went to see the murderer Arthur was investigating all them years ago, in his shack. Man named Edmund Lowry.~n~Still happily killing folk, by the looks of it. Took him in to the law in Valentine after he tried to kill me. He turned on the sheriff, and I thought he was going to kill him in front of my eyes, but the sheriff killed him.~n~~n~Got kind of annoying with me, too. The Sheriff, not the murderer." */, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_785(1717582460, iParam1);
			}
			else
			{
				func_785(343644664 /* GXTEntry: @"Met this sad old drunk on the streets of Rhodes. I felt for him - not sure why. The world is full of self-pitying drunks. We call them men. But something about this poor fool, Jeremiah Compson. Lost his career and his home. Wanted me to go find a few trinkets at his home Compson's Stead~n~~n~Just north of Scarlett Meadows. Maybe I'll head over there some time." */, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_785(1568112362, iParam1);
				func_785(1388317526 /* GXTEntry: "Went to see nice Mr. Compson again.~n~~n~Burned his valuable ledger right in fron" +
    "t of his eyes." */, iParam1);
			}
			else if (func_787(136))
			{
				func_785(-1597534828 /* GXTEntry: "Went to Compson\'s Stead, because Arthur felt bad for the bastard used to live the" +
    "re.~n~Sorry, Arthur. -- Bastard was a slave catcher." */, iParam1);
				func_785(-1207918353 /* GXTEntry: "Went to see that slave catching fella Arthur felt bad for.~n~~n~Burned his valuab" +
    "le ledger right in front of his eyes." */, iParam1);
			}
			else
			{
				func_785(-1940891082 /* GXTEntry: "Went to Compson\'s Stead. Don\'t feel quite so bad for him now. Feel like a fool.~n" +
    "~~n~Bastard was a slave catcher." */, iParam1);
				func_785(-598277294 /* GXTEntry: "Went to see that slave catching bastard Compson again.~n~~n~Burned his valuable l" +
    "edger right in front of his eyes." */, iParam1);
			}
			break;
		case 142:
			if (iParam2 == 1)
			{
				func_785(448334530, iParam1);
				func_785(2145375502, iParam1);
			}
			else
			{
				func_785(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_785(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_785(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_785(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_785(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_785(-66616327, iParam1);
			}
			else
			{
				func_785(1978361607 /* GXTEntry: "Found a one-legged war veteran in the woods, interesting fella.~n~~n~I got him hi" +
    "s horse back and he said to come by his cabin on the other side of O\'Creagh\'s Ru" +
    "n.~n~~n~Maybe, if I got the time." */, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_785(1862916706, iParam1);
			}
			else if (func_787(147))
			{
				func_785(675105199 /* GXTEntry: @"Paid a visit to this one-legged man, Hamish Sinclair, in his cabin. Arthur had helped him and seemed to like him. I can see why - nice man.~n~~n~He's also quite a sportsman and outdoors man. Lives alone. We went fishing for Pike. Got him in the end - the pike, I mean. Hamish wants to take me hunting." */, iParam1);
			}
			else
			{
				func_785(-1993800776 /* GXTEntry: "Paid a visit to the one legged man, Hamish Sinclair, in his cabin. Nice guy.~n~He" +
    "\'s also quite a sportsman and outdoors man. Lives alone.~n~~n~We went fishing fo" +
    "r Pike. Got him in the end. The pike, I mean. Hamish wants to take me hunting." */, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_785(174409701, iParam1);
			}
			else if (func_787(148))
			{
				func_785(-1730895475 /* GXTEntry: @"Went to see Hamish, this fella with one leg Arthur knew. Interesting man - war veteran.~n~~n~We got lost in conversation. Then went hunting this wolf he'd been after - only we suddenly discovered the wolf wasn't alone and the bastards were hunting us, at the same time as we were hunting them.~n~~n~Eventually, I killed the pack leader and they left us be.~n~~n~Pelt nice, though." */, iParam1);
			}
			else
			{
				func_785(-342396910 /* GXTEntry: @"Went to see Hamish, the fella with one leg.~n~~n~We got lost in conversation. Then went hunting this wolf he'd been after - only we suddenly discovered the wolf wasn't alone and the bastards were hunting us, at the same time as we were hunting them.~n~~n~Eventually, I killed the pack leader and they left us be.~n~~n~Pelt nice, though." */, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_785(1295237052, iParam1);
			}
			else if (func_787(149))
			{
				func_785(-788577684 /* GXTEntry: @"Went to see Hamish, this war veteran Arthur knew.~n~~n~The fella took me hunting, even on his one leg, and got himself killed by a boar. I liked the guy, what little I knew of him, and I can see why Arthur liked him so much.~n~~n~He gave me Buell, his moody magnificent horse, to look after." */, iParam1);
			}
			else
			{
				func_785(1527015024 /* GXTEntry: @"Poor Hamish is dead.~n~~n~We were hunting boar and the boar won, at least against him.~n~~n~I liked the guy, but more than that, I admired him. He lacked self-pity and he lacked confusion about his place in the world.~n~~n~He was the man we would all want to be, if we weren't so distracted being idiots.~n~~n~He gave me Buell, his moody magnificent horse, to look after." */, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_589(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_27(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_790(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_645(((*Global_1835011)[9 /*74*/])->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_111(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_111(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_590(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_791(iParam0);
	uVar3 = func_792(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_2 = uParam1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_3 = uVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_126();
				func_40(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_1 = iVar1;
			(Global_40.f_4283.f_6[iVar0 /*5*/])->f_4 = iVar2;
			func_793(iParam0, 1);
			if (func_794(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if ((Global_40.f_4283.f_6[iVar4 /*5*/])->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_795(Global_40.f_4283.f_6[iVar4 /*5*/], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_796(1, iParam0);
				}
				else
				{
					func_797(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_591(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_592(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_593(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_594(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_798(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_595(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return 1;
	}
	return 0;
}

void func_597(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_24() != -1)
	{
		return;
	}
	if ((Global_36615 && func_411(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_799(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_800(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_801(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_800(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_598(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_802(func_114(iParam0));
}

int func_599(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_600(int iParam0, bool bParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (func_26(0) != iParam0)
	{
		return;
	}
	if (func_803(iParam0))
	{
		if (bParam1)
		{
			func_804(-525676072);
		}
		else
		{
			func_805(-525676072);
		}
	}
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_27(iParam0))
	{
		case 1:
			iVar0 = func_111(iParam0);
			return func_806(iVar0);
		case 8:
			iVar1 = func_111(iParam0);
			if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_807(iVar1);
			}
			break;
	}
	return -1;
}

void func_602(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_808(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_809();
		Global_1898077->f_9 = func_810(Global_1894899->f_2);
		func_811(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_603()
{
	if (!func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_105(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_105(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_105(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_105(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_105(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_105(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_604()
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_388())
	{
		return 0;
	}
	if (!func_105(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_105(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_105(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_105(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_105(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_105(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_105(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_105(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_105(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_105(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_105(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_105(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_105(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_105(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_105(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_105(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_105(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_105(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_105(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_105(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_105(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_105(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_105(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_105(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_105(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_605()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(13);
		(*Global_1898441)[iVar0 /*38*/] = 13;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_WIN2_COM", 24);
	}
}

int func_606(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!func_813(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_814(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_815(bParam0, bParam2);
	iVar2 = 0;
	if (func_816(bParam0, 0, 0) == 0)
	{
		if (func_817(bParam0))
		{
			iVar5 = func_818(bParam0);
			iVar6 = func_819(iVar5);
			iVar7 = func_820(iVar6) + 1;
			func_821(iVar5);
			if (func_822(38))
			{
				func_613(483, 0);
			}
			else
			{
				func_613(482, 0);
			}
			if (iVar7 == func_823(iVar6))
			{
				func_606(func_824(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_388() && func_825(4))
				{
					if (func_388() && (func_826(38) || func_822(38)))
					{
						func_828(38, func_824(iVar6), 0, 0, func_827(), 0, -1, 0);
						func_829(2);
					}
					else
					{
						func_828(38, func_824(iVar6), 0, 0, func_827(), 0, -1, 0);
						func_829(1);
					}
				}
			}
			else if (func_388() && func_825(4))
			{
				if (func_388() && (func_826(38) || func_822(38)))
				{
					func_828(38, 0, 0, 0, func_827(), 0, -1, 0);
					func_829(2);
				}
				else
				{
					func_828(38, 0, 0, 0, func_827(), 0, -1, 0);
					func_829(1);
				}
			}
			if (func_388() && func_825(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_388() && (func_826(38) || func_822(38)))
					{
						func_830(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_830(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_747(bParam0) == joaat("clothing"))
	{
		if ((!func_831(bParam0, 866047851) && !func_831(bParam0, -1979000645)) && !func_831(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_832(bParam0, 8388608) && !func_385(28))
	{
		func_833(28);
	}
	if (!bVar3)
	{
		if (func_831(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_751(bParam0) == -1447088266)
			{
				bVar1 = func_835(func_834(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_24() == -1)
					{
						func_836(bVar1);
					}
					if (func_549(0) && func_414(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_550(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_0x5C2EA6C44F515F34(bParam0);
				if (WEAPON::_0x1F7977C9101F807F(bVar1))
				{
					if (func_24() == -1)
					{
						func_836(bParam0);
					}
					if (func_549(0) && func_414(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_550(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_747(bParam0) == joaat("weapon"))
		{
			if (!func_837(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_747(bParam0) == joaat("ammo") && func_759(bParam0))
		{
			if (!func_838(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_831(bParam0, 866047851))
		{
			func_839(bParam0);
		}
		else if (func_831(bParam0, 2000026003))
		{
			func_840(bParam0);
		}
		else if (func_831(bParam0, -103750053))
		{
			func_243(func_841(-1019857971), iVar0);
		}
		else if (bParam0 == 2093098109)
		{
			func_243(func_242(-717883113, 2091222383), iVar0);
		}
		else if (func_831(bParam0, -121341956) && !func_831(bParam0, 606799272))
		{
			if (bParam0 != 191707516 && bParam0 != 1993672959)
			{
				if (func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_613(498, 0);
				}
			}
			if (func_831(bParam0, -2017733358) || func_831(bParam0, -1369131378))
			{
				func_842(bParam0);
			}
		}
		else if (func_831(bParam0, -136654233))
		{
			if (func_831(bParam0, -1021472396))
			{
			}
		}
		else if (func_831(bParam0, -1466706512) && func_831(bParam0, 1147021565))
		{
			func_613(484, 0);
		}
		else if (func_831(bParam0, 1147021565) && func_831(bParam0, -524514947))
		{
		}
		else if (func_831(bParam0, 554195525))
		{
		}
		else if (func_831(bParam0, 589988438))
		{
			if (func_843())
			{
				func_844(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_831(bParam0, 787083290) && func_831(bParam0, 949916894))
		{
			func_845(bParam0);
		}
		else if (func_831(bParam0, -1718133314))
		{
			func_846(bParam0);
		}
		else if (func_831(bParam0, -1738650224))
		{
			func_847(bParam0);
		}
		else if (func_831(bParam0, -1112814642) && func_831(bParam0, 949916894))
		{
			func_848(bParam0);
		}
		else if (bParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_831(bParam0, 1841149704))
		{
			func_849();
		}
		else if (func_831(bParam0, 606799272))
		{
			func_850(bParam0, iParam1);
			func_851(bParam0);
		}
		else if (func_831(bParam0, -1112814642) && func_831(bParam0, -1697809989))
		{
			func_852(bParam0, 0, 0, 0);
		}
		else if (func_831(bParam0, -2017733358) || func_831(bParam0, -1369131378))
		{
			func_842(bParam0);
		}
		else if (func_831(bParam0, -1921346699))
		{
			if (func_24() != -1)
			{
				return 0;
			}
			func_853(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_831(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_631(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_606(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_631(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_606(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_631(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_606(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_631(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_606(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_631(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_606(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_631(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_606(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_831(bParam0, -839724752) && func_832(bParam0, 4))
		{
			if (!func_822(42))
			{
				func_854(bParam0);
			}
		}
		else if (func_831(bParam0, 1399091007))
		{
			func_855(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_831(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case -593948563: /* GXTEntry: "Legend of the East Satchel" */
					bVar8 = -1281487556; /* GXTEntry: "Legend of the East Satchel" */
					break;
				case -1421669656: /* GXTEntry: "Tonics Satchel" */
					bVar8 = -59585102; /* GXTEntry: "Tonics Satchel" */
					break;
				case -830181022: /* GXTEntry: "Ingredients Satchel" */
					bVar8 = 1018123892; /* GXTEntry: "Ingredients Satchel" */
					break;
				case 917695895: /* GXTEntry: "Kit Satchel" */
					bVar8 = -1455768246; /* GXTEntry: "Kit Satchel" */
					break;
				case -1580595448: /* GXTEntry: "Provisions Satchel" */
					bVar8 = -921879912; /* GXTEntry: "Provisions Satchel" */
					break;
				case 1309992709: /* GXTEntry: "Materials Satchel" */
					bVar8 = 982182330; /* GXTEntry: "Materials Satchel" */
					break;
				case 1541618973: /* GXTEntry: "Valuables Satchel" */
					bVar8 = -1406390556; /* GXTEntry: "Valuables Satchel" */
					break;
			}
			if (bVar8 != 0)
			{
				func_606(bVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (bParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312: /* GXTEntry: "Upgraded Off-Hand Holster" */
				func_833(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_676(PLAYER::PLAYER_PED_ID(), -1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_856(&bVar9, 0))
				{
					func_414(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303: /* GXTEntry: "Upgraded Bandolier" */
				if (func_24() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_676(PLAYER::PLAYER_PED_ID(), 1171350303 /* GXTEntry: "Upgraded Bandolier" */, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("weapon_kit_binoculars"):
				break;
			case 2131771850:
				func_613(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_857();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_858();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_859();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_860();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_861();
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584: /* GXTEntry: "Jack Hall Gang Map 1" */
				func_862(499813453, 854119837, 0);
				func_863(499813453, 0);
				func_864(1);
				break;
			case 2127812557:
				func_862(499813453, -1292544588, 0);
				func_863(499813453, 0);
				func_864(2);
				break;
			case 808991383: /* GXTEntry: "Jack Hall Gang Map 3" */
				func_862(499813453, -1003325394, 0);
				func_863(499813453, 0);
				func_864(4);
				break;
			case 1134518629: /* GXTEntry: "High Stakes Treasure Map 1" */
				func_862(666607663, -335460405, 0);
				func_863(666607663, 0);
				func_865(1);
				break;
			case 902940106: /* GXTEntry: "High Stakes Treasure Map 2" */
				func_862(666607663, 903797617, 0);
				func_863(666607663, 0);
				func_865(2);
				break;
			case -418174898: /* GXTEntry: "High Stakes Treasure Map 3" */
				func_862(666607663, 669728650, 0);
				func_863(666607663, 0);
				func_865(4);
				break;
			case -648114971: /* GXTEntry: "The Poisonous Trail Map 1" */
				func_862(-220219788, 1214120047, 0);
				func_863(-220219788, 0);
				func_866(1);
				break;
			case 211153747: /* GXTEntry: "The Poisonous Trail Map 2" */
				func_862(-220219788, 655769340, 0);
				func_863(-220219788, 0);
				func_866(2);
				break;
			case -32876996: /* GXTEntry: "The Poisonous Trail Map 3" */
				func_862(-220219788, 885316185, 0);
				func_863(-220219788, 0);
				func_866(4);
				break;
			case 1191437462: /* GXTEntry: "Le Tresor des Morts Map 1" */
				func_862(218622660, -1491419385, 0);
				func_863(218622660, 0);
				func_867(1);
				break;
			case 1119149048: /* GXTEntry: "Le Tresor des Morts Riddle Note" */
				func_862(218622660, 1809565830, 0);
				func_863(218622660, 0);
				func_867(2);
				break;
			case 506073827: /* GXTEntry: "The Elemental Trail Map 1" */
				func_862(390004462, -628873767, 0);
				func_863(390004462, 0);
				func_868(1);
				break;
			case -1876986168: /* GXTEntry: "The Elemental Trail Map 2" */
				func_862(390004462, -405421956, 0);
				func_863(390004462, 0);
				func_868(2);
				break;
			case 2142623221:
				func_862(390004462, -1108972386, 0);
				func_863(390004462, 0);
				func_868(4);
				break;
			case 1508215381: /* GXTEntry: "Landmarks of Riches Map 1" */
				func_862(6410548, 1053716392, 0);
				func_863(6410548, 0);
				func_869(1);
				break;
			case -888935280: /* GXTEntry: "Landmarks of Riches Map 2" */
				func_862(6410548, 806507056, 0);
				func_863(6410548, 0);
				func_869(2);
				break;
			case -1252474566: /* GXTEntry: "Landmarks of Riches Map 3" */
				func_862(6410548, 1571925350, 0);
				func_863(6410548, 0);
				func_869(4);
				break;
			case -1465702449: /* GXTEntry: "Landmarks of Riches Map 4" */
				func_862(6410548, 1330352282, 0);
				func_863(6410548, 0);
				func_869(8);
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_871(242, func_870(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_871(240, func_870(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_871(241, func_870(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_872(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_872(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_872(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_872(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_872(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_872(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_613(488, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_613(491, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				func_613(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_606(func_873(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_606(func_874(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_385(1))
				{
					func_613(487, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_613(486, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_24() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_613(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		bVar10 = bParam0;
		func_875(&bVar10);
		if (!func_876(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_549(0))
		{
			return 1;
		}
		if (func_747(bParam0) == joaat("clothing"))
		{
			func_877(bParam0);
		}
		if (func_831(bParam0, -1979000645))
		{
			func_878(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_549(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_606(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_879(iVar2, 0);
		}
	}
	Var35 = { func_880(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_881(bParam0);
	if (fParam6 > 0f)
	{
		if (func_831(bParam0, -839724752))
		{
			func_882(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_883(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_607(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	bool bVar15;

	if (func_831(bParam0, 1989861793))
	{
		iVar0 = func_884(bParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_885(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_886(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					bVar15 = func_887(iVar14, iVar1);
					if (bVar15 != bParam0 && func_756(bVar15, 0))
					{
						if (func_888(bVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_889(iVar1);
				if (bVar13)
				{
					func_890(bParam0);
				}
				else
				{
					func_613(306, 0);
				}
			}
		}
	}
}

void func_608()
{
	if (func_24() != -1)
	{
		return;
	}
	func_891();
	func_892();
	func_893();
	func_894();
	func_895();
	func_896();
	func_897();
}

void func_609(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_898(iParam0, 1, 1, -142743235, 1);
	if (func_899(iParam0))
	{
		func_900(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_902(func_901(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_903(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1 /*11*/];
		*(Global_1946804->f_1616.f_1[iVar1 /*3*/]) = { vVar4 };
		(Global_1946804->f_1616.f_1[iVar1 /*3*/])->f_2 = ((Global_1946804->f_1497.f_1[iVar1 /*3*/])->f_2 || (Global_1946804->f_1378.f_1[iVar1 /*3*/])->f_2);
		iVar1++;
	}
	if (func_904() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_905(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_905(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_906(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_906(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_906(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_906(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_906(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_906(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_906(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_906(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_906(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_907(iVar8, iVar0))
				{
					func_908(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_907(iVar8, iVar0))
		{
			func_908(Global_1946804->f_1616.f_1[iVar8 /*3*/], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
			{
				*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8 /*3*/])
		{
			*(Global_1946804->f_1497.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
		if (iParam0 == &Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			*(Global_26795.f_627.f_1.f_1.f_1[iVar8 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar8 /*3*/]) };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar1 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar1 /*3*/]) };
		iVar1++;
	}
}

void func_610()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_907(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_904() == -2125499975 || func_904() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_908(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("base");
				func_908(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5 /*11*/] == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == &Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar5 /*3*/]) = { vVar2 };
	}
}

void func_611()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(14);
		(*Global_1898441)[iVar0 /*38*/] = 14;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_612(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_105(((*Global_1835011)[59 /*74*/])->f_1, 1) || func_105(((*Global_1347702)[1 /*49*/])->f_15, 1)) || func_295(((*Global_1347702)[1 /*49*/])->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_782(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_613(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_373(iParam0, &iVar0, &iVar1);
	if (!func_909(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_910(iVar0, iVar1);
}

void func_614(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_902(iParam0, 1);
	func_911(Global_1946804->f_1497.f_1[iVar0 /*3*/], 2, 6);
	func_911(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
		(Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1 = 0;
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		if (bParam2)
		{
			func_912(17, iParam0, 0, 0, 0);
		}
	}
	if (func_24() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_911((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_26795.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_911((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/], 2, 6);
			if (bParam1)
			{
				(Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
				((Global_36637.f_45.f_350.f_26[iVar1 /*120*/])->f_1.f_1[iVar0 /*3*/])->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_615()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(17);
		(*Global_1898441)[iVar0 /*38*/] = 17;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA2_COM", 24);
	}
}

void func_616()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(18);
		(*Global_1898441)[iVar0 /*38*/] = 18;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BRA3_COM", 24);
	}
}

int func_617(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_543(bParam1, 1, 0) };
		iParam3 = func_913(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_914(iParam3);
	return func_676(iParam0, bParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_618(bool bParam0)
{
	int iVar0;

	if (!func_412(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_VISIBLE(iVar0, true);
}

int func_619(int iParam0, int iParam1)
{
	if (!func_915(iParam0))
	{
		return 0;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_916(iParam0);
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	return func_917(Global_40.f_9910[iParam1 /*6*/], 4);
}

void func_620(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_915(iParam0))
	{
		return;
	}
	if (!func_272(iParam1))
	{
		return;
	}
	if (func_41(iParam1, 1))
	{
		return;
	}
	iVar0 = func_916(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_619(iParam0, -1))
	{
		return;
	}
	else
	{
		func_918(Global_40.f_9910[iVar0 /*6*/], 2);
	}
	(Global_40.f_9910[iVar0 /*6*/])->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_462(0, 17);
		}
	}
}

void func_621()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(19);
		(*Global_1898441)[iVar0 /*38*/] = 19;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MOB5_COM", 24);
	}
}

void func_622()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(20);
		(*Global_1898441)[iVar0 /*38*/] = 20;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_SAI1_COM", 24);
	}
}

void func_623()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(21);
		(*Global_1898441)[iVar0 /*38*/] = 21;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA1_COM", 24);
	}
}

void func_624()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(22);
		(*Global_1898441)[iVar0 /*38*/] = 22;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_GUA3_COM", 24);
	}
}

void func_625()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(24);
		(*Global_1898441)[iVar0 /*38*/] = 24;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ODR5_COM", 24);
	}
}

void func_626()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(25);
		(*Global_1898441)[iVar0 /*38*/] = 25;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN1_COM", 24);
	}
}

void func_627()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(27);
		(*Global_1898441)[iVar0 /*38*/] = 27;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_MAR51_COM", 24);
	}
}

void func_628()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(28);
		(*Global_1898441)[iVar0 /*38*/] = 28;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_629(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_630(int iParam0)
{
	return (Global_40.f_12018.f_4 && iParam0) != 0;
}

bool func_631(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_756(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_747(bParam0);
	if (iVar0 == joaat("weapon"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("ammo"))
	{
		if (!func_919(bParam0, 1))
		{
			return false;
		}
	}
	return func_816(bParam0, 0, bParam2) >= iParam1;
}

void func_632(int iParam0)
{
	if (func_239(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_920(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_920(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_633()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(29);
		(*Global_1898441)[iVar0 /*38*/] = 29;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_BEE22_COM", 24);
	}
}

void func_634()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(26);
		(*Global_1898441)[iVar0 /*38*/] = 26;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_FIN2_COM", 24);
	}
}

void func_635()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(23);
		(*Global_1898441)[iVar0 /*38*/] = 23;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOC_COM", 24);
	}
}

void func_636()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(15);
		(*Global_1898441)[iVar0 /*38*/] = 15;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DOW3_COM", 24);
	}
}

void func_637()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_812(16);
		(*Global_1898441)[iVar0 /*38*/] = 16;
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_18), "AF_CAP1", 24);
		StringCopy(&(((*Global_1898441)[iVar0 /*38*/])->f_21), "AF_DUT1_COM", 24);
	}
}

void func_638()
{
	if (func_921() > 1)
	{
		func_922();
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-707360575))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-707360575, true);
			func_613(444, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-1201174711))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-1201174711, true);
			func_613(447, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(151582343))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(151582343, true);
			func_613(448, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(-642492359))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(-642492359, true);
			func_613(450, 1);
		}
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(5171247))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(5171247, true);
			func_613(452, 1);
		}
	}
}

bool func_639(int iParam0)
{
	return func_400(iParam0, 4, 1);
}

void func_640(int iParam0)
{
	func_923(iParam0, 4, 1);
}

void func_641(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_464(-160912108) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_642(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_239(32768))
	{
		return;
	}
	if (!func_37(iParam0))
	{
		return;
	}
	func_241(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_27(iParam0))
	{
		case 1:
			func_243(func_242(909007663, -587839005), 1);
			iVar0 = func_111(iParam0);
			func_243(func_464(-634848880), 1);
			switch (func_806(iVar0))
			{
				case 0:
					func_243(func_242(909007663, 1325140787), 1);
					break;
				case 1:
					func_243(func_242(909007663, 2101241783), 1);
					break;
				case 2:
					func_243(func_242(909007663, -1296936294), 1);
					break;
				case 3:
					func_243(func_242(909007663, -798388728), 1);
					break;
				case 4:
					func_243(func_242(909007663, -1787586531), 1);
					break;
				case 5:
					func_243(func_242(909007663, -1002834519), 1);
					break;
				case 6:
					func_243(func_242(909007663, -50600144), 1);
					break;
				case 7:
					func_243(func_242(909007663, -348503123), 1);
					break;
				case 8:
					func_243(func_242(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_243(func_242(909007663, -406093146), 1);
			}
			if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1835011)[iVar0 /*74*/])->f_8))))
			{
				func_243(func_242(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_111(iParam0);
			if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				func_243(func_464(-634848880), 1);
			}
			if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 4) || iVar1 == 59)
			{
				if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
				{
					func_243(func_242(909007663, -587839005), 1);
				}
				else
				{
					func_243(func_242(909007663, -2049243343), 1);
				}
			}
			if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				switch (func_807(iVar1))
				{
					case 0:
						func_243(func_242(909007663, 1325140787), 1);
						break;
					case 1:
						func_243(func_242(909007663, 2101241783), 1);
						break;
					case 2:
						func_243(func_242(909007663, -1296936294), 1);
						break;
					case 3:
						func_243(func_242(909007663, -798388728), 1);
						break;
					case 4:
						func_243(func_242(909007663, -1787586531), 1);
						break;
					case 5:
						func_243(func_242(909007663, -1002834519), 1);
						break;
					case 6:
						func_243(func_242(909007663, -50600144), 1);
						break;
					case 7:
						func_243(func_242(909007663, -348503123), 1);
						break;
					case 8:
						func_243(func_242(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::_0xE824CE7D13FCB35E(MISC::GET_HASH_KEY(&(((*Global_1347702)[iVar1 /*49*/])->f_3))))
				{
					func_243(func_242(909007663, 532323983), 1);
				}
			}
			else if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 4))
			{
				if (func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 4194304))
				{
				}
				else if (!func_113(((*Global_1347702)[iVar1 /*49*/])->f_12, 512))
				{
					func_243(func_242(909007663, 551192206), 1);
				}
				else
				{
					func_243(func_242(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_643()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_24() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_2)
	{
		return;
	}
	if (!func_924(64))
	{
		return;
	}
	else if (func_83(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_25(0, 0, 1) || func_925()) || func_604())
	{
		return;
	}
	iVar0 = func_603();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_926(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_376(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_376(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_927(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_462(0, -1);
	}
	if (iVar2 > 0)
	{
		func_928("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_929(1, 0);
	Global_1956575->f_2 = 1;
}

void func_644(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_239(32768))
	{
		return;
	}
	func_930(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_931(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_645(int iParam0)
{
	if (!func_37(iParam0))
	{
		return -1;
	}
	return func_932(iParam0);
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_933(iParam0))
	{
		return 0;
	}
	if (!func_388())
	{
		return 0;
	}
	if (!func_934(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_647(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1835011)[iParam0 /*74*/])->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(((*Global_1347702)[iParam0 /*49*/])->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_935())
	{
		iVar2 = func_935();
	}
	iVar5 = func_936(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_114(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_114(iVar6) == 0)
			{
				return func_937(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_114(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_114(iVar6) == 0)
			{
				return func_937(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0 /*2*/] == 0)
			{
				return func_937(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_648(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_938(1330954593, 0, -1);
		case 1:
			return func_938(1330954593, 0, -1);
		case 2:
			return func_938(1330954593, 0, -1) * 2;
		case 4:
			return func_938(1330954593, 0, -1);
		case 5:
			return func_938(1330954593, 0, -1);
		case 6:
			return func_938(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_938(1330954593, 0, -1) * 3;
		case 9:
			return func_938(1330954593, 0, -1) * 3;
		case 10:
			return func_938(1330954593, 0, -1) * 3;
		case 11:
			return func_938(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_649(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

void func_650(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_24() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

var func_651(int iParam0)
{
	char[] cVar0[8];

	if (!func_37(iParam0))
	{
		return cVar0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			cVar0 = ((*Global_1835011)[func_790(iParam0) /*74*/])->f_8;
			break;
		case 8:
			cVar0 = ((*Global_1347702)[func_111(iParam0) /*49*/])->f_3;
			break;
		case 11:
			if (iParam0 == func_647(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_652(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514->f_11)
	{
		iVar0 = func_939();
		iVar1 = MISC::GET_HASH_KEY(&uParam0);
		if (MISSIONDATA::_0x57E798B54C45EE1A(iVar1) != 5 && iVar0 == 5)
		{
			if (func_27(Global_1879514->f_1) == 1)
			{
				func_646(5, 1);
			}
			else if (func_27(Global_1879514->f_1) == 8 && (func_113(((*Global_1347702)[func_111(Global_1879514->f_1) /*49*/])->f_12, 1) || func_113(((*Global_1347702)[func_111(Global_1879514->f_1) /*49*/])->f_12, 33554432)))
			{
				func_646(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&uParam0), 3);
	}
}

void func_653(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_654(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 0;
		case 16:
			return 1;
		case 36:
			return 2;
		case 79:
			return 3;
		case 125:
			return 4;
		case 127:
			return 5;
		case 118:
			return 6;
		case 129:
			return 7;
		case 114:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_655(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_2;
	}
	return -1;
}

void func_656(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_2 = iParam1;
}

void func_657(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_658(int iParam0)
{
	int iVar0;

	if (iParam0 < 0)
	{
		return;
	}
	if (!func_421((Global_1393237->f_11[iParam0 /*30*/])->f_3))
	{
		func_940((Global_1393237->f_11[iParam0 /*30*/])->f_3, 0);
		PED::_0x9851DE7AEC10B4E1((Global_1393237->f_11[iParam0 /*30*/])->f_3, 20f, 1, 0);
	}
	Global_1393237->f_11[iParam0 /*30*/] = -15;
	(Global_1393237->f_11[iParam0 /*30*/])->f_2 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_3 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_6 = { 0f, 0f, 0f };
	(Global_1393237->f_11[iParam0 /*30*/])->f_9 = 0f;
	if (func_941(iParam0, 8388608))
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 8388608;
	}
	else
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_10 = 0;
		if (Global_1393237->f_11[iParam0 /*30*/])->f_17 != func_942()
		{
		}
		(Global_1393237->f_11[iParam0 /*30*/])->f_17 = func_942();
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_11 = -1;
	(Global_1393237->f_11[iParam0 /*30*/])->f_12 = 0;
	(Global_1393237->f_11[iParam0 /*30*/])->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_14[iVar0] = 0;
		iVar0++;
	}
	func_943(iParam0, 1);
	(Global_1393237->f_11[iParam0 /*30*/])->f_29 = 0;
	if (iParam0 > 2)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[0])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[0]);
		}
		if (MAP::DOES_BLIP_EXIST(&((Global_1393237->f_11[iParam0 /*30*/])->f_18[1])))
		{
			MAP::REMOVE_BLIP((Global_1393237->f_11[iParam0 /*30*/])->f_18[1]);
		}
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	if (VOLUME::_0xF6A8A652A6B186CD((Global_1393237->f_11[iParam0 /*30*/])->f_21))
	{
		func_940((Global_1393237->f_11[iParam0 /*30*/])->f_3, 1);
	}
}

void func_659(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_660()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_944(iVar0, 128))
		{
			func_945(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_661()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_944(iVar0, 128) && func_944(iVar0, 1))
		{
			func_945(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_662(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237->f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237->f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_663()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_248(iVar0, 16777216))
		{
			if (!func_946(iVar0))
			{
				func_947(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_664(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_948(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_949(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_950(iVar0) < func_951(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_952(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_665(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_953(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_953(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_953(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_953(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_953(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_953(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_953(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_666(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_348();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

char* func_667(char* sParam0)
{
	return sParam0;
}

void func_668(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_37(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_295(iParam0) && !func_686(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_649(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_295(iParam0))
	{
		iParam2 = -1;
	}
	if (func_369(iParam0) == 3 || (func_369(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_649(iParam0))))
	{
		func_650(func_27(iParam0), func_649(iParam0), iParam2);
		if ((!func_37(Global_1572864->f_8) && !func_25(0, 1, 0)) && !func_83(&Global_1935630, 32768))
		{
			iVar0 = func_601(iParam0);
			if (iVar0 != -1)
			{
				func_602(0);
			}
			else if (func_27(iParam0) == 8)
			{
				iVar0 = func_603();
				if (iVar0 != -1)
				{
					func_602(0);
				}
			}
		}
	}
	func_578(iParam0, 0);
	if (func_26(0) == iParam0)
	{
		func_580(1);
		func_583(0);
		func_653(1);
	}
	func_600(iParam0, 1);
	func_579(iParam0);
}

bool func_669(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_670(var uParam0)
{
	return uParam0;
}

void func_671(int iParam0)
{
	if (!func_954(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

void func_672(int iParam0)
{
	func_955();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_673()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

bool func_674(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_675(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_956(bParam0);
}

int func_676(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_543(bParam1, 1, 0) };
		iParam3 = func_913(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_957(bParam1, iParam2, func_902(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_958(1, (func_24() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != &Global_1946804->f_57[func_902(iParam3, 1) /*11*/])
			{
				func_912(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_959(32768) && bParam1 != &Global_1946804->f_57[func_902(iParam3, 1) /*11*/])
			{
				func_960();
				func_912(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_912(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_961(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_912(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_962(0);
			func_963(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_912(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_677(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_543(bParam0, 0, 0) };
	Var5 = { func_547(bParam0, Var0, Var0.f_4, 0) };
	if (func_754(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_757(0), &Var5, bParam1);
}

void func_678(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_24() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477->f_190);
			}
			func_964(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_965(iParam1, 29, bVar4, 1, 0);
			func_965(iParam1, 31, bVar4, 1, 0);
			func_965(iParam1, 30, bVar4, 1, 0);
			func_965(iParam1, 22, bVar4, 1, 0);
			func_965(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_959(32768) && func_966(1108822547, 8)) && func_967(10, iParam3))
	{
		func_968(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_969(iVar1, 1);
			if (func_966(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_967(iVar1, iParam3))
				{
				}
				else if ((func_966(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_966(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_965(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_970(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_965(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_966(iVar3, 1))
							{
								func_971(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

int func_679(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_680(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

void func_681(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_682(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_683(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

bool func_684(int iParam0)
{
	return func_219(iParam0) == 0;
}

int func_685(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_686(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_369(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

void func_687(int iParam0)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	struct<8> Var5;
	struct<8> Var13;
	int iVar21;

	if (!func_135(iParam0))
	{
		return;
	}
	uVar0 = ((*Global_1835011)[iParam0 /*74*/])->f_8;
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(1, iVar1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { ((*Global_1835011)[iParam0 /*74*/])->f_18 };
	MemCopy(&Var5, {((*Global_1835011)[iParam0 /*74*/])->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	UILOG::_UILOG_ADD_ENTRY_HASH(1, iVar1, vVar2, ((*Global_1835011)[iParam0 /*74*/])->f_26, MISC::GET_HASH_KEY(&Var13), iVar21);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(1, iVar1, ((*Global_1835011)[iParam0 /*74*/])->f_26, 676312963);
}

void func_688(int iParam0)
{
	if (!func_37(iParam0))
	{
		return;
	}
	func_656(iParam0, func_655(iParam0) + 1);
}

int func_689(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_780(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_972(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_973(iVar0, iParam1);
	return iParam1;
}

void func_690(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_691(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_692(bool bParam0)
{
	func_974(bParam0);
	func_975(bParam0);
	func_976(bParam0);
	func_977(bParam0);
	func_978(bParam0);
	func_979(bParam0);
	func_980(bParam0);
	func_981(bParam0);
}

void func_693(bool bParam0)
{
	if (func_24() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_613(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_613(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_982(1, bParam0, 1);
	func_861();
	Global_40.f_11095.f_43 = bParam0;
}

void func_694(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_983(Global_1898077->f_7, Global_1898077->f_3);
}

void func_695(int iParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_24() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_984(Global_1898077->f_7, Global_1898077->f_4);
}

bool func_696(int iParam0)
{
	int iVar0;

	iVar0 = func_654(iParam0);
	return func_985(iVar0, 16);
}

void func_697(int iParam0, int iParam1)
{
	func_164(&((Global_40.f_11864[iParam0 /*2*/])->f_1), iParam1);
}

void func_698(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_986();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_987(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_GET_LASSOED_ENTITY(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_699(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_700(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_988(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_701(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_24() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_989(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_989(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_728(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_702(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_990(uParam0);
	}
}

int func_703(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_728(iParam2);
	}
	else
	{
		iVar1 = func_727(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_728(iParam0);
	}
	else
	{
		iVar0 = func_727(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_562(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_704(int iParam0, int iParam1)
{
	return func_181(iParam0, iParam1, 1, 1);
}

float func_705(var uParam0)
{
	return uParam0->f_26;
}

int func_706(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

void func_707(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_164(uParam0, 134217728);
	}
	else
	{
		func_165(uParam0, 134217728);
	}
}

void func_708()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

int func_709(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_181(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_556(iVar0, 0)))
		{
			if (func_991(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_710(var uParam0)
{
	return uParam0->f_17;
}

int func_711(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_562(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_712(var uParam0)
{
	return uParam0->f_18;
}

int func_713(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_556(iVar0, 0)))
		{
			if (func_372(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_714(var uParam0)
{
	return uParam0->f_23;
}

int func_715(var uParam0)
{
	return uParam0->f_21;
}

int func_716(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_717(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_769(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_718(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_992(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_719(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_720(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_419(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_721(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_419(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_722(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_419(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_723(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*iParam1))
	{
		return 0;
	}
	return 1;
}

int func_724(int iParam0, int iParam1)
{
	if (PED::_GET_LASSOED_ENTITY(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_993(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_725(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_726(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_310(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_727(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_728(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_729(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_723(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_181(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_181(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_730(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_988(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_731(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_731(uParam1, iVar1))
				{
					if (func_310(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_731(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_732(int iParam0)
{
	if (func_31())
	{
		return 0;
	}
	return func_105(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_733(var uParam0)
{
	return uParam0->f_20;
}

int func_734(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_735(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_736(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_737(int iParam0)
{
	int iVar0;

	iVar0 = func_131(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

void func_738(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return;
	}
	if (!func_47(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_739(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_740(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

void func_741(int iParam0)
{
	int iVar0;

	if (!func_401(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(((*Global_1360165)[iParam0 /*1157*/])->f_1))
	{
		iVar0 = func_994(iParam0);
		if (iVar0 != 0)
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(((*Global_1360165)[iParam0 /*1157*/])->f_1);
		}
		else
		{
			((*Global_1360165)[iParam0 /*1157*/])->f_1 = 0;
		}
	}
}

bool func_742(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_743(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_744(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_742(iParam0, iVar0))
	{
		return 1;
	}
	if (iVar0 != iParam1)
	{
		return 0;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_745(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_746(bool bParam0)
{
	return func_547(joaat("character"), func_995(), -1591664384, bParam0);
}

int func_747(bool bParam0)
{
	vector3 vVar0;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_748(bool bParam0)
{
	int iVar0;

	iVar0 = func_757(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_547(923904168, func_746(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_547(923904168, func_746(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_547(923904168, func_746(bParam0), -740156546, 0);
}

int func_749(bool bParam0, bool bParam1)
{
	if (func_751(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_996(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_750(bool bParam0)
{
	int iVar0;

	iVar0 = func_757(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_547(271701509, func_746(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_547(271701509, func_746(bParam0), 12999093, 0);
}

int func_751(bool bParam0)
{
	struct<2> Var0;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_752(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_751(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_753(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_757(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_754(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_547(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_757(bParam6), &Var0, 0);
	return uVar4;
}

int func_755(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_757(0);
	*uParam1 = { func_547(bParam0, func_748(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_756(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_757(bool bParam0)
{
	if (func_24() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_758(bool bParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_759(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

float func_760(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_286(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_997(uParam0);
	}
	return func_286(uParam0);
}

float func_761(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_762()
{
	int iVar0;
	int iVar1;

	iVar0 = func_121(func_126());
	iVar1 = func_122(func_126());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

bool func_763(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_764(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_765(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

float func_766(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_767(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_998(iParam1) };
	vVar3 = { func_998(iParam2) };
	return func_999(uParam0, vVar0, vVar3, iParam2);
}

int func_768(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_998(iParam1) };
	return func_999(uParam0, vVar0, vParam2, 0);
}

bool func_769(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_770(int iParam0)
{
	int iVar0;

	iVar0 = func_902(func_1000(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_771(var uParam0)
{
	if (func_772(81053684, uParam0))
	{
		return 1;
	}
	if (func_772(-525676072, uParam0))
	{
		return 1;
	}
	return 0;
}

int func_772(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_902(func_1000(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_751(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_773()
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_1001(661720433);
}

bool func_774()
{
	return Global_1347398->f_1 == 0;
}

void func_775(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_776()
{
	return Global_1347398->f_1 == 1000;
}

bool func_777()
{
	return Global_1347398->f_1 == 2000;
}

bool func_778()
{
	return Global_1347398->f_1 == 3000;
}

void func_779(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1002(iParam0);
	}
	else
	{
		func_1003(iParam0, iParam1);
	}
	func_1004();
}

int func_780(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_781(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_973(iParam0, Global_1898164->f_162);
	return 1;
}

int func_782(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1005(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_783(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_795(Global_40.f_4283.f_6[iVar0 /*5*/], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_784()
{
	return Global_40.f_11095.f_35;
}

void func_785(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1006(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_786(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_786(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1006(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1007(1);
	}
}

bool func_787(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_788()
{
	int iVar0;
	int iVar1;

	iVar0 = func_38(((*Global_1347702)[9 /*49*/])->f_15);
	iVar1 = func_38(((*Global_1835011)[69 /*74*/])->f_1);
	if (func_127(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

int func_789(int iParam0)
{
	if (!func_135(iParam0))
	{
		return 0;
	}
	return func_105(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_790(int iParam0)
{
	if (func_27(iParam0) == 1)
	{
		return func_111(iParam0);
	}
	return -1;
}

int func_791(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1008(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1009(iVar6);
	}
	return iVar5;
}

int func_792(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1010(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_793(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1011(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1357549->f_1848[iVar0], iVar1);
	}
}

int func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 0;
		case 7:
			return 0;
		case 9:
			return 1;
		case 10:
			return 0;
		case 11:
			return 1;
		case 8:
			return 1;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_795(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_793(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_796(2, *uParam0);
		}
		else
		{
			func_797(2, *uParam0);
		}
	}
	func_1012(uParam0);
}

void func_796(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483 /*3*/] = iParam0;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1407[Global_1357549->f_1483 /*3*/])->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_797(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406 /*3*/] = iParam0;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_1 = iParam1;
	(Global_1357549->f_1252[Global_1357549->f_1406 /*3*/])->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

void func_798(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1013(iParam0, iParam1, bParam2);
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_800(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_1014();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1015(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_385(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_31())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_592(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1014();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1016(iVar1);
		func_1018(func_1017(), 0, 4000);
		func_1019(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1020(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_243(func_464(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_799(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1021(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_920(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_920(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_243(func_464(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_799(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1021(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_920(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_920(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_464(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_646(10, 1);
	}
}

void func_801(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_802(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_803(int iParam0)
{
	if (!func_37(iParam0))
	{
		return 0;
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (func_111(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_111(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_804(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_757(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_751(bVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, bVar1);
		}
		iVar0++;
	}
	func_1023(func_1022(iParam0), 6);
}

void func_805(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = func_757(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_751(bVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, bVar1, 0);
		}
		iVar0++;
	}
	func_1024(func_1022(iParam0), 6);
}

int func_806(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_808(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_809()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_811(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_812(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_813(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_24() == -1)
	{
		if (func_1025(bParam0) && func_1026(bParam0))
		{
			func_1027(bParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (bParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_814(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1028(bParam0, iParam1);
	Var0 = { func_543(bParam0, 0, 1) };
	iVar5 = func_1029(bParam0, &Var0, 0, 0);
	iVar6 = func_996(bParam0, 0);
	if ((iVar5 > 1 && !func_604()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_831(bParam0, -2051813666))
		{
			func_613(583, 1);
		}
		else
		{
			func_613(582, 0);
		}
	}
	if (func_1030(bParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_815(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_884(bParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = bParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_816(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_747(bParam0);
	if (iVar0 == joaat("ammo") || (bParam1 && iVar0 == joaat("weapon")))
	{
		bVar1 = func_1031(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("weapon"))
	{
		return func_1032(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_757(bParam2), bParam0, 0);
	return iVar2;
}

bool func_817(bool bParam0)
{
	if (func_24() != -1)
	{
		return false;
	}
	return func_818(bParam0) != 0;
}

int func_818(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_1033())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_1034(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_819(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_820(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_1033())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_819(iVar0))
		{
			if (func_631(func_1034(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_821(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_1035(48);
	func_462(0, -1);
}

int func_822(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_105(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

int func_823(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_824(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_825(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	return func_105(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_826(int iParam0)
{
	if (func_24() != -1)
	{
		return 0;
	}
	if (!func_112(iParam0))
	{
		return 0;
	}
	return func_295(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_827()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_631(func_1036(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_828(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_388() && (func_826(38) || func_822(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838; /* GXTEntry: "A New Hobby" */
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_388() && (func_826(39) || func_822(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
				iVar13 = -1223580455; /* GXTEntry: "A Test of Faith" */
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279; /* GXTEntry: "Digging up the Past" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1037(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			if (func_388() && (func_826(41) || func_822(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar13 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			if (func_388() && (func_826(49) || func_822(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276; /* GXTEntry: "Francis Sinclair" */
				iVar13 = -170865073; /* GXTEntry: "Geology for Beginners" */
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712; /* GXTEntry: "Rock Carvings" */
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1037(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar13 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	sVar2 = func_1038(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1039(iParam0, iVar13, iVar14))
	{
	}
	if (func_1040(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1041(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1042(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1043(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1044(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_829(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_830(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_388() && (func_826(38) || func_822(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_388() && (func_826(39) || func_822(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770; /* GXTEntry: "Deborah MacGuiness" */
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963; /* GXTEntry: "Duchesses and Other Animals" */
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610; /* GXTEntry: "Jeremy Gill" */
			iVar6 = -1666208710; /* GXTEntry: "A Fisher of Fish" */
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_388() && (func_826(49) || func_822(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276; /* GXTEntry: "Francis Sinclair" */
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931; /* GXTEntry: "Ms. L Hobbs" */
			iVar6 = -1424865411; /* GXTEntry: "A Better World, A New Friend" */
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_388() && (func_826(38) || func_822(38)))
		{
			iVar6 = 38816757; /* GXTEntry: "Smoking and Other Hobbies" */
		}
		else
		{
			iVar6 = 578982838; /* GXTEntry: "A New Hobby" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_376(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_1046(func_824(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_388() && (func_826(39) || func_822(39)))
		{
			iVar6 = -1223580455; /* GXTEntry: "A Test of Faith" */
		}
		else
		{
			iVar6 = 349797279; /* GXTEntry: "Digging up the Past" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_388() && (func_826(49) || func_822(49)))
		{
			iVar6 = -170865073; /* GXTEntry: "Geology for Beginners" */
		}
		else
		{
			iVar6 = 1974744712; /* GXTEntry: "Rock Carvings" */
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1045(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_831(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_832(bool bParam0, int iParam1)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

void func_833(int iParam0)
{
	if (!func_521(iParam0))
	{
		return;
	}
	func_1047(iParam0);
	func_1048(iParam0);
}

bool func_834(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			bVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			bVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			bVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			bVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			bVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			bVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			bVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			bVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			bVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			bVar0 = joaat("weapon_melee_hatchet_hewing");
			Jump @341; //curOff = 325
			bVar0 = joaat("weapon_melee_hatchet_viking");
			if (func_756(bVar0, 0))
			{
				if (bParam1)
				{
					if (func_1049(bVar0) || func_413(bVar0))
					{
						return bVar0;
					}
				}
				else
				{
					return bVar0;
				}
			}
			return bParam0;
		}

int func_835(bool bParam0, bool bParam1)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_836(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_412(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_837(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_835(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_24() == -1)
		{
			func_836(bVar0);
			if (iParam1 == 1248274121)
			{
				func_1050(bVar0);
			}
		}
		if (!func_1030(bParam0, &uVar1, 1, 0, 0))
		{
			func_1027(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1051(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_414(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_fishingrod") || bVar0 == joaat("weapon_kit_binoculars"))
			{
				func_414(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("weapon_lasso"))
			{
				func_414(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == joaat("weapon_melee_knife_john") && !func_31())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_416(bVar0))
				{
					func_414(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_414(bVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				bVar7 = func_1052(Global_35, 2, 0, 1);
				if ((((func_412(bVar7) && !Global_43890) && bVar7 != bVar0) && !func_631(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				if (func_412(bVar7) && func_631(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0))
				{
					if (!func_414(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_414(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_414(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_613(480, 1);
	}
	return 1;
}

int func_838(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_759(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_412(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_631(611073244 /* GXTEntry: "Crow Beak Trinket" */, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_871(func_1053(bParam0), func_870(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_24() == -1)
		{
			if (func_105(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_613(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_549(0))
	{
		if (func_550(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_876(bParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_839(bool bParam0)
{
	var uVar0;

	if ((bParam0 == -615217896 && !func_32()) || bParam0 != -615217896)
	{
		if (func_1054(Global_35, bParam0, &uVar0))
		{
			func_676(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_861();
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_861();
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_861();
			break;
		case -615217896: /* GXTEntry: "Eagle Talon Talisman" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_859();
			break;
		case -121629511: /* GXTEntry: "Raven Claw Talisman" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_857();
			break;
	}
}

void func_840(bool bParam0)
{
	switch (bParam0)
	{
		case -224110471: /* GXTEntry: "Beaver Tooth Trinket" */
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_857();
			break;
		case 1289585739: /* GXTEntry: "Tatanka Bison Horn Trinket" */
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_858();
			break;
		case 1441506783: /* GXTEntry: "Cougar Fang Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678: /* GXTEntry: "Coyote Fang Trinket" */
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695: /* GXTEntry: "Fox Claw Trinket" */
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_859();
			break;
		case 655868243: /* GXTEntry: "Iguana Scale Trinket" */
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_860();
			break;
		case 1299744282: /* GXTEntry: "Lion\'s Paw Trinket" */
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196: /* GXTEntry: "Moose Antler Trinket" */
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276: /* GXTEntry: "Owl Feather Trinket" */
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_861();
			break;
		case -569248339: /* GXTEntry: "Hawk Talon Trinket" */
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1055();
			break;
		case -1196089647: /* GXTEntry: "Shark Tooth Trinket" */
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431: /* GXTEntry: "Turtle Shell Trinket" */
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1056();
			break;
		case -1056342069: /* GXTEntry: "Cat Eye Trinket" */
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_841(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_842(bool bParam0)
{
	bool bVar0;

	bVar0 = func_831(bParam0, -2017733358);
	if (func_1057() < 3)
	{
		if (bVar0)
		{
			if (func_1059(func_1058(bParam0), bParam0))
			{
				func_871(79, func_870(func_1058(bParam0)), 1);
			}
			else
			{
				func_871(78, func_870(func_1058(bParam0)), 1);
			}
		}
		else
		{
			func_871(80, func_870(func_1060(bParam0)), 1);
		}
	}
}

int func_843()
{
	if (((((func_1061(839908568 /* GXTEntry: "Bounty Poster of Arthur" */, 400) || func_1061(-1134030454 /* GXTEntry: "Bounty Notice" */, 400)) || func_1061(623353496 /* GXTEntry: "Bounty Hunter\'s Orders" */, 400)) || func_1061(-344413337 /* GXTEntry: "Poster of a Violent Criminal" */, 400)) || func_1061(-1664948962 /* GXTEntry: "Bounty Hunter\'s Letter" */, 400)) || func_1061(1795228059 /* GXTEntry: "Bounty Page" */, 400))
	{
		return 1;
	}
	return 0;
}

int func_844(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_938(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1062(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_1063(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_845(bool bParam0)
{
	switch (bParam0)
	{
		case -625427311: /* GXTEntry: "Letter from Ms. Hobbs" */
			func_828(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_830(51, 0, 0, 0, 0, -1, 0);
			func_1064(8192);
			break;
		case 581047644: /* GXTEntry: "Invitation from Ms. Hobbs" */
			func_828(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_830(51, 0, 0, 0, 0, -1, 0);
			func_1064(524288);
			break;
		case -644199619: /* GXTEntry: "Invitation from Deborah MacGuiness" */
			func_828(39, 0, 0, 0, 0, 0, 1, 0);
			func_830(39, 0, 0, 0, 0, -1, 0);
			func_1065(16);
			break;
		case 684296857: /* GXTEntry: "Invitation from Jeremy Gill" */
			func_828(41, 0, 0, 0, 0, 0, 1, 0);
			func_830(41, 0, 0, 0, 0, -1, 0);
			func_1066(8);
			break;
		case 466137807: /* GXTEntry: "Invitation from Francis Sinclair" */
			func_828(49, 0, 0, 0, 0, 0, 1, 0);
			func_830(49, 0, 0, 0, 0, -1, 0);
			func_1067(16);
			break;
		case -1087522507: /* GXTEntry: "Exotic Collector\'s List" */
			func_828(43, 0, 0, -1791518714, func_1068(1), 0, -1, 0);
			func_1069(1);
			break;
		case -405829000: /* GXTEntry: "Exotic Collector\'s List" */
			func_828(43, 0, 0, -2087881550, func_1068(2), 0, -1, 0);
			func_1069(2);
			break;
		case 378660860: /* GXTEntry: "Exotic Collector\'s List" */
			func_828(43, 0, 0, 1908068621, func_1068(4), 0, -1, 0);
			func_1069(4);
			break;
		case 1566111097: /* GXTEntry: "Exotic Collector\'s List" */
			func_828(43, 0, 0, 1611247019, func_1068(8), 0, -1, 0);
			func_1069(8);
			break;
		case 1276007140: /* GXTEntry: "Exotic Collector\'s List" */
			func_828(43, 0, 0, 1319635688, func_1068(16), 0, -1, 0);
			func_1069(16);
			break;
	}
}

void func_846(bool bParam0)
{
	if (func_1070() == 1)
	{
		if (func_822(39))
		{
			func_613(342, 0);
		}
		else
		{
			func_613(343, 0);
			func_1065(1);
		}
	}
	if (func_1070() >= 30)
	{
		func_613(344, 0);
	}
	func_828(39, 0, 0, 0, 0, 0, -1, 0);
	func_830(39, 0, 0, func_1070(), 30, 1, 0);
}

void func_847(bool bParam0)
{
	if (func_1071() == 1)
	{
		if (func_822(49))
		{
			func_613(409, 0);
		}
		else
		{
			func_613(410, 0);
			func_1067(1);
		}
	}
	if (func_1071() >= 10)
	{
		func_613(411, 0);
	}
	func_828(49, 0, 0, 0, 0, 0, -1, 0);
	func_830(49, 0, 0, func_1071(), 10, 1, 0);
}

void func_848(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case 1369162587: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_613(437, 0);
			func_613(440, 0);
			func_1072(-949689219, 444160793 /* GXTEntry: "Perfect Squirrel Carcass" */, &sVar0, 1, 0, 0);
			func_828(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_830(51, 0, 0, sVar0, func_1037(-949689219, 20), 1, 0);
			func_1064(1);
			func_107(-748969569, 0, 0);
			break;
		case 1610047510: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_1072(-1248968496, -1969404854 /* GXTEntry: "Perfect Cardinal Carcass" */, &sVar0, 1, 0, 0);
			func_828(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_830(51, 0, 0, sVar0, func_1037(-1248968496, 20), 1, 0);
			func_1064(8);
			break;
		case 1317879106: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_1072(1706369307, -832850511 /* GXTEntry: "Perfect Chipmunk Carcass" */, &sVar0, 1, 0, 0);
			func_828(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_830(51, 0, 0, sVar0, func_1037(1706369307, 20), 1, 0);
			func_1064(64);
			break;
		case 1062444751: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_1072(1520110311, -100913452 /* GXTEntry: "Perfect Songbird Carcass" */, &sVar0, 1, 0, 0);
			func_828(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_830(51, 0, 0, sVar0, func_1037(1520110311, 20), 1, 0);
			func_1064(512);
			break;
		case 754186760: /* GXTEntry: "Hunting Request" */
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_613(438, 0);
			func_1072(-1992824800, 905173572 /* GXTEntry: "Perfect Cedar Waxwing Carcass" */, &sVar0, 1, 0, 0);
			func_828(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_830(51, 0, 0, sVar0, func_1037(-1992824800, 20), 1, 0);
			func_1064(32768);
			break;
		default:
			func_613(439, 0);
			break;
	}
}

void func_849()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_850(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_24() == -1)
	{
		if (!func_822(43))
		{
			if (bParam0 == 281887510)
			{
				func_613(348, 0);
			}
			else if (bParam0 == -164081697)
			{
				func_613(350, 0);
			}
			else if (bParam0 == -1161319399)
			{
				func_613(352, 0);
			}
			else if (bParam0 == 728781265)
			{
				func_613(400, 0);
			}
		}
		else if (func_831(bParam0, 412399755))
		{
			func_1073(-1791518714);
			if (func_1074() == 0)
			{
				func_462(0, 10);
				iVar1 = func_1075(bParam0, iParam1, 1);
				if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
				{
					if (func_1076(bParam0) < func_1077(bParam0))
					{
						func_828(43, bParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_830(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_822(44))
		{
			if (bParam0 == -222563712)
			{
				func_613(354, 0);
			}
			else if (bParam0 == 1794857344)
			{
				func_613(399, 0);
			}
			else if (bParam0 == 1952409553)
			{
				func_613(401, 0);
			}
		}
		else if (func_831(bParam0, 709057512))
		{
			func_1073(-2087881550);
			if (func_1074() == 1)
			{
				func_462(0, 10);
				iVar1 = func_1075(bParam0, iParam1, 2);
				if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
				{
					if (func_1076(bParam0) < func_1077(bParam0))
					{
						func_828(43, bParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_830(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_822(45))
		{
			if (bParam0 == 2116770557)
			{
				func_613(359, 0);
			}
			else if (bParam0 == -651064726)
			{
				func_613(394, 0);
			}
			else if (bParam0 == -404270094)
			{
				func_613(395, 0);
			}
			else if (bParam0 == 2093126853)
			{
				func_613(398, 0);
			}
		}
		else if (func_831(bParam0, -1478961327))
		{
			func_1073(1908068621);
			if (func_1074() == 2)
			{
				func_462(0, 10);
				iVar1 = func_1075(bParam0, iParam1, 4);
				if (bParam0 == 2116770557)
				{
					if (!func_1078(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_1079(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_1035(48);
					}
					if (func_1076(bParam0) < func_1077(bParam0))
					{
						func_828(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_830(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == -651064726 || bParam0 == -404270094) || bParam0 == 2093126853)
				{
					if (func_1076(bParam0) < func_1077(bParam0))
					{
						func_828(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_830(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_822(46))
		{
			if (bParam0 == 2085530337)
			{
				func_613(356, 0);
			}
			else if (bParam0 == -150591160)
			{
				func_613(402, 0);
			}
			else if (bParam0 == -323969289)
			{
				func_613(404, 0);
			}
			else if (bParam0 == 1504361882)
			{
				func_613(406, 0);
			}
		}
		else if (func_831(bParam0, -1238404098))
		{
			func_1073(1611247019);
			if (func_1074() == 3)
			{
				func_462(0, 10);
				iVar1 = func_1075(bParam0, iParam1, 8);
				if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
				{
					if (func_1076(bParam0) < func_1077(bParam0))
					{
						func_828(43, bParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_830(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_822(47))
		{
			if (bParam0 == -1521783510)
			{
				func_613(396, 0);
			}
			else if (bParam0 == 1714875242)
			{
				func_613(397, 0);
			}
			else if (bParam0 == 927763737)
			{
				func_613(405, 0);
			}
			else if (bParam0 == 1019229063)
			{
				func_613(403, 0);
			}
		}
		else if (func_831(bParam0, 1160548794))
		{
			func_1073(1319635688);
			if (func_1074() == 4)
			{
				func_462(0, 10);
				iVar1 = func_1075(bParam0, iParam1, 16);
				if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
				{
					if (func_1076(bParam0) < func_1077(bParam0))
					{
						func_828(43, bParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_830(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_851(bool bParam0)
{
	int iVar0;

	if (bParam0 == 2116770557)
	{
		if (!func_1078(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_1079(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_1035(48);
		}
	}
}

void func_852(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_631(func_1080(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1081(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1082(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_853(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_844(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case 489075255: /* GXTEntry: "$1.00" */
			func_844(-949580860, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493: /* GXTEntry: "$5.00" */
			func_844(-1171997683, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627: /* GXTEntry: "$10.00" */
			func_844(-2140931002, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377: /* GXTEntry: "Bill Fold" */
			func_844(-1116228267, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086: /* GXTEntry: "Small Bill Fold" */
			func_844(2112896861, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686: /* GXTEntry: "Bill Stack" */
			func_844(-1915150712, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991: /* GXTEntry: "Coin" */
			func_844(994220262, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101: /* GXTEntry: "Coin Purse" */
			func_844(-1388440107, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918: /* GXTEntry: "Coin Sack" */
			func_844(-1531790128, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765: /* GXTEntry: "Coin Stack" */
			func_844(1351791770, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903: /* GXTEntry: "Money Clip" */
			func_844(-161493966, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684: /* GXTEntry: "Money Stack" */
			func_844(668131102, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340: /* GXTEntry: "Money Pile" */
			if (!func_1083())
			{
				func_844(1330954593, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740: /* GXTEntry: "Change Cup" */
			func_844(817681514, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264: /* GXTEntry: "Coin Cup" */
			func_844(1404311868, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970: /* GXTEntry: "$50.00" */
			func_844(-175152067, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1027115192: /* GXTEntry: "$100.00" */
			func_844(-526915387, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1064332555: /* GXTEntry: "$200.00" */
			func_844(101362741, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1954478446: /* GXTEntry: "$45.00" */
			func_844(1458818027, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -518592739: /* GXTEntry: "$50.00" */
			func_844(-1957208512, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -2010073778: /* GXTEntry: "$70.00" */
			func_844(2066857461, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -700133011: /* GXTEntry: "$100.00" */
			func_844(803940201, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case -1415414735: /* GXTEntry: "$120.00" */
			func_844(-1717765429, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2045548742: /* GXTEntry: "$150.00" */
			func_844(1379920914, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 830381058: /* GXTEntry: "$350.00" */
			func_844(447209691, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_854(bool bParam0)
{
	if (func_822(41))
	{
		func_613(363, 0);
	}
	else
	{
		func_613(362, 0);
	}
	switch (bParam0)
	{
		case 323124696: /* GXTEntry: "Legendary Bullhead Catfish" */
			func_1084(-1865241121);
			func_1085(-642026005);
			func_1086(-642026005);
			func_462(0, 10);
			break;
		case -2108314374: /* GXTEntry: "Legendary Chain Pickerel" */
			func_1084(2117142684);
			func_1085(-940584364);
			func_1086(-940584364);
			func_462(0, 10);
			break;
		case -1193798153: /* GXTEntry: "Legendary Lake Sturgeon" */
			func_1084(-1409326024);
			func_1085(1972645282);
			func_1086(1972645282);
			func_462(0, 10);
			break;
		case -787702678: /* GXTEntry: "Legendary Largemouth Bass" */
			func_1084(-641744968);
			func_1085(1667205433);
			func_1086(1667205433);
			func_462(0, 10);
			break;
		case -804542901: /* GXTEntry: "Legendary Longnose Gar" */
			func_1084(-946988203);
			func_1085(1362715885);
			func_1086(1362715885);
			func_462(0, 10);
			break;
		case -1696275132: /* GXTEntry: "Legendary Muskie" */
			func_1084(-646136018);
			func_1085(1053540370);
			func_1086(1053540370);
			func_462(0, 10);
			break;
		case -161595323: /* GXTEntry: "Legendary Perch" */
			func_1084(-955835837);
			func_1085(-1100103852);
			func_1086(-1100103852);
			func_462(0, 10);
			break;
		case -1114363619: /* GXTEntry: "Legendary Redfin Pickerel" */
			func_1084(-179276075);
			func_1085(-1409869209);
			func_1086(-1409869209);
			func_462(0, 10);
			break;
		case -368407134: /* GXTEntry: "Legendary Rock Bass" */
			func_1084(-492711560);
			func_1085(-1760235357);
			func_1086(-1760235357);
			func_462(0, 10);
			break;
		case 1997759228: /* GXTEntry: "Legendary Smallmouth Bass" */
			func_1084(1764383959);
			func_1085(-138366827);
			func_1086(-138366827);
			func_462(0, 10);
			break;
		case 1265573293: /* GXTEntry: "Legendary Sockeye Salmon" */
			func_1084(317501533);
			func_1085(-1261163843);
			func_1086(-1261163843);
			func_462(0, 10);
			break;
		case -1030441283: /* GXTEntry: "Legendary Steelhead Trout" */
			func_1084(817753087);
			func_1085(-963523016);
			func_1086(-963523016);
			func_462(0, 10);
			break;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			func_1084(576606016);
			func_1085(560825326);
			func_1086(560825326);
			func_462(0, 10);
			break;
		case -395458616: /* GXTEntry: "Legendary Northern Pike" */
			func_1084(814934957);
			func_1085(858269539);
			func_1086(858269539);
			break;
	}
}

void func_855(bool bParam0, int iParam1)
{
	var uVar0;

	func_1087(bParam0, iParam1, &uVar0);
}

int func_856(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	bool bVar18;
	bool bVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*bParam0 = 0;
	bVar18 = func_1052(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	bVar19 = func_1052(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_1088("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1089(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == bVar18 || Var3.f_4 == bVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*bParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_1090(iVar0);
						if (*bParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_857()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_858()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_859()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_860()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_861()
{
	func_1091();
	func_1092();
	func_1093();
}

void func_862(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_863(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728; /* GXTEntry: "Jack Hall Gang Treasure" */
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390; /* GXTEntry: "High Stakes Treasure" */
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075; /* GXTEntry: "The Poisonous Trail Treasure" */
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026; /* GXTEntry: "Le Tresor des Morts Treasure" */
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735; /* GXTEntry: "The Elemental Trail Treasure" */
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085; /* GXTEntry: "Landmarks Of Riches Treasure" */
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_1045(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_864(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_865(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_866(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_867(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_868(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_869(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_870(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_871(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_373(iParam0, &iVar0, &iVar1);
	if (!func_909(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1094(iParam0, 1024))
	{
		return;
	}
	func_910(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_872(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_373(iParam0, &iVar0, &iVar1);
	if (!func_909(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1094(iParam0, 1024))
	{
		return;
	}
	func_910(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_873()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_1033())
	{
		return func_874();
	}
	iVar4 = (func_1033() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1033())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_1095(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1034(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_874()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_1033());
	return func_1034(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_875(bool bParam0)
{
	switch (*bParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*bParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*bParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

int func_876(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_543(bParam0, 0, 1) };
	Var5 = { func_547(bParam0, Var0, Var0.f_4, 0) };
	return func_1096(bParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_877(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_24() != -1)
	{
		return;
	}
	switch (func_751(bParam0))
	{
		case 81053684:
			if (bParam0 == -1623728698 && func_1097(81053684, 0) <= 0)
			{
				func_912(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == -1535516064 || bParam0 == -763730846)
			{
				func_912(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1098(bParam0);
			if (func_1099(iVar0))
			{
				func_1100(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_912(30, bParam0, 0, 0, 0);
			}
			if (func_904() == -2125499975 || func_904() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935: /* GXTEntry: "The Summer Gunslinger" */
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case 1661121390: /* GXTEntry: "The Gunslinger" */
						func_912(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_904() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_912(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1101(-525676072, 0))
			{
				if (func_1102(-525676072, &bVar1))
				{
					func_912(33, bVar1, 0, 0, 0);
				}
			}
			func_912(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == 899611344 || bParam0 == -1515874150) || bParam0 == -1185145312)
	{
		if (!func_1103(99217379))
		{
			func_676(Global_35, bParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_833(24);
		if (func_856(&bVar2, 0))
		{
			func_414(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_878(bool bParam0)
{
	if (func_831(bParam0, 943695443))
	{
		func_1104(0, bParam0);
	}
	else if (func_831(bParam0, -2096528786))
	{
		func_1104(1, bParam0);
	}
	else if (func_831(bParam0, -1094167013))
	{
		func_1104(2, bParam0);
	}
	else if (func_831(bParam0, 1936654645))
	{
		func_1104(3, bParam0);
	}
	else if (func_831(bParam0, 1306489306))
	{
		func_1104(4, bParam0);
	}
	else if (func_831(bParam0, 435762317))
	{
		func_1104(5, bParam0);
	}
	else if (func_831(bParam0, 1259363210))
	{
		func_1104(6, bParam0);
	}
	else if (func_831(bParam0, 881398259))
	{
		func_1104(7, bParam0);
	}
	else if (func_831(bParam0, -541549214))
	{
		func_1104(8, bParam0);
	}
	else if (func_831(bParam0, 130796156))
	{
		func_1104(-1, bParam0);
	}
}

int func_879(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1105(&Var4, 1356624740);
	return func_1106(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_880(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_756(bParam0, 0))
	{
		return Var0;
	}
	if (func_831(bParam0, -305066475))
	{
		if (func_24() == -1)
		{
			if (func_831(bParam0, -537818634))
			{
				return func_464(189951448);
			}
			else
			{
				return func_464(1176172851);
			}
		}
	}
	else if (func_831(bParam0, -537818634))
	{
		return func_464(-963660207);
	}
	if (func_831(bParam0, 2084895747))
	{
		return func_464(1694039471);
	}
	return Var2;
}

void func_881(bool bParam0)
{
	switch (bParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			if (func_24() == -1)
			{
				if (func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_613(109, 1);
				}
			}
			break;
	}
}

void func_882(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1108(func_1107(0));
	func_920(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1109(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_883(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (bParam0 == 1662813436)
	{
		return;
	}
	if (!func_756(bParam0, 0))
	{
		return;
	}
	if (bParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_1110())
	{
		func_1111(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1112(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1112(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_832(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_747(bParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if ((iVar6 == joaat("ammo") && bParam0 != 424030678) && bParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1113(bParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_387(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_870(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_831(bParam0, 1443104131)) || bParam0 == -885810591) || bParam0 == -1424823393) || bParam0 == 1463786584) || bParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_870(bParam0));
	}
	func_920(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_884(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_885(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

int func_886(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_887(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_888(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_1114(bParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1114(bParam0, Var2, 1))
				{
					if (func_1115(bParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1115(bParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_613(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_25(0, 0, 1))
		{
			func_462(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

int func_889(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_890(bool bParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (bParam0)
	{
		case -1375947476: /* GXTEntry: "Special Horse Medicine Pamphlet" */
			iVar0 = 307;
			break;
		case -1704241585: /* GXTEntry: "Special Horse Reviver Pamphlet" */
			iVar0 = 308;
			break;
		case -1267972061: /* GXTEntry: "Horse Ointment Pamphlet" */
			iVar0 = 309;
			break;
		case -142033055: /* GXTEntry: "Special Horse Stimulant Pamphlet" */
			iVar0 = 310;
			break;
		case 890514341: /* GXTEntry: "Horse Meal Pamphlet" */
			iVar0 = 311;
			break;
		case -58963793: /* GXTEntry: "Special Health Cure Pamphlet" */
			iVar0 = 312;
			break;
		case 1882019322: /* GXTEntry: "Special Bitters Pamphlet" */
			iVar0 = 313;
			break;
		case 807302083: /* GXTEntry: "Special Snake Oil Pamphlet" */
			iVar0 = 314;
			break;
		case 617759310: /* GXTEntry: "Special Miracle Tonic Pamphlet" */
			iVar0 = 315;
			break;
		case -378547623: /* GXTEntry: "Potent Herbivore Bait Pamphlet" */
			iVar0 = 316;
			break;
		case 829545206: /* GXTEntry: "Potent Predator Bait Pamphlet" */
			iVar0 = 317;
			break;
		case 891318243: /* GXTEntry: "Cover Scent Pamphlet" */
			iVar0 = 319;
			break;
		case 431374225: /* GXTEntry: "Dynamite Arrow Pamphlet" */
			iVar0 = 320;
			break;
		case 1619534881: /* GXTEntry: "Fire Arrow Pamphlet" */
			iVar0 = 321;
			break;
		case -755457379: /* GXTEntry: "Improved Arrow Pamphlet" */
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643: /* GXTEntry: "Small Game Arrow Pamphlet" */
			iVar0 = 324;
			break;
		case 983875052: /* GXTEntry: "Volatile Dynamite Pamphlet" */
			iVar0 = 325;
			break;
		case -1753730528: /* GXTEntry: "Fire Bottle Pamphlet" */
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183: /* GXTEntry: "Homing Tomahawk Pamphlet" */
			iVar0 = 328;
			break;
		case 1310680212: /* GXTEntry: "Improved Throwing Knife Pamphlet" */
			iVar0 = 329;
			break;
		case -1724192342: /* GXTEntry: "Improved Tomahawk Pamphlet" */
			iVar0 = 330;
			break;
		case 912296423: /* GXTEntry: "Poison Throwing Knife Pamphlet" */
			iVar0 = 331;
			break;
		case -566881549: /* GXTEntry: "Split Point Pamphlet" */
			iVar0 = 332;
			break;
		case 147796381: /* GXTEntry: "Express Explosive Pamphlet" */
			iVar0 = 333;
			break;
		case -120865369: /* GXTEntry: "Incendiary Buckshot Pamphlet" */
			iVar0 = 334;
			break;
		case 1158808845: /* GXTEntry: "Explosive Slug Pamphlet" */
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_613(iVar0, 0);
	}
}

void func_891()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(33819255);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 0);
			func_1116(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, false);
			func_1117();
		}
		return;
	}
	if (!func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	func_1118();
	if (MISSIONDATA::_0x57E798B54C45EE1A(1685912227) >= 2)
	{
		if (MISSIONDATA::_0x57E798B54C45EE1A(2116153146) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(2116153146, 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-121456797, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(645322743))
	{
		return;
	}
	func_1116(1);
}

void func_892()
{
	if (!func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(304788622))
	{
		return;
	}
	func_606(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(304788622, true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1968398307))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(-1968398307, true);
}

void func_893()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-751383868);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
		{
			func_1119(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1244328330))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1383789777))
	{
		return;
	}
	if (!func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(1244328330, true);
	func_1119(1);
}

void func_894()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-1499823613);
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
		{
			func_1120(15000, 0, 0, 0, 1);
			func_1119(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(398807247))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1651350587))
	{
		return;
	}
	if (!func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(398807247, true);
	func_930(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1119(1);
}

void func_895()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if ((!func_631(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0) && !func_295(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_606(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1121(1))
			{
				func_867(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if ((!func_631(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0) && !func_295(((*Global_1835011)[23 /*74*/])->f_1)) && !Global_43890)
			{
				func_606(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1121(2))
			{
				func_867(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(2056119786) > 0 && !func_1121(4))
		{
			func_867(4);
		}
		if (func_1121(0))
		{
			func_1122(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(-1491419385) > 0)
		{
			if (func_631(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 0))
			{
				func_898(1191437462 /* GXTEntry: "Le Tresor des Morts Map 1" */, 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(1809565830) > 0)
		{
			if (func_631(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 0))
			{
				func_898(1119149048 /* GXTEntry: "Le Tresor des Morts Riddle Note" */, 1, 1, -142743235, 0);
			}
		}
		if (func_1121(1))
		{
			func_1122(1);
		}
		if (func_1121(2))
		{
			func_1122(2);
		}
		if (func_1121(4))
		{
			func_1122(4);
		}
		if (!func_1121(0))
		{
			func_867(0);
		}
	}
}

void func_896()
{
	bool bVar0;
	struct<4> Var1;
	bool bVar15;
	bool bVar16;

	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_105(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-236259196))
	{
		return;
	}
	Var1 = { func_1123() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_836(joaat("weapon_revolver_doubleaction"));
		if (func_414(joaat("weapon_revolver_doubleaction"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1123() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1124(-2055673461 /* GXTEntry: "Pearl Grip" */, Var1, 1423542233);
		func_1124(-202131179 /* GXTEntry: "Long Barrel" */, Var1, -1264898804);
		func_1124(2013836545 /* GXTEntry: "Gold" */, Var1, 1592019450);
		func_1124(1497476650 /* GXTEntry: "Gold" */, Var1, 1117400455);
		func_1124(1063571467 /* GXTEntry: "Gold" */, Var1, 1150213537);
		func_1124(2107224237 /* GXTEntry: "Gold" */, Var1, 1598825281);
		func_1124(1747981656 /* GXTEntry: "Gold" */, Var1, -712527121);
		func_1124(-1371140647 /* GXTEntry: "Baroque" */, Var1, 454332195);
		func_1124(-19142973 /* GXTEntry: "Gold" */, Var1, 256105670);
		func_1124(-2074737817 /* GXTEntry: "Gold" */, Var1, -1328061889);
		func_1124(-1114256243 /* GXTEntry: "Baroque" */, Var1, -782241404);
		func_1124(-1653277288 /* GXTEntry: "Gold" */, Var1, 1669853467);
		func_1124(1869398132 /* GXTEntry: "Baroque" */, Var1, -1559225678);
		func_1124(459868358 /* GXTEntry: "Gold" */, Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !func_572())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar16, false, 0, false);
			if (func_412(bVar16))
			{
				if (bVar16 != joaat("weapon_revolver_doubleaction"))
				{
					if (WEAPON::_0xD955FEE4B87AFA07(bVar16))
					{
						if (func_385(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 0, false, false);
					}
					else if (WEAPON::_0x0556E9D2ECF39D01(bVar16))
					{
						if ((func_385(24) && func_412(bVar15)) && bVar15 != joaat("weapon_revolver_doubleaction"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
					}
				}
			}
			else if (!func_412(bVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
			else if (bVar15 != joaat("weapon_revolver_doubleaction"))
			{
				if (func_385(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_doubleaction"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(-236259196, true);
	}
}

void func_897()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(99890643))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::_UNLOCK_SET_UNLOCKED(99890643, true);
	}
}

int func_898(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_1031(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_883(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_631(bParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_880(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_816(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_816(bParam0, 0, 0) - iParam1) < 0)
		{
			func_898(bParam0, func_816(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_747(bParam0) == joaat("weapon"))
	{
		if (!func_1125(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1126(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (bParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_549(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_883(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1127(bParam0, iParam1);
	return 1;
}

int func_899(bool bParam0)
{
	switch (func_751(bParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_900(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_751(bParam0))
	{
		case -2061583405:
			bVar0 = func_1128(bParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1128(bParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1128(bParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1128(bParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1128(bParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1128(bParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1129();
	}
	if (bParam1)
	{
		func_1130(0, 0);
	}
}

int func_901(bool bParam0)
{
	struct<5> Var0;

	Var0 = { func_543(bParam0, 1, 0) };
	return func_913(Var0.f_4);
}

int func_902(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_24() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_902(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1131(Global_1946804->f_1378.f_1[iVar0 /*3*/], 2, 6);
		}
	}
}

int func_904()
{
	return Global_1946804->f_1;
}

int func_905(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_1132(iParam6);
	Var4.f_1 = bParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1134(uParam0, func_1133(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_902(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1135(iVar3) && func_1136(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1137(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1] /*3*/]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return 1;
				}
			}
		}
	}

Vector3 func_906(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		return *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	return *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

int func_907(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_906(iParam0, iParam1) };
	return vVar0.x;
}

void func_908(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

int func_909(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1138(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1139(iParam0))
	{
		return 0;
	}
	if (func_1140(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1094(iParam0, 1)) || func_239(32768))
	{
		if (!func_1094(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1141())
	{
		return 0;
	}
	return 1;
}

void func_910(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_911(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_912(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_964(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1142(Var0);
}

int func_913(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_969(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_914(int iParam0)
{
	func_1131(Global_1946804->f_1497.f_1[func_902(iParam0, 1) /*3*/], 2, 6);
	func_1131(Global_1946804->f_1378.f_1[func_902(iParam0, 1) /*3*/], 2, 6);
}

bool func_915(int iParam0)
{
	return iParam0 != 0;
}

int func_916(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_915(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_917(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_918(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_919(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1031(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1088("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1089(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_412(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1090(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1090(iVar1);
	}
	return 0;
}

var func_920(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1143(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_921()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1144(iVar1);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1145(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_922()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1144(iVar0);
		if (!UNLOCK::_UNLOCK_IS_VISIBLE(func_1145(iVar1)))
		{
			UNLOCK::_UNLOCK_SET_VISIBLE(func_1145(iVar1), true);
		}
		iVar0++;
	}
}

void func_923(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_405(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_924(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_925()
{
	return (func_83(&Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1637780761) > 0);
}

int func_926(var uParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_24() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	bVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_756(bVar0, 0))
	{
		return 0;
	}
	if (!func_1146(bVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1147(bVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_831(bVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_543(bVar0, 0, 1) };
	iVar10 = func_1148(bVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1149(bVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1150(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_606(bVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1120(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_927(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_920(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

var func_928(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_929(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_24() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_930(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1062(iParam0, sParam4, iParam5);
	}
	func_1063(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_931(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1151())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, 908516622, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1151())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_0xE6DC9B21AC7A8729(func_649(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_111(iParam0);
	if (func_27(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_27(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1152(1, iVar1);
					func_1152(8, iVar1);
					func_1152(7, iVar1);
					break;
				case 12:
					func_1152(6, iVar1);
					break;
				case 53:
					func_1152(3, iVar1);
					func_1152(7, iVar1);
					func_1152(4, iVar1);
					break;
				case 20:
					func_1152(8, iVar1);
					break;
				case 19:
					func_1152(1, iVar1);
					func_1152(2, iVar1);
					break;
				case 24:
					func_1152(3, iVar1);
					func_1152(9, iVar1);
					func_1152(20, iVar1);
					break;
				case 28:
					func_1152(1, iVar1);
					break;
				case 34:
					func_1152(23, iVar1);
					func_1152(2, iVar1);
					func_1152(18, iVar1);
					break;
				case 29:
					func_1152(0, iVar1);
					func_1152(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1152(0, iVar1);
					func_1152(3, iVar1);
					func_1152(2, iVar1);
					func_1152(11, iVar1);
					func_1152(6, iVar1);
					func_1152(25, iVar1);
					func_1152(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1152(5, iVar1);
					break;
				case 63:
					func_1152(1, iVar1);
					func_1152(3, iVar1);
					break;
				case 37:
					func_1152(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_647(0, 10, 11, 2116153146))
			{
				func_1152(7, iVar1);
				func_1152(4, iVar1);
			}
			else if (iParam0 == func_647(0, 7, 11, -379687487 /* GXTEntry: "Coach Robbery with Sean" */))
			{
				func_1152(8, iVar1);
				func_1152(15, iVar1);
			}
			else if (iParam0 == func_647(0, 8, 11, -1386089015 /* GXTEntry: "Coach Robbery with Bill" */))
			{
				func_1152(3, iVar1);
			}
			else if (iParam0 == func_647(0, 11, 11, -1952009645 /* GXTEntry: "Coach Robbery with Micah" */))
			{
				func_1152(6, iVar1);
				func_1152(3, iVar1);
			}
			else if (iParam0 == func_647(0, 12, 11, 2065895756 /* GXTEntry: "Coach Robbery with Lenny" */))
			{
				func_1152(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1153()));
	if (!func_370(629))
	{
		func_613(629, 0);
	}
}

int func_932(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_933(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_934(int iParam0, int iParam1, var uParam2)
{
	if (!func_933(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_935()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_936(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_937(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1154(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_935())
	{
		return -1;
	}
	iVar0 = func_936(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_779(iVar1, 0);
	func_656(iVar1, 0);
	func_1155(iVar1, 0);
	func_1156(iVar1, 0);
	func_1157(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1158(iVar1, iParam4);
	}
	return iVar1;
}

int func_938(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_631(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = &Var1.f_1[iVar24];
			if (func_756(bVar25, 0) && func_831(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_939()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uVar0 = func_1159(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1160(uVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(uVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(uVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_940(vector3 vParam0, int iParam3)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;

	if (func_421(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		uVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(uVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(uVar1) };
			if (func_1161(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(uVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_941(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return 0;
	}
	return func_562((Global_1393237->f_11[iParam0 /*30*/])->f_10, iParam1);
}

int func_942()
{
	return 0;
}

void func_943(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		(Global_1393237->f_11[iParam0 /*30*/])->f_24 = iParam1;
	}
}

bool func_944(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return ((Global_1393237->f_11[iParam0 /*30*/])->f_10 && iParam1) != 0;
}

void func_945(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	(Global_1393237->f_11[iParam0 /*30*/])->f_10 = ((Global_1393237->f_11[iParam0 /*30*/])->f_10 || iParam1);
}

int func_946(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_947(int iParam0, int iParam1)
{
	if (!func_245(iParam0))
	{
		return;
	}
	((*Global_1310750)[iParam0 /*111*/])->f_1 = (((*Global_1310750)[iParam0 /*111*/])->f_1 - (((*Global_1310750)[iParam0 /*111*/])->f_1 && iParam1));
}

bool func_948(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_949(int iParam0)
{
	if (!func_245(iParam0))
	{
		return true;
	}
	return (Global_17503.f_42[iParam0 /*8*/])->f_4 > 0;
}

int func_950(int iParam0)
{
	if (func_245(iParam0))
	{
		return (Global_17503.f_42[iParam0 /*8*/])->f_4;
	}
	return 0;
}

int func_951(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

void func_952(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_953(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_953(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1162(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if ((Global_17503.f_42[iParam0 /*8*/])->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_24() != -1)
	{
		(Global_17503.f_42[iParam0 /*8*/])->f_4 = 0;
	}
	(Global_17503.f_42[iParam0 /*8*/])->f_4 = ((Global_17503.f_42[iParam0 /*8*/])->f_4 + iVar0);
}

bool func_954(int iParam0)
{
	return func_1163(iParam0, 2);
}

void func_955()
{
	Global_1911774 = 1;
}

void func_956(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_957(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1164();
	if (iParam2 == 39)
	{
		Var0 = { func_543(bParam0, 1, 0) };
		iParam2 = func_902(func_913(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_831(bParam0, 866047851) && func_1165(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_959(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1166(func_969(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1167(iParam2);
	func_1168(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1131(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1131(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1137(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1169(bParam0, iParam2, iParam1, func_24() != -1);
	if (bParam4)
	{
		func_1170(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1170(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_971(func_969(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_958(bool bParam0, bool bParam1, bool bParam2)
{
	func_1171(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_959(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_960()
{
	func_1172(&(Global_1946804->f_2776));
	func_1173(32768);
	func_971(1108822547, 8, 6);
}

int func_961(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_902(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_962(int iParam0)
{
	struct<4> Var0;

	if (func_1174(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1175(Var0);
}

void func_963(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1175(Var0);
}

void func_964(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_965(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_969(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (bParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1176(bParam4);
		}
		else if (bParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(bParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_SET_PED_COMPONENT_DISABLED(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_966(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_902(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_967(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_968(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_966(1108822547, 6))
	{
		if (bParam2)
		{
			func_965(iParam0, iVar0, func_24() != -1, 0, 0);
			func_970(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_971(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, 0, 1, 1, 1, 0);
}

int func_969(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_970(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_902(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_902(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_971(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_902(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_902(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_902(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_972(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (iParam0 == -1 || iParam0 == 0)
	{
		*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1 /*5*/] = iParam0;
		(Global_1898164->f_1[iParam1 /*5*/])->f_1 = func_114(iParam0);
		func_1177((Global_1898164->f_1[iParam1 /*5*/])->f_1, &((Global_1898164->f_1[iParam1 /*5*/])->f_3), &((Global_1898164->f_1[iParam1 /*5*/])->f_4), &((Global_1898164->f_1[iParam1 /*5*/])->f_2));
	}
}

void func_973(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1178((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1178(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_37(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_578(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

void func_974(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if ((Global_1914319->f_15936[iVar0 /*6*/])->f_5)
		{
			(Global_1914319->f_15936[iVar0 /*6*/])->f_5 = 0;
		}
		func_1179(Global_1914319->f_15936[iVar0 /*6*/], bParam0);
		iVar0++;
	}
}

void func_975(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1179(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_976(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1179(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_977(bool bParam0)
{
	func_1179(Global_1956612, bParam0);
}

void func_978(bool bParam0)
{
	func_1179(&(Global_1415412->f_3), bParam0);
}

void func_979(bool bParam0)
{
	if (func_1180(Global_1934051->f_33))
	{
		func_1181(Global_1934051->f_33, 7148155);
	}
	func_1179(&(Global_1934051->f_33), bParam0);
}

void func_980(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1183(func_1182(iVar0));
		if (iVar1 != 0)
		{
			func_1181(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (((*Global_1934051)[iVar0 /*2*/])->f_1)
		{
			((*Global_1934051)[iVar0 /*2*/])->f_1 = 0;
		}
		func_1179((*Global_1934051)[iVar0 /*2*/], bParam0);
		iVar0++;
	}
}

void func_981(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		func_681(iVar0, -1);
		func_682(iVar0, 0);
		func_683(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iVar0])))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[iVar0]));
			}
			MAP::REMOVE_BLIP(Global_36307[iVar0]);
		}
		iVar0++;
	}
}

void func_982(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, bParam2);
}

void func_983(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &Var0, 2, 2);
}

void func_984(var uParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = uParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &Var0, 2, 2);
}

bool func_985(int iParam0, int iParam1)
{
	return func_562((Global_40.f_11864[iParam0 /*2*/])->f_1, iParam1);
}

int func_986()
{
	if (func_1184())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_987(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_988(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_IS_PED_HOGTIED(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSOED_ENTITY(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_989(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSOED_ENTITY(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_990(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_165(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_164(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

int func_991(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_372(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_992(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_993(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_994(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

struct<4> func_995()
{
	struct<4> Var0;

	return Var0;
}

int func_996(bool bParam0, bool bParam1)
{
	if (func_759(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_757(bParam1), bParam0, 0);
}

var func_997(var uParam0)
{
	return uParam0->f_25;
}

Vector3 func_998(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_1185(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_421(vVar0))
	{
	}
	return vVar0;
}

int func_999(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_1186(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

int func_1000(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_913(iVar0);
}

var func_1001(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_464(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1002(int iParam0)
{
	int iVar0;

	iVar0 = func_518(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1187(iVar0);
}

int func_1003(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1188(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1004()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_1005(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1011(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1006(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1007(1);
	}
}

void func_1007(bool bParam0)
{
	if (bParam0)
	{
		func_164(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_165(&(Global_40.f_12018.f_42), 1);
	}
}

int func_1008(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case joaat("flow"):
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case joaat("base"):
			return 1;
		case 1871598:
			return 9;
		case joaat("event"):
			return 6;
		case 1059981727:
			return 2;
		case joaat("griefing"):
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_1010(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_1011(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1189(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1012(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1013(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_1014()
{
	int iVar0;

	iVar0 = func_784();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1015(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_1190(MISC::ABSF(fVar1) < 1f, func_1190(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1017()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1018(int iParam0, bool bParam1, int iParam2)
{
	func_1191((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1192(iParam0);
}

void func_1019(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1193(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1020(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1194(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1195(iVar5, &bVar2, &iVar0))
			{
				if (!func_756(bVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1196(bVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_747(bVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1014() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1014() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1197();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

char* func_1021(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875: /* GXTEntry: "Murder" */
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492: /* GXTEntry: "Frighten" */
			return "HONOR_EVENT_SCARE";
		case -643014279: /* GXTEntry: "Killed Vermin" */
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214: /* GXTEntry: "Killed Domestic Animal" */
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228: /* GXTEntry: "Killed Horse" */
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842: /* GXTEntry: "Stole Horse" */
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896: /* GXTEntry: "Stole Donkey" */
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508: /* GXTEntry: "Stole Mule" */
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598: /* GXTEntry: "Trampled Innocent" */
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721: /* GXTEntry: "Abandon Dead Animals" */
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221: /* GXTEntry: "Watched Animal Bleedout" */
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640: /* GXTEntry: "Antagonize" */
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824: /* GXTEntry: "Theft" */
			return "HONOR_EVENT_THEFT";
		case 1682361219: /* GXTEntry: "Intervened" */
			return "HONOR_EVENT_INTERVENED";
		case 158959085: /* GXTEntry: "Wanted In Camp" */
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559: /* GXTEntry: "Donated Game" */
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082: /* GXTEntry: "Item Request" */
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280: /* GXTEntry: "Long Absence" */
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475: /* GXTEntry: "Cruel Death" */
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355: /* GXTEntry: "Justice Served" */
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842: /* GXTEntry: "Cheat" */
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_1022(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1023(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_1024(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

bool func_1025(bool bParam0)
{
	return func_747(bParam0) == joaat("weapon");
}

int func_1026(bool bParam0)
{
	var uVar0;

	if (func_24() != -1)
	{
		return 0;
	}
	if (func_832(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_1030(bParam0, &uVar0, 1, 0, 0);
	}
	return func_631(bParam0, 1, 0);
}

void func_1027(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_747(bParam0) != joaat("weapon"))
	{
		return;
	}
	bVar0 = func_835(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_413(bVar0))
	{
		if (func_24() == -1)
		{
			func_836(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, 0) && func_816(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_883(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1028(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_831(bParam0, 58855631))
	{
		func_1147(bParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1029(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!func_549(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_757(bParam3), bParam0);
}

int func_1030(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1198(&bParam0);
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!func_549(0))
	{
		bParam3 = true;
	}
	if (func_1025(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_748(0) };
			Var4.f_9 = -1591664384;
			if (!func_545(bParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return 0;
			}
			else if (func_546(bParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return 0;
			}
			if (func_749(bParam0, 1))
			{
				if (!func_545(bParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return 0;
				}
				else if (func_546(bParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return 0;
				}
			}
		}
		else if (!func_1199(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_1029(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_754(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_757(bParam4), bParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_1031(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_747(bParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_831(bParam0, 1399091007))
	{
		func_1087(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1032(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_1200(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1201(&Var0, func_748(0));
	}
	if (!func_1202(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1090(iVar14);
	return uVar15;
}

int func_1033()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

bool func_1034(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_1035(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_24() != -1)
	{
		return;
	}
	iVar0 = func_1203(iParam0);
	fVar1 = func_1204(iParam0);
	if ((Global_1347477->f_117 || !func_385(31)) || !func_1205(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1206(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_1207(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_920(MISC::_CREATE_VAR_STRING(6, func_1208(iParam0), fVar1), "itemtype_textures", func_1209(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1036(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1037(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1210(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_1038(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_827() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1211(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1212(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1070() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1213(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1070(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1214(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1071() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1215(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1071(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1037(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_1039(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_1040(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_1041(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_1042(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			bVar2 = func_1216(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_631(bVar2, 1, 0) || func_1218(func_1217(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1046(func_1216(iVar0))), func_1046(func_1216(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1070() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1219(iVar0)), func_1219(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1213() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1219(iVar0)), func_1219(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1219(iVar0)), func_1219(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_1080(iParam3, func_1220(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_1076(bVar2) - iParam7) >= func_1037(iParam3, func_1221(iVar0));
				}
				else
				{
					bVar1 = func_1076(bVar2) >= func_1037(iParam3, func_1221(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_1076(bVar2) + iParam7) >= func_1037(iParam3, func_1221(iVar0));
			}
			else
			{
				bVar1 = func_1076(bVar2) >= func_1037(iParam3, func_1221(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1222(bVar2)), func_1222(bVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1223(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1224(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1224(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1071() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1225(iVar0)), func_1225(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1215() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1225(iVar0)), func_1225(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1225(iVar0)), func_1225(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			bVar2 = func_1080(iParam3, func_1220(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_1076(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1226(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1226(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1227(bVar2)), func_1227(bVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_1043(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1214() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, 1, 0);
	}
	return 1;
}

int func_1044(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_37(func_26(0)) && ((func_1228(0) == 1 || func_1228(0) == 8) || func_1228(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

var func_1045(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_1046(bool bParam0)
{
	switch (bParam0)
	{
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return "COL_CC_GUN_SET";
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return "COL_CC_ART_SET";
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return "COL_CC_LND_SET";
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return "COL_CC_GRL_SET";
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return "COL_CC_PLT_SET";
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return "COL_CC_ACT_SET";
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return "COL_CC_AML_SET";
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return "COL_CC_VEH_SET";
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return "COL_CC_SPT_SET";
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return "COL_CC_INV_SET";
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return "COL_CC_HOR_SET";
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

void func_1047(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1048(int iParam0)
{
	bool bVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1229(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1230(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1230(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1230(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1231(1);
			break;
		case 34:
			func_1232(1);
			break;
		case 35:
			func_1233(1);
			break;
		case 36:
			break;
		case 37:
			func_1234(0);
			break;
		case 38:
			func_1235(0);
			break;
		case 39:
			func_1236(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_388()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_376("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_613(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_388()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_376("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_613(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_388()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_376("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_613(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_388()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_376("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_613(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_24() == -1)
			{
				if (!func_1103(99217379) || func_1237(99217379) == 2110595215)
				{
					if (func_31())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = 899611344; /* GXTEntry: "Off-Hand Holster" */
					}
					if (!func_631(bVar0, 1, 0))
					{
						func_876(bVar0, 1, 752097756);
					}
					func_676(Global_35, bVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_24() == -1)
			{
				if (!func_631(1013902307, 1, 0))
				{
					func_876(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_24() == -1)
			{
				if (!func_631(1013902307, 1, 0))
				{
					func_876(1013902307, 1, 752097756);
				}
				if (!func_631(142640135, 1, 0))
				{
					func_876(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_24() == -1)
			{
				if (!func_631(786809402, 1, 0))
				{
					func_876(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_24() == -1)
			{
				if (!func_631(786809402, 1, 0))
				{
					func_876(786809402, 1, 752097756);
				}
				if (!func_631(-518019409, 1, 0))
				{
					func_876(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1238();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1049(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1050(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_126();
	func_40(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_1051(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_1239(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1052(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1053(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(bVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			if (!func_385(50))
			{
				if (!func_385(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			if (!func_385(51))
			{
				if (!func_385(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

int func_1054(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_756(bParam1, 0))
	{
		return 0;
	}
	if (func_747(bParam1) != joaat("clothing"))
	{
		return 0;
	}
	bVar1 = func_24() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_751(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_901(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_831(bParam1, 866047851))
	{
		iVar5 = func_902(iVar4, 1);
		if (func_1165(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(bVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_751(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return 0;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_831(bParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return 0;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return 0;
			}
			break;
		case -1505978566:
			if (func_772(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return 0;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_1240(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1240(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_751(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_831(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_1055()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1056()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_1057()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_631(func_1241(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1058(bool bParam0)
{
	switch (bParam0)
	{
		case -1217729597: /* GXTEntry: "Gold Jointed Bracelet" */
		case 363594903: /* GXTEntry: "Vintage Civil War Handcuffs" */
		case 425319238: /* GXTEntry: "Legendary Alligator Tooth" */
			return -62615415 /* GXTEntry: "Alligator Tooth Talisman" */;
		case -1540119664: /* GXTEntry: "Legendary Bear Claw" */
		case 446659922: /* GXTEntry: "Silver Chain Bracelet" */
		case 2100194981: /* GXTEntry: "Quartz Chunk" */
			return -832719552 /* GXTEntry: "Bear Claw Talisman" */;
		case -1018798851: /* GXTEntry: "Cobalt Petrified Wood" */
		case -757567246: /* GXTEntry: "Gold Earring" */
		case -390982951: /* GXTEntry: "Legendary Boar Tusk" */
			return -184823984 /* GXTEntry: "Boar Tusk Talisman" */;
		case -2054602073: /* GXTEntry: "Legendary Bison Horn" */
		case -585121677: /* GXTEntry: "Silver Earring" */
		case -378441099: /* GXTEntry: "Abalone Shell Fragment" */
			return -1941112926 /* GXTEntry: "Bison Horn Talisman" */;
		case 1566949660: /* GXTEntry: "Old Brass Compass" */
			return -121629511 /* GXTEntry: "Raven Claw Talisman" */;
	}
	return 0;
}

int func_1059(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0)
	{
		case -62615415: /* GXTEntry: "Alligator Tooth Talisman" */
			if (bParam1 == 425319238)
			{
				bVar0 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
				bVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else if (bParam1 == 363594903)
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = -1217729597; /* GXTEntry: "Gold Jointed Bracelet" */
			}
			else
			{
				bVar0 = 425319238; /* GXTEntry: "Legendary Alligator Tooth" */
				bVar1 = 363594903; /* GXTEntry: "Vintage Civil War Handcuffs" */
			}
			break;
		case -832719552: /* GXTEntry: "Bear Claw Talisman" */
			if (bParam1 == -1540119664)
			{
				bVar0 = 2100194981; /* GXTEntry: "Quartz Chunk" */
				bVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else if (bParam1 == 2100194981)
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = 446659922; /* GXTEntry: "Silver Chain Bracelet" */
			}
			else
			{
				bVar0 = -1540119664; /* GXTEntry: "Legendary Bear Claw" */
				bVar1 = 2100194981; /* GXTEntry: "Quartz Chunk" */
			}
			break;
		case -184823984: /* GXTEntry: "Boar Tusk Talisman" */
			if (bParam1 == -390982951)
			{
				bVar0 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
				bVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else if (bParam1 == -1018798851)
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = -757567246; /* GXTEntry: "Gold Earring" */
			}
			else
			{
				bVar0 = -390982951; /* GXTEntry: "Legendary Boar Tusk" */
				bVar1 = -1018798851; /* GXTEntry: "Cobalt Petrified Wood" */
			}
			break;
		case -1941112926: /* GXTEntry: "Bison Horn Talisman" */
			if (bParam1 == -2054602073)
			{
				bVar0 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
				bVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else if (bParam1 == -378441099)
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = -585121677; /* GXTEntry: "Silver Earring" */
			}
			else
			{
				bVar0 = -2054602073; /* GXTEntry: "Legendary Bison Horn" */
				bVar1 = -378441099; /* GXTEntry: "Abalone Shell Fragment" */
			}
			break;
	}
	if (func_631(bVar0, 1, 0) && func_631(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1060(bool bParam0)
{
	switch (bParam0)
	{
		case 968830139: /* GXTEntry: "Legendary Beaver Tooth" */
			return -224110471 /* GXTEntry: "Beaver Tooth Trinket" */;
		case -649219937: /* GXTEntry: "Legendary Tatanka Bison Horn" */
			return 1289585739 /* GXTEntry: "Tatanka Bison Horn Trinket" */;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -269048282 /* GXTEntry: "Buck Antler Trinket" */;
		case -718162726: /* GXTEntry: "Legendary Cougar Fang" */
			return 1441506783 /* GXTEntry: "Cougar Fang Trinket" */;
		case -1284282080: /* GXTEntry: "Legendary Coyote Fang" */
			return 780305678 /* GXTEntry: "Coyote Fang Trinket" */;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return 1811977508 /* GXTEntry: "Elk Antler Trinket" */;
		case -1445630104: /* GXTEntry: "Legendary Fox Claw" */
			return -935153695 /* GXTEntry: "Fox Claw Trinket" */;
		case 580970876: /* GXTEntry: "Lion\'s Paw" */
			return 1299744282 /* GXTEntry: "Lion\'s Paw Trinket" */;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1631240196 /* GXTEntry: "Moose Antler Trinket" */;
		case 1946030891: /* GXTEntry: "Legendary Panther Eye" */
			return 517396587 /* GXTEntry: "Panther\'s Eye Trinket" */;
		case -1511404982: /* GXTEntry: "Legendary Pronghorn Horn" */
			return 1620353486 /* GXTEntry: "Pronghorn Horn Trinket" */;
		case -944465290: /* GXTEntry: "Legendary Ram Horn" */
			return 1816443627 /* GXTEntry: "Ram Horn Trinket" */;
		case -1701098855: /* GXTEntry: "Legendary Wolf Heart" */
			return -127011478 /* GXTEntry: "Wolf Heart Trinket" */;
		default:
			break;
	}
	return 0;
}

int func_1061(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1242(iParam0);
	if (iVar0 != -15)
	{
		func_40(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_41(iVar0, 1);
	}
	return 0;
}

void func_1062(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_920(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_1063(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1151())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_920(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1243(iVar0);
			func_1244(iVar0, 0, 0);
		}
		func_920(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_243(func_464(1644987397), iVar1);
	}
}

void func_1064(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1065(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1066(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1067(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1068(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1076(bVar9);
	iVar2 = func_1076(bVar10);
	iVar3 = func_1076(bVar11);
	iVar5 = func_1077(bVar9);
	iVar6 = func_1077(bVar10);
	iVar7 = func_1077(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1076(bVar12);
		iVar8 = func_1077(bVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1069(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1070()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1245(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1071()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_1072(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case -949689219:
			if (bParam1 == -1866642239)
			{
				bVar0 = 444160793; /* GXTEntry: "Perfect Squirrel Carcass" */
			}
			else if (bParam1 == 444160793)
			{
				bVar0 = -1866642239; /* GXTEntry: "Perfect Rabbit Carcass" */
			}
			break;
		case -1248968496:
			if (bParam1 == -1969404854)
			{
				bVar0 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == 1761263432)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = -843795569; /* GXTEntry: "Perfect Woodpecker Carcass" */
			}
			else if (bParam1 == -843795569)
			{
				bVar0 = -1969404854; /* GXTEntry: "Perfect Cardinal Carcass" */
				bVar1 = 1761263432; /* GXTEntry: "Perfect Rat Carcass" */
			}
			break;
		case 1706369307:
			if (bParam1 == -832850511)
			{
				bVar0 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -935543049)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1464585113)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1290897778; /* GXTEntry: "Perfect Robin Carcass" */
			}
			else if (bParam1 == -1290897778)
			{
				bVar0 = -832850511; /* GXTEntry: "Perfect Chipmunk Carcass" */
				bVar1 = -935543049; /* GXTEntry: "Perfect Opossum Carcass" */
				bVar2 = -1464585113; /* GXTEntry: "Perfect Oriole Carcass" */
			}
			break;
		case 1520110311:
			if (bParam1 == -100913452)
			{
				bVar0 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 313332607)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -124539232)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == 102446365)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = -1882344824; /* GXTEntry: "Perfect Bullfrog Carcass" */
			}
			else if (bParam1 == -1882344824)
			{
				bVar0 = -100913452; /* GXTEntry: "Perfect Songbird Carcass" */
				bVar1 = 313332607; /* GXTEntry: "Perfect Sparrow Carcass" */
				bVar2 = -124539232; /* GXTEntry: "Perfect Toad Carcass" */
				bVar3 = 102446365; /* GXTEntry: "Perfect Skunk Carcass" */
			}
			break;
		case -1992824800:
			if (bParam1 == 905173572)
			{
				bVar0 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 1432949803)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == -983831788)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 59384454)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 924882045; /* GXTEntry: "Perfect Beaver Carcass" */
			}
			else if (bParam1 == 924882045)
			{
				bVar0 = 905173572; /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
				bVar1 = 1432949803; /* GXTEntry: "Perfect Bat Carcass" */
				bVar2 = -983831788; /* GXTEntry: "Perfect Blue Jay Carcass" */
				bVar3 = 59384454; /* GXTEntry: "Perfect Crow Carcass" */
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1226(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1226(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1226(bVar0))
		{
			*sParam2++;
		}
		if (func_1226(bVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1226(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1226(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1226(bVar0))
		{
			*sParam2++;
		}
		if (func_1226(bVar1))
		{
			*sParam2++;
		}
		if (func_1226(bVar0) && func_1226(bVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1226(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1226(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1226(bVar0))
		{
			*sParam2++;
		}
		if (func_1226(bVar1))
		{
			*sParam2++;
		}
		if (func_1226(bVar2))
		{
			*sParam2++;
		}
		if ((func_1226(bVar0) && func_1226(bVar1)) && func_1226(bVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1226(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1226(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1226(bVar0))
		{
			*sParam2++;
		}
		if (func_1226(bVar1))
		{
			*sParam2++;
		}
		if (func_1226(bVar2))
		{
			*sParam2++;
		}
		if (func_1226(bVar3))
		{
			*sParam2++;
		}
		if (((func_1226(bVar0) && func_1226(bVar1)) && func_1226(bVar2)) && func_1226(bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1073(int iParam0)
{
	if (!func_1246(iParam0))
	{
		func_1248(func_1247(iParam0));
	}
}

int func_1074()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1246(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1075(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1076(bVar9);
	iVar2 = func_1076(bVar10);
	iVar3 = func_1076(bVar11);
	iVar5 = func_1077(bVar9);
	iVar6 = func_1077(bVar10);
	iVar7 = func_1077(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1076(bVar12);
		iVar8 = func_1077(bVar12);
	}
	if (bParam0 == bVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (bParam0 == bVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0 == bVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (bParam0 == bVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1076(bool bParam0)
{
	int iVar0;

	if (func_631(bParam0, 1, 0))
	{
		iVar0 = func_816(bParam0, 0, 0);
	}
	return iVar0;
}

int func_1077(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return 5;
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return 5;
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return 5;
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return 15;
		case -222563712: /* GXTEntry: "Heron Plume" */
			return 20;
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return 7;
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return 10;
		case 2116770557:
			return 25;
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return 3;
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return 7;
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return 5;
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return 30;
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return 5;
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return 10;
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return 5;
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return 5;
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return 5;
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return 5;
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1078(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_1079(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_1080(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1210(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_1081(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_1080(iParam1, 5) || bParam0 == func_1080(iParam1, 6)) || bParam0 == func_1080(iParam1, 7)) || bParam0 == func_1080(iParam1, 8)) || bParam0 == func_1080(iParam1, 9))
	{
		func_1072(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_828(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_830(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1082(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_1080(iParam1, 5) || bParam0 == func_1080(iParam1, 6)) || bParam0 == func_1080(iParam1, 7)) || bParam0 == func_1080(iParam1, 8)) || bParam0 == func_1080(iParam1, 9))
	{
		if (func_1072(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_828(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_830(51, 0, 0, iVar0, func_1037(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_828(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_830(51, 0, 0, iVar0, func_1037(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_1083()
{
	if (func_295(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_1084(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_1085(int iParam0)
{
	if (!func_1249(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_1086(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_1087(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_1088(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_757(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1089(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1090(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_1091()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1250())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1251(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1251(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1252();
	fVar2 = func_1253();
	fVar3 = func_1254();
	fVar4 = func_1255();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1256()));
	fVar7 = (func_1251(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1257(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1258(3, fVar9, fVar9 > 100f);
	return func_1259(fVar7, -100f, 100f);
}

float func_1092()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1250())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1251(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1251(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1252();
	fVar2 = func_1253();
	fVar3 = func_1254();
	fVar4 = func_1255();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1256()));
	fVar7 = (func_1251(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1257(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1258(2, fVar9, fVar9 > 100f);
	return func_1259(fVar7, -100f, 100f);
}

float func_1093()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1250())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1251(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1260())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1261())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1251(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1252();
	fVar2 = func_1253();
	fVar3 = func_1254();
	fVar4 = func_1255();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1256()));
	fVar7 = (func_1251(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1257(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1258(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1251(0);
	}
	return func_1259(fVar7, -100f, 100f);
}

bool func_1094(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1095(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1096(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_756(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1030(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_549(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_757(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1097(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1262();
			}
			break;
	}
	return 0;
}

int func_1098(bool bParam0)
{
	switch (bParam0)
	{
		case 439606975: /* GXTEntry: "Fancy Suit" */
			return 14;
		case 1661121390: /* GXTEntry: "The Gunslinger" */
			return 6;
		case 1164374808: /* GXTEntry: "Winter Outfit" */
			return 7;
		case 624063935: /* GXTEntry: "The Summer Gunslinger" */
			return 9;
		case -1476781101: /* GXTEntry: "Island Outfit" */
			return 10;
		case 1560492757: /* GXTEntry: "Robbery Outfit" */
			return 15;
		case -769081407: /* GXTEntry: "The Wittemore" */
			return 16;
		case 688004210: /* GXTEntry: "Police Outfit" */
			return 20;
		case 166243423: /* GXTEntry: "Custom Outfit" */
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case 509954990: /* GXTEntry: "The Chevalier" */
			return 29;
		case -445916744: /* GXTEntry: "The Heartlands" */
			return 30;
		case -866249154: /* GXTEntry: "The Gambler" */
			return 31;
		case -2077063704: /* GXTEntry: "The Earl" */
			return 32;
		case 205207539: /* GXTEntry: "The McLaughlin" */
			return 33;
		case -1033657275: /* GXTEntry: "The Josiah" */
			return 34;
		case 1806002837: /* GXTEntry: "The Farrier" */
			return 35;
		case 705324896: /* GXTEntry: "The Donegal" */
			return 36;
		case -1541763703: /* GXTEntry: "The Bulldogger" */
			return 37;
		case 387052410: /* GXTEntry: "The Ranch Hand" */
			return 38;
		case -361288914: /* GXTEntry: "The Scrapper" */
			return 39;
		case -911054515: /* GXTEntry: "The Armadillo" */
			return 40;
		case 1084200963: /* GXTEntry: "The Valentine" */
			return 41;
		case 1847948074: /* GXTEntry: "The Vaquero" */
			return 42;
		case -1212526764: /* GXTEntry: "The Dewberry Creek" */
			return 43;
		case 1851440270: /* GXTEntry: "The Clairmont" */
			return 44;
		case -2028985700: /* GXTEntry: "The Roscoe" */
			return 45;
		case 1074435214: /* GXTEntry: "The Estate Boss" */
			return 46;
		case -883015675: /* GXTEntry: "The Drover" */
			return 47;
		case -1047155604: /* GXTEntry: "The Calumet" */
			return 48;
		case 1123231221: /* GXTEntry: "The Cowpuncher" */
			return 49;
		case 1866989210: /* GXTEntry: "The Tumbleweed" */
			return 50;
		case 478183719: /* GXTEntry: "The Drifter" */
			return 51;
		case -1698955868: /* GXTEntry: "The Leatherman" */
			return 52;
		case -2029378634: /* GXTEntry: "The Cumberland" */
			return 53;
		case 1339864416: /* GXTEntry: "The Millesani" */
			return 54;
		case 890998115: /* GXTEntry: "The Faulkton" */
			return 55;
		case -1376288999: /* GXTEntry: "The Dolton" */
			return 56;
		case -1041123771: /* GXTEntry: "The Corson" */
			return 57;
		case 1389254668: /* GXTEntry: "The Saint Denis" */
			return 58;
		case -346112633: /* GXTEntry: "The Deauville" */
			return 59;
		case 773309172: /* GXTEntry: "The Bretagne" */
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

int func_1099(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

void func_1100(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_1099(iParam0))
	{
		return;
	}
	if (func_1263(iParam0))
	{
		return;
	}
	if (!func_1264(iParam0))
	{
		func_1265(iParam0, 1, 0);
	}
	bVar0 = func_1266(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1267(iParam0, 512))
		{
			func_912(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_1268() && !bParam1) && !func_25(0, 0, 1))
	{
		func_928(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_1269(iParam0, 6);
	if (bParam2)
	{
		if (!func_25(0, 0, 1))
		{
			func_462(1, 4);
		}
	}
}

bool func_1101(int iParam0, bool bParam1)
{
	return func_1097(iParam0, 0) < func_1270(iParam0, bParam1);
}

int func_1102(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_751(bVar1) == iParam0)
		{
			*iParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1103(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_902(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_902(iParam0, 1) /*11*/];
}

void func_1104(int iParam0, bool bParam1)
{
	if (func_831(bParam1, 130796156))
	{
		func_1271(bParam1, 0);
	}
	else if (func_831(bParam1, 930141731))
	{
		func_1271(bParam1, 1);
		func_1272(iParam0);
	}
}

void func_1105(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1106(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1273(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1274(uParam2, iParam0, Var1);
	return 1;
}

int func_1107(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1109(bool bParam0)
{
	var uVar0;

	if (!func_1275(bParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1110()
{
	return !&Global_1911774;
}

void func_1111(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = bParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = bParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_1112(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1113(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1114(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_24() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(bParam0))
	{
		return 0;
	}
	if (!func_1276(bParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1115(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_24() != -1)
	{
		return false;
	}
	if (func_1276(bParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1116(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_606(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-615217896 /* GXTEntry: "Eagle Talon Talisman" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(655868243 /* GXTEntry: "Iguana Scale Trinket" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1117();
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, true);
	}
	else
	{
		func_1277(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_609(-615217896 /* GXTEntry: "Eagle Talon Talisman" */);
		func_898(655868243 /* GXTEntry: "Iguana Scale Trinket" */, 1, 1, -142743235, 1);
		func_1279(146323340, func_1278());
		Var0 = { func_1280() };
		if (func_1281(&Var0) == -1387633835)
		{
			func_1282(&Var0);
			func_1283(Var0);
		}
		iVar7 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1284(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1285(iVar6) == 2010625508)
			{
				func_1286(iVar6, iVar7);
				func_1287(iVar6, iVar8);
				func_1288(iVar6, iVar9);
				func_1289(iVar6, 0);
				if (func_1290(iVar6))
				{
					func_1291(iVar6);
				}
				iVar10 = func_1292(iVar8);
				func_1293(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(645322743, false);
	}
}

int func_1117()
{
	if (!func_1294(-1898635967, func_1278(), 1))
	{
		return 0;
	}
	if (func_32())
	{
		if (!func_1294(146323340, func_1278(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1118()
{
	func_618(joaat("weapon_pistol_volcanic"));
	func_618(joaat("weapon_shotgun_pump"));
	func_618(joaat("weapon_rifle_varmint"));
}

void func_1119(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_606(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-223790555 /* GXTEntry: "Special Snake Oil" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(1566032147 /* GXTEntry: "Special Bitters" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(891311852 /* GXTEntry: "Minty Pork" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-1353737667 /* GXTEntry: "Oregano Prime Beef" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-330313895 /* GXTEntry: "Thyme Game" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-2051332199 /* GXTEntry: "Oleander Sage" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(1237770824 /* GXTEntry: "Animal Fat" */, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-1757588258 /* GXTEntry: "Horse Meal" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_606(-1921080134 /* GXTEntry: "Classic Oatcakes" */, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1426541042))
		{
			return;
		}
		func_898(-1080874779 /* GXTEntry: "Special Health Cure" */, 3, 1, -142743235, 1);
		func_898(-223790555 /* GXTEntry: "Special Snake Oil" */, 3, 1, -142743235, 1);
		func_898(1566032147 /* GXTEntry: "Special Bitters" */, 3, 1, -142743235, 1);
		func_898(891311852 /* GXTEntry: "Minty Pork" */, 5, 1, -142743235, 1);
		func_898(-1353737667 /* GXTEntry: "Oregano Prime Beef" */, 5, 1, -142743235, 1);
		func_898(-330313895 /* GXTEntry: "Thyme Game" */, 5, 1, -142743235, 1);
		func_898(-2051332199 /* GXTEntry: "Oleander Sage" */, 5, 1, -142743235, 1);
		func_898(1237770824 /* GXTEntry: "Animal Fat" */, 5, 1, -142743235, 1);
		func_898(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 3, 1, -142743235, 1);
		func_898(-1757588258 /* GXTEntry: "Horse Meal" */, 3, 1, -142743235, 1);
		func_898(-1921080134 /* GXTEntry: "Classic Oatcakes" */, 10, 1, -142743235, 1);
		iVar1 = -868094182; /* GXTEntry: "Tennessee Walker - Chestnut Coat" */
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1284(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1285(iVar0) == 153881023)
			{
				func_1286(iVar0, iVar1);
				func_1287(iVar0, iVar2);
				func_1288(iVar0, iVar3);
				func_1289(iVar0, 0);
				if (func_1290(iVar0))
				{
					func_1291(iVar0);
				}
				iVar4 = func_1292(iVar2);
				func_1293(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1117();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1426541042, false);
	}
}

void func_1120(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1295(iParam0);
	if (bParam3)
	{
		func_927(iParam0, sParam1, iParam2);
	}
}

bool func_1121(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1122(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1123()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1088("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1089(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("weapon_revolver_doubleaction"))
			{
			}
			else if (func_546(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1090(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1090(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1124(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1296(Param1, iParam5, &Var5, 0))
	{
		func_548(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1096(bParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1297(Var19, 1);
}

int func_1125(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_1200(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1201(&Var0, func_748(0));
	}
	if (!func_1202(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_1089(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_548(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1090(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_1126(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_543(bParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1298(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_547(bParam0, Var0, Var0.f_4, bParam4) };
	return func_548(bParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1127(bool bParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_831(bParam0, 606799272))
		{
			func_1299(bParam0, iParam1);
		}
		if (func_831(bParam0, -1112814642) && func_831(bParam0, -1697809989))
		{
			func_852(bParam0, iParam1, 1, 0);
		}
	}
}

int func_1128(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_1300(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_751(bParam0) != -999503751)
		{
			func_1301(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_751(bParam0) != -999503751)
	{
		func_1301(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1302(bParam0, 1);
	return 1;
}

void func_1129()
{
	int iVar0;

	if (func_24() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_1130(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1303(0);
	}
	if (bParam0)
	{
		func_964(8);
		func_964(512);
	}
	else
	{
		func_964(8);
		func_964(16);
	}
}

void func_1131(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1132(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_904();
	}
	if (func_24() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1133(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1134(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1304(uParam0->f_1[iVar0 /*3*/], 2))
		{
			iVar7 = func_969(iVar0, 1);
			if (func_967(iVar0, iParam1))
			{
				vVar4 = { func_906(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0 /*11*/] && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_966(iVar7, 4))
				{
					func_971(iVar7, 4, 6);
				}
			}
			else
			{
				func_970(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0 /*11*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_1135(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804->f_964.f_2 = 0;
	if (func_24() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1305(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1136(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

void func_1137(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_751(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_967(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1168(iVar1, iVar3);
		}
	}
	if (func_1103(-1586649372) && func_967(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1168(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1168(iVar1, iVar3);
					}
				}
			}
			func_1306(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1306(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base") || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1168(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1306(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/])->f_1 == joaat("base")
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1168(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1168(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1306(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1306(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1168(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1306(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1168(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1168(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_751(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1168(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_831(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_751(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_751(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1168(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_751(&(uParam0->f_1[iVar1 /*3*/])) || func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1168(iVar1, iVar3);
						}
					}
					break;
			}
		}

bool func_1138(int iParam0, int iParam1)
{
	if (func_24() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1139(int iParam0)
{
	if (func_24() != -1)
	{
		if (func_1094(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1094(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1094(iParam0, 65536) && !func_1094(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1094(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1094(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1141()
{
	return Global_1905944->f_5694;
}

void func_1142(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1307(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1308(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_964(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1307(Param0))
			{
				return;
			}
			func_1308(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_964(8);
			Jump @525; //curOff = 505
			func_963(Param0, Param0.f_1, Param0.f_2);
		}

void func_1143(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1144(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_1145(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1146(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_24() == -1)
	{
		if (func_1025(bParam0))
		{
			iVar1 = WEAPON::_0x865F36299079FB75(bParam0);
			bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::_UNLOCK_IS_VISIBLE(bParam0);
	}
	return bVar0;
}

int func_1147(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1148(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1198(&bParam0);
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!func_549(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1029(bParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_754(bParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_757(bParam3), bParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1149(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	bool bVar63;
	int iVar64;

	if (func_831(bParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = bParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (func_1309(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
				{
					iVar49 = (iVar49 + (Var0[iVar32 /*2*/])->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_884(bParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					bVar63 = func_887(iVar62, iVar61);
					if (func_756(bVar63, 0) && bVar63 != bParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1149(bVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = bVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1149(bVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1309(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1150(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1310(1);
}

int func_1151()
{
	if (func_32())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1152(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1311(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_612(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1311(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_612(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1153()
{
	return Global_40.f_4283.f_325;
}

bool func_1154(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1155(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = iParam1;
}

void func_1156(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_4 = iParam1;
}

void func_1157(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12105[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0 /*2*/] = iParam1;
}

void func_1158(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_5 = iParam1;
		return;
	}
	(Global_1058888->f_498[iParam0 /*2*/])->f_1 = iParam1;
}

int func_1159(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_37(iParam0))
	{
		return 0;
	}
	uVar0 = func_651(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&uVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1160(var uParam0)
{
	return STATS::_0x4DAC398297981B87(uParam0);
}

int func_1161(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1162(int iParam0)
{
	return (Global_17503.f_42[iParam0 /*8*/])->f_5;
}

bool func_1163(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_1164()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1165(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_831(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1166(int iParam0)
{
	func_971(iParam0, 8, 6);
}

void func_1167(int iParam0)
{
	func_1312(&(Global_1946804->f_2589), iParam0);
}

void func_1168(int iParam0, int iParam1)
{
	func_1313(&(Global_1946804->f_2589), iParam0, iParam1);
}

int func_1169(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1314(0);
	if (iParam2 != 0 && func_1315(bParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1136(bParam0, func_969(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1170(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_24() != -1;
	iVar7 = func_1314(0);
	if (func_959(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_969(iVar0, 1);
			if (func_966(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_966(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1240(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1316(uParam0);
				if (iVar3 > 0)
				{
					if (!func_959(524288))
					{
						func_964(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_969(iVar0, 1);
							if (func_966(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_966(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1240(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1168(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1173(524288);
				}
			}
		}
	}

void func_1171(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1317(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_24() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1318(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1266(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1266(Global_40.f_7729);
				Global_1946804->f_1378 = func_1266(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1319(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1130(0, 1);
	}
}

void func_1172(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1173(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1174(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1175(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1307(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1307(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1308(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_964(8);
}

int func_1176(bool bParam0)
{
	int iVar0;

	iVar0 = func_751(bParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

void func_1177(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_115(iParam0);
	*uParam1 = func_264(iParam0);
	*uParam2 = func_802(iParam0);
}

void func_1178(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

void func_1179(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_681(*uParam0, -1);
		func_682(*uParam0, 0);
		func_683(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[*uParam0])))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(&(Global_36307[*uParam0]));
			}
			MAP::REMOVE_BLIP(Global_36307[*uParam0]);
		}
	}
	*uParam0 = -1;
}

int func_1180(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		return MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0]));
	}
	return 0;
}

void func_1181(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36307)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_36307[iParam0])))
		{
			MAP::_SET_BLIP_FLASH_STYLE(&(Global_36307[iParam0]), iParam1);
		}
	}
}

int func_1182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_1183(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

int func_1184()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

float func_1185(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_1186(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_1187(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1188(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_1189(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

float func_1190(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1191(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1320(bParam1);
	}
}

void func_1192(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1193(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1194(int iParam0)
{
	vector3 vVar0;

	if (!func_1210(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1195(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1210(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

bool func_1196(bool bParam0)
{
	return bParam0;
}

int func_1197()
{
	int iVar0;

	iVar0 = func_1014();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

int func_1198(bool bParam0)
{
	if (!func_756(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*bParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			return 1;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*bParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			return 1;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*bParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			return 1;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*bParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			return 1;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*bParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1199(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_543(bParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_544((375 + iVar29), 1);
		if (func_545(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_546(bParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

struct<14> func_1200(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1201(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1202(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_757(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1203(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1204(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1321(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1321(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1321(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

int func_1205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_385(18);
		case 2:
			return func_385(20);
		case 1:
			return func_385(19);
		default:
			break;
	}
	return 1;
}

int func_1206(int iParam0)
{
	return func_1322(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1207(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_24() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_385(31))
	{
		return;
	}
	iVar0 = func_1206(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1206(iParam0);
	if (func_1323(iParam0) && func_1324(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1325(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1326(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_613(func_1327(iParam0), 0);
					}
					func_1328(iParam0, iVar2, iVar3);
					func_1329(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1208(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1209(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1210(int iParam0, var uParam1)
{
	if (!func_1330(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1211()
{
	return func_1331(Global_40.f_12018);
}

int func_1212()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_1036(iVar1);
		if (func_631(bVar2, 1, 0) || func_1218(func_1217(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1213()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1332(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1214()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1223(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1215()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_1216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588 /* GXTEntry: "Cigarette Cards Famous Gunslingers" */;
		case 1:
			return -1021394391 /* GXTEntry: "Cigarette Cards Artists & Poets" */;
		case 2:
			return -987306668 /* GXTEntry: "Cigarette Cards Vistas of America" */;
		case 3:
			return -1028735103 /* GXTEntry: "Cigarette Cards Gems Of Beauty" */;
		case 4:
			return 515229791 /* GXTEntry: "Cigarette Cards Flora of America" */;
		case 5:
			return -1230863414 /* GXTEntry: "Cigarette Cards Stars of the Stage" */;
		case 6:
			return 232875659 /* GXTEntry: "Cigarette Cards Fauna of North America" */;
		case 7:
			return 1423129537 /* GXTEntry: "Cigarette Cards Marvels of Travel" */;
		case 8:
			return -435742319 /* GXTEntry: "Cigarette Cards The World\'s Champions" */;
		case 9:
			return -1854702679 /* GXTEntry: "Cigarette Cards Amazing Inventions" */;
		case 10:
			return 1265323898 /* GXTEntry: "Cigarette Cards Breeds of Horses" */;
		case 11:
			return -479775696 /* GXTEntry: "Cigarette Cards Prominent Americans" */;
		default:
			break;
	}
	return 0;
}

int func_1217(bool bParam0)
{
	switch (bParam0)
	{
		case -1230863414: /* GXTEntry: "Cigarette Cards Stars of the Stage" */
			return 1;
		case -1021394391: /* GXTEntry: "Cigarette Cards Artists & Poets" */
			return 8;
		case 232875659: /* GXTEntry: "Cigarette Cards Fauna of North America" */
			return 4;
		case -1028735103: /* GXTEntry: "Cigarette Cards Gems Of Beauty" */
			return 16;
		case 554799588: /* GXTEntry: "Cigarette Cards Famous Gunslingers" */
			return 32;
		case 1265323898: /* GXTEntry: "Cigarette Cards Breeds of Horses" */
			return 64;
		case -1854702679: /* GXTEntry: "Cigarette Cards Amazing Inventions" */
			return 128;
		case -987306668: /* GXTEntry: "Cigarette Cards Vistas of America" */
			return 256;
		case -479775696: /* GXTEntry: "Cigarette Cards Prominent Americans" */
			return 2;
		case 515229791: /* GXTEntry: "Cigarette Cards Flora of America" */
			return 512;
		case -435742319: /* GXTEntry: "Cigarette Cards The World\'s Champions" */
			return 1024;
		case 1423129537: /* GXTEntry: "Cigarette Cards Marvels of Travel" */
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1218(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_1222(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510: /* GXTEntry: "Little Egret Plume" */
			return "COL_EP_LITTLE_FOUND";
		case -164081697: /* GXTEntry: "Reddish Egret Plume" */
			return "COL_EP_REDDISH_FOUND";
		case -1161319399: /* GXTEntry: "Snowy Egret Plume" */
			return "COL_EP_SNOWY_FOUND";
		case 728781265: /* GXTEntry: "Lady of the Night Orchid" */
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712: /* GXTEntry: "Heron Plume" */
			return "COL_HF_FOUND";
		case 1794857344: /* GXTEntry: "Lady Slipper Orchid" */
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553: /* GXTEntry: "Moccasin Flower Orchid" */
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726: /* GXTEntry: "Acuna\'s Star Orchid" */
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094: /* GXTEntry: "Cigar Orchid" */
			return "COL_RO_CIGAR_FOUND";
		case 2093126853: /* GXTEntry: "Ghost Orchid" */
			return "COL_RO_GHOST_FOUND";
		case 2085530337: /* GXTEntry: "Spoonbill Plume" */
			return "COL_SF_FOUND";
		case -150591160: /* GXTEntry: "Night Scented Orchid" */
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289: /* GXTEntry: "Rat Tail Orchid" */
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882: /* GXTEntry: "Spider Orchid" */
			return "COL_RO_SPIDER_FOUND";
		case -1521783510: /* GXTEntry: "Clamshell Orchid" */
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242: /* GXTEntry: "Dragon\'s Mouth Orchid" */
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063: /* GXTEntry: "Queen\'s Orchid" */
			return "COL_RO_QUEENS_FOUND";
		case 927763737: /* GXTEntry: "Sparrow\'s Egg Orchid" */
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1223(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1224(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1225(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1226(bool bParam0)
{
	if (func_1333(bParam0) && func_631(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_1334(bParam0) && func_1335(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_1227(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_870(bParam0));
}

int func_1228(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

void func_1229(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1230(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_1231(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_1232(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_1233(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_1234(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_1235(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1236(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1237(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_902(iParam0, 1) /*3*/]);
}

void func_1238()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_1336();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_836(joaat("weapon_revolver_cattleman_john"));
		func_876(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_836(joaat("weapon_melee_knife_john"));
		func_876(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}
}

bool func_1239(bool bParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(bParam0);
}

int func_1240(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == &Global_1946804->f_57[func_902(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_959(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, joaat("base"), iParam2, bParam3));
	return iVar0;
}

int func_1241(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139 /* GXTEntry: "Legendary Beaver Tooth" */;
		case 1:
			return -649219937 /* GXTEntry: "Legendary Tatanka Bison Horn" */;
		case 2:
			return -858567048 /* GXTEntry: "Legendary Buck Antler" */;
		case 3:
			return -718162726 /* GXTEntry: "Legendary Cougar Fang" */;
		case 4:
			return -1284282080 /* GXTEntry: "Legendary Coyote Fang" */;
		case 5:
			return -725003445 /* GXTEntry: "Legendary Elk Antler" */;
		case 6:
			return -1445630104 /* GXTEntry: "Legendary Fox Claw" */;
		case 7:
			return 580970876 /* GXTEntry: "Lion\'s Paw" */;
		case 8:
			return 967601061 /* GXTEntry: "Legendary Moose Antler" */;
		case 9:
			return 1946030891 /* GXTEntry: "Legendary Panther Eye" */;
		case 10:
			return -1511404982 /* GXTEntry: "Legendary Pronghorn Horn" */;
		case 11:
			return -944465290 /* GXTEntry: "Legendary Ram Horn" */;
		case 12:
			return -1701098855 /* GXTEntry: "Legendary Wolf Heart" */;
		case 13:
			return 425319238 /* GXTEntry: "Legendary Alligator Tooth" */;
		case 14:
			return 363594903 /* GXTEntry: "Vintage Civil War Handcuffs" */;
		case 15:
			return -1217729597 /* GXTEntry: "Gold Jointed Bracelet" */;
		case 16:
			return -1540119664 /* GXTEntry: "Legendary Bear Claw" */;
		case 17:
			return 2100194981 /* GXTEntry: "Quartz Chunk" */;
		case 18:
			return 446659922 /* GXTEntry: "Silver Chain Bracelet" */;
		case 19:
			return -390982951 /* GXTEntry: "Legendary Boar Tusk" */;
		case 20:
			return -1018798851 /* GXTEntry: "Cobalt Petrified Wood" */;
		case 21:
			return -757567246 /* GXTEntry: "Gold Earring" */;
		case 22:
			return -2054602073 /* GXTEntry: "Legendary Bison Horn" */;
		case 23:
			return -378441099 /* GXTEntry: "Abalone Shell Fragment" */;
		case 24:
			return -585121677 /* GXTEntry: "Silver Earring" */;
		case 25:
			return 1566949660 /* GXTEntry: "Old Brass Compass" */;
		default:
			break;
	}
	return 0;
}

int func_1242(int iParam0)
{
	return func_1337(iParam0, -1);
}

void func_1243(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1338((Global_40.f_4283.f_325 + iParam0));
}

void func_1244(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1151())
	{
		func_920(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_920(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1245(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1246(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1248(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_1249(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1250()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1251(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1252()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1339(13);
	iVar1 = func_1340(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1253()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1254()
{
	if (func_32())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1255()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1256()
{
	return Global_1955565->f_3;
}

void func_1257(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1341(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), bParam2);
}

void func_1258(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1341(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), false);
	}
}

float func_1259(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1260()
{
	return func_1339(12) <= -99f;
}

bool func_1261()
{
	return func_1339(12) >= 99f;
}

int func_1262()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_751(bVar1) == -999503751)
		{
			if (func_1342() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1263(int iParam0)
{
	if (!func_1099(iParam0))
	{
		return 0;
	}
	if (func_1267(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_1264(int iParam0)
{
	if (!func_1099(iParam0))
	{
		return 0;
	}
	if (func_1267(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_1265(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1099(iParam0))
	{
		return;
	}
	if (!func_1264(iParam0))
	{
		func_1269(iParam0, 2);
		if (bParam2)
		{
			if (!func_25(0, 0, 1))
			{
				func_462(1, 4);
			}
		}
		if ((!func_1268() && !bParam1) && !func_25(0, 0, 1))
		{
			func_928(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_1343(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_1266(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975 /* GXTEntry: "Fancy Suit" */;
		case 6:
			return 1661121390 /* GXTEntry: "The Gunslinger" */;
		case 7:
			return 1164374808 /* GXTEntry: "Winter Outfit" */;
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return 624063935 /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return -1476781101 /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return 1560492757 /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return -769081407 /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210 /* GXTEntry: "Police Outfit" */;
		case 0:
			return 166243423 /* GXTEntry: "Custom Outfit" */;
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return 509954990 /* GXTEntry: "The Chevalier" */;
		case 30:
			return -445916744 /* GXTEntry: "The Heartlands" */;
		case 31:
			return -866249154 /* GXTEntry: "The Gambler" */;
		case 32:
			return -2077063704 /* GXTEntry: "The Earl" */;
		case 33:
			return 205207539 /* GXTEntry: "The McLaughlin" */;
		case 34:
			return -1033657275 /* GXTEntry: "The Josiah" */;
		case 35:
			return 1806002837 /* GXTEntry: "The Farrier" */;
		case 36:
			return 705324896 /* GXTEntry: "The Donegal" */;
		case 37:
			return -1541763703 /* GXTEntry: "The Bulldogger" */;
		case 38:
			return 387052410 /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return -361288914 /* GXTEntry: "The Scrapper" */;
		case 40:
			return -911054515 /* GXTEntry: "The Armadillo" */;
		case 41:
			return 1084200963 /* GXTEntry: "The Valentine" */;
		case 42:
			return 1847948074 /* GXTEntry: "The Vaquero" */;
		case 43:
			return -1212526764 /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return 1851440270 /* GXTEntry: "The Clairmont" */;
		case 45:
			return -2028985700 /* GXTEntry: "The Roscoe" */;
		case 46:
			return 1074435214 /* GXTEntry: "The Estate Boss" */;
		case 47:
			return -883015675 /* GXTEntry: "The Drover" */;
		case 48:
			return -1047155604 /* GXTEntry: "The Calumet" */;
		case 49:
			return 1123231221 /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return 1866989210 /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return 478183719 /* GXTEntry: "The Drifter" */;
		case 52:
			return -1698955868 /* GXTEntry: "The Leatherman" */;
		case 53:
			return -2029378634 /* GXTEntry: "The Cumberland" */;
		case 54:
			return 1339864416 /* GXTEntry: "The Millesani" */;
		case 55:
			return 890998115 /* GXTEntry: "The Faulkton" */;
		case 56:
			return -1376288999 /* GXTEntry: "The Dolton" */;
		case 57:
			return -1041123771 /* GXTEntry: "The Corson" */;
		case 58:
			return 1389254668 /* GXTEntry: "The Saint Denis" */;
		case 59:
			return -346112633 /* GXTEntry: "The Deauville" */;
		case 60:
			return 773309172 /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

bool func_1267(int iParam0, int iParam1)
{
	if (!func_1099(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_1268()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_1269(int iParam0, int iParam1)
{
	if (!func_1099(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_1270(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_1271(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1344(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_833(50);
			}
			else
			{
				func_833(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_833(51);
			}
			else
			{
				func_833(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1345(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_857();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_857();
			}
			break;
		case 3:
			func_833(24);
			if (bParam1)
			{
				if (!func_1345(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_857();
				}
			}
			break;
	}
}

void func_1272(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1346(0))
			{
				iVar0++;
			}
			if (func_1346(2))
			{
				iVar0++;
			}
			if (func_1346(4))
			{
				iVar0++;
			}
			if (!func_1347(16))
			{
				if (iVar0 == 1)
				{
					func_1348();
					func_613(456, 1);
					func_1349(16);
				}
			}
			if (!func_1347(32))
			{
				if (iVar0 >= 3)
				{
					func_1348();
					func_613(456, 1);
					func_1349(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1346(1))
			{
				iVar0++;
			}
			if (func_1346(3))
			{
				iVar0++;
			}
			if (func_1346(7))
			{
				iVar0++;
			}
			if (!func_1347(1))
			{
				if (iVar0 == 1)
				{
					func_1350();
					func_613(457, 1);
					func_1349(1);
				}
			}
			if (!func_1347(2))
			{
				if (iVar0 >= 3)
				{
					func_1350();
					func_613(457, 1);
					func_1349(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1346(5))
			{
				iVar0++;
			}
			if (func_1346(6))
			{
				iVar0++;
			}
			if (func_1346(8))
			{
				iVar0++;
			}
			if (!func_1347(4))
			{
				if (iVar0 == 1)
				{
					func_1351();
					func_613(455, 1);
					func_1349(4);
				}
			}
			if (!func_1347(8))
			{
				if (iVar0 >= 3)
				{
					func_1351();
					func_613(455, 1);
					func_1349(8);
				}
			}
			break;
	}
}

void func_1273(var uParam0)
{
	func_1105(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_1105(uParam0, 617531372);
	}
	else
	{
		func_1105(uParam0, 291123060);
	}
}

void func_1274(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1352(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_1275(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1276(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return 0;
	}
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		return 0;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return 1;
}

void func_1277(bool bParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_898(bParam0, 1, 1, -142743235, 1);
	iVar34 = func_1353(bParam0, &uVar18);
	func_1354(bParam0, &uVar18, &iVar34, 1);
	if (func_904() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1355(bParam0, &(Global_26795.f_627.f_121.f_20));
	func_900(bParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_898(&(uVar18[iVar36]), 1, 1, -142743235, 1);
		switch (func_751(&(uVar18[iVar36])))
		{
			case -2061583405:
				func_1355(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1355(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1355(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1355(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1355(&(uVar18[iVar36]), &(Global_26795.f_627.f_121.f_25));
				break;
		}
		func_900(&(uVar18[iVar36]), 1, 1);
		iVar0[iVar36] = func_902(func_901(&(uVar18[iVar36])), 1);
		iVar36++;
	}
	func_1356(&(Global_1946804->f_1616));
	func_905(&(Global_1946804->f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { func_906(8, 0) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { func_906(9, 0) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { func_906(0, 0) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { func_906(2, 0) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { func_906(3, 0) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { func_906(1, 0) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { func_906(5, 0) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { func_906(6, 0) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { func_906(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (&uVar18[iVar36] == func_907(&(iVar0[iVar36]), iVar35))
			{
				func_900(func_1357(iVar35), 1, 1);
				func_1358(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1304(Global_1946804->f_1616.f_1[iVar37 /*3*/], 2))
						{
						}
						else
						{
							func_908(Global_1946804->f_1616.f_1[iVar37 /*3*/], iVar37, 0);
							*(Global_1946804->f_1497.f_1[iVar37 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar37 /*3*/]) };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_1946804->f_1497.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_1098(bParam0))
	{
		if (!func_1359(8))
		{
			if (func_904() == -2125499975)
			{
				if (bVar17)
				{
					func_905(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1360(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1361(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1098(bParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_905(&(Global_1946804->f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804->f_1616 = 166243423; /* GXTEntry: "Custom Outfit" */
					func_1360(&(Global_1946804->f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1361(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_1098(bParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_1098(bParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_1362(Global_40.f_7729, 4096);
					func_1269(&Global_1905941, 4096);
					Global_40.f_7729 = &Global_1905941;
				}
				else
				{
					func_1363(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (&uVar18[iVar36] == &Global_26795.f_627.f_1.f_1.f_1[&iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_905(&(Global_1946804->f_1616), 1661121390 /* GXTEntry: "The Gunslinger" */, &uVar39, 0, 1, 0, -2125499975);
	func_905(&(Global_1946804->f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	*(Global_1946804->f_1616.f_1[8 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[8 /*3*/]) };
	*(Global_1946804->f_1616.f_1[9 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[9 /*3*/]) };
	*(Global_1946804->f_1616.f_1[0 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[0 /*3*/]) };
	*(Global_1946804->f_1616.f_1[2 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[2 /*3*/]) };
	*(Global_1946804->f_1616.f_1[3 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[3 /*3*/]) };
	*(Global_1946804->f_1616.f_1[1 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[1 /*3*/]) };
	*(Global_1946804->f_1616.f_1[5 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[5 /*3*/]) };
	*(Global_1946804->f_1616.f_1[6 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[6 /*3*/]) };
	*(Global_1946804->f_1616.f_1[7 /*3*/]) = { *(Global_26795.f_627.f_1.f_1.f_1[7 /*3*/]) };
	Global_26795.f_627 = Global_1946804->f_1616;
	Global_26795.f_627.f_1.f_1 = Global_1946804->f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		*(Global_26795.f_627.f_1.f_1.f_1[iVar36 /*3*/]) = { *(Global_1946804->f_1616.f_1[iVar36 /*3*/]) };
		iVar36++;
	}
}

struct<4> func_1278()
{
	struct<4> Var0;

	Var0 = { func_746(0) };
	return func_547(856287005, Var0, -218846335, 0);
}

int func_1279(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_756(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_754(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1364(&uVar7);
					if (func_548(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1280()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1365(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1365(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1365(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1365(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1365(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1365(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1281(var uParam0)
{
	return uParam0->f_1;
}

void func_1282(var uParam0)
{
	func_1366(uParam0);
	func_1368(uParam0, func_1367(-1346384396));
	func_1369(uParam0, func_1367(-712836614));
	func_1370(uParam0, func_1367(-1629133289));
	func_1371(uParam0, func_1367(1302066700));
	func_1372(uParam0, func_1367(599669344));
	func_1373(uParam0, func_1367(-1555511632));
}

void func_1283(struct<6> Param0)
{
	if (!func_1374(Param0.f_4, 1))
	{
	}
	if (!func_1374(Param0, 1))
	{
	}
	if (!func_1374(Param0.f_2, 1))
	{
	}
	if (!func_1374(Param0.f_5, 1))
	{
	}
	if (!func_1374(Param0.f_3, 1))
	{
	}
	if (!func_1374(Param0.f_1, 1))
	{
	}
}

int func_1284(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_388())
	{
		if (func_587())
		{
			bVar0 = false;
			if (!func_105(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_385(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1375();
				*iParam1 = func_1376();
				*iParam2 = func_1377();
				return 1;
			}
			else
			{
				*iParam0 = func_1378();
				*iParam1 = func_1379();
				*iParam2 = func_1380();
				return 1;
			}
		}
		else if (func_31())
		{
			if (!func_105(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*iParam0 = func_1381();
				*iParam1 = func_1382();
				*iParam2 = func_1383();
				return 1;
			}
			else
			{
				*iParam0 = func_1384();
				*iParam1 = func_1385();
				*iParam2 = func_1386();
				return 1;
			}
		}
	}
	else if (func_587())
	{
		*iParam0 = func_1387();
		*iParam1 = func_1388();
		*iParam2 = func_1389();
		return 1;
	}
	else if (func_31())
	{
		*iParam0 = func_1390();
		*iParam1 = func_1391();
		*iParam2 = func_1392();
		return 1;
	}
	return 0;
}

int func_1285(int iParam0)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

void func_1286(int iParam0, int iParam1)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = iParam1;
}

void func_1287(int iParam0, int iParam1)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = iParam1;
}

void func_1288(int iParam0, int iParam1)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = iParam1;
}

void func_1289(int iParam0, int iParam1)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = iParam1;
}

int func_1290(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_746(0) };
	if (func_1395(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1291(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1396(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_548(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1292(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 559905966;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return 1538827865 /* GXTEntry: "American Paint~n~Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return -1792561227 /* GXTEntry: "American Paint~n~Tobiano Coat" */;
		case 1792770814:
			return 1033678910 /* GXTEntry: "American Paint~n~Splashed White Coat" */;
		case -1963397600:
			return -1942141178 /* GXTEntry: "American Paint~n~Grey Overo Coat" */;
		case -1250098797:
			return 671599957 /* GXTEntry: "American Standardbred~n~Black Coat" */;
		case -318278790:
			return -1554935503 /* GXTEntry: "American Standardbred~n~Buckskin Coat" */;
		case 55096099:
			return 694610769 /* GXTEntry: "American Standardbred~n~Palomino Dapple Coat" */;
		case -458397856:
			return 1941463607 /* GXTEntry: "American Standardbred~n~Silver Tail Buckskin Coat" */;
		case -444610976:
			return -887316537 /* GXTEntry: "Andalusian~n~Dark Bay Coat" */;
		case 746627200:
			return 1762474047 /* GXTEntry: "Andalusian~n~Rose Grey Coat" */;
		case 705691988:
			return -828859553 /* GXTEntry: "Andalusian~n~Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return 1410237043 /* GXTEntry: "Appaloosa~n~Blanket Coat" */;
		case -1554827654:
			return -2026073756 /* GXTEntry: "Appaloosa~n~Leopard Blanket Coat" */;
		case 604357666:
			return 729407854;
		case -1029277326:
			return 2002245664 /* GXTEntry: "Appaloosa~n~Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1120227140 /* GXTEntry: "Appaloosa~n~Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return 1142681594 /* GXTEntry: "Arabian~n~Black Coat" */;
		case 1496579364:
			return 1214981718 /* GXTEntry: "Arabian~n~Red Chestnut Coat" */;
		case -1523757120:
			return -845373950;
		case -403470324:
			return -864588185 /* GXTEntry: "Arabian~n~Rose Grey Bay Coat" */;
		case 1576849913:
			return 1482814085;
		case joaat("a_c_horse_arabian_white"):
			return -1040918754 /* GXTEntry: "Arabian~n~White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 535545841 /* GXTEntry: "Ardennes~n~Bay Roan Coat" */;
		case -635239558:
			return 1686036388 /* GXTEntry: "Ardennes~n~Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return -621245377 /* GXTEntry: "Ardennes~n~Iron Grey Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return 2125477381;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 1808724704 /* GXTEntry: "Belgian~n~Mealy Chestnut Coat" */;
		case 1593035738:
			return -1745871311 /* GXTEntry: "Dutch Warmblood~n~Sooty Buckskin Coat" */;
		case 861505058:
			return -1366099125 /* GXTEntry: "Dutch Warmblood~n~Seal Brown Coat" */;
		case 687445866:
			return -1900776854 /* GXTEntry: "Dutch Warmblood~n~Chocolate Roan Coat" */;
		case 1705182311:
			return 1381855825 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Chestnut Coat" */;
		case -78273782:
			return -470894301 /* GXTEntry: "Hungarian Halfbred~n~Flaxen Piebald Tobiano Coat" */;
		case -819697512:
			return -58297715 /* GXTEntry: "Hungarian Halfbred~n~Dark Dapple Grey" */;
		case -247265944:
			return 919533729 /* GXTEntry: "Kentucky Saddler~n~Black Coat" */;
		case -1516219602:
			return -1158763155;
		case -1265030920:
			return 1112812928 /* GXTEntry: "Kentucky Saddler~n~Chestnut Pinto Coat" */;
		case 2024948086:
			return 753764318 /* GXTEntry: "Kentucky Saddler~n~Grey Coat" */;
		case 1696286663:
			return 2100045093 /* GXTEntry: "Kentucky Saddler~n~Silver Bay Coat" */;
		case -1342159303:
			return 1097965086 /* GXTEntry: "Missouri Fox Trotter~n~Amber Champagne" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return -2136667309 /* GXTEntry: "Missouri Fox Trotter~n~Silver Dapple Pinto Coat" */;
		case 2030804811:
			return -376463594 /* GXTEntry: "Morgan~n~Bay Coat" */;
		case 1230359523:
			return -1917318030 /* GXTEntry: "Morgan~n~Bay Roan Coat" */;
		case -1038436471:
			return 1631640006 /* GXTEntry: "Morgan~n~Flaxen Chestnut Coat" */;
		case -1063137731:
			return -1565311117;
		case 96930969:
			return 1714576673 /* GXTEntry: "Morgan~n~Palomino Coat" */;
		case -1180427609:
			return 210760725 /* GXTEntry: "Mustang~n~Tiger Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2051021144 /* GXTEntry: "Mustang~n~Wild Bay Coat" */;
		case 43825738:
			return 1924406350 /* GXTEntry: "Mustang~n~Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return -1990143531 /* GXTEntry: "Nokota~n~Blue Roan Coat" */;
		case -1261814606:
			return 1741899492 /* GXTEntry: "Nokota~n~White Roan Coat" */;
		case 107013696:
			return -1629575335 /* GXTEntry: "Nokota~n~Reverse Dapple Roan Coat" */;
		case 1066034872:
			return 1096294193 /* GXTEntry: "Shire~n~Dark Bay Coat" */;
		case 36009259:
			return -1162498792 /* GXTEntry: "Shire~n~Light Grey Coat" */;
		case -1599683008:
			return -212500005 /* GXTEntry: "Suffolk Punch~n~Sorrel Coat" */;
		case -1693870200:
			return -538557079 /* GXTEntry: "Suffolk Punch~n~Red Chestnut Coat" */;
		case 1072019803:
			return 171150858 /* GXTEntry: "Tennessee Walker~n~Black Rabicano Coat" */;
		case 1074477367:
			return 67538819 /* GXTEntry: "Tennessee Walker~n~Chestnut Coat" */;
		case -85890205:
			return -126472599 /* GXTEntry: "Tennessee Walker~n~Dapple Bay Coat" */;
		case 1048964673:
			return -1219957736;
		case -727455979:
			return -332060056 /* GXTEntry: "Tennessee Walker~n~Red Roan Coat" */;
		case -1667789645:
			return 1917500091 /* GXTEntry: "Tennessee Walker~n~Flaxen Roan Coat" */;
		case -1924405794:
			return -1043453945 /* GXTEntry: "Thoroughbred~n~Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return 1723487083 /* GXTEntry: "Thoroughbred~n~Dapple Grey Coat" */;
		case -526169133:
			return 2044230644 /* GXTEntry: "Thoroughbred~n~Brindle Coat" */;
		case 900144280:
			return 1680713143 /* GXTEntry: "Thoroughbred~n~Reverse Dapple Black Coat" */;
		case 1133837220:
			return 344528703 /* GXTEntry: "Turkoman~n~Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -1674873797 /* GXTEntry: "Turkoman~n~Gold Coat" */;
		case -1604180548:
			return 281852151 /* GXTEntry: "Turkoman~n~Silver Coat" */;
		case joaat("a_c_donkey_01"):
			return -285185056;
		case -1028075925:
			return -1692268955 /* GXTEntry: "Appaloosa~n~Black Snowflake Coat" */;
		case 84224102:
			return 2130706226;
		case -1896838685:
			return -1754375530 /* GXTEntry: "Hungarian Halfbred~n~Liver Chestnut Coat" */;
		case -420599285:
			return -71211764 /* GXTEntry: "Missouri Fox Trotter~n~Sable Champagne Coat" */;
		case 478986344:
			return -1390353518 /* GXTEntry: "Mustang~n~Golden Dun Coat" */;
		case 446670976:
			return 330935532 /* GXTEntry: "Tennessee Walker~n~Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -935042458 /* GXTEntry: "Shire~n~Raven Black Coat" */;
		case 549900435:
			return -41062704;
		case -2063289686:
			return 887669186;
		case 917402668:
			return 2102774612;
		case -914712122:
			return -2011111190;
		case -598917269:
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_1293(int iParam0, bool bParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_756(bParam1, 0))
	{
		return 0;
	}
	if (!func_1397(bParam1))
	{
		return 0;
	}
	if (func_1290(iParam0))
	{
		return 0;
	}
	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_746(0) };
	Var1.f_4 = iVar0;
	if (!func_1096(bParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

int func_1294(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_756(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_754(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1364(&Var7);
					if (func_1096(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							func_1297(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1295(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1310(1) < iParam0)
	{
		iParam0 = func_1310(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_464(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

int func_1296(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_757(bParam6), &uParam0, iParam4, &Var0))
	{
		return 0;
	}
	if (!func_753(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1297(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_549(0))
	{
		return func_1398(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_753(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_757(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1298(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_758(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_549(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_757(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_1299(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_24() == -1)
	{
		if (func_822(43))
		{
			if (func_831(bParam0, 412399755))
			{
				func_1073(-1791518714);
				if (func_1074() == 0)
				{
					func_462(0, 10);
					iVar0 = func_1399(bParam0, iParam1, 1);
					if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
					{
						if (func_1076(bParam0) < func_1077(bParam0))
						{
							func_828(43, bParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_822(44))
		{
			if (func_831(bParam0, 709057512))
			{
				func_1073(-2087881550);
				if (func_1074() == 1)
				{
					func_462(0, 10);
					iVar0 = func_1399(bParam0, iParam1, 2);
					if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
					{
						if (func_1076(bParam0) < func_1077(bParam0))
						{
							func_828(43, bParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_822(45))
		{
			if (func_831(bParam0, -1478961327))
			{
				func_1073(1908068621);
				if (func_1074() == 2)
				{
					func_462(0, 10);
					iVar0 = func_1399(bParam0, iParam1, 4);
					if (((bParam0 == 2116770557 || bParam0 == -651064726) || bParam0 == -404270094) || bParam0 == 2093126853)
					{
						if (func_1076(bParam0) < func_1077(bParam0))
						{
							func_828(43, bParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_822(46))
		{
			if (func_831(bParam0, -1238404098))
			{
				func_1073(1611247019);
				if (func_1074() == 3)
				{
					func_462(0, 10);
					iVar0 = func_1399(bParam0, iParam1, 8);
					if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
					{
						if (func_1076(bParam0) < func_1077(bParam0))
						{
							func_828(43, bParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_822(47))
		{
			if (func_831(bParam0, 1160548794))
			{
				func_1073(1319635688);
				if (func_1074() == 4)
				{
					func_462(0, 10);
					iVar0 = func_1399(bParam0, iParam1, 16);
					if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
					{
						if (func_1076(bParam0) < func_1077(bParam0))
						{
							func_828(43, bParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1300(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (bParam0 == &Global_1946804->f_2657[*iParam1])
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_1301(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1400(iParam1);
	func_1401(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1402(&(uParam0->f_26), iVar1);
		if (func_1403(uParam0->f_26, &iVar0))
		{
			func_1404(iVar0, iVar1);
		}
	}
}

int func_1302(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_543(bParam0, 0, 0) };
	Var5 = { func_547(bParam0, Var0, Var0.f_4, 0) };
	if (func_754(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_757(0), &Var5, iParam1);
	return 1;
}

void func_1303(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

bool func_1304(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1305(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_1306(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
		}
		if (bParam2)
		{
			func_1168(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1168(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == joaat("custom"))
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = joaat("base");
		if (bParam3)
		{
			func_1168(iVar2, iVar0);
		}
	}
}

bool func_1307(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1308(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_1309(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*((*uParam2)[iVar47 /*2*/]) = { *(Var0.f_4[iVar47 /*2*/]) };
		iVar47++;
	}
	if (bParam4)
	{
		func_1405(bParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

int func_1310(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

char* func_1311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

void func_1312(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1406(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1406(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1407(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1313(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1408(uParam0, 1))
	{
		func_1409(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_1314(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_904();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1315(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, uParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, uParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1316(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1317(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_24() == -1)
	{
		func_908(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1410(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1318(int iParam0, int iParam1)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

void func_1319(int iParam0, bool bParam1, int iParam2)
{
	func_1360(&(Global_1946804->f_1378), iParam0);
	func_1361(2, iParam0, 6);
	if (bParam1)
	{
		func_1130(0, 1);
	}
}

void func_1320(bool bParam0)
{
	func_1411(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

float func_1321(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1203(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1322(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1412(iVar6) - func_1412(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1322(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_1323(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1324(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1325(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1322(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1412(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1412(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_1326(int iParam0)
{
	int iVar0;

	if (func_1413(iParam0, &iVar0))
	{
		return func_1412(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1414())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1414())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1414())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_1327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_1328(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_1415(iParam0));
	sVar4 = func_1417(func_1416(iVar3, iParam2));
	sVar6 = func_1418(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_1419(iParam0));
	iVar8 = func_1420(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1421(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_1045(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_1422(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1329(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1330(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_1332(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_1333(bool bParam0)
{
	switch (bParam0)
	{
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 1;
		case -843795569: /* GXTEntry: "Perfect Woodpecker Carcass" */
			return 1;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return 1;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return 1;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return 1;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return 1;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 1;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return 1;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return 1;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 1;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1334(bool bParam0)
{
	switch (bParam0)
	{
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 1;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 1;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1335(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1423(&iVar0, 0, iVar95, &Var1) && !func_1423(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1424(iVar0, &Var1);
			if (func_756(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_1336()
{
	var uVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	func_1425(Global_35, &uVar0);
	Var30 = { func_746(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_1426(0);
	func_1427(7);
	func_1428(-1623728698 /* GXTEntry: "Bandana" */, 1, 1, 0);
	if (func_904() == 1160113249)
	{
		func_1428(-763730846 /* GXTEntry: "John\'s Classic Hat" */, 1, 1, 1);
		func_1428(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1429(Global_35, &uVar0);
}

int func_1337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_757(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_266(&uVar6, iVar0);
	func_267(&uVar6, iVar1);
	func_268(&uVar6, iVar2);
	func_269(&uVar6, iVar3);
	func_270(&uVar6, iVar4);
	func_271(&uVar6, iVar5);
	return uVar6;
}

void func_1338(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_464(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

float func_1339(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1340(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1341(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_1112(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1112(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_1342()
{
	return Global_1946804->f_1497;
}

char* func_1343(int iParam0)
{
	bool bVar0;

	bVar0 = func_1266(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1227(bVar0);
}

int func_1344(bool bParam0)
{
	int iVar0;

	if (func_1430(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_1431(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_1432(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_1433(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_1345(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_631(func_1434(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_1346(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_631(func_1435(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_1347(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1348()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_876(1654063339, 1, 752097756);
	iVar0 = func_1206(1);
	func_1328(1, iVar0, 0);
}

void func_1349(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1350()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_876(1623931083, 1, 752097756);
	iVar0 = func_1206(2);
	func_1328(2, iVar0, 0);
}

void func_1351()
{
	int iVar0;

	if (func_24() != -1)
	{
		return;
	}
	func_876(-1845241476, 1, 752097756);
	iVar0 = func_1206(0);
	func_1328(0, iVar0, 0);
}

int func_1352(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1353(bool bParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_1436(bParam0, func_904()))
	{
		return 0;
	}
	Var1 = func_1132(func_904());
	Var1.f_1 = bParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, joaat("component")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_1354(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	iVar19 = func_1132(func_904());
	Var20 = { func_1200(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1202(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1089(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (bParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_1098(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1305(&(Global_1946804->f_964), iVar19, Var5.f_4, joaat("component"), 1, uParam1[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = uParam1[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_1090(iVar0);
	return 1;
}

void func_1355(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	bVar2 = bParam0;
	if (!func_1300(bVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26795.f_627.f_121.f_19)
	{
		if (bVar2 == &Global_26795.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26795.f_627.f_121.f_19 == 1)
	{
		Global_26795.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26795.f_627.f_121[0] = 0;
		return;
	}
	Global_26795.f_627.f_121.f_19 = (Global_26795.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26795.f_627.f_121[iVar0] = &Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19];
	Global_26795.f_627.f_121[Global_26795.f_627.f_121.f_19] = 0;
}

void func_1356(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

bool func_1357(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1437();
	}
	if (func_24() == -1)
	{
		return (Global_26795.f_26[iParam0 /*120*/])->f_1;
	}
	return (Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1;
}

void func_1358(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_24() == -1)
	{
		Global_26795.f_26[iParam0 /*120*/] = 0;
		(Global_26795.f_26[iParam0 /*120*/])->f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
			func_908(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36637.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	(Global_36637.f_45.f_350.f_26[iParam0 /*120*/])->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1946804->f_57[iVar0 /*11*/];
		func_1410(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_1359(int iParam0)
{
	return (Global_26795.f_774 && iParam0) != 0;
}

void func_1360(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_908(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1410(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1361(int iParam0, int iParam1, int iParam2)
{
	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1362(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1099(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (&Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_1363(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	bVar0 = func_1266(iParam1);
	if (iParam4 != 0)
	{
		bVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		bVar0 = func_1357(iParam1);
	}
	if ((bParam3 && func_1267(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1436(bVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_1362(Global_40.f_7729, 4096);
		func_1269(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_745(iParam0);
	}
	func_1438();
	if (!func_1439(iParam1))
	{
		func_1441(bVar0, iParam0, func_1440(iParam1), 1, 0, 1);
	}
	func_1442(iParam0);
	return 1;
}

void func_1364(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_1365(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_1443(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1278() };
	*iParam1 = func_1444(Var0, iParam0, 0);
	if (!func_756(*iParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1366(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1367(int iParam0)
{
	if (func_587())
	{
		switch (iParam0)
		{
			case -1346384396:
				return 1351319737 /* GXTEntry: "Color Combination One" */;
			case -712836614:
				return 1832924306 /* GXTEntry: "Chestnut & Charcoal" */;
			case -1629133289:
				return -960265739 /* GXTEntry: "Maple \'Duck Bill\' Horn" */;
			case 1302066700:
				return 1484641439 /* GXTEntry: "Belled Oxbow Stirrup" */;
			case 599669344:
				return -1742648548 /* GXTEntry: "Weathered Russet" */;
			case -1555511632:
				return -288915854 /* GXTEntry: "Weathered Dark Oak" */;
		}
	}
	else if (func_31())
	{
		switch (iParam0)
		{
			case -1346384396:
				return -5120398 /* GXTEntry: "Color Combination Two" */;
			case -712836614:
				return 540384851 /* GXTEntry: "Hickory" */;
			case -1629133289:
				return 859626502 /* GXTEntry: "Maple \'Torquemada\' Horn" */;
			case 1302066700:
				return -415239647 /* GXTEntry: "Slim-line Iron Stirrup" */;
			case 599669344:
				return 1436607742 /* GXTEntry: "Weathered Chestnut" */;
			case -1555511632:
				return 691935155 /* GXTEntry: "Chestnut" */;
		}
	}
	return 0;
}

void func_1368(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_1369(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_1370(var uParam0, var uParam1)
{
	uParam0->f_2 = uParam1;
}

void func_1371(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_1372(var uParam0, var uParam1)
{
	uParam0->f_4 = uParam1;
}

void func_1373(var uParam0, var uParam1)
{
	uParam0->f_5 = uParam1;
}

int func_1374(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (!func_1445(bParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return 0;
	}
	Var10 = { func_1278() };
	Var14 = { func_547(bParam0, Var10, iVar9, 0) };
	if (func_1297(Var14, iParam1))
	{
		if (func_1446(bParam0))
		{
			if (func_1365(325139909, &bVar18))
			{
				if (func_1374(bVar18, 0))
				{
				}
			}
		}
		else if (func_1447(bParam0))
		{
			if (func_1365(325139909, &bVar19))
			{
				if (func_1374(bVar19, 0))
				{
				}
			}
			if (func_1365(986998820, &bVar20))
			{
				if (func_1374(bVar20, 0))
				{
				}
			}
			bVar21 = func_1448(bParam0);
			if (func_756(bVar21, 0))
			{
				if (func_1374(bVar21, 1))
				{
				}
			}
		}
		func_1449();
		return 1;
	}
	return 0;
}

int func_1375()
{
	return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
}

int func_1376()
{
	return 446670976;
}

int func_1377()
{
	return 1;
}

int func_1378()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_1379()
{
	return 1074477367;
}

int func_1380()
{
	return 1;
}

int func_1381()
{
	return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
}

int func_1382()
{
	return -2063289686;
}

int func_1383()
{
	return 2;
}

int func_1384()
{
	return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
}

int func_1385()
{
	return 1074477367;
}

int func_1386()
{
	return 1;
}

int func_1387()
{
	return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
}

int func_1388()
{
	return 2030804811;
}

int func_1389()
{
	return 1;
}

int func_1390()
{
	return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
}

int func_1391()
{
	return 2024948086;
}

int func_1392()
{
	return 1;
}

int func_1393(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1395(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_757(bParam2), uParam0, iParam1);
}

int func_1396(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1290(iParam0))
	{
		return 0;
	}
	iVar0 = func_1394(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_746(0) };
	if (!func_1450(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1451(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

bool func_1397(bool bParam0)
{
	return func_747(bParam0) == joaat("horse");
}

int func_1398(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_753(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_747(Var1.f_4);
	if (iVar15 == joaat("horse"))
	{
		Var16 = { func_1452(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1453(joaat("update"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("clothing"))
	{
		Var44 = { func_1454(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1455(joaat("update"), &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1456(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1457(joaat("update"), &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1399(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = 281887510; /* GXTEntry: "Little Egret Plume" */
			bVar10 = -164081697; /* GXTEntry: "Reddish Egret Plume" */
			bVar11 = -1161319399; /* GXTEntry: "Snowy Egret Plume" */
			bVar12 = 728781265; /* GXTEntry: "Lady of the Night Orchid" */
			break;
		case 2:
			bVar9 = -222563712; /* GXTEntry: "Heron Plume" */
			bVar10 = 1794857344; /* GXTEntry: "Lady Slipper Orchid" */
			bVar11 = 1952409553; /* GXTEntry: "Moccasin Flower Orchid" */
			break;
		case 4:
			bVar9 = 2116770557;
			bVar10 = -651064726; /* GXTEntry: "Acuna\'s Star Orchid" */
			bVar11 = -404270094; /* GXTEntry: "Cigar Orchid" */
			bVar12 = 2093126853; /* GXTEntry: "Ghost Orchid" */
			break;
		case 8:
			bVar9 = 2085530337; /* GXTEntry: "Spoonbill Plume" */
			bVar10 = -150591160; /* GXTEntry: "Night Scented Orchid" */
			bVar11 = -323969289; /* GXTEntry: "Rat Tail Orchid" */
			bVar12 = 1504361882; /* GXTEntry: "Spider Orchid" */
			break;
		case 16:
			bVar9 = -1521783510; /* GXTEntry: "Clamshell Orchid" */
			bVar10 = 1714875242; /* GXTEntry: "Dragon\'s Mouth Orchid" */
			bVar11 = 1019229063; /* GXTEntry: "Queen\'s Orchid" */
			bVar12 = 927763737; /* GXTEntry: "Sparrow\'s Egg Orchid" */
			break;
	}
	iVar1 = func_1076(bVar9);
	iVar2 = func_1076(bVar10);
	iVar3 = func_1076(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1076(bVar12);
	}
	iVar5 = func_1077(bVar9);
	iVar6 = func_1077(bVar10);
	iVar7 = func_1077(bVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1077(bVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1400(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1401(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1402(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1458(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_1403(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return 1;
		}
		*iParam1++;
	}
	return 0;
}

void func_1404(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1405(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = uParam2[iVar0 /*2*/];
		(Var21[iVar0 /*2*/])->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0 /*2*/] == Var19)
							{
								(Var21[iVar0 /*2*/])->f_1 = ((Var21[iVar0 /*2*/])->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if ((Var21[iVar0 /*2*/])->f_1 != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat(((*uParam2)[iVar0 /*2*/])->f_1) * ((Var21[iVar0 /*2*/])->f_1 / 1f)));
		}
		iVar0++;
	}
}

bool func_1406(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1407(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1408(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1409(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1410(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1411(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1412(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

int func_1413(int iParam0, int iParam1)
{
	return 0;
}

int func_1414()
{
	return 0;
}

int func_1415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_757(0), -1845241476, 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_757(0), 1654063339, 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_757(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_1416(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_1417(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1418(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_1419(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_1420(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_1421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_1422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

int func_1423(int iParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	struct<4> Var1;
	var uVar5;

	if (func_1459(iParam1) && !func_1460(iParam1))
	{
		uVar0 = func_1461(iParam1);
	}
	else
	{
		return 0;
	}
	func_1462(uParam3);
	uVar5 = func_1463(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, uVar0, uVar5, 0))
	{
		return 0;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return 1;
}

void func_1424(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1464(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1465(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1425(int iParam0, var uParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(uParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_412(bVar31))
		{
			(*uParam1)[iVar30] = bVar31;
		}
		else
		{
			(*uParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_1426(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_756(bVar1, 0))
		{
			func_900(bVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_1427(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_24() == -1)
	{
		func_1466(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar2 = &Global_1946804->f_2657[iVar0];
		if (func_751(bVar2) != -999503751)
		{
			func_1467(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_1302(bVar2, 0))
		{
			func_677(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1428(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1468(bParam0))
	{
		return;
	}
	iVar0 = func_751(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1469(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1469(bParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1469(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1469(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1469(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1469(bParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_1470(0))
	{
		func_1471(bParam0, 1);
		if (func_904() == 1160113249)
		{
			func_1471(func_1470(-2125499975), 0);
		}
		else
		{
			func_1471(func_1470(1160113249), 0);
		}
	}
	func_1129();
	if (func_1472(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_757(0), bParam0, 0);
	}
	func_677(bParam0, bParam3);
	if (bParam2)
	{
		func_1130(0, 0);
	}
}

void func_1429(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1[iVar0], 0, 0))
			{
				if (func_413(uParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_1430(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (func_831(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_1431(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (func_831(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_1432(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (func_831(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_1433(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (func_831(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_1434(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1473(iParam0);
		case 1:
			return func_1474(iParam0);
		case 2:
			return func_1475(iParam0);
		case 3:
			return func_1476(iParam0);
	}
	return 0;
}

int func_1435(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1477(iParam0);
		case 1:
			return func_1478(iParam0);
		case 2:
			return func_1479(iParam0);
		case 3:
			return func_1480(iParam0);
		case 4:
			return func_1481(iParam0);
		case 5:
			return func_1482(iParam0);
		case 6:
			return func_1483(iParam0);
		case 7:
			return func_1484(iParam0);
		case 8:
			return func_1485(iParam0);
	}
	return 0;
}

bool func_1436(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1132(iParam1);
	func_1305(&(Global_1946804->f_964), iVar0, bParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964));
}

int func_1437()
{
	if (func_24() == -1)
	{
		return Global_26795.f_776;
	}
	return Global_36637.f_45.f_350.f_1011;
}

void func_1438()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
	{
		return;
	}
	if (!func_959(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804->f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1486(), sVar0, 8f, -8f, -1, 67108880, 0, 0, 0, 0, "Satchel_and_ik_hand_helpers_filter", 0);
	func_1173(1);
	STREAMING::REMOVE_ANIM_DICT(func_1486());
}

int func_1439(int iParam0)
{
	return 0;
}

int func_1440(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1441(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	bVar1 = false;
	bVar2 = bParam0;
	iVar3 = -1;
	iVar4 = func_1098(bParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_24() != -1)
	{
		return;
	}
	func_1164();
	if (bParam5)
	{
		if (!func_1487(&(Global_1946804->f_1378), &bVar0, bVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_959(32768) && &Global_1946804->f_1378.f_1[10 /*3*/] != &Global_1946804->f_57[10 /*11*/])
	{
		func_960();
	}
	func_1488(iVar3, 1, 1, 1, 1, 1);
	func_912(31, 0, 0, 0, 0);
	func_962(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		bVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_912(2, bVar1, 2, 0, 0);
		}
		else
		{
			func_912(2, bVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_678(&(Global_1946804->f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_1442(int iParam0)
{
	PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

int func_1443(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_751(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1489(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_1444(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1296(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1445(bool bParam0, bool bParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_751(bParam1);
		iVar5 = func_1489(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iVar1, uVar2))
				{
					*uParam4 = { func_543(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_547(bParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return 1;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_757(0);
			Var37 = { func_543(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_547(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_751(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iVar1, uVar2))
							{
								if (func_1296(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return 1;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return 0;
}

int func_1446(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
	}
	if (func_831(bParam0, 162787671))
	{
		return 1;
	}
	return 0;
}

int func_1447(bool bParam0)
{
	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	if (func_831(bParam0, -251515357))
	{
		return 1;
	}
	return 0;
}

int func_1448(bool bParam0)
{
	switch (bParam0)
	{
		case -1249891745: /* GXTEntry: "Alligator Ranch Cutter Saddle" */
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case -769274720: /* GXTEntry: "Boar Mother Hubbard Saddle" */
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case 893370428: /* GXTEntry: "Cougar McClelland Saddle" */
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case 736792276: /* GXTEntry: "Beaver Roping Saddle" */
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case -949205287: /* GXTEntry: "Panther Trail Saddle" */
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_1449()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { func_543(856287005, 0, 0) };
	Var5 = { func_547(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_751(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		bVar14 = func_1444(Var5, -415648720, 0);
	}
	if (!func_756(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1489(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = func_1444(Var5, iVar11, 0);
			if (!func_756(bVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (func_1447(bVar14) || func_1446(bVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == 986998820)
						{
							if (func_1447(bVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == -1189569496)
								{
									if (!func_1447(bVar14) && func_1490(bVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1491(iVar11, &Var16, 1))
									{
										if (!func_1297(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}

int func_1450(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_757(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1451(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_757(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

struct<28> func_1452(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_757(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1456(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1453(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1492(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1492(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1492(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1454(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_757(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1456(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1455(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1492(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1492(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1492(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<16> func_1456(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1457(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1492(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1492(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1492(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1458(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1493(&(uParam0->f_3));
}

int func_1459(int iParam0)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_1460(int iParam0)
{
	int iVar0;

	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1459(iParam0))
	{
		return 0;
	}
	iVar0 = func_1461(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1461(int iParam0)
{
	iParam0 = func_1393(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_1462(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_1464(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1465(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_1466(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_1200(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1202(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_1090(iVar0);
	}
}

void func_1467(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1494(iParam2, *uParam0);
	func_1495(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_1468(int iParam0)
{
	if (func_24() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1469(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1300(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1302(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = bVar1;
	if (func_751(bParam0) != -999503751)
	{
		func_1467(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1470(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_904();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

int func_1471(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_543(bParam0, 0, 0) };
	Var5 = { func_547(bParam0, Var0, Var0.f_4, 0) };
	if (func_754(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_757(0), &Var5);
	return 1;
}

bool func_1472(int iParam0)
{
	return func_1496(func_1022(iParam0));
}

int func_1473(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 2:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 3:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 4:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 5:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 6:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 7:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 8:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		default:
			break;
	}
	return 0;
}

int func_1474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 3:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 4:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 5:
			return 2146082234;
		case 6:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 7:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 8:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		default:
			break;
	}
	return 0;
}

int func_1475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 1:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 4:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 5:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 6:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 7:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 8:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		case 1:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		case 2:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		case 4:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		case 5:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		case 6:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		case 7:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		case 8:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058 /* GXTEntry: "Bandit Bandolier" */;
		case 1:
			return -77597297 /* GXTEntry: "Bandit Gun Belt" */;
		case 2:
			return 624387589 /* GXTEntry: "Bandit Holster" */;
		case 3:
			return 1066104444 /* GXTEntry: "Bandit Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667 /* GXTEntry: "Explorer Bandolier" */;
		case 1:
			return 1289620458 /* GXTEntry: "Explorer Gun Belt" */;
		case 2:
			return 1398329674 /* GXTEntry: "Explorer Holster" */;
		case 3:
			return -567070698 /* GXTEntry: "Explorer Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1479(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240 /* GXTEntry: "Gambler Bandolier" */;
		case 1:
			return 351104126 /* GXTEntry: "Gambler Gun Belt" */;
		case 2:
			return -35737408 /* GXTEntry: "Gambler Holster" */;
		case 3:
			return 797308288 /* GXTEntry: "Gambler Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366 /* GXTEntry: "Herbalist Bandolier" */;
		case 1:
			return -991258198 /* GXTEntry: "Herbalist Gun Belt" */;
		case 2:
			return 651323163 /* GXTEntry: "Herbalist Holster" */;
		case 3:
			return -1669506545 /* GXTEntry: "Herbalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435 /* GXTEntry: "Master Hunter Bandolier" */;
		case 1:
			return -446539844 /* GXTEntry: "Master Hunter Gun Belt" */;
		case 2:
			return 343794650 /* GXTEntry: "Master Hunter Holster" */;
		case 3:
			return -1011624341 /* GXTEntry: "Master Hunter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1482(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430 /* GXTEntry: "Horseman Bandolier" */;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089 /* GXTEntry: "Horseman Holster" */;
		case 3:
			return 516134254 /* GXTEntry: "Horseman Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210 /* GXTEntry: "Sharpshooter Bandolier" */;
		case 1:
			return 330185476 /* GXTEntry: "Sharpshooter Gun Belt" */;
		case 2:
			return -2120749726 /* GXTEntry: "Sharpshooter Holster" */;
		case 3:
			return -940514956 /* GXTEntry: "Sharpshooter Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048 /* GXTEntry: "Survivalist Bandolier" */;
		case 1:
			return -1208917184 /* GXTEntry: "Survivalist Gun Belt" */;
		case 2:
			return -1749072364 /* GXTEntry: "Survivalist Holster" */;
		case 3:
			return 2030473481 /* GXTEntry: "Survivalist Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

int func_1485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544 /* GXTEntry: "Weapons Expert Bandolier" */;
		case 1:
			return -12904227 /* GXTEntry: "Weapons Expert Gun Belt" */;
		case 2:
			return -583780175 /* GXTEntry: "Weapons Expert Holster" */;
		case 3:
			return 2084389834 /* GXTEntry: "Weapons Expert Off-Hand Holster" */;
		default:
			break;
	}
	return 0;
}

char* func_1486()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_1487(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1497(uParam0, iParam3, bParam2) && !func_905(uParam0, bParam2, bParam1, 0, bParam4, 0, 0))
	{
		return 0;
	}
	iVar0 = 10;
	if (func_959(32768))
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/]))
		{
			func_1166(1108822547);
		}
		else
		{
			func_1498(1108822547);
		}
	}
	func_1170(uParam0, 0, 0);
	func_1303(iParam5);
	return 1;
}

void func_1488(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1437()) || bParam5)
		{
			func_1499();
		}
	}
	if (func_24() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = &Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1500(Global_1946804->f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1266(Global_40.f_7729);
				Global_1946804->f_1378 = func_1266(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1440(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_1319(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1130(0, 1);
	}
	func_1303(0);
}

int func_1489(bool bParam0)
{
	int iVar0;

	if (!func_756(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_751(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_1490(bool bParam0)
{
	if ((((bParam0 == 263080063 || bParam0 == -34331381) || bParam0 == -993578318) || bParam0 == 579268144) || bParam0 == 1104489688)
	{
		return 1;
	}
	return 0;
}

int func_1491(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return 0;
	}
	Var2 = { func_1200(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1201(&Var2, func_1278());
	if (func_1202(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_1089(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_756(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1490(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_1090(iVar0);
						return 1;
					}
				}
			}
			iVar30++;
		}
		func_1090(iVar0);
	}
	return 0;
}

void func_1492(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1501(iParam0, iParam1);
}

void func_1493(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1494(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1495(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1458(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_902(func_901(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1502(uParam0);
	}
}

bool func_1496(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

int func_1497(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	if (bParam2 != 0 && func_1357(iParam1) != bParam2)
	{
		return 0;
	}
	if (func_1318(2, iParam1))
	{
		func_1503(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_1498(int iParam0)
{
	func_970(iParam0, 8, 6);
}

void func_1499()
{
	int iVar0;

	Global_1946804->f_1497 = Global_1946804->f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1497.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1500(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1132(0);
	iVar1 = 0;
	func_1305(&(Global_1946804->f_964), iVar0, bParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804->f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804->f_964)))
	{
		return 0;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804->f_964), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

void func_1501(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

void func_1502(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1504(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1503(var uParam0, int iParam1)
{
	int iVar0;

	if (func_24() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		*uParam0 = (Global_26795.f_26[iParam1 /*120*/])->f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_26795.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	*uParam0 = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *((Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_1504(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	uVar0 = func_1505(func_904());
	if (*uParam0)
	{
		func_1493(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(uVar0, uParam1, 0, func_24() != -1, uParam2);
	*uParam0 = 1;
}

int func_1505(int iParam0)
{
	if (func_24() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

