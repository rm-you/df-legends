// FUN_14018f680 @ 14018f680
// callees:
//   -> 1401745b0 FUN_1401745b0
//   -> 14018f680 FUN_14018f680


undefined8 FUN_14018f680(longlong *param_1,ushort param_2,ushort param_3,short param_4,char param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x138))();
  if ((cVar1 == '\0') || ((int)param_4 != (int)param_1[4])) {
LAB_14018f786:
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((cVar1 == '\0') || (param_1[6] == 0)) {
      if (((int)param_1[1] <= (int)(short)param_2) &&
         ((int)(short)param_2 <= *(int *)((longlong)param_1 + 0x14))) {
        if ((*(int *)((longlong)param_1 + 0xc) <= (int)(short)param_3) &&
           ((int)(short)param_3 <= (int)param_1[3])) goto LAB_14018f6ed;
      }
LAB_14018f70e:
      if (param_5 == '\0') goto LAB_14018f786;
      cVar1 = FUN_14018f680(param_1,param_2 - 1,param_3,param_4,0);
      if (cVar1 == '\0') {
        cVar1 = FUN_14018f680(param_1,param_2,param_3 + 1,param_4,0);
        if (cVar1 == '\0') {
          cVar1 = FUN_14018f680(param_1,param_2,param_3 - 1,param_4,0);
          if (cVar1 == '\0') {
            cVar1 = FUN_14018f680(param_1,param_2 + 1,param_3,param_4,0);
            if (cVar1 == '\0') goto LAB_14018f786;
          }
        }
      }
    }
    else {
      cVar1 = FUN_1401745b0(param_1,param_2,param_3,param_4);
      if (cVar1 == '\0') goto LAB_14018f70e;
    }
LAB_14018f6ed:
    uVar2 = 1;
  }
  return uVar2;
}

