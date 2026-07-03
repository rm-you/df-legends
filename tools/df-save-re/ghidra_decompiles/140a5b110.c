// FUN_140a5b110 @ 140a5b110
// callees:
//   -> 1405bb7c0 FUN_1405bb7c0


void FUN_140a5b110(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined2 uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int local_res20 [2];
  
  piVar6 = (int *)((longlong)param_1 + 0x1804);
  lVar5 = 0x10;
  do {
    lVar4 = 0x10;
    do {
      local_res20[0] =
           CONCAT22(local_res20[0]._2_2_,
                    (short)((longlong)(ulonglong)(uint)((int)param_1[1] - (int)*param_1) >> 3));
      FUN_1405bb7c0(param_2,local_res20,2);
      sVar2 = (short)((longlong)(ulonglong)(uint)((int)param_1[1] - (int)*param_1) >> 3) + -1;
      if (-1 < sVar2) {
        lVar3 = (longlong)sVar2 << 3;
        do {
          uVar1 = (**(code **)**(undefined8 **)(lVar3 + *param_1))();
          local_res20[0] = CONCAT22(local_res20[0]._2_2_,uVar1);
          FUN_1405bb7c0(param_2,local_res20,2);
          (**(code **)(**(longlong **)(lVar3 + *param_1) + 8))
                    (*(longlong **)(lVar3 + *param_1),param_2,param_3);
          sVar2 = sVar2 + -1;
          lVar3 = lVar3 + -8;
        } while (-1 < sVar2);
      }
      lVar3 = 5;
      do {
        local_res20[0] = piVar6[-1];
        FUN_1405bb7c0(param_2,local_res20,4);
        local_res20[0] = *piVar6;
        FUN_1405bb7c0(param_2,local_res20,4);
        local_res20[0] = piVar6[0x9ff];
        FUN_1405bb7c0(param_2,local_res20,4);
        local_res20[0] = piVar6[0xa00];
        FUN_1405bb7c0(param_2,local_res20,4);
        local_res20[0] = piVar6[0x13ff];
        FUN_1405bb7c0(param_2,local_res20,4);
        local_res20[0] = piVar6[0x1400];
        FUN_1405bb7c0(param_2,local_res20,4);
        piVar6 = piVar6 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      param_1 = param_1 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

