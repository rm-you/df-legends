// FUN_140df42e0 @ 140df42e0
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 140a5b610 FUN_140a5b610
//   -> 140df3ec0 FUN_140df3ec0
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140df3f60 FUN_140df3f60


void FUN_140df42e0(short *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  short sVar3;
  uint uVar4;
  short sVar6;
  ulonglong uVar7;
  char local_res8 [8];
  int local_res20 [2];
  ulonglong uVar5;
  
  FUN_1405bba90(param_2,param_1,2);
  FUN_1405bba90(param_2,param_1 + 1,2);
  FUN_1405bba90(param_2,local_res8,1);
  if (local_res8[0] == '\0') {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    FUN_140a5b610(param_1,*param_1 << 4,param_1[1] << 4);
    sVar6 = 0;
    if (0 < *param_1) {
      do {
        if (0 < param_1[1]) {
          sVar3 = 0;
          do {
            FUN_140df3ec0(*(longlong *)((longlong)sVar6 * 8 + *(longlong *)(param_1 + 4)) +
                          (longlong)sVar3 * 0x18,param_2,param_3);
            sVar3 = sVar3 + 1;
          } while (sVar3 < param_1[1]);
        }
        sVar6 = sVar6 + 1;
      } while (sVar6 < *param_1);
    }
  }
  uVar5 = 0;
  FUN_1405bba90(param_2,local_res20,4);
  FUN_14000b9d0(param_1 + 8,(longlong)local_res20[0]);
  uVar7 = uVar5;
  if (0 < local_res20[0]) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      uVar2 = FUN_140df3f60(param_2);
      *(undefined8 *)(lVar1 + uVar7) = uVar2;
      (**(code **)(**(longlong **)(uVar7 + *(longlong *)(param_1 + 8)) + 0x18))
                (*(longlong **)(uVar7 + *(longlong *)(param_1 + 8)),param_2,param_3);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar7 = uVar7 + 8;
    } while ((int)uVar4 < local_res20[0]);
  }
  FUN_1405bba90(param_2,param_1 + 0x14,4);
  return;
}

