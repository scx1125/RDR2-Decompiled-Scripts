#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<13> Local_19[5];
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	bool bLocal_92 = false;
	var uLocal_93[1] = { 0 };
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	iLocal_87 = 5;
	iLocal_15 = vScriptParam_0.x;
	iLocal_16 = vScriptParam_0.y;
	iLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return 1;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	int iVar1;

	switch (iLocal_18)
	{
		case 0:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_85 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_16);
			if (!func_12(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			bLocal_92 = PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x32A1E3B83D501096(iLocal_85));
			if (!bLocal_92)
			{
				TASK::_0xE7BBC4E56B989449(iLocal_16, &uLocal_93, 1);
				if (!TASK::_DOES_SCENARIO_POINT_EXIST(&(uLocal_93[0])))
				{
					iLocal_18 = 7;
					return;
				}
			}
			iVar0 = BUILTIN::FLOOR(TASK::_0x6718F40313A2B5A6(iLocal_16));
			if (!func_13(iVar0, iLocal_17))
			{
				iLocal_18 = 7;
				return;
			}
			iLocal_18 = 1;
			break;
		case 1:
			if (!func_12(Global_34, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_12(iLocal_85, 0))
			{
				iLocal_18 = 7;
				return;
			}
			if (!PED::_0x9C54041BB66BCF9E(iLocal_85, iLocal_16))
			{
				iLocal_18 = 7;
				return;
			}
			if (func_14(Global_34, iLocal_85, 1) > 1225f)
			{
				return;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_34) < 9.5f)
			{
				iLocal_18 = 2;
				return;
			}
			else
			{
				iLocal_18 = 7;
				return;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if ((Local_19[iVar1 /*13*/])->f_1 == 0)
				{
					iLocal_87 = iVar1;
				}
				else
				{
					if (!TASK::_DOES_SCENARIO_POINT_EXIST(&(Local_19[iVar1 /*13*/])))
					{
						if (iVar1 > 0)
						{
							(Local_19[iVar1 /*13*/])->f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(&(Local_19[(iVar1 - 1) /*13*/]), 1), TASK::_GET_SCENARIO_POINT_HEADING(&(Local_19[(iVar1 - 1) /*13*/]), 1), (Local_19[iVar1 /*13*/])->f_4) };
							(Local_19[iVar1 /*13*/])->f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(&(Local_19[(iVar1 - 1) /*13*/]), 1) + (Local_19[iVar1 /*13*/])->f_10);
						}
						else
						{
							(Local_19[iVar1 /*13*/])->f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_16, 1), TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, 1), (Local_19[iVar1 /*13*/])->f_4) };
							(Local_19[iVar1 /*13*/])->f_11 = (TASK::_GET_SCENARIO_POINT_HEADING(iLocal_16, 1) + (Local_19[iVar1 /*13*/])->f_10);
						}
						Local_19[iVar1 /*13*/] = TASK::CREATE_SCENARIO_POINT((Local_19[iVar1 /*13*/])->f_1, (Local_19[iVar1 /*13*/])->f_7, (Local_19[iVar1 /*13*/])->f_11, 0, 0, 0);
						TASK::_0xE69FDA40AAC3EFC0(&(Local_19[iVar1 /*13*/]), 0);
						TASK::_0xA7479FB665361EDB(&(Local_19[iVar1 /*13*/]), 0);
					}
					iVar1++;
				}
			}
			iLocal_18 = 3;
			break;
		case 3:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_16(&uLocal_88))
			{
				func_17(&uLocal_88, 0);
			}
			if (func_18(&uLocal_88, fLocal_91) && TASK::_0x02EBBB3989B7E695(iLocal_85))
			{
				iLocal_18 = 4;
			}
			break;
		case 4:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (TASK::_0x79197F7D2BB5E73A(iLocal_85, &(Local_19[iLocal_86 /*13*/]), (Local_19[iLocal_86 /*13*/])->f_2, (Local_19[iLocal_86 /*13*/])->f_3, 0, 0))
			{
				if (PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[iLocal_86 /*13*/])))
				{
					fLocal_91 = (Local_19[iLocal_86 /*13*/])->f_12;
					iLocal_86++;
					func_19(&uLocal_88);
					if (iLocal_86 < iLocal_87)
					{
						iLocal_18 = 3;
					}
					else
					{
						iLocal_18 = 5;
					}
				}
			}
			break;
		case 5:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!func_16(&uLocal_88))
			{
				func_17(&uLocal_88, 0);
			}
			if (func_18(&uLocal_88, fLocal_91) && TASK::_0x02EBBB3989B7E695(iLocal_85))
			{
				iLocal_18 = 6;
			}
			break;
		case 6:
			if (func_15())
			{
				iLocal_18 = 7;
				return;
			}
			if (!bLocal_92)
			{
				if (!func_20(iLocal_85, -76381094))
				{
					TASK::CLEAR_PED_TASKS(iLocal_85, 1, 0);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_85, &(uLocal_93[0]), 0, 0, 1, 0, 0, 0, -1082130432, 0);
					PED::SET_PED_KEEP_TASK(iLocal_85, true);
				}
				if (PED::_0x9C54041BB66BCF9E(iLocal_85, &(uLocal_93[0])))
				{
					iLocal_18 = 7;
				}
			}
			else
			{
				iLocal_18 = 7;
			}
			break;
		case 7:
			iLocal_13 = 0;
			return;
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_23(&iVar0);
	}
}

int func_12(int iParam0, int iParam1)
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
	if (func_24(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 2))
	{
		if (PED::_IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_24(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_13(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2147443548:
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_25(Local_19[0 /*13*/], 1287994422, 4, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 4, 10f);
						func_25(Local_19[2 /*13*/], 1287994422, 4, 10f);
					}
					else
					{
						func_25(Local_19[0 /*13*/], 1287994422, 5, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 5, 10f);
						func_25(Local_19[2 /*13*/], 1287994422, 5, 10f);
					}
					return 1;
				case 1:
					fLocal_91 = 10f;
					if (PED::IS_PED_MALE(iLocal_85))
					{
						func_25(Local_19[0 /*13*/], 1287994422, 1, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 1, 10f);
					}
					else
					{
						func_25(Local_19[0 /*13*/], 1287994422, 0, 10f);
						func_25(Local_19[1 /*13*/], 1287994422, 0, 10f);
					}
					return 1;
			}
			break;
		case -1101156650:
			switch (iParam0)
			{
				case 0:
					fLocal_91 = 10f;
					func_25(Local_19[0 /*13*/], -688785322, 3, 10f);
					func_25(Local_19[1 /*13*/], -688785322, 3, 10f);
					func_25(Local_19[2 /*13*/], -688785322, 3, 10f);
					func_25(Local_19[3 /*13*/], -688785322, 3, 10f);
					return 1;
				case 1:
					fLocal_91 = 10f;
					func_25(Local_19[0 /*13*/], -688785322, 4, 10f);
					func_25(Local_19[1 /*13*/], -688785322, 4, 10f);
					func_25(Local_19[2 /*13*/], -688785322, 4, 10f);
					return 1;
			}
			break;
	}
	return 0;
}

float func_14(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_26(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_15()
{
	if (!func_12(Global_34, 0))
	{
		return 1;
	}
	if (!func_12(iLocal_85, 0))
	{
		return 1;
	}
	if (iLocal_86 <= 0)
	{
		if (!PED::_0x9C54041BB66BCF9E(iLocal_85, iLocal_16) && !PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[iLocal_86 /*13*/])))
		{
			return 1;
		}
	}
	else if (iLocal_86 >= iLocal_87)
	{
		if (!bLocal_92)
		{
			if (!PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[(iLocal_86 - 1) /*13*/])) && !PED::_0x9C54041BB66BCF9E(iLocal_85, &(uLocal_93[0])))
			{
				return 1;
			}
		}
	}
	else if (!PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[(iLocal_86 - 1) /*13*/])) && !PED::_0x9C54041BB66BCF9E(iLocal_85, &(Local_19[iLocal_86 /*13*/])))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0)
{
	return func_27(*uParam0, 1);
}

void func_17(var uParam0, bool bParam1)
{
	if (bParam1 || !func_16(uParam0))
	{
		func_28(uParam0);
	}
}

int func_18(var uParam0, float fParam1)
{
	if (!func_16(uParam0))
	{
		return 0;
	}
	if (func_29(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_20(int iParam0, int iParam1)
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

void func_21(int iParam0)
{
}

void func_22(int iParam0)
{
}

void func_23(int iParam0)
{
}

bool func_24(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_25(var uParam0, int iParam1, int iParam2, float fParam3)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = func_30(iParam1, iParam2);
	uParam0->f_3 = func_31(iParam1, iParam2);
	uParam0->f_4 = { func_32(iParam1, iParam2) };
	uParam0->f_10 = func_33(iParam1, iParam2);
	uParam0->f_12 = fParam3;
}

float func_26(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_27(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_28(var uParam0)
{
	func_34(uParam0, 0f);
}

float func_29(var uParam0)
{
	if (!func_16(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_35(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_36() - uParam0->f_1);
}

char* func_30(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1287994422:
			if (PED::IS_PED_MALE(iLocal_85))
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RTURN_90";
					case 4:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_RIGHT";
					case 2:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_BACKRIGHT";
					case 3:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@MALE_A@trans@BASE_TRANS_FRONTRIGHT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LTURN_90";
					case 1:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_RTURN_90";
					case 5:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_LEFT";
					case 6:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_BACKLEFT";
					case 7:
						return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@female_b@trans@BASE_TRANS_FRONTLEFT";
					default:
						break;
				}
			}
			break;
		case -688785322:
			switch (iParam1)
			{
				case 0:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_LTURN_90";
				case 1:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RTURN_90";
				case 4:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_RIGHT";
				case 2:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_BACKRIGHT";
				case 3:
					return "AMB_WORK@WORLD_HUMAN_BROOM@WORKING@male_b@trans@BASE_TRANS_FRONTRIGHT";
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return "BASE_TRANS_LTURN_90";
				case 1:
					return "BASE_TRANS_RTURN_90";
				case 4:
					return "BASE_TRANS_RIGHT";
				case 2:
					return "BASE_TRANS_BACKRIGHT";
				case 3:
					return "BASE_TRANS_FRONTRIGHT";
				case 5:
					return "BASE_TRANS_LEFT";
				case 6:
					return "BASE_TRANS_BACKLEFT";
				case 7:
					return "BASE_TRANS_FRONTLEFT";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_32(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 0f;
				case 1:
					return 0f, 0f, 0f;
				case 4:
					return 0.53823f, 0f, 0f;
				case 2:
					return 0.380574f, -0.380598f, 0f;
				case 3:
					return 0.380598f, 0.380574f, 0f;
				case 5:
					return -0.53823f, 0f, 0f;
				case 6:
					return -0.380574f, -0.380598f, 0f;
				case 7:
					return -0.380598f, 0.380574f, 0f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_33(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -688785322:
		case 1287994422:
			switch (iParam1)
			{
				case 0:
					return 90f;
				case 1:
					return -90f;
				case 4:
					return 0f;
				case 2:
					return 0f;
				case 3:
					return 0f;
				case 5:
					return 0f;
				case 6:
					return 0f;
				case 7:
					return 0f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_34(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_36() - fParam1);
	func_37(uParam0, 1);
	func_38(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_35(var uParam0)
{
	return func_27(*uParam0, 2);
}

float func_36()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_37(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_38(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

