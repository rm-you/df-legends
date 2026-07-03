// FUN_140314d40 @ 140314d40
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 14004ffe0 FUN_14004ffe0
//   -> 14000f360 FUN_14000f360
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 1400199b0 FUN_1400199b0
//   -> 14000de70 FUN_14000de70
//   -> 14014a480 FUN_14014a480


void FUN_140314d40(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  void *pvVar1;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char local_res10 [8];
  undefined4 local_res18 [4];
  int local_58;
  char local_54;
  char local_53;
  char local_52;
  char local_51;
  char local_50;
  char local_4f;
  char local_4e [6];
  undefined8 *local_48 [2];
  
  local_res18[0] = param_3;
  FUN_1405bba90(param_1,&local_58,4);
  FUN_14000b9d0(param_2,(longlong)local_58);
  uVar7 = 0;
  uVar8 = uVar7;
  if (param_2[1] - *param_2 >> 3 != 0) {
    do {
      iVar6 = (int)uVar8;
      local_48[0] = operator_new(0x18);
      *(undefined4 *)local_48[0] = 0xffffffff;
      local_48[0][1] = 0;
      local_48[0][2] = 0;
      *(undefined8 **)(uVar7 + *param_2) = local_48[0];
      FUN_1405bba90(param_1,*(undefined8 *)(uVar7 + *param_2),4);
      switch(**(undefined4 **)(uVar7 + *param_2)) {
      case 0:
        FUN_1405bba90(param_1,local_res18,1);
        if (((char)local_res18[0] != '\0') && (FUN_1405bba90(param_1,&local_58,4), param_4 != 0)) {
          local_48[0] = operator_new(0x10);
          *local_48[0] = general_ref_building_holderst::vftable;
          *(int *)(local_48[0] + 1) = local_58;
          FUN_14004ffe0(param_4,local_48);
        }
        break;
      case 1:
        FUN_1405bba90(param_1,local_res10,1);
        if (local_res10[0] == '\0') goto LAB_14031513e;
        FUN_1405bba90(param_1,&local_58,4);
        uVar3 = FUN_14000f360(&DAT_141c66fd0,local_58);
        *(undefined8 *)(*(longlong *)(uVar7 + *param_2) + 8) = uVar3;
        break;
      case 2:
        FUN_1405bba90(param_1,&local_54,1);
        if (local_54 == '\0') goto LAB_14031513e;
        FUN_1405bba90(param_1,&local_58,4);
        for (puVar2 = DAT_141c68058; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[2])
        {
          if (*(int *)*puVar2 == local_58) {
            *(int **)(*(longlong *)(uVar7 + *param_2) + 8) = (int *)*puVar2;
            goto switchD_140314dfa_caseD_7;
          }
        }
        *(undefined8 *)(*(longlong *)(uVar7 + *param_2) + 8) = 0;
        break;
      case 3:
        FUN_1405bba90(param_1,&local_53,1);
        if (local_53 != '\0') {
          FUN_1405bba90(param_1,&local_58,4);
          lVar5 = DAT_141c36a88;
          lVar9 = DAT_141c36a90;
joined_r0x00014031510e:
          if ((-1 < local_58) && ((ulonglong)(longlong)local_58 < (ulonglong)(lVar9 - lVar5 >> 3)))
          {
            *(undefined8 *)(*(longlong *)(uVar7 + *param_2) + 8) =
                 *(undefined8 *)(lVar5 + (longlong)local_58 * 8);
            break;
          }
        }
        goto LAB_14031513e;
      case 4:
        FUN_1405bba90(param_1,&local_51,1);
        if (local_51 != '\0') {
          FUN_1405bba90(param_1,&local_58,4);
          lVar5 = DAT_141c36a00;
          lVar9 = DAT_141c36a08;
          goto joined_r0x00014031510e;
        }
        goto LAB_14031513e;
      case 5:
        FUN_1405bba90(param_1,&local_50,1);
        if (local_50 == '\0') goto LAB_14031513e;
        FUN_1405bba90(param_1,&local_58,4);
        uVar3 = FUN_14000de70(&DAT_141c67368,local_58);
        *(undefined8 *)(*(longlong *)(uVar7 + *param_2) + 8) = uVar3;
        break;
      case 6:
        FUN_1405bba90(param_1,&local_4f,1);
        if (local_4f != '\0') {
          FUN_1405bba90(param_1,&local_58,4);
          lVar5 = DAT_141c53698;
          lVar9 = DAT_141c536a0;
          goto joined_r0x00014031510e;
        }
        goto LAB_14031513e;
      case 9:
      case 10:
        FUN_1405bba90(param_1,local_4e,1);
        if (local_4e[0] != '\0') {
          FUN_1405bba90(param_1,&local_58,4);
          lVar5 = DAT_141c534d0;
          lVar9 = DAT_141c534d8;
          goto joined_r0x00014031510e;
        }
LAB_14031513e:
        *(undefined8 *)(*(longlong *)(uVar7 + *param_2) + 8) = 0;
        break;
      case 0xb:
        FUN_1405bba90(param_1,&local_52,1);
        if (local_52 == '\0') goto LAB_14031513e;
        FUN_1405bba90(param_1,&local_58,4);
        uVar3 = FUN_1400199b0(&DAT_141c53718,local_58);
        *(undefined8 *)(*(longlong *)(uVar7 + *param_2) + 8) = uVar3;
        break;
      case 0xe:
        free(*(undefined4 **)(uVar7 + *param_2));
        _Dst = (void *)(*param_2 + (longlong)iVar6 * 8);
        pvVar1 = (void *)((longlong)_Dst + 8);
        memmove(_Dst,pvVar1,param_2[1] - (longlong)pvVar1);
        param_2[1] = param_2[1] + -8;
        iVar6 = iVar6 + -1;
        uVar7 = uVar7 - 8;
      }
switchD_140314dfa_caseD_7:
      uVar7 = uVar7 + 8;
      uVar8 = (ulonglong)(iVar6 + 1U);
    } while ((ulonglong)(longlong)(int)(iVar6 + 1U) < (ulonglong)(param_2[1] - *param_2 >> 3));
  }
  iVar6 = (int)(param_2[1] - *param_2 >> 3) + -1;
  if (-1 < iVar6) {
    lVar5 = (longlong)iVar6 * 8;
    lVar9 = (longlong)iVar6 * 8;
    do {
      if (**(int **)(lVar5 + *param_2) == 0) {
        free(*(int **)(lVar5 + *param_2));
        pvVar1 = (void *)(*param_2 + lVar9 + 8);
        memmove((void *)(*param_2 + lVar9),pvVar1,param_2[1] - (longlong)pvVar1);
        param_2[1] = param_2[1] + -8;
      }
      lVar9 = lVar9 + -8;
      lVar5 = lVar5 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  iVar6 = (int)(param_2[1] - *param_2 >> 3) + -1;
  if (-1 < iVar6) {
    lVar5 = (longlong)iVar6 * 8;
    lVar9 = (longlong)iVar6 * 8;
    do {
      if (*(longlong *)(*(undefined4 **)(lVar5 + *param_2) + 2) == 0) {
        switch(**(undefined4 **)(lVar5 + *param_2)) {
        case 1:
          pcVar4 = "Nuked Unit Reference (Worker/Inventory)";
          break;
        case 2:
          pcVar4 = "Nuked Job Reference";
          break;
        case 3:
          pcVar4 = "Nuked Building Reference (Party)";
          break;
        case 4:
          pcVar4 = "Nuked Activity Reference";
          break;
        case 5:
          pcVar4 = "Nuked Item Reference (General)";
          break;
        case 6:
          pcVar4 = "Nuked Effect Reference";
          break;
        default:
          goto switchD_14031522b_caseD_7;
        case 9:
          pcVar4 = "Nuked Vermin Event Reference";
          break;
        case 10:
          pcVar4 = "Nuked Vermin Reference (Escaped Pet)";
          break;
        case 0xb:
          pcVar4 = "Nuked Entity Reference";
          break;
        case 0xc:
          pcVar4 = "Nuked Plot Info Reference";
          break;
        case 0xd:
          pcVar4 = "Nuked Viewscreen Reference";
          break;
        case 0xe:
          pcVar4 = "Nuked Unit Reference (Item Wrestle)";
          break;
        case 0x10:
          pcVar4 = "Nuked Hist Fig Reference";
          break;
        case 0x11:
          pcVar4 = "Nuked Site Reference";
          break;
        case 0x12:
          pcVar4 = "Nuked Artifact Reference";
          break;
        case 0x13:
          pcVar4 = "Nuked Item Improvement Reference";
          break;
        case 0x14:
          pcVar4 = "Nuked Coin Front Reference";
          break;
        case 0x15:
          pcVar4 = "Nuked Coin Back Reference";
          break;
        case 0x16:
          pcVar4 = "Nuked Detail Event Reference";
          break;
        case 0x17:
          pcVar4 = "Nuked Subregion Reference";
          break;
        case 0x18:
          pcVar4 = "Nuked Feature Layer Reference";
          break;
        case 0x19:
          pcVar4 = "Nuked Art Image Reference";
          break;
        case 0x1a:
          pcVar4 = "Nuked Creature Def Reference";
          break;
        case 0x1d:
          pcVar4 = "Nuked Entity Population Reference";
          break;
        case 0x1e:
          pcVar4 = "Nuked Breed Reference";
        }
        FUN_14014a480(pcVar4);
        free(*(void **)(*param_2 + lVar5));
        pvVar1 = (void *)(*param_2 + lVar9 + 8);
        memmove((void *)(*param_2 + lVar9),pvVar1,param_2[1] - (longlong)pvVar1);
        param_2[1] = param_2[1] + -8;
      }
switchD_14031522b_caseD_7:
      lVar9 = lVar9 + -8;
      lVar5 = lVar5 + -8;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  return;
}

