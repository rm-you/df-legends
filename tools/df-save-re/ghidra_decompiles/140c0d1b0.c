// FUN_140c0d1b0 @ 140c0d1b0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140315ac0 FUN_140315ac0
//   -> 1400032c0 FUN_1400032c0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140c0c530 FUN_140c0c530
//   -> 1406f68a0 FUN_1406f68a0
//   -> 140c0cb20 FUN_140c0cb20
//   -> 140dfc99c memset
//   -> 1409355f0 FUN_1409355f0
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140c0d1b0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  uint local_c8;
  short local_c4 [2];
  short local_c0 [2];
  short local_bc [2];
  void *local_b8;
  undefined2 *local_b0;
  char local_a8 [112];
  ulonglong local_38;
  
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_e8;
  FUN_1405bba90(param_2,param_1,4);
  FUN_140315ac0(param_1 + 8,param_2);
  FUN_1405bba90(param_2,param_1 + 0x80,4);
  FUN_1405bba90(param_2,param_1 + 0x84,1);
  FUN_1405bba90(param_2,param_1 + 0x86,2);
  FUN_1405bba90(param_2,param_1 + 0x88,4);
  FUN_1405bba90(param_2,param_1 + 0x8c,4);
  FUN_1405bba90(param_2,param_1 + 0x90,4);
  FUN_1405bba90(param_2,param_1 + 0x94,4);
  FUN_1405bba90(param_2,param_1 + 0x98,4);
  FUN_1405bba90(param_2,param_1 + 0x9c,4);
  FUN_1405bba90(param_2,param_1 + 0xa0,4);
  FUN_1405bba90(param_2,param_1 + 0xa4,4);
  FUN_1405bba90(param_2,param_1 + 0xa8,4);
  uVar4 = 0;
  local_c8 = 0;
  uVar5 = uVar4;
  do {
    FUN_1400032c0((longlong)(int)uVar5 * 0x1c + 0xac + param_1,param_2);
    local_c8 = local_c8 + 1;
    uVar5 = (ulonglong)local_c8;
  } while ((int)local_c8 < 0xd);
  FUN_1405bba90(param_2,&local_c8,4);
  plVar1 = (longlong *)(param_1 + 0x218);
  FUN_14000b9d0(plVar1,(longlong)(int)local_c8);
  local_c8 = 0;
  if (*(longlong *)(param_1 + 0x220) - *plVar1 >> 3 != 0) {
    do {
      local_b8 = operator_new(0x20);
      *(undefined8 *)((longlong)local_b8 + 4) = 0;
      *(undefined8 *)((longlong)local_b8 + 0xc) = 0;
      *(undefined8 *)((longlong)local_b8 + 0x14) = 0;
      *(undefined4 *)((longlong)local_b8 + 0x1c) = 0;
      *(void **)(*plVar1 + (longlong)(int)local_c8 * 8) = local_b8;
      FUN_140c0c530(*(undefined8 *)(*plVar1 + (longlong)(int)local_c8 * 8),param_2);
      local_c8 = local_c8 + 1;
    } while ((ulonglong)(longlong)(int)local_c8 <
             (ulonglong)(*(longlong *)(param_1 + 0x220) - *plVar1 >> 3));
  }
  FUN_1405bba90(param_2,&local_c8,4);
  plVar1 = (longlong *)(param_1 + 0x230);
  FUN_14000b9d0(plVar1,(longlong)(int)local_c8);
  local_c8 = 0;
  if (*(longlong *)(param_1 + 0x238) - *plVar1 >> 3 != 0) {
    do {
      local_b0 = operator_new(0x1c);
      *local_b0 = 0;
      *(undefined8 *)(local_b0 + 2) = 0xffffffffffffffff;
      *(undefined8 *)(local_b0 + 6) = 0xffffffffffffffff;
      local_b0[10] = 0;
      *(undefined1 *)(local_b0 + 0xb) = 0;
      *(uint *)(local_b0 + 0xc) = DAT_1416992a0;
      DAT_1416992a0 = DAT_1416992a0 * 0xdd9cd + 0x5f59201 & 0x3fffffff;
      *(undefined2 **)(*plVar1 + (longlong)(int)local_c8 * 8) = local_b0;
      FUN_1405bba90(param_2,*(undefined8 *)(*plVar1 + (longlong)(int)local_c8 * 8),2);
      if (param_3 < 0x5d3) {
        FUN_1405bba90(param_2,local_c4,2);
        FUN_1405bba90(param_2,local_c0,2);
        FUN_1405bba90(param_2,local_bc,2);
        FUN_1405bba90(param_2,&local_b8,4);
        *(int *)(*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 4) = (int)local_c4[0];
        *(int *)(*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 8) = (int)local_c0[0];
        *(int *)(*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0xc) = (int)local_bc[0];
        *(undefined4 *)(*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0x10) =
             local_b8._0_4_;
      }
      else {
        FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 4,4);
        FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 8,4);
        FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0xc,4);
        FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0x10,4);
      }
      if (0x5e5 < param_3) {
        FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0x14,2);
      }
      FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0x16,1);
      FUN_1405bba90(param_2,*(longlong *)(*plVar1 + (longlong)(int)local_c8 * 8) + 0x18,4);
      local_c8 = local_c8 + 1;
    } while ((ulonglong)(longlong)(int)local_c8 <
             (ulonglong)(*(longlong *)(param_1 + 0x238) - *plVar1 >> 3));
  }
  FUN_1406f68a0(param_1 + 0x248,param_2,param_3);
  if (0x5cb < param_3) {
    FUN_1405bba90(param_2,local_c4,1);
    if ((char)local_c4[0] == '\0') {
      *(undefined8 *)(param_1 + 0x3d0) = 0;
    }
    else {
      puVar3 = operator_new(0x60);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined8 **)(param_1 + 0x3d0) = puVar3;
      FUN_140c0cb20(puVar3);
    }
  }
  if ((param_3 < 0x656) && (*(longlong *)(param_1 + 0x3b0) != 0)) {
    memset(local_a8,0,100);
    uVar5 = uVar4;
    do {
      lVar6 = *(longlong *)(param_1 + 0x3b0);
      if (*(int *)(lVar6 + uVar5) != -1) {
        uVar2 = FUN_1409355f0(*(undefined4 *)(lVar6 + 0xc + uVar5));
        if (uVar2 < 100) {
          if (local_a8[(int)uVar2] == '\0') {
            local_a8[(int)uVar2] = '\x01';
          }
          else {
            *(undefined4 *)(lVar6 + uVar5) = 0xffffffff;
            *(undefined4 *)(uVar5 + 0xc + *(longlong *)(param_1 + 0x3b0)) = 0xffffffff;
          }
        }
      }
      uVar5 = uVar5 + 0x24;
    } while ((longlong)uVar5 < 0x120);
    memset(local_a8,0,100);
    do {
      lVar6 = *(longlong *)(param_1 + 0x3b0);
      if (*(int *)(uVar4 + 0x120 + lVar6) != -1) {
        uVar2 = FUN_1409355f0(*(undefined4 *)(uVar4 + 300 + lVar6));
        if (uVar2 < 100) {
          if (local_a8[(int)uVar2] == '\0') {
            local_a8[(int)uVar2] = '\x01';
          }
          else {
            *(undefined4 *)(uVar4 + 0x120 + lVar6) = 0xffffffff;
            *(undefined4 *)(uVar4 + 300 + *(longlong *)(param_1 + 0x3b0)) = 0xffffffff;
          }
        }
      }
      uVar4 = uVar4 + 0x24;
    } while ((longlong)uVar4 < 0x120);
  }
  return;
}

