// FUN_140a5b2e0 @ 140a5b2e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1405b8380 FUN_1405b8380


void FUN_140a5b2e0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  short local_48 [4];
  longlong local_40;
  longlong local_38;
  
  local_38 = 0x10;
  piVar5 = (int *)((longlong)param_1 + 0x1804);
  do {
    local_40 = 0x10;
    do {
      lVar4 = local_40;
      FUN_1405bba90(param_2,local_48,2);
      FUN_14000b9d0(param_1,(longlong)local_48[0]);
      sVar2 = (short)((longlong)(ulonglong)(uint)((int)param_1[1] - (int)*param_1) >> 3) + -1;
      if (-1 < sVar2) {
        lVar3 = (longlong)sVar2 << 3;
        do {
          lVar4 = *param_1;
          uVar1 = FUN_1405b8380(param_2);
          *(undefined8 *)(lVar4 + lVar3) = uVar1;
          (**(code **)(**(longlong **)(lVar3 + *param_1) + 0x10))
                    (*(longlong **)(lVar3 + *param_1),param_2,param_3,param_4);
          sVar2 = sVar2 + -1;
          lVar3 = lVar3 + -8;
          lVar4 = local_40;
        } while (-1 < sVar2);
      }
      lVar3 = 5;
      do {
        FUN_1405bba90(param_2,piVar5 + -1,4);
        FUN_1405bba90(param_2,piVar5,4);
        FUN_1405bba90(param_2,piVar5 + 0x9ff,4);
        FUN_1405bba90(param_2,piVar5 + 0xa00,4);
        FUN_1405bba90(param_2,piVar5 + 0x13ff,4);
        FUN_1405bba90(param_2,piVar5 + 0x1400,4);
        piVar5 = piVar5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      param_1 = param_1 + 3;
      local_40 = lVar4 + -1;
    } while (local_40 != 0);
    local_38 = local_38 + -1;
  } while (local_38 != 0);
  return;
}

