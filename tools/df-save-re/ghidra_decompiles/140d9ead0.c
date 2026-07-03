// FUN_140d9ead0 @ 140d9ead0
// callees:
//   -> 140dfb9a8 `eh_vector_constructor_iterator'
//   -> 1402de540 FUN_1402de540
//   -> 14000c390 FUN_14000c390
//   -> EXTERNAL:000000e1 memmove
//   -> 1408a4d70 FUN_1408a4d70
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 14061e7d0 FUN_14061e7d0
//   -> 140002020 FUN_140002020
//   -> 140dfb600 `eh_vector_destructor_iterator'
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d9ead0(undefined8 param_1,undefined8 param_2,short param_3,undefined4 param_4,
                  longlong *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined1 auStackY_358 [32];
  int *local_310;
  int *piStack_308;
  int *local_300;
  int *local_2f8;
  int *piStack_2f0;
  int *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  int *local_2d0;
  int *piStack_2c8;
  longlong local_2c0;
  int *local_2b8;
  int *piStack_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  undefined8 local_288;
  undefined1 local_278 [144];
  undefined1 local_1e8 [144];
  undefined1 local_158 [144];
  undefined1 local_c8 [144];
  ulonglong local_38;
  
  local_288 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStackY_358;
  _eh_vector_constructor_iterator_(local_278,0x18,6,FUN_1400025a0,FUN_1400025c0);
  _eh_vector_constructor_iterator_(local_1e8,0x18,6,FUN_1400025a0,FUN_1400025c0);
  _eh_vector_constructor_iterator_(local_158,0x18,6,FUN_1400025a0,FUN_1400025c0);
  _eh_vector_constructor_iterator_(local_c8,0x18,6,FUN_1400025a0,FUN_1400025c0);
  uVar13 = 0;
  local_2f8 = (int *)0x0;
  piStack_2f0 = (int *)0x0;
  piVar11 = (int *)0x0;
  local_2e8 = (int *)0x0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  local_310 = (int *)0x0;
  piStack_308 = (int *)0x0;
  local_300 = (int *)0x0;
  local_2b8 = (int *)0x0;
  piStack_2b0 = (int *)0x0;
  local_2a8 = 0;
  local_2d0 = (int *)0x0;
  piStack_2c8 = (int *)0x0;
  local_2d8 = 0;
  local_2c0 = 0;
  iVar1 = (int)(param_5[1] - *param_5 >> 1) + -1;
  local_2e0 = (longlong)iVar1;
  piVar7 = (int *)0x0;
  piVar4 = (int *)0x0;
  piVar12 = (int *)0x0;
  piVar10 = (int *)0x0;
  if (-1 < iVar1) {
    do {
      uVar13 = FUN_1402de540(*(undefined2 *)(*param_5 + local_2e0 * 2),&local_2b8,&local_2d0);
      piVar5 = piStack_2b0;
      piVar6 = local_2b8;
      if (local_2b8 < piStack_2b0) {
        do {
          if (piVar4 < piVar7) {
            piVar3 = piVar4;
            do {
              if (*piVar6 == *piVar3) {
                if (piVar3 < piVar7) goto LAB_140d9ece7;
                break;
              }
              piVar3 = piVar3 + 1;
            } while (piVar3 < piVar7);
          }
          if ((piVar6 < piVar7) && (piVar4 <= piVar6)) {
            lVar8 = (longlong)piVar6 - (longlong)piVar4;
            if (piVar7 == piVar11) {
              uVar13 = FUN_14000c390(&local_2f8,1);
              piVar5 = piStack_2b0;
              piVar7 = piStack_2f0;
              piVar11 = local_2e8;
              piVar4 = local_2f8;
            }
            if (piVar7 != (int *)0x0) {
              iVar1 = piVar4[lVar8 >> 2];
LAB_140d9ecdc:
              *piVar7 = iVar1;
            }
          }
          else {
            if (piVar7 == piVar11) {
              uVar13 = FUN_14000c390(&local_2f8,1);
              piVar5 = piStack_2b0;
              piVar7 = piStack_2f0;
              piVar11 = local_2e8;
              piVar4 = local_2f8;
            }
            if (piVar7 != (int *)0x0) {
              iVar1 = *piVar6;
              goto LAB_140d9ecdc;
            }
          }
          piVar7 = piVar7 + 1;
          piStack_2f0 = piVar7;
LAB_140d9ece7:
          piVar6 = piVar6 + 1;
        } while (piVar6 < piVar5);
      }
      piVar5 = piStack_2c8;
      piVar6 = local_2d0;
      piVar3 = local_300;
      if (local_2d0 < piStack_2c8) {
        do {
          if (piVar10 < piVar12) {
            piVar4 = piVar10;
            do {
              if (*piVar6 == *piVar4) {
                if (piVar4 < piVar12) goto LAB_140d9edb8;
                break;
              }
              piVar4 = piVar4 + 1;
            } while (piVar4 < piVar12);
          }
          if ((piVar6 < piVar12) && (piVar10 <= piVar6)) {
            lVar8 = (longlong)piVar6 - (longlong)piVar10;
            if (piVar12 == piVar3) {
              uVar13 = FUN_14000c390(&local_310,1);
              piVar5 = piStack_2c8;
              piVar10 = local_310;
              piVar12 = piStack_308;
              piVar3 = local_300;
            }
            if (piVar12 != (int *)0x0) {
              iVar1 = piVar10[lVar8 >> 2];
LAB_140d9edac:
              *piVar12 = iVar1;
            }
          }
          else {
            if (piVar12 == piVar3) {
              uVar13 = FUN_14000c390(&local_310,1);
              piVar5 = piStack_2c8;
              piVar10 = local_310;
              piVar12 = piStack_308;
              piVar3 = local_300;
            }
            if (piVar12 != (int *)0x0) {
              iVar1 = *piVar6;
              goto LAB_140d9edac;
            }
          }
          piVar12 = piVar12 + 1;
          piStack_308 = piVar12;
LAB_140d9edb8:
          piVar6 = piVar6 + 1;
          piVar4 = local_2f8;
        } while (piVar6 < piVar5);
      }
      local_2e0 = local_2e0 + -1;
    } while (-1 < local_2e0);
  }
  lVar8 = local_2a8;
  iVar1 = (int)((longlong)piVar12 - (longlong)piVar10 >> 2) + -1;
  piVar11 = piStack_308;
  local_2d8 = local_2c0;
  if (-1 < iVar1) {
    piVar10 = piVar10 + iVar1;
    piVar5 = piVar10 + 1;
    do {
      for (piVar11 = piVar4; piVar11 < piVar7; piVar11 = piVar11 + 1) {
        if (*piVar11 == *piVar10) {
          if ((int)((longlong)piVar11 - (longlong)piVar4 >> 2) != -1) {
            memmove(piVar5 + -1,piVar5,(longlong)piVar12 - (longlong)piVar5);
            piVar12 = piVar12 + -1;
            uVar13 = extraout_XMM0_Da;
          }
          break;
        }
      }
      piVar5 = piVar5 + -1;
      piVar10 = piVar10 + -1;
      iVar1 = iVar1 + -1;
      piVar11 = piVar12;
    } while (-1 < iVar1);
  }
  piStack_308 = piVar11;
  FUN_1408a4d70(uVar13,local_278,local_158,&local_2f8);
  if (param_3 == 0) {
    uVar2 = FUN_1409fc0c0();
    if ((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) / 0xccccccd
        == 0) {
switchD_140d9efe6_caseD_4:
      param_3 = 8;
    }
    else {
      uVar2 = FUN_1409fc0c0();
      if ((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x2aaaaaab == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 10;
      }
      FUN_14061e7d0(param_2,param_4,uVar9,local_278);
      uVar2 = FUN_1409fc0c0();
      if ((uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
          0x2aaaaaab != 0) goto switchD_140d9efe6_default;
      param_3 = 8;
    }
  }
  else if (param_3 == 0x28) {
    uVar2 = FUN_1409fc0c0();
    switch((ulonglong)
           (uVar2 + (int)((longlong)((ulonglong)uVar2 * 0x100000003) >> 0x3f) * 0x7fffffff) /
           0xccccccd) {
    case 0:
    case 1:
      param_3 = 9;
      break;
    case 2:
      param_3 = 10;
      break;
    case 3:
      param_3 = 0;
      break;
    case 4:
    case 5:
      goto switchD_140d9efe6_caseD_4;
    case 6:
      FUN_14061e7d0(param_2,param_4,9,local_278);
      param_3 = 8;
      break;
    case 7:
    case 8:
      FUN_14061e7d0(param_2,param_4,10,local_278);
      param_3 = 8;
      break;
    case 9:
      FUN_14061e7d0(param_2,param_4,0,local_278);
      param_3 = 8;
      break;
    default:
      goto switchD_140d9efe6_default;
    }
  }
  FUN_14061e7d0(param_2,param_4,param_3,local_278);
switchD_140d9efe6_default:
  if (local_2d0 != (int *)0x0) {
    FUN_140002020(local_2d0,local_2d8 - (longlong)local_2d0 >> 2,4);
  }
  if (local_2b8 != (int *)0x0) {
    FUN_140002020(local_2b8,lVar8 - (longlong)local_2b8 >> 2,4);
  }
  if (local_310 != (int *)0x0) {
    FUN_140002020(local_310,(longlong)local_300 - (longlong)local_310 >> 2,4);
  }
  if (local_2a0 != 0) {
    FUN_140002020(local_2a0,local_290 - local_2a0 >> 2,4);
  }
  if (local_2f8 != (int *)0x0) {
    FUN_140002020(local_2f8,(longlong)local_2e8 - (longlong)local_2f8 >> 2,4);
  }
  _eh_vector_destructor_iterator_(local_c8,0x18,6,FUN_1400025c0);
  _eh_vector_destructor_iterator_(local_158,0x18,6,FUN_1400025c0);
  _eh_vector_destructor_iterator_(local_1e8,0x18,6,FUN_1400025c0);
  _eh_vector_destructor_iterator_(local_278,0x18,6,FUN_1400025c0);
  return;
}

